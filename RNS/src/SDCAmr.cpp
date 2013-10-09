/*
 * XXX
 *
 * 
 */

#include <SDCAmr.H>
#include <MultiFab.H>
#include <ParmParse.H>
#include <StateDescriptor.H>
#include <AmrLevel.H>
#include <Interpolater.H>
#include <FabArray.H>
#include <stdio.h>

#include <iostream>
#include <sstream>

#include "RNS.H"
#include "RNS_F.H"

using namespace std;

BEGIN_EXTERN_C

#ifdef ZMQ
void *zmqctx = 0;
void *dzmq_connect();
void dzmq_send_buf(void *ptr, const char *buf, int n);

void dzmq_send_mf(MultiFab& U, int level, int wait)
{
  if (!zmqctx) zmqctx = dzmq_connect();

  for (MFIter mfi(U); mfi.isValid(); ++mfi) {
    std::ostringstream buf;
    buf << level;
    U[mfi].writeOn(buf, 0, 1);
    dzmq_send_buf(zmqctx, buf.str().c_str(), buf.str().length());
  }

  if (wait) {
    char buf[8];
    printf("===> paused\n");
    fgets(buf, 8, stdin);
  }
}
#else
void dzmq_send_mf(MultiFab& U, int wait) { }
#endif


/*
 * Spatial interpolation is done by setting midData of the fine and
 * coarse RNS levels and subsequently using FillPatchIterator to do
 * the interpolation for us.
 */
void mlsdc_amr_interpolate(void *F, void *G, sdc_state *state, void *ctxF, void *ctxG)
{
  MultiFab& UF = *((MultiFab*) F);
  MultiFab& UG = *((MultiFab*) G);
  RNS& levelF  = *((RNS*) ctxF);
  RNS& levelG  = *((RNS*) ctxG);

  const DescriptorList& dl = levelF.get_desc_lst();
  int ncomp = dl[0].nComp();

  const IntVect fine_ratio = levelG.fineRatio();
  const Array<BCRec>& bcs  = dl[0].getBCs();

  levelG.fill_boundary(UG, state->t, RNS::use_FillBoundary);

  // now interpolate to fine
  for (MFIter mfi(UF); mfi.isValid(); ++mfi) {
    Interpolater& map = *dl[0].interp();

    Array<BCRec> bcr(ncomp);
    FArrayBox    finefab(UF[mfi].box(), ncomp);
    FArrayBox    crsefab(map.CoarseBox(finefab.box(),fine_ratio), ncomp);

    // fill crsefab via copy on intersect
    for (MFIter mfiC(UG); mfiC.isValid(); ++mfiC) crsefab.copy(UG[mfiC]);

    BoxLib::setBC(finefab.box(), levelF.Domain(), 0, 0, ncomp, bcs, bcr);

    Geometry fine_geom(finefab.box());
    map.interp(crsefab, 0, finefab, 0, ncomp, finefab.box(), fine_ratio,
               levelG.Geom(), fine_geom, bcr, 0, 0);

    UF[mfi].copy(finefab);
  }

  levelF.fill_boundary(UF, state->t, RNS::use_FillBoundary);
  // levelF.fill_boundary(UF, state->t, RNS::use_FillCoarsePatch);

  // cout << "INTERPOLATING: " << UF.max(0) << " " << UF.min(0) << endl;
  // dzmq_send_mf(UF, levelF.Level(), 1);
}


/*
 * Spatial restriction is done by calling the coarse RNS level's
 * avgDown routine.
 */
void mlsdc_amr_restrict(void *F, void *G, sdc_state *state, void *ctxF, void *ctxG)
{
  MultiFab& UF = *((MultiFab*) F);
  MultiFab& UG = *((MultiFab*) G);
  RNS& levelF  = *((RNS*) ctxF);
  RNS& levelG  = *((RNS*) ctxG);

  // XXX: will this do the right thing for FAS corrections?
  if (state->kind == SDC_SOLUTION) levelF.fill_boundary(UF, state->t, RNS::use_FillBoundary);
  levelG.avgDown(UG, UF);
  if (state->kind == SDC_SOLUTION) levelG.fill_boundary(UG, state->t, RNS::use_FillBoundary);

  // cout << "RESTRICTING" << endl;
  // dzmq_send_mf(UG, levelG.Level(), 1);
}

END_EXTERN_C


void SDCAmr::timeStep (int  level,
                         Real time,
                         int  iteration,
                         int  niter,
                         Real stop_time)
{
  if (level != 0) {
    cout << "NOT ON LEVEL 0" << endl;
  }

  // set intial conditions...
  for (int lev=0; lev<=finest_level; lev++) {
    AmrLevel& amrlevel = getLevel(lev);
    const DescriptorList& dl = amrlevel.get_desc_lst();
    for (int st=0; st<dl.size(); st++) {
      MultiFab& Unew = amrlevel.get_new_data(st);
      MultiFab& U0   = *((MultiFab*) mg.sweepers[lev]->nset->Q[0]);
      U0.copy(Unew);
      RNS& levelF = dynamic_cast<RNS&>(amrlevel);
      levelF.fill_boundary(U0, time, (lev > 0) ? RNS::use_FillCoarsePatch : RNS::use_FillBoundary);
    }
  }

  // spread and iterate
  sdc_mg_spread(&mg, time, dtLevel(0), 0);
  for (int k=0; k<max_iters; k++) {
    if (verbose > 0 && ParallelDescriptor::IOProcessor())
      std::cout << "MLSDC iteration: " << k << std::endl;
    sdc_mg_sweep(&mg, time, dt_level[0], 0);
  }

  // grab final solution
  for (int lev=0; lev<=finest_level; lev++) {
    AmrLevel& amrlevel = getLevel(lev);
    const DescriptorList& dl = amrlevel.get_desc_lst();
    for (int st=0; st<dl.size(); st++) {
      int nnodes = mg.sweepers[lev]->nset->nnodes;
      MultiFab& Unew = amrlevel.get_new_data(st);
      MultiFab& Uend = *((MultiFab*)mg.sweepers[lev]->nset->Q[nnodes-1]);
      Unew.copy(Uend);

      // cout << "Uend " << lev << endl;
      // dzmq_send_mf(Uend, 1);
    }
  }

  level_steps[level]++;
  level_count[level]++;

  if (verbose > 0 && ParallelDescriptor::IOProcessor()){
    std::cout << "Advanced "
              << amr_level[level].countCells()
              << " cells at level "
              << level
              << std::endl;
  }


  if (writePlotNow()) writePlotFile();
}

sdc_sweeper* rns_sdc_build_level(int lev)
{
  int nnodes0 = 3;
  int trat    = 2;
  int nnodes  = 1 + (nnodes0 - 1) * ((int) pow(trat, lev));

  sdc_nodes* nodes = sdc_nodes_create(nnodes, SDC_GAUSS_LOBATTO);
  sdc_imex*  imex  = sdc_imex_create(nodes, sdc_feval, NULL, NULL);

  sdc_nodes_destroy(nodes);
  sdc_imex_setup(imex, NULL, NULL);

  return (sdc_sweeper*) imex;
}

void SDCAmr::rebuild_mlsdc()
{
  // reset previous and clear sweepers etc
  sdc_mg_reset(&mg);
  for (unsigned int lev=0; lev<=max_level; lev++) {
    if (sweepers[lev] != NULL) {
      sweepers[lev]->destroy(sweepers[lev]);
      delete (mf_encap*) encaps[lev]->ctx;
      delete encaps[lev];
      sweepers[lev] = NULL;
    }
  }

  // rebuild
  for (int lev=0; lev<=finest_level; lev++) {
    encaps[lev]   = build_encap(lev);
    sweepers[lev] = rns_sdc_build_level(lev);
    sweepers[lev]->nset->ctx   = &getLevel(lev);
    sweepers[lev]->nset->encap = encaps[lev];
    sdc_mg_add_level(&mg, sweepers[lev], mlsdc_amr_interpolate, mlsdc_amr_restrict);
  }
  sdc_mg_setup(&mg);
  sdc_mg_allocate(&mg);

  if (verbose > 0 && ParallelDescriptor::IOProcessor())
    std::cout << "Rebuilt MLSDC: " << mg.nlevels << std::endl;
}

void SDCAmr::regrid (int  lbase,
		     Real time,
		     bool initial)
{
  Amr::regrid(lbase, time, initial);
  rebuild_mlsdc();
}

SDCAmr::SDCAmr ()
{
  ParmParse ppsdc("mlsdc");
  if (!ppsdc.query("max_iters", max_iters)) max_iters = 22;
  if (!ppsdc.query("max_trefs", max_trefs)) max_trefs = 3;

  sdc_log_set_stdout(SDC_LOG_DEBUG);
  sdc_mg_build(&mg, max_level+1);

  sweepers.resize(max_level+1);
  encaps.resize(max_level+1);

  for (unsigned int i=0; i<=max_level; i++)
    sweepers[i] = NULL;
}


SDCAmr::~SDCAmr()
{
  sdc_mg_destroy(&mg);
}



