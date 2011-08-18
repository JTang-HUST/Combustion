/*  -*- C -*-  */
/*
 * ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
 *
 *                                -*- author -*-
 *                             -*- organization -*-
 *                    (C) -*- years -*-  All Rights Reserved
 *
 * <LicenseText>
 *
 * ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
 */

#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>


#if defined(BL_FORT_USE_UPPERCASE)
#define CKINDX CKINDX
#define CKINIT CKINIT
#define CKXNUM CKXNUM
#define CKSYME CKSYME
#define CKSYMS CKSYMS
#define CKRP CKRP
#define CKPX CKPX
#define CKPY CKPY
#define CKPC CKPC
#define CKRHOX CKRHOX
#define CKRHOY CKRHOY
#define CKRHOC CKRHOC
#define CKWT CKWT
#define CKMMWY CKMMWY
#define CKMMWX CKMMWX
#define CKMMWC CKMMWC
#define CKYTX CKYTX
#define CKYTCP CKYTCP
#define CKYTCR CKYTCR
#define CKXTY CKXTY
#define CKXTCP CKXTCP
#define CKXTCR CKXTCR
#define CKCTX CKCTX
#define CKCTY CKCTY
#define CKCPOR CKCPOR
#define CKHORT CKHORT
#define CKSOR CKSOR
#define CKCVML CKCVML
#define CKCPML CKCPML
#define CKUML CKUML
#define CKHML CKHML
#define CKGML CKGML
#define CKAML CKAML
#define CKSML CKSML
#define CKCVMS CKCVMS
#define CKCPMS CKCPMS
#define CKUMS CKUMS
#define CKHMS CKHMS
#define CKGMS CKGMS
#define CKAMS CKAMS
#define CKSMS CKSMS
#define CKCPBL CKCPBL
#define CKCPBS CKCPBS
#define CKCVBL CKCVBL
#define CKCVBS CKCVBS
#define CKHBML CKHBML
#define CKHBMS CKHBMS
#define CKUBML CKUBML
#define CKUBMS CKUBMS
#define CKSBML CKSBML
#define CKSBMS CKSBMS
#define CKGBML CKGBML
#define CKGBMS CKGBMS
#define CKABML CKABML
#define CKABMS CKABMS
#define CKWC CKWC
#define CKWYP CKWYP
#define CKWXP CKWXP
#define CKWYR CKWYR
#define CKWXR CKWXR
#define CKQC CKQC
#define CKKFKR CKKFKR
#define CKQYP CKQYP
#define CKQXP CKQXP
#define CKQYR CKQYR
#define CKQXR CKQXR
#define CKNU CKNU
#define CKNCF CKNCF
#define CKABE CKABE
#define CKEQC CKEQC
#define CKEQYP CKEQYP
#define CKEQXP CKEQXP
#define CKEQYR CKEQYR
#define CKEQXR CKEQXR
#elif defined(BL_FORT_USE_LOWERCASE)
#define CKINDX ckindx
#define CKINIT ckinit
#define CKXNUM ckxnum
#define CKSYME cksyme
#define CKSYMS cksyms
#define CKRP ckrp
#define CKPX ckpx
#define CKPY ckpy
#define CKPC ckpc
#define CKRHOX ckrhox
#define CKRHOY ckrhoy
#define CKRHOC ckrhoc
#define CKWT ckwt
#define CKMMWY ckmmwy
#define CKMMWX ckmmwx
#define CKMMWC ckmmwc
#define CKYTX ckytx
#define CKYTCP ckytcp
#define CKYTCR ckytcr
#define CKXTY ckxty
#define CKXTCP ckxtcp
#define CKXTCR ckxtcr
#define CKCTX ckctx
#define CKCTY ckcty
#define CKCPOR ckcpor
#define CKHORT ckhort
#define CKSOR cksor
#define CKCVML ckcvml
#define CKCPML ckcpml
#define CKUML ckuml
#define CKHML ckhml
#define CKGML ckgml
#define CKAML ckaml
#define CKSML cksml
#define CKCVMS ckcvms
#define CKCPMS ckcpms
#define CKUMS ckums
#define CKHMS ckhms
#define CKGMS ckgms
#define CKAMS ckams
#define CKSMS cksms
#define CKCPBL ckcpbl
#define CKCPBS ckcpbs
#define CKCVBL ckcvbl
#define CKCVBS ckcvbs
#define CKHBML ckhbml
#define CKHBMS ckhbms
#define CKUBML ckubml
#define CKUBMS ckubms
#define CKSBML cksbml
#define CKSBMS cksbms
#define CKGBML ckgbml
#define CKGBMS ckgbms
#define CKABML ckabml
#define CKABMS ckabms
#define CKWC ckwc
#define CKWYP ckwyp
#define CKWXP ckwxp
#define CKWYR ckwyr
#define CKWXR ckwxr
#define CKQC ckqc
#define CKKFKR ckkfkr
#define CKQYP ckqyp
#define CKQXP ckqxp
#define CKQYR ckqyr
#define CKQXR ckqxr
#define CKNU cknu
#define CKNCF ckncf
#define CKABE ckabe
#define CKEQC ckeqc
#define CKEQYP ckeqyp
#define CKEQXP ckeqxp
#define CKEQYR ckeqyr
#define CKEQXR ckeqxr
#elif defined(BL_FORT_USE_UNDERSCORE)
#define CKINDX ckindx_
#define CKINIT ckinit_
#define CKXNUM ckxnum_
#define CKSYME cksyme_
#define CKSYMS cksyms_
#define CKRP ckrp_
#define CKPX ckpx_
#define CKPY ckpy_
#define CKPC ckpc_
#define CKRHOX ckrhox_
#define CKRHOY ckrhoy_
#define CKRHOC ckrhoc_
#define CKWT ckwt_
#define CKMMWY ckmmwy_
#define CKMMWX ckmmwx_
#define CKMMWC ckmmwc_
#define CKYTX ckytx_
#define CKYTCP ckytcp_
#define CKYTCR ckytcr_
#define CKXTY ckxty_
#define CKXTCP ckxtcp_
#define CKXTCR ckxtcr_
#define CKCTX ckctx_
#define CKCTY ckcty_
#define CKCPOR ckcpor_
#define CKHORT ckhort_
#define CKSOR cksor_
#define CKCVML ckcvml_
#define CKCPML ckcpml_
#define CKUML ckuml_
#define CKHML ckhml_
#define CKGML ckgml_
#define CKAML ckaml_
#define CKSML cksml_
#define CKCVMS ckcvms_
#define CKCPMS ckcpms_
#define CKUMS ckums_
#define CKHMS ckhms_
#define CKGMS ckgms_
#define CKAMS ckams_
#define CKSMS cksms_
#define CKCPBL ckcpbl_
#define CKCPBS ckcpbs_
#define CKCVBL ckcvbl_
#define CKCVBS ckcvbs_
#define CKHBML ckhbml_
#define CKHBMS ckhbms_
#define CKUBML ckubml_
#define CKUBMS ckubms_
#define CKSBML cksbml_
#define CKSBMS cksbms_
#define CKGBML ckgbml_
#define CKGBMS ckgbms_
#define CKABML ckabml_
#define CKABMS ckabms_
#define CKWC ckwc_
#define CKWYP ckwyp_
#define CKWXP ckwxp_
#define CKWYR ckwyr_
#define CKWXR ckwxr_
#define CKQC ckqc_
#define CKKFKR ckkfkr_
#define CKQYP ckqyp_
#define CKQXP ckqxp_
#define CKQYR ckqyr_
#define CKQXR ckqxr_
#define CKNU cknu_
#define CKNCF ckncf_
#define CKABE ckabe_
#define CKEQC ckeqc_
#define CKEQYP ckeqyp_
#define CKEQXP ckeqxp_
#define CKEQYR ckeqyr_
#define CKEQXR ckeqxr_
#endif

/*function declarations */
extern "C" {
void molecularWeight(double * wt);
void gibbs(double * species, double * tc);
void helmholtz(double * species, double * tc);
void speciesInternalEnergy(double * species, double * tc);
void speciesEnthalpy(double * species, double * tc);
void speciesEntropy(double * species, double * tc);
void cp_R(double * species, double * tc);
void cv_R(double * species, double * tc);
void equilibriumConstants(double * kc, double * g_RT, double T);
void productionRate(double * wdot, double * sc, double T);
void progressRate(double * qdot, double * speciesConc, double T);
void progressRateFR(double * q_f, double * q_r, double * speciesConc, double T);
void CKINDX(int * iwrk, double *rwrk, int * mm, int * kk, int * ii, int * nfit );
void CKXNUM(char * line, int * nexp, int * lout, int * nval, double * rval, int * kerr, int lenline);
void CKSNUM(char * line, int * nexp, int * lout, char * kray, int * nn, int * knum, int * nval, double * rval, int * kerr, int lenline, int lenkray);
void CKSYME(int * kname, int * lenkname);
void CKSYMS(int * kname, int * lenkname);
void CKRP(int * ickwrk, double * rckwrk, double * ru, double * ruc, double * pa);
void CKPX(double * rho, double * T, double * x, int * iwrk, double *rwrk, double * P);
void CKPY(double * rho, double * T, double * y, int * iwrk, double *rwrk, double * P);
void CKPC(double * rho, double * T, double * c, int * iwrk, double *rwrk, double * P);
void CKRHOX(double * P, double * T, double * x, int * iwrk, double *rwrk, double * rho);
void CKRHOY(double * P, double * T, double * y, int * iwrk, double *rwrk, double * rho);
void CKRHOC(double * P, double * T, double * c, int * iwrk, double *rwrk, double * rho);
void CKWT(int * iwrk, double *rwrk, double * wt);
void CKMMWY(double * y, int * iwrk, double * rwrk, double * wtm);
void CKMMWX(double * x, int * iwrk, double * rwrk, double * wtm);
void CKMMWC(double * c, int * iwrk, double * rwrk, double * wtm);
void CKYTX(double * y, int * iwrk, double * rwrk, double * x);
void CKYTCP(double * P, double * T, double * y, int * iwrk, double * rwrk, double * c);
void CKYTCR(double * rho, double * T, double * y, int * iwrk, double * rwrk, double * c);
void CKXTY(double * x, int * iwrk, double * rwrk, double * y);
void CKXTCP(double * P, double * T, double * x, int * iwrk, double * rwrk, double * c);
void CKXTCR(double * rho, double * T, double * x, int * iwrk, double * rwrk, double * c);
void CKCTX(double * c, int * iwrk, double * rwrk, double * x);
void CKCTY(double * c, int * iwrk, double * rwrk, double * y);
void CKCPOR(double * T, int * iwrk, double * rwrk, double * cpor);
void CKHORT(double * T, int * iwrk, double * rwrk, double * hort);
void CKSOR(double * T, int * iwrk, double * rwrk, double * sor);
void CKCVML(double * T, int * iwrk, double * rwrk, double * cvml);
void CKCPML(double * T, int * iwrk, double * rwrk, double * cvml);
void CKUML(double * T, int * iwrk, double * rwrk, double * uml);
void CKHML(double * T, int * iwrk, double * rwrk, double * uml);
void CKGML(double * T, int * iwrk, double * rwrk, double * gml);
void CKAML(double * T, int * iwrk, double * rwrk, double * aml);
void CKSML(double * T, int * iwrk, double * rwrk, double * sml);
void CKCVMS(double * T, int * iwrk, double * rwrk, double * cvms);
void CKCPMS(double * T, int * iwrk, double * rwrk, double * cvms);
void CKUMS(double * T, int * iwrk, double * rwrk, double * ums);
void CKHMS(double * T, int * iwrk, double * rwrk, double * ums);
void CKGMS(double * T, int * iwrk, double * rwrk, double * gms);
void CKAMS(double * T, int * iwrk, double * rwrk, double * ams);
void CKSMS(double * T, int * iwrk, double * rwrk, double * sms);
void CKCPBL(double * T, double * x, int * iwrk, double * rwrk, double * cpbl);
void CKCPBS(double * T, double * y, int * iwrk, double * rwrk, double * cpbs);
void CKCVBL(double * T, double * x, int * iwrk, double * rwrk, double * cpbl);
void CKCVBS(double * T, double * y, int * iwrk, double * rwrk, double * cpbs);
void CKHBML(double * T, double * x, int * iwrk, double * rwrk, double * hbml);
void CKHBMS(double * T, double * y, int * iwrk, double * rwrk, double * hbms);
void CKUBML(double * T, double * x, int * iwrk, double * rwrk, double * ubml);
void CKUBMS(double * T, double * y, int * iwrk, double * rwrk, double * ubms);
void CKSBML(double * P, double * T, double * x, int * iwrk, double * rwrk, double * sbml);
void CKSBMS(double * P, double * T, double * y, int * iwrk, double * rwrk, double * sbms);
void CKGBML(double * P, double * T, double * x, int * iwrk, double * rwrk, double * gbml);
void CKGBMS(double * P, double * T, double * y, int * iwrk, double * rwrk, double * gbms);
void CKABML(double * P, double * T, double * x, int * iwrk, double * rwrk, double * abml);
void CKABMS(double * P, double * T, double * y, int * iwrk, double * rwrk, double * abms);
void CKWC(double * T, double * C, int * iwrk, double *rwrk, double * wdot);
void CKWYP(double * P, double * T, double * y, int * iwrk, double *rwrk, double * wdot);
void CKWXP(double * P, double * T, double * x, int * iwrk, double *rwrk, double * wdot);
void CKWYR(double * rho, double * T, double * y, int * iwrk, double *rwrk, double * wdot);
void CKWXR(double * rho, double * T, double * x, int * iwrk, double *rwrk, double * wdot);
void CKQC(double * T, double * C, int * iwrk, double *rwrk, double * qdot);
void CKKFKR(double * P, double * T, double * x, int * iwrk, double *rwrk, double * q_f, double * q_r);
void CKQYP(double * P, double * T, double * y, int * iwrk, double *rwrk, double * qdot);
void CKQXP(double * P, double * T, double * x, int * iwrk, double *rwrk, double * qdot);
void CKQYR(double * rho, double * T, double * y, int * iwrk, double *rwrk, double * qdot);
void CKQXR(double * rho, double * T, double * x, int * iwrk, double *rwrk, double * qdot);
void CKNU(int * kdim, int * iwrk, double *rwrk, int * nuki);
void CKNCF(int * mdim, int * iwrk, double *rwrk, int * ncf);
void CKABE(int * iwrk, double *rwrk, double * a, double * b, double * e );
void CKEQC(double * T, double * C , int * iwrk, double *rwrk, double * eqcon );
void CKEQYP(double * P, double * T, double * y, int * iwrk, double *rwrk, double * eqcon);
void CKEQXP(double * P, double * T, double * x, int * iwrk, double *rwrk, double * eqcon);
void CKEQYR(double * rho, double * T, double * y, int * iwrk, double *rwrk, double * eqcon);
void CKEQXR(double * rho, double * T, double * x, int * iwrk, double *rwrk, double * eqcon);
int  feeytt_(double * e, double * y, int * iwrk, double *rwrk, double * t);
void fephity_(double * phi, int * iwrk, double *rwrk, double * y);
void feytphi_(double * y, int * iwrk, double *rwrk, double * phi);
void fectyr_(double * c, double * rho, int * iwrk, double *rwrk, double * y);
void fecvrhs_(double * time, double * phi, double * phidot, double * rckwrk, int * ickwrk);
int fecvdim_();
void fezndrhs_(double * time, double * z, double * zdot, double * rckwrk, int * ickwrk);
int feznddim_();
char* femechfile_();
char* fesymname_(int sn);
int fesymnum_(const char* s1);
}


/*A few mechanism parameters */
void CKINDX(int * iwrk, double * rwrk, int * mm, int * kk, int * ii, int * nfit)
{
    *mm = 5;
    *kk = 39;
    *ii = 175;
    *nfit = -1; /*Why do you need this anyway ?  */
}


/*Dummy ckinit */
void fginit_(int * leniwk, int * lenrwk, int * lencwk, int * linc, int * lout, int * ickwrk, double * rckwrk, char * cckwrk )
{
    if ((*lout) != 0) {
        printf(" ***       Congratulations       *** \n");
        printf(" * You are using the Fuego Library * \n");
        printf(" *****    Say NO to cklib.f    ***** \n");
    }
}


/* ckxnum... for parsing strings  */
void CKXNUM(char * line, int * nexp, int * lout, int * nval, double * rval, int * kerr, int lenline )
{
    int n,i; /*Loop Counters */
    char *p; /*String Tokens */
    char cstr[1000];
    /* Strip Comments  */
    for (i=0; i<lenline; ++i) {
        if (line[i]=='!') {
            cstr[i] = '\0';
            break;
        }
        cstr[i] = line[i];
    }

    p = strtok(cstr," ");
    if (!p) {
        *nval = 0;
        *kerr = 1;
        return;
    }
    for (n=0; n<*nexp; ++n) {
        rval[n] = atof(p);
        p = strtok(NULL, " ");
        if (!p) break;
    }
    *nval = n+1;
    if (*nval < *nexp) *kerr = 1;
    return;
}


/* cksnum... for parsing strings  */
void CKSNUM(char * line, int * nexp, int * lout, char * kray, int * nn, int * knum, int * nval, double * rval, int * kerr, int lenline, int lenkray)
{
    /*Not done yet ... */
}


/* Returns the char strings of element names */
void CKSYME(int * kname, int * plenkname )
{
    int i; /*Loop Counter */
    int lenkname = *plenkname;
    /*clear kname */
    for (i=0; i<lenkname*5; i++) {
        kname[i] = ' ';
    }

    /* N  */
    kname[ 0*lenkname + 0 ] = 'N';
    kname[ 0*lenkname + 1 ] = ' ';

    /* AR  */
    kname[ 1*lenkname + 0 ] = 'A';
    kname[ 1*lenkname + 1 ] = 'R';
    kname[ 1*lenkname + 2 ] = ' ';

    /* H  */
    kname[ 2*lenkname + 0 ] = 'H';
    kname[ 2*lenkname + 1 ] = ' ';

    /* O  */
    kname[ 3*lenkname + 0 ] = 'O';
    kname[ 3*lenkname + 1 ] = ' ';

    /* C  */
    kname[ 4*lenkname + 0 ] = 'C';
    kname[ 4*lenkname + 1 ] = ' ';

}


/* Returns the char strings of species names */
void CKSYMS(int * kname, int * plenkname )
{
    int i; /*Loop Counter */
    int lenkname = *plenkname;
    /*clear kname */
    for (i=0; i<lenkname*39; i++) {
        kname[i] = ' ';
    }

    /* N2  */
    kname[ 0*lenkname + 0 ] = 'N';
    kname[ 0*lenkname + 1 ] = '2';
    kname[ 0*lenkname + 2 ] = ' ';

    /* AR  */
    kname[ 1*lenkname + 0 ] = 'A';
    kname[ 1*lenkname + 1 ] = 'R';
    kname[ 1*lenkname + 2 ] = ' ';

    /* H  */
    kname[ 2*lenkname + 0 ] = 'H';
    kname[ 2*lenkname + 1 ] = ' ';

    /* O2  */
    kname[ 3*lenkname + 0 ] = 'O';
    kname[ 3*lenkname + 1 ] = '2';
    kname[ 3*lenkname + 2 ] = ' ';

    /* OH  */
    kname[ 4*lenkname + 0 ] = 'O';
    kname[ 4*lenkname + 1 ] = 'H';
    kname[ 4*lenkname + 2 ] = ' ';

    /* O  */
    kname[ 5*lenkname + 0 ] = 'O';
    kname[ 5*lenkname + 1 ] = ' ';

    /* H2  */
    kname[ 6*lenkname + 0 ] = 'H';
    kname[ 6*lenkname + 1 ] = '2';
    kname[ 6*lenkname + 2 ] = ' ';

    /* H2O  */
    kname[ 7*lenkname + 0 ] = 'H';
    kname[ 7*lenkname + 1 ] = '2';
    kname[ 7*lenkname + 2 ] = 'O';
    kname[ 7*lenkname + 3 ] = ' ';

    /* HO2  */
    kname[ 8*lenkname + 0 ] = 'H';
    kname[ 8*lenkname + 1 ] = 'O';
    kname[ 8*lenkname + 2 ] = '2';
    kname[ 8*lenkname + 3 ] = ' ';

    /* H2O2  */
    kname[ 9*lenkname + 0 ] = 'H';
    kname[ 9*lenkname + 1 ] = '2';
    kname[ 9*lenkname + 2 ] = 'O';
    kname[ 9*lenkname + 3 ] = '2';
    kname[ 9*lenkname + 4 ] = ' ';

    /* CO  */
    kname[ 10*lenkname + 0 ] = 'C';
    kname[ 10*lenkname + 1 ] = 'O';
    kname[ 10*lenkname + 2 ] = ' ';

    /* CO2  */
    kname[ 11*lenkname + 0 ] = 'C';
    kname[ 11*lenkname + 1 ] = 'O';
    kname[ 11*lenkname + 2 ] = '2';
    kname[ 11*lenkname + 3 ] = ' ';

    /* HCO  */
    kname[ 12*lenkname + 0 ] = 'H';
    kname[ 12*lenkname + 1 ] = 'C';
    kname[ 12*lenkname + 2 ] = 'O';
    kname[ 12*lenkname + 3 ] = ' ';

    /* CH2O  */
    kname[ 13*lenkname + 0 ] = 'C';
    kname[ 13*lenkname + 1 ] = 'H';
    kname[ 13*lenkname + 2 ] = '2';
    kname[ 13*lenkname + 3 ] = 'O';
    kname[ 13*lenkname + 4 ] = ' ';

    /* CH4  */
    kname[ 14*lenkname + 0 ] = 'C';
    kname[ 14*lenkname + 1 ] = 'H';
    kname[ 14*lenkname + 2 ] = '4';
    kname[ 14*lenkname + 3 ] = ' ';

    /* CH3  */
    kname[ 15*lenkname + 0 ] = 'C';
    kname[ 15*lenkname + 1 ] = 'H';
    kname[ 15*lenkname + 2 ] = '3';
    kname[ 15*lenkname + 3 ] = ' ';

    /* T-CH2  */
    kname[ 16*lenkname + 0 ] = 'T';
    kname[ 16*lenkname + 1 ] = '-';
    kname[ 16*lenkname + 2 ] = 'C';
    kname[ 16*lenkname + 3 ] = 'H';
    kname[ 16*lenkname + 4 ] = '2';
    kname[ 16*lenkname + 5 ] = ' ';

    /* S-CH2  */
    kname[ 17*lenkname + 0 ] = 'S';
    kname[ 17*lenkname + 1 ] = '-';
    kname[ 17*lenkname + 2 ] = 'C';
    kname[ 17*lenkname + 3 ] = 'H';
    kname[ 17*lenkname + 4 ] = '2';
    kname[ 17*lenkname + 5 ] = ' ';

    /* C2H4  */
    kname[ 18*lenkname + 0 ] = 'C';
    kname[ 18*lenkname + 1 ] = '2';
    kname[ 18*lenkname + 2 ] = 'H';
    kname[ 18*lenkname + 3 ] = '4';
    kname[ 18*lenkname + 4 ] = ' ';

    /* CH3O  */
    kname[ 19*lenkname + 0 ] = 'C';
    kname[ 19*lenkname + 1 ] = 'H';
    kname[ 19*lenkname + 2 ] = '3';
    kname[ 19*lenkname + 3 ] = 'O';
    kname[ 19*lenkname + 4 ] = ' ';

    /* C2H5  */
    kname[ 20*lenkname + 0 ] = 'C';
    kname[ 20*lenkname + 1 ] = '2';
    kname[ 20*lenkname + 2 ] = 'H';
    kname[ 20*lenkname + 3 ] = '5';
    kname[ 20*lenkname + 4 ] = ' ';

    /* C2H6  */
    kname[ 21*lenkname + 0 ] = 'C';
    kname[ 21*lenkname + 1 ] = '2';
    kname[ 21*lenkname + 2 ] = 'H';
    kname[ 21*lenkname + 3 ] = '6';
    kname[ 21*lenkname + 4 ] = ' ';

    /* CH  */
    kname[ 22*lenkname + 0 ] = 'C';
    kname[ 22*lenkname + 1 ] = 'H';
    kname[ 22*lenkname + 2 ] = ' ';

    /* C2H2  */
    kname[ 23*lenkname + 0 ] = 'C';
    kname[ 23*lenkname + 1 ] = '2';
    kname[ 23*lenkname + 2 ] = 'H';
    kname[ 23*lenkname + 3 ] = '2';
    kname[ 23*lenkname + 4 ] = ' ';

    /* C2H3  */
    kname[ 24*lenkname + 0 ] = 'C';
    kname[ 24*lenkname + 1 ] = '2';
    kname[ 24*lenkname + 2 ] = 'H';
    kname[ 24*lenkname + 3 ] = '3';
    kname[ 24*lenkname + 4 ] = ' ';

    /* CH2CHO  */
    kname[ 25*lenkname + 0 ] = 'C';
    kname[ 25*lenkname + 1 ] = 'H';
    kname[ 25*lenkname + 2 ] = '2';
    kname[ 25*lenkname + 3 ] = 'C';
    kname[ 25*lenkname + 4 ] = 'H';
    kname[ 25*lenkname + 5 ] = 'O';
    kname[ 25*lenkname + 6 ] = ' ';

    /* C2H4O  */
    kname[ 26*lenkname + 0 ] = 'C';
    kname[ 26*lenkname + 1 ] = '2';
    kname[ 26*lenkname + 2 ] = 'H';
    kname[ 26*lenkname + 3 ] = '4';
    kname[ 26*lenkname + 4 ] = 'O';
    kname[ 26*lenkname + 5 ] = ' ';

    /* CH2CO  */
    kname[ 27*lenkname + 0 ] = 'C';
    kname[ 27*lenkname + 1 ] = 'H';
    kname[ 27*lenkname + 2 ] = '2';
    kname[ 27*lenkname + 3 ] = 'C';
    kname[ 27*lenkname + 4 ] = 'O';
    kname[ 27*lenkname + 5 ] = ' ';

    /* HCCO  */
    kname[ 28*lenkname + 0 ] = 'H';
    kname[ 28*lenkname + 1 ] = 'C';
    kname[ 28*lenkname + 2 ] = 'C';
    kname[ 28*lenkname + 3 ] = 'O';
    kname[ 28*lenkname + 4 ] = ' ';

    /* C2H  */
    kname[ 29*lenkname + 0 ] = 'C';
    kname[ 29*lenkname + 1 ] = '2';
    kname[ 29*lenkname + 2 ] = 'H';
    kname[ 29*lenkname + 3 ] = ' ';

    /* CH2OH  */
    kname[ 30*lenkname + 0 ] = 'C';
    kname[ 30*lenkname + 1 ] = 'H';
    kname[ 30*lenkname + 2 ] = '2';
    kname[ 30*lenkname + 3 ] = 'O';
    kname[ 30*lenkname + 4 ] = 'H';
    kname[ 30*lenkname + 5 ] = ' ';

    /* CH3OH  */
    kname[ 31*lenkname + 0 ] = 'C';
    kname[ 31*lenkname + 1 ] = 'H';
    kname[ 31*lenkname + 2 ] = '3';
    kname[ 31*lenkname + 3 ] = 'O';
    kname[ 31*lenkname + 4 ] = 'H';
    kname[ 31*lenkname + 5 ] = ' ';

    /* C3H4  */
    kname[ 32*lenkname + 0 ] = 'C';
    kname[ 32*lenkname + 1 ] = '3';
    kname[ 32*lenkname + 2 ] = 'H';
    kname[ 32*lenkname + 3 ] = '4';
    kname[ 32*lenkname + 4 ] = ' ';

    /* C3H3  */
    kname[ 33*lenkname + 0 ] = 'C';
    kname[ 33*lenkname + 1 ] = '3';
    kname[ 33*lenkname + 2 ] = 'H';
    kname[ 33*lenkname + 3 ] = '3';
    kname[ 33*lenkname + 4 ] = ' ';

    /* C3H5  */
    kname[ 34*lenkname + 0 ] = 'C';
    kname[ 34*lenkname + 1 ] = '3';
    kname[ 34*lenkname + 2 ] = 'H';
    kname[ 34*lenkname + 3 ] = '5';
    kname[ 34*lenkname + 4 ] = ' ';

    /* C3H6  */
    kname[ 35*lenkname + 0 ] = 'C';
    kname[ 35*lenkname + 1 ] = '3';
    kname[ 35*lenkname + 2 ] = 'H';
    kname[ 35*lenkname + 3 ] = '6';
    kname[ 35*lenkname + 4 ] = ' ';

    /* C3H8  */
    kname[ 36*lenkname + 0 ] = 'C';
    kname[ 36*lenkname + 1 ] = '3';
    kname[ 36*lenkname + 2 ] = 'H';
    kname[ 36*lenkname + 3 ] = '8';
    kname[ 36*lenkname + 4 ] = ' ';

    /* I-C3H7  */
    kname[ 37*lenkname + 0 ] = 'I';
    kname[ 37*lenkname + 1 ] = '-';
    kname[ 37*lenkname + 2 ] = 'C';
    kname[ 37*lenkname + 3 ] = '3';
    kname[ 37*lenkname + 4 ] = 'H';
    kname[ 37*lenkname + 5 ] = '7';
    kname[ 37*lenkname + 6 ] = ' ';

    /* N-C3H7  */
    kname[ 38*lenkname + 0 ] = 'N';
    kname[ 38*lenkname + 1 ] = '-';
    kname[ 38*lenkname + 2 ] = 'C';
    kname[ 38*lenkname + 3 ] = '3';
    kname[ 38*lenkname + 4 ] = 'H';
    kname[ 38*lenkname + 5 ] = '7';
    kname[ 38*lenkname + 6 ] = ' ';

}


/* Returns R, Rc, Patm */
void CKRP(int * ickwrk, double * rckwrk, double * ru, double * ruc, double * pa)
{
     *ru  = 8.31451e+07; 
     *ruc = 1.98721558317399615845; 
     *pa  = 1.01325e+06; 
}


/*Compute P = rhoRT/W(x) */
void CKPX(double * rho, double * T, double * x, int * iwrk, double * rwrk, double * P)
{
    double XW = 0;/* To hold mean molecular wt */
    XW += x[0]*28.013400; /*N2 */
    XW += x[1]*39.948000; /*AR */
    XW += x[2]*1.007970; /*H */
    XW += x[3]*31.998800; /*O2 */
    XW += x[4]*17.007370; /*OH */
    XW += x[5]*15.999400; /*O */
    XW += x[6]*2.015940; /*H2 */
    XW += x[7]*18.015340; /*H2O */
    XW += x[8]*33.006770; /*HO2 */
    XW += x[9]*34.014740; /*H2O2 */
    XW += x[10]*28.010550; /*CO */
    XW += x[11]*44.009950; /*CO2 */
    XW += x[12]*29.018520; /*HCO */
    XW += x[13]*30.026490; /*CH2O */
    XW += x[14]*16.043030; /*CH4 */
    XW += x[15]*15.035060; /*CH3 */
    XW += x[16]*14.027090; /*T-CH2 */
    XW += x[17]*14.027090; /*S-CH2 */
    XW += x[18]*28.054180; /*C2H4 */
    XW += x[19]*31.034460; /*CH3O */
    XW += x[20]*29.062150; /*C2H5 */
    XW += x[21]*30.070120; /*C2H6 */
    XW += x[22]*13.019120; /*CH */
    XW += x[23]*26.038240; /*C2H2 */
    XW += x[24]*27.046210; /*C2H3 */
    XW += x[25]*43.045610; /*CH2CHO */
    XW += x[26]*44.053580; /*C2H4O */
    XW += x[27]*42.037640; /*CH2CO */
    XW += x[28]*41.029670; /*HCCO */
    XW += x[29]*25.030270; /*C2H */
    XW += x[30]*31.034460; /*CH2OH */
    XW += x[31]*32.042430; /*CH3OH */
    XW += x[32]*40.065330; /*C3H4 */
    XW += x[33]*39.057360; /*C3H3 */
    XW += x[34]*41.073300; /*C3H5 */
    XW += x[35]*42.081270; /*C3H6 */
    XW += x[36]*44.097210; /*C3H8 */
    XW += x[37]*43.089240; /*I-C3H7 */
    XW += x[38]*43.089240; /*N-C3H7 */
    *P = *rho * 8.31451e+07 * (*T) / XW; /*P = rho*R*T/W */

    return;
}


/*Compute P = rhoRT/W(y) */
void CKPY(double * rho, double * T, double * y, int * iwrk, double * rwrk, double * P)
{
    double YOW = 0;/* for computing mean MW */
    YOW += y[0]/28.013400; /*N2 */
    YOW += y[1]/39.948000; /*AR */
    YOW += y[2]/1.007970; /*H */
    YOW += y[3]/31.998800; /*O2 */
    YOW += y[4]/17.007370; /*OH */
    YOW += y[5]/15.999400; /*O */
    YOW += y[6]/2.015940; /*H2 */
    YOW += y[7]/18.015340; /*H2O */
    YOW += y[8]/33.006770; /*HO2 */
    YOW += y[9]/34.014740; /*H2O2 */
    YOW += y[10]/28.010550; /*CO */
    YOW += y[11]/44.009950; /*CO2 */
    YOW += y[12]/29.018520; /*HCO */
    YOW += y[13]/30.026490; /*CH2O */
    YOW += y[14]/16.043030; /*CH4 */
    YOW += y[15]/15.035060; /*CH3 */
    YOW += y[16]/14.027090; /*T-CH2 */
    YOW += y[17]/14.027090; /*S-CH2 */
    YOW += y[18]/28.054180; /*C2H4 */
    YOW += y[19]/31.034460; /*CH3O */
    YOW += y[20]/29.062150; /*C2H5 */
    YOW += y[21]/30.070120; /*C2H6 */
    YOW += y[22]/13.019120; /*CH */
    YOW += y[23]/26.038240; /*C2H2 */
    YOW += y[24]/27.046210; /*C2H3 */
    YOW += y[25]/43.045610; /*CH2CHO */
    YOW += y[26]/44.053580; /*C2H4O */
    YOW += y[27]/42.037640; /*CH2CO */
    YOW += y[28]/41.029670; /*HCCO */
    YOW += y[29]/25.030270; /*C2H */
    YOW += y[30]/31.034460; /*CH2OH */
    YOW += y[31]/32.042430; /*CH3OH */
    YOW += y[32]/40.065330; /*C3H4 */
    YOW += y[33]/39.057360; /*C3H3 */
    YOW += y[34]/41.073300; /*C3H5 */
    YOW += y[35]/42.081270; /*C3H6 */
    YOW += y[36]/44.097210; /*C3H8 */
    YOW += y[37]/43.089240; /*I-C3H7 */
    YOW += y[38]/43.089240; /*N-C3H7 */
    *P = *rho * 8.31451e+07 * (*T) * YOW; /*P = rho*R*T/W */

    return;
}


/*Compute P = rhoRT/W(c) */
void CKPC(double * rho, double * T, double * c, int * iwrk, double * rwrk, double * P)
{
    int id; /*loop counter */
    /*See Eq 5 in CK Manual */
    double W = 0;
    double sumC = 0;
    W += c[0]*28.013400; /*N2 */
    W += c[1]*39.948000; /*AR */
    W += c[2]*1.007970; /*H */
    W += c[3]*31.998800; /*O2 */
    W += c[4]*17.007370; /*OH */
    W += c[5]*15.999400; /*O */
    W += c[6]*2.015940; /*H2 */
    W += c[7]*18.015340; /*H2O */
    W += c[8]*33.006770; /*HO2 */
    W += c[9]*34.014740; /*H2O2 */
    W += c[10]*28.010550; /*CO */
    W += c[11]*44.009950; /*CO2 */
    W += c[12]*29.018520; /*HCO */
    W += c[13]*30.026490; /*CH2O */
    W += c[14]*16.043030; /*CH4 */
    W += c[15]*15.035060; /*CH3 */
    W += c[16]*14.027090; /*T-CH2 */
    W += c[17]*14.027090; /*S-CH2 */
    W += c[18]*28.054180; /*C2H4 */
    W += c[19]*31.034460; /*CH3O */
    W += c[20]*29.062150; /*C2H5 */
    W += c[21]*30.070120; /*C2H6 */
    W += c[22]*13.019120; /*CH */
    W += c[23]*26.038240; /*C2H2 */
    W += c[24]*27.046210; /*C2H3 */
    W += c[25]*43.045610; /*CH2CHO */
    W += c[26]*44.053580; /*C2H4O */
    W += c[27]*42.037640; /*CH2CO */
    W += c[28]*41.029670; /*HCCO */
    W += c[29]*25.030270; /*C2H */
    W += c[30]*31.034460; /*CH2OH */
    W += c[31]*32.042430; /*CH3OH */
    W += c[32]*40.065330; /*C3H4 */
    W += c[33]*39.057360; /*C3H3 */
    W += c[34]*41.073300; /*C3H5 */
    W += c[35]*42.081270; /*C3H6 */
    W += c[36]*44.097210; /*C3H8 */
    W += c[37]*43.089240; /*I-C3H7 */
    W += c[38]*43.089240; /*N-C3H7 */

    for (id = 0; id < 39; ++id) {
        sumC += c[id];
    }
    *P = *rho * 8.31451e+07 * (*T) * sumC / W; /*P = rho*R*T/W */

    return;
}


/*Compute rho = PW(x)/RT */
void CKRHOX(double * P, double * T, double * x, int * iwrk, double * rwrk, double * rho)
{
    double XW = 0;/* To hold mean molecular wt */
    XW += x[0]*28.013400; /*N2 */
    XW += x[1]*39.948000; /*AR */
    XW += x[2]*1.007970; /*H */
    XW += x[3]*31.998800; /*O2 */
    XW += x[4]*17.007370; /*OH */
    XW += x[5]*15.999400; /*O */
    XW += x[6]*2.015940; /*H2 */
    XW += x[7]*18.015340; /*H2O */
    XW += x[8]*33.006770; /*HO2 */
    XW += x[9]*34.014740; /*H2O2 */
    XW += x[10]*28.010550; /*CO */
    XW += x[11]*44.009950; /*CO2 */
    XW += x[12]*29.018520; /*HCO */
    XW += x[13]*30.026490; /*CH2O */
    XW += x[14]*16.043030; /*CH4 */
    XW += x[15]*15.035060; /*CH3 */
    XW += x[16]*14.027090; /*T-CH2 */
    XW += x[17]*14.027090; /*S-CH2 */
    XW += x[18]*28.054180; /*C2H4 */
    XW += x[19]*31.034460; /*CH3O */
    XW += x[20]*29.062150; /*C2H5 */
    XW += x[21]*30.070120; /*C2H6 */
    XW += x[22]*13.019120; /*CH */
    XW += x[23]*26.038240; /*C2H2 */
    XW += x[24]*27.046210; /*C2H3 */
    XW += x[25]*43.045610; /*CH2CHO */
    XW += x[26]*44.053580; /*C2H4O */
    XW += x[27]*42.037640; /*CH2CO */
    XW += x[28]*41.029670; /*HCCO */
    XW += x[29]*25.030270; /*C2H */
    XW += x[30]*31.034460; /*CH2OH */
    XW += x[31]*32.042430; /*CH3OH */
    XW += x[32]*40.065330; /*C3H4 */
    XW += x[33]*39.057360; /*C3H3 */
    XW += x[34]*41.073300; /*C3H5 */
    XW += x[35]*42.081270; /*C3H6 */
    XW += x[36]*44.097210; /*C3H8 */
    XW += x[37]*43.089240; /*I-C3H7 */
    XW += x[38]*43.089240; /*N-C3H7 */
    *rho = *P * XW / (8.31451e+07 * (*T)); /*rho = P*W/(R*T) */

    return;
}


/*Compute rho = P*W(y)/RT */
void CKRHOY(double * P, double * T, double * y, int * iwrk, double * rwrk, double * rho)
{
    double YOW = 0;/* for computing mean MW */
    YOW += y[0]/28.013400; /*N2 */
    YOW += y[1]/39.948000; /*AR */
    YOW += y[2]/1.007970; /*H */
    YOW += y[3]/31.998800; /*O2 */
    YOW += y[4]/17.007370; /*OH */
    YOW += y[5]/15.999400; /*O */
    YOW += y[6]/2.015940; /*H2 */
    YOW += y[7]/18.015340; /*H2O */
    YOW += y[8]/33.006770; /*HO2 */
    YOW += y[9]/34.014740; /*H2O2 */
    YOW += y[10]/28.010550; /*CO */
    YOW += y[11]/44.009950; /*CO2 */
    YOW += y[12]/29.018520; /*HCO */
    YOW += y[13]/30.026490; /*CH2O */
    YOW += y[14]/16.043030; /*CH4 */
    YOW += y[15]/15.035060; /*CH3 */
    YOW += y[16]/14.027090; /*T-CH2 */
    YOW += y[17]/14.027090; /*S-CH2 */
    YOW += y[18]/28.054180; /*C2H4 */
    YOW += y[19]/31.034460; /*CH3O */
    YOW += y[20]/29.062150; /*C2H5 */
    YOW += y[21]/30.070120; /*C2H6 */
    YOW += y[22]/13.019120; /*CH */
    YOW += y[23]/26.038240; /*C2H2 */
    YOW += y[24]/27.046210; /*C2H3 */
    YOW += y[25]/43.045610; /*CH2CHO */
    YOW += y[26]/44.053580; /*C2H4O */
    YOW += y[27]/42.037640; /*CH2CO */
    YOW += y[28]/41.029670; /*HCCO */
    YOW += y[29]/25.030270; /*C2H */
    YOW += y[30]/31.034460; /*CH2OH */
    YOW += y[31]/32.042430; /*CH3OH */
    YOW += y[32]/40.065330; /*C3H4 */
    YOW += y[33]/39.057360; /*C3H3 */
    YOW += y[34]/41.073300; /*C3H5 */
    YOW += y[35]/42.081270; /*C3H6 */
    YOW += y[36]/44.097210; /*C3H8 */
    YOW += y[37]/43.089240; /*I-C3H7 */
    YOW += y[38]/43.089240; /*N-C3H7 */
    *rho = *P / (8.31451e+07 * (*T) * YOW); /*rho = P*W/(R*T) */

    return;
}


/*Compute rho = P*W(c)/(R*T) */
void CKRHOC(double * P, double * T, double * c, int * iwrk, double * rwrk, double * rho)
{
    int id; /*loop counter */
    /*See Eq 5 in CK Manual */
    double W = 0;
    double sumC = 0;
    W += c[0]*28.013400; /*N2 */
    W += c[1]*39.948000; /*AR */
    W += c[2]*1.007970; /*H */
    W += c[3]*31.998800; /*O2 */
    W += c[4]*17.007370; /*OH */
    W += c[5]*15.999400; /*O */
    W += c[6]*2.015940; /*H2 */
    W += c[7]*18.015340; /*H2O */
    W += c[8]*33.006770; /*HO2 */
    W += c[9]*34.014740; /*H2O2 */
    W += c[10]*28.010550; /*CO */
    W += c[11]*44.009950; /*CO2 */
    W += c[12]*29.018520; /*HCO */
    W += c[13]*30.026490; /*CH2O */
    W += c[14]*16.043030; /*CH4 */
    W += c[15]*15.035060; /*CH3 */
    W += c[16]*14.027090; /*T-CH2 */
    W += c[17]*14.027090; /*S-CH2 */
    W += c[18]*28.054180; /*C2H4 */
    W += c[19]*31.034460; /*CH3O */
    W += c[20]*29.062150; /*C2H5 */
    W += c[21]*30.070120; /*C2H6 */
    W += c[22]*13.019120; /*CH */
    W += c[23]*26.038240; /*C2H2 */
    W += c[24]*27.046210; /*C2H3 */
    W += c[25]*43.045610; /*CH2CHO */
    W += c[26]*44.053580; /*C2H4O */
    W += c[27]*42.037640; /*CH2CO */
    W += c[28]*41.029670; /*HCCO */
    W += c[29]*25.030270; /*C2H */
    W += c[30]*31.034460; /*CH2OH */
    W += c[31]*32.042430; /*CH3OH */
    W += c[32]*40.065330; /*C3H4 */
    W += c[33]*39.057360; /*C3H3 */
    W += c[34]*41.073300; /*C3H5 */
    W += c[35]*42.081270; /*C3H6 */
    W += c[36]*44.097210; /*C3H8 */
    W += c[37]*43.089240; /*I-C3H7 */
    W += c[38]*43.089240; /*N-C3H7 */

    for (id = 0; id < 39; ++id) {
        sumC += c[id];
    }
    *rho = *P * W / (sumC * (*T) * 8.31451e+07); /*rho = PW/(R*T) */

    return;
}


/*get molecular weight for all species */
void CKWT(int * iwrk, double * rwrk, double * wt)
{
    molecularWeight(wt);
}


/*given y[species]: mass fractions */
/*returns mean molecular weight (gm/mole) */
void CKMMWY(double *y, int * iwrk, double * rwrk, double * wtm)
{
    double YOW = 0;/* see Eq 3 in CK Manual */
    YOW += y[0]/28.013400; /*N2 */
    YOW += y[1]/39.948000; /*AR */
    YOW += y[2]/1.007970; /*H */
    YOW += y[3]/31.998800; /*O2 */
    YOW += y[4]/17.007370; /*OH */
    YOW += y[5]/15.999400; /*O */
    YOW += y[6]/2.015940; /*H2 */
    YOW += y[7]/18.015340; /*H2O */
    YOW += y[8]/33.006770; /*HO2 */
    YOW += y[9]/34.014740; /*H2O2 */
    YOW += y[10]/28.010550; /*CO */
    YOW += y[11]/44.009950; /*CO2 */
    YOW += y[12]/29.018520; /*HCO */
    YOW += y[13]/30.026490; /*CH2O */
    YOW += y[14]/16.043030; /*CH4 */
    YOW += y[15]/15.035060; /*CH3 */
    YOW += y[16]/14.027090; /*T-CH2 */
    YOW += y[17]/14.027090; /*S-CH2 */
    YOW += y[18]/28.054180; /*C2H4 */
    YOW += y[19]/31.034460; /*CH3O */
    YOW += y[20]/29.062150; /*C2H5 */
    YOW += y[21]/30.070120; /*C2H6 */
    YOW += y[22]/13.019120; /*CH */
    YOW += y[23]/26.038240; /*C2H2 */
    YOW += y[24]/27.046210; /*C2H3 */
    YOW += y[25]/43.045610; /*CH2CHO */
    YOW += y[26]/44.053580; /*C2H4O */
    YOW += y[27]/42.037640; /*CH2CO */
    YOW += y[28]/41.029670; /*HCCO */
    YOW += y[29]/25.030270; /*C2H */
    YOW += y[30]/31.034460; /*CH2OH */
    YOW += y[31]/32.042430; /*CH3OH */
    YOW += y[32]/40.065330; /*C3H4 */
    YOW += y[33]/39.057360; /*C3H3 */
    YOW += y[34]/41.073300; /*C3H5 */
    YOW += y[35]/42.081270; /*C3H6 */
    YOW += y[36]/44.097210; /*C3H8 */
    YOW += y[37]/43.089240; /*I-C3H7 */
    YOW += y[38]/43.089240; /*N-C3H7 */
    *wtm = 1.0 / YOW;

    return;
}


/*given x[species]: mole fractions */
/*returns mean molecular weight (gm/mole) */
void CKMMWX(double *x, int * iwrk, double * rwrk, double * wtm)
{
    double XW = 0;/* see Eq 4 in CK Manual */
    XW += x[0]*28.013400; /*N2 */
    XW += x[1]*39.948000; /*AR */
    XW += x[2]*1.007970; /*H */
    XW += x[3]*31.998800; /*O2 */
    XW += x[4]*17.007370; /*OH */
    XW += x[5]*15.999400; /*O */
    XW += x[6]*2.015940; /*H2 */
    XW += x[7]*18.015340; /*H2O */
    XW += x[8]*33.006770; /*HO2 */
    XW += x[9]*34.014740; /*H2O2 */
    XW += x[10]*28.010550; /*CO */
    XW += x[11]*44.009950; /*CO2 */
    XW += x[12]*29.018520; /*HCO */
    XW += x[13]*30.026490; /*CH2O */
    XW += x[14]*16.043030; /*CH4 */
    XW += x[15]*15.035060; /*CH3 */
    XW += x[16]*14.027090; /*T-CH2 */
    XW += x[17]*14.027090; /*S-CH2 */
    XW += x[18]*28.054180; /*C2H4 */
    XW += x[19]*31.034460; /*CH3O */
    XW += x[20]*29.062150; /*C2H5 */
    XW += x[21]*30.070120; /*C2H6 */
    XW += x[22]*13.019120; /*CH */
    XW += x[23]*26.038240; /*C2H2 */
    XW += x[24]*27.046210; /*C2H3 */
    XW += x[25]*43.045610; /*CH2CHO */
    XW += x[26]*44.053580; /*C2H4O */
    XW += x[27]*42.037640; /*CH2CO */
    XW += x[28]*41.029670; /*HCCO */
    XW += x[29]*25.030270; /*C2H */
    XW += x[30]*31.034460; /*CH2OH */
    XW += x[31]*32.042430; /*CH3OH */
    XW += x[32]*40.065330; /*C3H4 */
    XW += x[33]*39.057360; /*C3H3 */
    XW += x[34]*41.073300; /*C3H5 */
    XW += x[35]*42.081270; /*C3H6 */
    XW += x[36]*44.097210; /*C3H8 */
    XW += x[37]*43.089240; /*I-C3H7 */
    XW += x[38]*43.089240; /*N-C3H7 */
    *wtm = XW;

    return;
}


/*given c[species]: molar concentration */
/*returns mean molecular weight (gm/mole) */
void CKMMWC(double *c, int * iwrk, double * rwrk, double * wtm)
{
    int id; /*loop counter */
    /*See Eq 5 in CK Manual */
    double W = 0;
    double sumC = 0;
    W += c[0]*28.013400; /*N2 */
    W += c[1]*39.948000; /*AR */
    W += c[2]*1.007970; /*H */
    W += c[3]*31.998800; /*O2 */
    W += c[4]*17.007370; /*OH */
    W += c[5]*15.999400; /*O */
    W += c[6]*2.015940; /*H2 */
    W += c[7]*18.015340; /*H2O */
    W += c[8]*33.006770; /*HO2 */
    W += c[9]*34.014740; /*H2O2 */
    W += c[10]*28.010550; /*CO */
    W += c[11]*44.009950; /*CO2 */
    W += c[12]*29.018520; /*HCO */
    W += c[13]*30.026490; /*CH2O */
    W += c[14]*16.043030; /*CH4 */
    W += c[15]*15.035060; /*CH3 */
    W += c[16]*14.027090; /*T-CH2 */
    W += c[17]*14.027090; /*S-CH2 */
    W += c[18]*28.054180; /*C2H4 */
    W += c[19]*31.034460; /*CH3O */
    W += c[20]*29.062150; /*C2H5 */
    W += c[21]*30.070120; /*C2H6 */
    W += c[22]*13.019120; /*CH */
    W += c[23]*26.038240; /*C2H2 */
    W += c[24]*27.046210; /*C2H3 */
    W += c[25]*43.045610; /*CH2CHO */
    W += c[26]*44.053580; /*C2H4O */
    W += c[27]*42.037640; /*CH2CO */
    W += c[28]*41.029670; /*HCCO */
    W += c[29]*25.030270; /*C2H */
    W += c[30]*31.034460; /*CH2OH */
    W += c[31]*32.042430; /*CH3OH */
    W += c[32]*40.065330; /*C3H4 */
    W += c[33]*39.057360; /*C3H3 */
    W += c[34]*41.073300; /*C3H5 */
    W += c[35]*42.081270; /*C3H6 */
    W += c[36]*44.097210; /*C3H8 */
    W += c[37]*43.089240; /*I-C3H7 */
    W += c[38]*43.089240; /*N-C3H7 */

    for (id = 0; id < 39; ++id) {
        sumC += c[id];
    }
    /* CK provides no guard against divison by zero */
    *wtm = W/sumC;

    return;
}


/*convert y[species] (mass fracs) to x[species] (mole fracs) */
void CKYTX(double * y, int * iwrk, double * rwrk, double * x)
{
    double YOW = 0; /*See Eq 4, 6 in CK Manual */
    /*Compute inverse of mean molecular wt first */
    YOW += y[0]/28.013400; /*N2 */
    YOW += y[1]/39.948000; /*AR */
    YOW += y[2]/1.007970; /*H */
    YOW += y[3]/31.998800; /*O2 */
    YOW += y[4]/17.007370; /*OH */
    YOW += y[5]/15.999400; /*O */
    YOW += y[6]/2.015940; /*H2 */
    YOW += y[7]/18.015340; /*H2O */
    YOW += y[8]/33.006770; /*HO2 */
    YOW += y[9]/34.014740; /*H2O2 */
    YOW += y[10]/28.010550; /*CO */
    YOW += y[11]/44.009950; /*CO2 */
    YOW += y[12]/29.018520; /*HCO */
    YOW += y[13]/30.026490; /*CH2O */
    YOW += y[14]/16.043030; /*CH4 */
    YOW += y[15]/15.035060; /*CH3 */
    YOW += y[16]/14.027090; /*T-CH2 */
    YOW += y[17]/14.027090; /*S-CH2 */
    YOW += y[18]/28.054180; /*C2H4 */
    YOW += y[19]/31.034460; /*CH3O */
    YOW += y[20]/29.062150; /*C2H5 */
    YOW += y[21]/30.070120; /*C2H6 */
    YOW += y[22]/13.019120; /*CH */
    YOW += y[23]/26.038240; /*C2H2 */
    YOW += y[24]/27.046210; /*C2H3 */
    YOW += y[25]/43.045610; /*CH2CHO */
    YOW += y[26]/44.053580; /*C2H4O */
    YOW += y[27]/42.037640; /*CH2CO */
    YOW += y[28]/41.029670; /*HCCO */
    YOW += y[29]/25.030270; /*C2H */
    YOW += y[30]/31.034460; /*CH2OH */
    YOW += y[31]/32.042430; /*CH3OH */
    YOW += y[32]/40.065330; /*C3H4 */
    YOW += y[33]/39.057360; /*C3H3 */
    YOW += y[34]/41.073300; /*C3H5 */
    YOW += y[35]/42.081270; /*C3H6 */
    YOW += y[36]/44.097210; /*C3H8 */
    YOW += y[37]/43.089240; /*I-C3H7 */
    YOW += y[38]/43.089240; /*N-C3H7 */
    /*Now compute conversion */
    x[0] = y[0]/(28.013400*YOW); 
    x[1] = y[1]/(39.948000*YOW); 
    x[2] = y[2]/(1.007970*YOW); 
    x[3] = y[3]/(31.998800*YOW); 
    x[4] = y[4]/(17.007370*YOW); 
    x[5] = y[5]/(15.999400*YOW); 
    x[6] = y[6]/(2.015940*YOW); 
    x[7] = y[7]/(18.015340*YOW); 
    x[8] = y[8]/(33.006770*YOW); 
    x[9] = y[9]/(34.014740*YOW); 
    x[10] = y[10]/(28.010550*YOW); 
    x[11] = y[11]/(44.009950*YOW); 
    x[12] = y[12]/(29.018520*YOW); 
    x[13] = y[13]/(30.026490*YOW); 
    x[14] = y[14]/(16.043030*YOW); 
    x[15] = y[15]/(15.035060*YOW); 
    x[16] = y[16]/(14.027090*YOW); 
    x[17] = y[17]/(14.027090*YOW); 
    x[18] = y[18]/(28.054180*YOW); 
    x[19] = y[19]/(31.034460*YOW); 
    x[20] = y[20]/(29.062150*YOW); 
    x[21] = y[21]/(30.070120*YOW); 
    x[22] = y[22]/(13.019120*YOW); 
    x[23] = y[23]/(26.038240*YOW); 
    x[24] = y[24]/(27.046210*YOW); 
    x[25] = y[25]/(43.045610*YOW); 
    x[26] = y[26]/(44.053580*YOW); 
    x[27] = y[27]/(42.037640*YOW); 
    x[28] = y[28]/(41.029670*YOW); 
    x[29] = y[29]/(25.030270*YOW); 
    x[30] = y[30]/(31.034460*YOW); 
    x[31] = y[31]/(32.042430*YOW); 
    x[32] = y[32]/(40.065330*YOW); 
    x[33] = y[33]/(39.057360*YOW); 
    x[34] = y[34]/(41.073300*YOW); 
    x[35] = y[35]/(42.081270*YOW); 
    x[36] = y[36]/(44.097210*YOW); 
    x[37] = y[37]/(43.089240*YOW); 
    x[38] = y[38]/(43.089240*YOW); 

    return;
}


/*convert y[species] (mass fracs) to c[species] (molar conc) */
void CKYTCP(double * P, double * T, double * y, int * iwrk, double * rwrk, double * c)
{
    double YOW = 0; 
    double PWORT; 
    /*Compute inverse of mean molecular wt first */
    YOW += y[0]/28.013400; /*N2 */
    YOW += y[1]/39.948000; /*AR */
    YOW += y[2]/1.007970; /*H */
    YOW += y[3]/31.998800; /*O2 */
    YOW += y[4]/17.007370; /*OH */
    YOW += y[5]/15.999400; /*O */
    YOW += y[6]/2.015940; /*H2 */
    YOW += y[7]/18.015340; /*H2O */
    YOW += y[8]/33.006770; /*HO2 */
    YOW += y[9]/34.014740; /*H2O2 */
    YOW += y[10]/28.010550; /*CO */
    YOW += y[11]/44.009950; /*CO2 */
    YOW += y[12]/29.018520; /*HCO */
    YOW += y[13]/30.026490; /*CH2O */
    YOW += y[14]/16.043030; /*CH4 */
    YOW += y[15]/15.035060; /*CH3 */
    YOW += y[16]/14.027090; /*T-CH2 */
    YOW += y[17]/14.027090; /*S-CH2 */
    YOW += y[18]/28.054180; /*C2H4 */
    YOW += y[19]/31.034460; /*CH3O */
    YOW += y[20]/29.062150; /*C2H5 */
    YOW += y[21]/30.070120; /*C2H6 */
    YOW += y[22]/13.019120; /*CH */
    YOW += y[23]/26.038240; /*C2H2 */
    YOW += y[24]/27.046210; /*C2H3 */
    YOW += y[25]/43.045610; /*CH2CHO */
    YOW += y[26]/44.053580; /*C2H4O */
    YOW += y[27]/42.037640; /*CH2CO */
    YOW += y[28]/41.029670; /*HCCO */
    YOW += y[29]/25.030270; /*C2H */
    YOW += y[30]/31.034460; /*CH2OH */
    YOW += y[31]/32.042430; /*CH3OH */
    YOW += y[32]/40.065330; /*C3H4 */
    YOW += y[33]/39.057360; /*C3H3 */
    YOW += y[34]/41.073300; /*C3H5 */
    YOW += y[35]/42.081270; /*C3H6 */
    YOW += y[36]/44.097210; /*C3H8 */
    YOW += y[37]/43.089240; /*I-C3H7 */
    YOW += y[38]/43.089240; /*N-C3H7 */
    /*PW/RT (see Eq. 7) */
    PWORT = (*P)/(YOW * 8.31451e+07 * (*T)); 
    /*Now compute conversion */
    c[0] = PWORT * y[0]/28.013400; 
    c[1] = PWORT * y[1]/39.948000; 
    c[2] = PWORT * y[2]/1.007970; 
    c[3] = PWORT * y[3]/31.998800; 
    c[4] = PWORT * y[4]/17.007370; 
    c[5] = PWORT * y[5]/15.999400; 
    c[6] = PWORT * y[6]/2.015940; 
    c[7] = PWORT * y[7]/18.015340; 
    c[8] = PWORT * y[8]/33.006770; 
    c[9] = PWORT * y[9]/34.014740; 
    c[10] = PWORT * y[10]/28.010550; 
    c[11] = PWORT * y[11]/44.009950; 
    c[12] = PWORT * y[12]/29.018520; 
    c[13] = PWORT * y[13]/30.026490; 
    c[14] = PWORT * y[14]/16.043030; 
    c[15] = PWORT * y[15]/15.035060; 
    c[16] = PWORT * y[16]/14.027090; 
    c[17] = PWORT * y[17]/14.027090; 
    c[18] = PWORT * y[18]/28.054180; 
    c[19] = PWORT * y[19]/31.034460; 
    c[20] = PWORT * y[20]/29.062150; 
    c[21] = PWORT * y[21]/30.070120; 
    c[22] = PWORT * y[22]/13.019120; 
    c[23] = PWORT * y[23]/26.038240; 
    c[24] = PWORT * y[24]/27.046210; 
    c[25] = PWORT * y[25]/43.045610; 
    c[26] = PWORT * y[26]/44.053580; 
    c[27] = PWORT * y[27]/42.037640; 
    c[28] = PWORT * y[28]/41.029670; 
    c[29] = PWORT * y[29]/25.030270; 
    c[30] = PWORT * y[30]/31.034460; 
    c[31] = PWORT * y[31]/32.042430; 
    c[32] = PWORT * y[32]/40.065330; 
    c[33] = PWORT * y[33]/39.057360; 
    c[34] = PWORT * y[34]/41.073300; 
    c[35] = PWORT * y[35]/42.081270; 
    c[36] = PWORT * y[36]/44.097210; 
    c[37] = PWORT * y[37]/43.089240; 
    c[38] = PWORT * y[38]/43.089240; 

    return;
}


/*convert y[species] (mass fracs) to c[species] (molar conc) */
void CKYTCR(double * rho, double * T, double * y, int * iwrk, double * rwrk, double * c)
{
    /*See Eq 8 (Temperature not used) */
    c[0] = (*rho) * y[0]/28.013400; 
    c[1] = (*rho) * y[1]/39.948000; 
    c[2] = (*rho) * y[2]/1.007970; 
    c[3] = (*rho) * y[3]/31.998800; 
    c[4] = (*rho) * y[4]/17.007370; 
    c[5] = (*rho) * y[5]/15.999400; 
    c[6] = (*rho) * y[6]/2.015940; 
    c[7] = (*rho) * y[7]/18.015340; 
    c[8] = (*rho) * y[8]/33.006770; 
    c[9] = (*rho) * y[9]/34.014740; 
    c[10] = (*rho) * y[10]/28.010550; 
    c[11] = (*rho) * y[11]/44.009950; 
    c[12] = (*rho) * y[12]/29.018520; 
    c[13] = (*rho) * y[13]/30.026490; 
    c[14] = (*rho) * y[14]/16.043030; 
    c[15] = (*rho) * y[15]/15.035060; 
    c[16] = (*rho) * y[16]/14.027090; 
    c[17] = (*rho) * y[17]/14.027090; 
    c[18] = (*rho) * y[18]/28.054180; 
    c[19] = (*rho) * y[19]/31.034460; 
    c[20] = (*rho) * y[20]/29.062150; 
    c[21] = (*rho) * y[21]/30.070120; 
    c[22] = (*rho) * y[22]/13.019120; 
    c[23] = (*rho) * y[23]/26.038240; 
    c[24] = (*rho) * y[24]/27.046210; 
    c[25] = (*rho) * y[25]/43.045610; 
    c[26] = (*rho) * y[26]/44.053580; 
    c[27] = (*rho) * y[27]/42.037640; 
    c[28] = (*rho) * y[28]/41.029670; 
    c[29] = (*rho) * y[29]/25.030270; 
    c[30] = (*rho) * y[30]/31.034460; 
    c[31] = (*rho) * y[31]/32.042430; 
    c[32] = (*rho) * y[32]/40.065330; 
    c[33] = (*rho) * y[33]/39.057360; 
    c[34] = (*rho) * y[34]/41.073300; 
    c[35] = (*rho) * y[35]/42.081270; 
    c[36] = (*rho) * y[36]/44.097210; 
    c[37] = (*rho) * y[37]/43.089240; 
    c[38] = (*rho) * y[38]/43.089240; 

    return;
}


/*convert x[species] (mole fracs) to y[species] (mass fracs) */
void CKXTY(double * x, int * iwrk, double * rwrk, double * y)
{
    double XW = 0; /*See Eq 4, 9 in CK Manual */
    /*Compute mean molecular wt first */
    XW += x[0]*28.013400; /*N2 */
    XW += x[1]*39.948000; /*AR */
    XW += x[2]*1.007970; /*H */
    XW += x[3]*31.998800; /*O2 */
    XW += x[4]*17.007370; /*OH */
    XW += x[5]*15.999400; /*O */
    XW += x[6]*2.015940; /*H2 */
    XW += x[7]*18.015340; /*H2O */
    XW += x[8]*33.006770; /*HO2 */
    XW += x[9]*34.014740; /*H2O2 */
    XW += x[10]*28.010550; /*CO */
    XW += x[11]*44.009950; /*CO2 */
    XW += x[12]*29.018520; /*HCO */
    XW += x[13]*30.026490; /*CH2O */
    XW += x[14]*16.043030; /*CH4 */
    XW += x[15]*15.035060; /*CH3 */
    XW += x[16]*14.027090; /*T-CH2 */
    XW += x[17]*14.027090; /*S-CH2 */
    XW += x[18]*28.054180; /*C2H4 */
    XW += x[19]*31.034460; /*CH3O */
    XW += x[20]*29.062150; /*C2H5 */
    XW += x[21]*30.070120; /*C2H6 */
    XW += x[22]*13.019120; /*CH */
    XW += x[23]*26.038240; /*C2H2 */
    XW += x[24]*27.046210; /*C2H3 */
    XW += x[25]*43.045610; /*CH2CHO */
    XW += x[26]*44.053580; /*C2H4O */
    XW += x[27]*42.037640; /*CH2CO */
    XW += x[28]*41.029670; /*HCCO */
    XW += x[29]*25.030270; /*C2H */
    XW += x[30]*31.034460; /*CH2OH */
    XW += x[31]*32.042430; /*CH3OH */
    XW += x[32]*40.065330; /*C3H4 */
    XW += x[33]*39.057360; /*C3H3 */
    XW += x[34]*41.073300; /*C3H5 */
    XW += x[35]*42.081270; /*C3H6 */
    XW += x[36]*44.097210; /*C3H8 */
    XW += x[37]*43.089240; /*I-C3H7 */
    XW += x[38]*43.089240; /*N-C3H7 */
    /*Now compute conversion */
    y[0] = x[0]*28.013400/XW; 
    y[1] = x[1]*39.948000/XW; 
    y[2] = x[2]*1.007970/XW; 
    y[3] = x[3]*31.998800/XW; 
    y[4] = x[4]*17.007370/XW; 
    y[5] = x[5]*15.999400/XW; 
    y[6] = x[6]*2.015940/XW; 
    y[7] = x[7]*18.015340/XW; 
    y[8] = x[8]*33.006770/XW; 
    y[9] = x[9]*34.014740/XW; 
    y[10] = x[10]*28.010550/XW; 
    y[11] = x[11]*44.009950/XW; 
    y[12] = x[12]*29.018520/XW; 
    y[13] = x[13]*30.026490/XW; 
    y[14] = x[14]*16.043030/XW; 
    y[15] = x[15]*15.035060/XW; 
    y[16] = x[16]*14.027090/XW; 
    y[17] = x[17]*14.027090/XW; 
    y[18] = x[18]*28.054180/XW; 
    y[19] = x[19]*31.034460/XW; 
    y[20] = x[20]*29.062150/XW; 
    y[21] = x[21]*30.070120/XW; 
    y[22] = x[22]*13.019120/XW; 
    y[23] = x[23]*26.038240/XW; 
    y[24] = x[24]*27.046210/XW; 
    y[25] = x[25]*43.045610/XW; 
    y[26] = x[26]*44.053580/XW; 
    y[27] = x[27]*42.037640/XW; 
    y[28] = x[28]*41.029670/XW; 
    y[29] = x[29]*25.030270/XW; 
    y[30] = x[30]*31.034460/XW; 
    y[31] = x[31]*32.042430/XW; 
    y[32] = x[32]*40.065330/XW; 
    y[33] = x[33]*39.057360/XW; 
    y[34] = x[34]*41.073300/XW; 
    y[35] = x[35]*42.081270/XW; 
    y[36] = x[36]*44.097210/XW; 
    y[37] = x[37]*43.089240/XW; 
    y[38] = x[38]*43.089240/XW; 

    return;
}


/*convert x[species] (mole fracs) to c[species] (molar conc) */
void CKXTCP(double * P, double * T, double * x, int * iwrk, double * rwrk, double * c)
{
    int id; /*loop counter */
    double PORT = (*P)/(8.31451e+07 * (*T)); /*P/RT */

    /*Compute conversion, see Eq 10 */
    for (id = 0; id < 39; ++id) {
        c[id] = x[id]*PORT;
    }

    return;
}


/*convert x[species] (mole fracs) to c[species] (molar conc) */
void CKXTCR(double * rho, double * T, double * x, int * iwrk, double * rwrk, double * c)
{
    int id; /*loop counter */
    double XW = 0; /*See Eq 4, 11 in CK Manual */
    double ROW; 
    /*Compute mean molecular wt first */
    XW += x[0]*28.013400; /*N2 */
    XW += x[1]*39.948000; /*AR */
    XW += x[2]*1.007970; /*H */
    XW += x[3]*31.998800; /*O2 */
    XW += x[4]*17.007370; /*OH */
    XW += x[5]*15.999400; /*O */
    XW += x[6]*2.015940; /*H2 */
    XW += x[7]*18.015340; /*H2O */
    XW += x[8]*33.006770; /*HO2 */
    XW += x[9]*34.014740; /*H2O2 */
    XW += x[10]*28.010550; /*CO */
    XW += x[11]*44.009950; /*CO2 */
    XW += x[12]*29.018520; /*HCO */
    XW += x[13]*30.026490; /*CH2O */
    XW += x[14]*16.043030; /*CH4 */
    XW += x[15]*15.035060; /*CH3 */
    XW += x[16]*14.027090; /*T-CH2 */
    XW += x[17]*14.027090; /*S-CH2 */
    XW += x[18]*28.054180; /*C2H4 */
    XW += x[19]*31.034460; /*CH3O */
    XW += x[20]*29.062150; /*C2H5 */
    XW += x[21]*30.070120; /*C2H6 */
    XW += x[22]*13.019120; /*CH */
    XW += x[23]*26.038240; /*C2H2 */
    XW += x[24]*27.046210; /*C2H3 */
    XW += x[25]*43.045610; /*CH2CHO */
    XW += x[26]*44.053580; /*C2H4O */
    XW += x[27]*42.037640; /*CH2CO */
    XW += x[28]*41.029670; /*HCCO */
    XW += x[29]*25.030270; /*C2H */
    XW += x[30]*31.034460; /*CH2OH */
    XW += x[31]*32.042430; /*CH3OH */
    XW += x[32]*40.065330; /*C3H4 */
    XW += x[33]*39.057360; /*C3H3 */
    XW += x[34]*41.073300; /*C3H5 */
    XW += x[35]*42.081270; /*C3H6 */
    XW += x[36]*44.097210; /*C3H8 */
    XW += x[37]*43.089240; /*I-C3H7 */
    XW += x[38]*43.089240; /*N-C3H7 */
    ROW = (*rho) / XW;

    /*Compute conversion, see Eq 11 */
    for (id = 0; id < 39; ++id) {
        c[id] = x[id]*ROW;
    }

    return;
}


/*convert c[species] (molar conc) to x[species] (mole fracs) */
void CKCTX(double * c, int * iwrk, double * rwrk, double * x)
{
    int id; /*loop counter */
    double sumC = 0; 

    /*compute sum of c  */
    for (id = 0; id < 39; ++id) {
        sumC += c[id];
    }

    /* See Eq 13  */
    for (id = 0; id < 39; ++id) {
        x[id] = c[id]/sumC;
    }

    return;
}


/*convert c[species] (molar conc) to y[species] (mass fracs) */
void CKCTY(double * c, int * iwrk, double * rwrk, double * y)
{
    double CW = 0; /*See Eq 12 in CK Manual */
    /*compute denominator in eq 12 first */
    CW += c[0]*28.013400; /*N2 */
    CW += c[1]*39.948000; /*AR */
    CW += c[2]*1.007970; /*H */
    CW += c[3]*31.998800; /*O2 */
    CW += c[4]*17.007370; /*OH */
    CW += c[5]*15.999400; /*O */
    CW += c[6]*2.015940; /*H2 */
    CW += c[7]*18.015340; /*H2O */
    CW += c[8]*33.006770; /*HO2 */
    CW += c[9]*34.014740; /*H2O2 */
    CW += c[10]*28.010550; /*CO */
    CW += c[11]*44.009950; /*CO2 */
    CW += c[12]*29.018520; /*HCO */
    CW += c[13]*30.026490; /*CH2O */
    CW += c[14]*16.043030; /*CH4 */
    CW += c[15]*15.035060; /*CH3 */
    CW += c[16]*14.027090; /*T-CH2 */
    CW += c[17]*14.027090; /*S-CH2 */
    CW += c[18]*28.054180; /*C2H4 */
    CW += c[19]*31.034460; /*CH3O */
    CW += c[20]*29.062150; /*C2H5 */
    CW += c[21]*30.070120; /*C2H6 */
    CW += c[22]*13.019120; /*CH */
    CW += c[23]*26.038240; /*C2H2 */
    CW += c[24]*27.046210; /*C2H3 */
    CW += c[25]*43.045610; /*CH2CHO */
    CW += c[26]*44.053580; /*C2H4O */
    CW += c[27]*42.037640; /*CH2CO */
    CW += c[28]*41.029670; /*HCCO */
    CW += c[29]*25.030270; /*C2H */
    CW += c[30]*31.034460; /*CH2OH */
    CW += c[31]*32.042430; /*CH3OH */
    CW += c[32]*40.065330; /*C3H4 */
    CW += c[33]*39.057360; /*C3H3 */
    CW += c[34]*41.073300; /*C3H5 */
    CW += c[35]*42.081270; /*C3H6 */
    CW += c[36]*44.097210; /*C3H8 */
    CW += c[37]*43.089240; /*I-C3H7 */
    CW += c[38]*43.089240; /*N-C3H7 */
    /*Now compute conversion */
    y[0] = c[0]*28.013400/CW; 
    y[1] = c[1]*39.948000/CW; 
    y[2] = c[2]*1.007970/CW; 
    y[3] = c[3]*31.998800/CW; 
    y[4] = c[4]*17.007370/CW; 
    y[5] = c[5]*15.999400/CW; 
    y[6] = c[6]*2.015940/CW; 
    y[7] = c[7]*18.015340/CW; 
    y[8] = c[8]*33.006770/CW; 
    y[9] = c[9]*34.014740/CW; 
    y[10] = c[10]*28.010550/CW; 
    y[11] = c[11]*44.009950/CW; 
    y[12] = c[12]*29.018520/CW; 
    y[13] = c[13]*30.026490/CW; 
    y[14] = c[14]*16.043030/CW; 
    y[15] = c[15]*15.035060/CW; 
    y[16] = c[16]*14.027090/CW; 
    y[17] = c[17]*14.027090/CW; 
    y[18] = c[18]*28.054180/CW; 
    y[19] = c[19]*31.034460/CW; 
    y[20] = c[20]*29.062150/CW; 
    y[21] = c[21]*30.070120/CW; 
    y[22] = c[22]*13.019120/CW; 
    y[23] = c[23]*26.038240/CW; 
    y[24] = c[24]*27.046210/CW; 
    y[25] = c[25]*43.045610/CW; 
    y[26] = c[26]*44.053580/CW; 
    y[27] = c[27]*42.037640/CW; 
    y[28] = c[28]*41.029670/CW; 
    y[29] = c[29]*25.030270/CW; 
    y[30] = c[30]*31.034460/CW; 
    y[31] = c[31]*32.042430/CW; 
    y[32] = c[32]*40.065330/CW; 
    y[33] = c[33]*39.057360/CW; 
    y[34] = c[34]*41.073300/CW; 
    y[35] = c[35]*42.081270/CW; 
    y[36] = c[36]*44.097210/CW; 
    y[37] = c[37]*43.089240/CW; 
    y[38] = c[38]*43.089240/CW; 

    return;
}


/*get Cp/R as a function of T  */
/*for all species (Eq 19) */
void CKCPOR(double *T, int * iwrk, double * rwrk, double * cpor)
{
    double tT = *T; /*temporary temperature */
    double tc[] = { log(tT), tT, tT*tT, tT*tT*tT, tT*tT*tT*tT }; /*temperature cache */
    cp_R(cpor, tc);
}


/*get H/RT as a function of T  */
/*for all species (Eq 20) */
void CKHORT(double *T, int * iwrk, double * rwrk, double * hort)
{
    double tT = *T; /*temporary temperature */
    double tc[] = { log(tT), tT, tT*tT, tT*tT*tT, tT*tT*tT*tT }; /*temperature cache */
    speciesEnthalpy(hort, tc);
}


/*get S/R as a function of T  */
/*for all species (Eq 21) */
void CKSOR(double *T, int * iwrk, double * rwrk, double * sor)
{
    double tT = *T; /*temporary temperature */
    double tc[] = { log(tT), tT, tT*tT, tT*tT*tT, tT*tT*tT*tT }; /*temperature cache */
    speciesEntropy(sor, tc);
}


/*get specific heat at constant volume as a function  */
/*of T for all species (molar units) */
void CKCVML(double *T, int * iwrk, double * rwrk, double * cvml)
{
    int id; /*loop counter */
    double tT = *T; /*temporary temperature */
    double tc[] = { log(tT), tT, tT*tT, tT*tT*tT, tT*tT*tT*tT }; /*temperature cache */
    cv_R(cvml, tc);

    /*convert to chemkin units */
    for (id = 0; id < 39; ++id) {
        cvml[id] *= 8.31451e+07;
    }
}


/*get specific heat at constant pressure as a  */
/*function of T for all species (molar units) */
void CKCPML(double *T, int * iwrk, double * rwrk, double * cpml)
{
    int id; /*loop counter */
    double tT = *T; /*temporary temperature */
    double tc[] = { log(tT), tT, tT*tT, tT*tT*tT, tT*tT*tT*tT }; /*temperature cache */
    cp_R(cpml, tc);

    /*convert to chemkin units */
    for (id = 0; id < 39; ++id) {
        cpml[id] *= 8.31451e+07;
    }
}


/*get internal energy as a function  */
/*of T for all species (molar units) */
void CKUML(double *T, int * iwrk, double * rwrk, double * uml)
{
    int id; /*loop counter */
    double tT = *T; /*temporary temperature */
    double tc[] = { log(tT), tT, tT*tT, tT*tT*tT, tT*tT*tT*tT }; /*temperature cache */
    double RT = 8.31451e+07*tT; /*R*T */
    speciesInternalEnergy(uml, tc);

    /*convert to chemkin units */
    for (id = 0; id < 39; ++id) {
        uml[id] *= RT;
    }
}


/*get enthalpy as a function  */
/*of T for all species (molar units) */
void CKHML(double *T, int * iwrk, double * rwrk, double * hml)
{
    int id; /*loop counter */
    double tT = *T; /*temporary temperature */
    double tc[] = { log(tT), tT, tT*tT, tT*tT*tT, tT*tT*tT*tT }; /*temperature cache */
    double RT = 8.31451e+07*tT; /*R*T */
    speciesEnthalpy(hml, tc);

    /*convert to chemkin units */
    for (id = 0; id < 39; ++id) {
        hml[id] *= RT;
    }
}


/*get standard-state Gibbs energy as a function  */
/*of T for all species (molar units) */
void CKGML(double *T, int * iwrk, double * rwrk, double * gml)
{
    int id; /*loop counter */
    double tT = *T; /*temporary temperature */
    double tc[] = { log(tT), tT, tT*tT, tT*tT*tT, tT*tT*tT*tT }; /*temperature cache */
    double RT = 8.31451e+07*tT; /*R*T */
    gibbs(gml, tc);

    /*convert to chemkin units */
    for (id = 0; id < 39; ++id) {
        gml[id] *= RT;
    }
}


/*get standard-state Helmholtz free energy as a  */
/*function of T for all species (molar units) */
void CKAML(double *T, int * iwrk, double * rwrk, double * aml)
{
    int id; /*loop counter */
    double tT = *T; /*temporary temperature */
    double tc[] = { log(tT), tT, tT*tT, tT*tT*tT, tT*tT*tT*tT }; /*temperature cache */
    double RT = 8.31451e+07*tT; /*R*T */
    helmholtz(aml, tc);

    /*convert to chemkin units */
    for (id = 0; id < 39; ++id) {
        aml[id] *= RT;
    }
}


/*Returns the standard-state entropies in molar units */
void CKSML(double *T, int * iwrk, double * rwrk, double * sml)
{
    int id; /*loop counter */
    double tT = *T; /*temporary temperature */
    double tc[] = { log(tT), tT, tT*tT, tT*tT*tT, tT*tT*tT*tT }; /*temperature cache */
    speciesEntropy(sml, tc);

    /*convert to chemkin units */
    for (id = 0; id < 39; ++id) {
        sml[id] *= 8.31451e+07;
    }
}


/*Returns the specific heats at constant volume */
/*in mass units (Eq. 29) */
void CKCVMS(double *T, int * iwrk, double * rwrk, double * cvms)
{
    double tT = *T; /*temporary temperature */
    double tc[] = { log(tT), tT, tT*tT, tT*tT*tT, tT*tT*tT*tT }; /*temperature cache */
    cv_R(cvms, tc);
    /*multiply by R/molecularweight */
    cvms[0] *= 2.968047434442088e+06; /*N2 */
    cvms[1] *= 2.081333233203164e+06; /*AR */
    cvms[2] *= 8.248767324424338e+07; /*H */
    cvms[3] *= 2.598381814318037e+06; /*O2 */
    cvms[4] *= 4.888768810227566e+06; /*OH */
    cvms[5] *= 5.196763628636074e+06; /*O */
    cvms[6] *= 4.124383662212169e+07; /*H2 */
    cvms[7] *= 4.615239012974499e+06; /*H2O */
    cvms[8] *= 2.519031701678171e+06; /*HO2 */
    cvms[9] *= 2.444384405113783e+06; /*H2O2 */
    cvms[10] *= 2.968349425484326e+06; /*CO */
    cvms[11] *= 1.889234139098090e+06; /*CO2 */
    cvms[12] *= 2.865242610581105e+06; /*HCO */
    cvms[13] *= 2.769058254894261e+06; /*CH2O */
    cvms[14] *= 5.182630712527496e+06; /*CH4 */
    cvms[15] *= 5.530081023953346e+06; /*CH3 */
    cvms[16] *= 5.927466067445207e+06; /*T-CH2 */
    cvms[17] *= 5.927466067445207e+06; /*S-CH2 */
    cvms[18] *= 2.963733033722604e+06; /*C2H4 */
    cvms[19] *= 2.679121853578248e+06; /*CH3O */
    cvms[20] *= 2.860941121011349e+06; /*C2H5 */
    cvms[21] *= 2.765040511976673e+06; /*C2H6 */
    cvms[22] *= 6.386384025955671e+06; /*CH */
    cvms[23] *= 3.193192012977835e+06; /*C2H2 */
    cvms[24] *= 3.074186734481467e+06; /*C2H3 */
    cvms[25] *= 1.931558177477332e+06; /*CH2CHO */
    cvms[26] *= 1.887363070152301e+06; /*C2H4O */
    cvms[27] *= 1.977872687429646e+06; /*CH2CO */
    cvms[28] *= 2.026462801187531e+06; /*HCCO */
    cvms[29] *= 3.321781986370902e+06; /*C2H */
    cvms[30] *= 2.679121853578248e+06; /*CH2OH */
    cvms[31] *= 2.594843774332970e+06; /*CH3OH */
    cvms[32] *= 2.075238117344846e+06; /*C3H4 */
    cvms[33] *= 2.128794675318557e+06; /*C3H3 */
    cvms[34] *= 2.024310196648431e+06; /*C3H5 */
    cvms[35] *= 1.975822022481736e+06; /*C3H6 */
    cvms[36] *= 1.885495703696447e+06; /*C3H8 */
    cvms[37] *= 1.929602378691293e+06; /*I-C3H7 */
    cvms[38] *= 1.929602378691293e+06; /*N-C3H7 */
}


/*Returns the specific heats at constant pressure */
/*in mass units (Eq. 26) */
void CKCPMS(double *T, int * iwrk, double * rwrk, double * cpms)
{
    double tT = *T; /*temporary temperature */
    double tc[] = { log(tT), tT, tT*tT, tT*tT*tT, tT*tT*tT*tT }; /*temperature cache */
    cp_R(cpms, tc);
    /*multiply by R/molecularweight */
    cpms[0] *= 2.968047434442088e+06; /*N2 */
    cpms[1] *= 2.081333233203164e+06; /*AR */
    cpms[2] *= 8.248767324424338e+07; /*H */
    cpms[3] *= 2.598381814318037e+06; /*O2 */
    cpms[4] *= 4.888768810227566e+06; /*OH */
    cpms[5] *= 5.196763628636074e+06; /*O */
    cpms[6] *= 4.124383662212169e+07; /*H2 */
    cpms[7] *= 4.615239012974499e+06; /*H2O */
    cpms[8] *= 2.519031701678171e+06; /*HO2 */
    cpms[9] *= 2.444384405113783e+06; /*H2O2 */
    cpms[10] *= 2.968349425484326e+06; /*CO */
    cpms[11] *= 1.889234139098090e+06; /*CO2 */
    cpms[12] *= 2.865242610581105e+06; /*HCO */
    cpms[13] *= 2.769058254894261e+06; /*CH2O */
    cpms[14] *= 5.182630712527496e+06; /*CH4 */
    cpms[15] *= 5.530081023953346e+06; /*CH3 */
    cpms[16] *= 5.927466067445207e+06; /*T-CH2 */
    cpms[17] *= 5.927466067445207e+06; /*S-CH2 */
    cpms[18] *= 2.963733033722604e+06; /*C2H4 */
    cpms[19] *= 2.679121853578248e+06; /*CH3O */
    cpms[20] *= 2.860941121011349e+06; /*C2H5 */
    cpms[21] *= 2.765040511976673e+06; /*C2H6 */
    cpms[22] *= 6.386384025955671e+06; /*CH */
    cpms[23] *= 3.193192012977835e+06; /*C2H2 */
    cpms[24] *= 3.074186734481467e+06; /*C2H3 */
    cpms[25] *= 1.931558177477332e+06; /*CH2CHO */
    cpms[26] *= 1.887363070152301e+06; /*C2H4O */
    cpms[27] *= 1.977872687429646e+06; /*CH2CO */
    cpms[28] *= 2.026462801187531e+06; /*HCCO */
    cpms[29] *= 3.321781986370902e+06; /*C2H */
    cpms[30] *= 2.679121853578248e+06; /*CH2OH */
    cpms[31] *= 2.594843774332970e+06; /*CH3OH */
    cpms[32] *= 2.075238117344846e+06; /*C3H4 */
    cpms[33] *= 2.128794675318557e+06; /*C3H3 */
    cpms[34] *= 2.024310196648431e+06; /*C3H5 */
    cpms[35] *= 1.975822022481736e+06; /*C3H6 */
    cpms[36] *= 1.885495703696447e+06; /*C3H8 */
    cpms[37] *= 1.929602378691293e+06; /*I-C3H7 */
    cpms[38] *= 1.929602378691293e+06; /*N-C3H7 */
}


/*Returns internal energy in mass units (Eq 30.) */
void CKUMS(double *T, int * iwrk, double * rwrk, double * ums)
{
    double tT = *T; /*temporary temperature */
    double tc[] = { log(tT), tT, tT*tT, tT*tT*tT, tT*tT*tT*tT }; /*temperature cache */
    double RT = 8.31451e+07*tT; /*R*T */
    speciesInternalEnergy(ums, tc);
    ums[0] *= RT/28.013400; /*N2 */
    ums[1] *= RT/39.948000; /*AR */
    ums[2] *= RT/1.007970; /*H */
    ums[3] *= RT/31.998800; /*O2 */
    ums[4] *= RT/17.007370; /*OH */
    ums[5] *= RT/15.999400; /*O */
    ums[6] *= RT/2.015940; /*H2 */
    ums[7] *= RT/18.015340; /*H2O */
    ums[8] *= RT/33.006770; /*HO2 */
    ums[9] *= RT/34.014740; /*H2O2 */
    ums[10] *= RT/28.010550; /*CO */
    ums[11] *= RT/44.009950; /*CO2 */
    ums[12] *= RT/29.018520; /*HCO */
    ums[13] *= RT/30.026490; /*CH2O */
    ums[14] *= RT/16.043030; /*CH4 */
    ums[15] *= RT/15.035060; /*CH3 */
    ums[16] *= RT/14.027090; /*T-CH2 */
    ums[17] *= RT/14.027090; /*S-CH2 */
    ums[18] *= RT/28.054180; /*C2H4 */
    ums[19] *= RT/31.034460; /*CH3O */
    ums[20] *= RT/29.062150; /*C2H5 */
    ums[21] *= RT/30.070120; /*C2H6 */
    ums[22] *= RT/13.019120; /*CH */
    ums[23] *= RT/26.038240; /*C2H2 */
    ums[24] *= RT/27.046210; /*C2H3 */
    ums[25] *= RT/43.045610; /*CH2CHO */
    ums[26] *= RT/44.053580; /*C2H4O */
    ums[27] *= RT/42.037640; /*CH2CO */
    ums[28] *= RT/41.029670; /*HCCO */
    ums[29] *= RT/25.030270; /*C2H */
    ums[30] *= RT/31.034460; /*CH2OH */
    ums[31] *= RT/32.042430; /*CH3OH */
    ums[32] *= RT/40.065330; /*C3H4 */
    ums[33] *= RT/39.057360; /*C3H3 */
    ums[34] *= RT/41.073300; /*C3H5 */
    ums[35] *= RT/42.081270; /*C3H6 */
    ums[36] *= RT/44.097210; /*C3H8 */
    ums[37] *= RT/43.089240; /*I-C3H7 */
    ums[38] *= RT/43.089240; /*N-C3H7 */
}


/*Returns enthalpy in mass units (Eq 27.) */
void CKHMS(double *T, int * iwrk, double * rwrk, double * hms)
{
    double tT = *T; /*temporary temperature */
    double tc[] = { log(tT), tT, tT*tT, tT*tT*tT, tT*tT*tT*tT }; /*temperature cache */
    double RT = 8.31451e+07*tT; /*R*T */
    speciesEnthalpy(hms, tc);
    hms[0] *= RT/28.013400; /*N2 */
    hms[1] *= RT/39.948000; /*AR */
    hms[2] *= RT/1.007970; /*H */
    hms[3] *= RT/31.998800; /*O2 */
    hms[4] *= RT/17.007370; /*OH */
    hms[5] *= RT/15.999400; /*O */
    hms[6] *= RT/2.015940; /*H2 */
    hms[7] *= RT/18.015340; /*H2O */
    hms[8] *= RT/33.006770; /*HO2 */
    hms[9] *= RT/34.014740; /*H2O2 */
    hms[10] *= RT/28.010550; /*CO */
    hms[11] *= RT/44.009950; /*CO2 */
    hms[12] *= RT/29.018520; /*HCO */
    hms[13] *= RT/30.026490; /*CH2O */
    hms[14] *= RT/16.043030; /*CH4 */
    hms[15] *= RT/15.035060; /*CH3 */
    hms[16] *= RT/14.027090; /*T-CH2 */
    hms[17] *= RT/14.027090; /*S-CH2 */
    hms[18] *= RT/28.054180; /*C2H4 */
    hms[19] *= RT/31.034460; /*CH3O */
    hms[20] *= RT/29.062150; /*C2H5 */
    hms[21] *= RT/30.070120; /*C2H6 */
    hms[22] *= RT/13.019120; /*CH */
    hms[23] *= RT/26.038240; /*C2H2 */
    hms[24] *= RT/27.046210; /*C2H3 */
    hms[25] *= RT/43.045610; /*CH2CHO */
    hms[26] *= RT/44.053580; /*C2H4O */
    hms[27] *= RT/42.037640; /*CH2CO */
    hms[28] *= RT/41.029670; /*HCCO */
    hms[29] *= RT/25.030270; /*C2H */
    hms[30] *= RT/31.034460; /*CH2OH */
    hms[31] *= RT/32.042430; /*CH3OH */
    hms[32] *= RT/40.065330; /*C3H4 */
    hms[33] *= RT/39.057360; /*C3H3 */
    hms[34] *= RT/41.073300; /*C3H5 */
    hms[35] *= RT/42.081270; /*C3H6 */
    hms[36] *= RT/44.097210; /*C3H8 */
    hms[37] *= RT/43.089240; /*I-C3H7 */
    hms[38] *= RT/43.089240; /*N-C3H7 */
}


/*Returns gibbs in mass units (Eq 31.) */
void CKGMS(double *T, int * iwrk, double * rwrk, double * gms)
{
    double tT = *T; /*temporary temperature */
    double tc[] = { log(tT), tT, tT*tT, tT*tT*tT, tT*tT*tT*tT }; /*temperature cache */
    double RT = 8.31451e+07*tT; /*R*T */
    gibbs(gms, tc);
    gms[0] *= RT/28.013400; /*N2 */
    gms[1] *= RT/39.948000; /*AR */
    gms[2] *= RT/1.007970; /*H */
    gms[3] *= RT/31.998800; /*O2 */
    gms[4] *= RT/17.007370; /*OH */
    gms[5] *= RT/15.999400; /*O */
    gms[6] *= RT/2.015940; /*H2 */
    gms[7] *= RT/18.015340; /*H2O */
    gms[8] *= RT/33.006770; /*HO2 */
    gms[9] *= RT/34.014740; /*H2O2 */
    gms[10] *= RT/28.010550; /*CO */
    gms[11] *= RT/44.009950; /*CO2 */
    gms[12] *= RT/29.018520; /*HCO */
    gms[13] *= RT/30.026490; /*CH2O */
    gms[14] *= RT/16.043030; /*CH4 */
    gms[15] *= RT/15.035060; /*CH3 */
    gms[16] *= RT/14.027090; /*T-CH2 */
    gms[17] *= RT/14.027090; /*S-CH2 */
    gms[18] *= RT/28.054180; /*C2H4 */
    gms[19] *= RT/31.034460; /*CH3O */
    gms[20] *= RT/29.062150; /*C2H5 */
    gms[21] *= RT/30.070120; /*C2H6 */
    gms[22] *= RT/13.019120; /*CH */
    gms[23] *= RT/26.038240; /*C2H2 */
    gms[24] *= RT/27.046210; /*C2H3 */
    gms[25] *= RT/43.045610; /*CH2CHO */
    gms[26] *= RT/44.053580; /*C2H4O */
    gms[27] *= RT/42.037640; /*CH2CO */
    gms[28] *= RT/41.029670; /*HCCO */
    gms[29] *= RT/25.030270; /*C2H */
    gms[30] *= RT/31.034460; /*CH2OH */
    gms[31] *= RT/32.042430; /*CH3OH */
    gms[32] *= RT/40.065330; /*C3H4 */
    gms[33] *= RT/39.057360; /*C3H3 */
    gms[34] *= RT/41.073300; /*C3H5 */
    gms[35] *= RT/42.081270; /*C3H6 */
    gms[36] *= RT/44.097210; /*C3H8 */
    gms[37] *= RT/43.089240; /*I-C3H7 */
    gms[38] *= RT/43.089240; /*N-C3H7 */
}


/*Returns helmholtz in mass units (Eq 32.) */
void CKAMS(double *T, int * iwrk, double * rwrk, double * ams)
{
    double tT = *T; /*temporary temperature */
    double tc[] = { log(tT), tT, tT*tT, tT*tT*tT, tT*tT*tT*tT }; /*temperature cache */
    double RT = 8.31451e+07*tT; /*R*T */
    helmholtz(ams, tc);
    ams[0] *= RT/28.013400; /*N2 */
    ams[1] *= RT/39.948000; /*AR */
    ams[2] *= RT/1.007970; /*H */
    ams[3] *= RT/31.998800; /*O2 */
    ams[4] *= RT/17.007370; /*OH */
    ams[5] *= RT/15.999400; /*O */
    ams[6] *= RT/2.015940; /*H2 */
    ams[7] *= RT/18.015340; /*H2O */
    ams[8] *= RT/33.006770; /*HO2 */
    ams[9] *= RT/34.014740; /*H2O2 */
    ams[10] *= RT/28.010550; /*CO */
    ams[11] *= RT/44.009950; /*CO2 */
    ams[12] *= RT/29.018520; /*HCO */
    ams[13] *= RT/30.026490; /*CH2O */
    ams[14] *= RT/16.043030; /*CH4 */
    ams[15] *= RT/15.035060; /*CH3 */
    ams[16] *= RT/14.027090; /*T-CH2 */
    ams[17] *= RT/14.027090; /*S-CH2 */
    ams[18] *= RT/28.054180; /*C2H4 */
    ams[19] *= RT/31.034460; /*CH3O */
    ams[20] *= RT/29.062150; /*C2H5 */
    ams[21] *= RT/30.070120; /*C2H6 */
    ams[22] *= RT/13.019120; /*CH */
    ams[23] *= RT/26.038240; /*C2H2 */
    ams[24] *= RT/27.046210; /*C2H3 */
    ams[25] *= RT/43.045610; /*CH2CHO */
    ams[26] *= RT/44.053580; /*C2H4O */
    ams[27] *= RT/42.037640; /*CH2CO */
    ams[28] *= RT/41.029670; /*HCCO */
    ams[29] *= RT/25.030270; /*C2H */
    ams[30] *= RT/31.034460; /*CH2OH */
    ams[31] *= RT/32.042430; /*CH3OH */
    ams[32] *= RT/40.065330; /*C3H4 */
    ams[33] *= RT/39.057360; /*C3H3 */
    ams[34] *= RT/41.073300; /*C3H5 */
    ams[35] *= RT/42.081270; /*C3H6 */
    ams[36] *= RT/44.097210; /*C3H8 */
    ams[37] *= RT/43.089240; /*I-C3H7 */
    ams[38] *= RT/43.089240; /*N-C3H7 */
}


/*Returns the entropies in mass units (Eq 28.) */
void CKSMS(double *T, int * iwrk, double * rwrk, double * sms)
{
    double tT = *T; /*temporary temperature */
    double tc[] = { log(tT), tT, tT*tT, tT*tT*tT, tT*tT*tT*tT }; /*temperature cache */
    speciesEntropy(sms, tc);
    /*multiply by R/molecularweight */
    sms[0] *= 2.968047434442088e+06; /*N2 */
    sms[1] *= 2.081333233203164e+06; /*AR */
    sms[2] *= 8.248767324424338e+07; /*H */
    sms[3] *= 2.598381814318037e+06; /*O2 */
    sms[4] *= 4.888768810227566e+06; /*OH */
    sms[5] *= 5.196763628636074e+06; /*O */
    sms[6] *= 4.124383662212169e+07; /*H2 */
    sms[7] *= 4.615239012974499e+06; /*H2O */
    sms[8] *= 2.519031701678171e+06; /*HO2 */
    sms[9] *= 2.444384405113783e+06; /*H2O2 */
    sms[10] *= 2.968349425484326e+06; /*CO */
    sms[11] *= 1.889234139098090e+06; /*CO2 */
    sms[12] *= 2.865242610581105e+06; /*HCO */
    sms[13] *= 2.769058254894261e+06; /*CH2O */
    sms[14] *= 5.182630712527496e+06; /*CH4 */
    sms[15] *= 5.530081023953346e+06; /*CH3 */
    sms[16] *= 5.927466067445207e+06; /*T-CH2 */
    sms[17] *= 5.927466067445207e+06; /*S-CH2 */
    sms[18] *= 2.963733033722604e+06; /*C2H4 */
    sms[19] *= 2.679121853578248e+06; /*CH3O */
    sms[20] *= 2.860941121011349e+06; /*C2H5 */
    sms[21] *= 2.765040511976673e+06; /*C2H6 */
    sms[22] *= 6.386384025955671e+06; /*CH */
    sms[23] *= 3.193192012977835e+06; /*C2H2 */
    sms[24] *= 3.074186734481467e+06; /*C2H3 */
    sms[25] *= 1.931558177477332e+06; /*CH2CHO */
    sms[26] *= 1.887363070152301e+06; /*C2H4O */
    sms[27] *= 1.977872687429646e+06; /*CH2CO */
    sms[28] *= 2.026462801187531e+06; /*HCCO */
    sms[29] *= 3.321781986370902e+06; /*C2H */
    sms[30] *= 2.679121853578248e+06; /*CH2OH */
    sms[31] *= 2.594843774332970e+06; /*CH3OH */
    sms[32] *= 2.075238117344846e+06; /*C3H4 */
    sms[33] *= 2.128794675318557e+06; /*C3H3 */
    sms[34] *= 2.024310196648431e+06; /*C3H5 */
    sms[35] *= 1.975822022481736e+06; /*C3H6 */
    sms[36] *= 1.885495703696447e+06; /*C3H8 */
    sms[37] *= 1.929602378691293e+06; /*I-C3H7 */
    sms[38] *= 1.929602378691293e+06; /*N-C3H7 */
}


/*Returns the mean specific heat at CP (Eq. 33) */
void CKCPBL(double *T, double *x, int * iwrk, double * rwrk, double * cpbl)
{
    int id; /*loop counter */
    double result = 0; 
    double tT = *T; /*temporary temperature */
    double tc[] = { log(tT), tT, tT*tT, tT*tT*tT, tT*tT*tT*tT }; /*temperature cache */
    double cpor[39]; /* temporary storage */
    cp_R(cpor, tc);

    /*perform dot product */
    for (id = 0; id < 39; ++id) {
        result += x[id]*cpor[id];
    }

    *cpbl = result * 8.31451e+07;
}


/*Returns the mean specific heat at CP (Eq. 34) */
void CKCPBS(double *T, double *y, int * iwrk, double * rwrk, double * cpbs)
{
    double result = 0; 
    double tT = *T; /*temporary temperature */
    double tc[] = { log(tT), tT, tT*tT, tT*tT*tT, tT*tT*tT*tT }; /*temperature cache */
    double cpor[39]; /* temporary storage */
    cp_R(cpor, tc);
    /*multiply by y/molecularweight */
    result += cpor[0]*y[0]/28.013400; /*N2 */
    result += cpor[1]*y[1]/39.948000; /*AR */
    result += cpor[2]*y[2]/1.007970; /*H */
    result += cpor[3]*y[3]/31.998800; /*O2 */
    result += cpor[4]*y[4]/17.007370; /*OH */
    result += cpor[5]*y[5]/15.999400; /*O */
    result += cpor[6]*y[6]/2.015940; /*H2 */
    result += cpor[7]*y[7]/18.015340; /*H2O */
    result += cpor[8]*y[8]/33.006770; /*HO2 */
    result += cpor[9]*y[9]/34.014740; /*H2O2 */
    result += cpor[10]*y[10]/28.010550; /*CO */
    result += cpor[11]*y[11]/44.009950; /*CO2 */
    result += cpor[12]*y[12]/29.018520; /*HCO */
    result += cpor[13]*y[13]/30.026490; /*CH2O */
    result += cpor[14]*y[14]/16.043030; /*CH4 */
    result += cpor[15]*y[15]/15.035060; /*CH3 */
    result += cpor[16]*y[16]/14.027090; /*T-CH2 */
    result += cpor[17]*y[17]/14.027090; /*S-CH2 */
    result += cpor[18]*y[18]/28.054180; /*C2H4 */
    result += cpor[19]*y[19]/31.034460; /*CH3O */
    result += cpor[20]*y[20]/29.062150; /*C2H5 */
    result += cpor[21]*y[21]/30.070120; /*C2H6 */
    result += cpor[22]*y[22]/13.019120; /*CH */
    result += cpor[23]*y[23]/26.038240; /*C2H2 */
    result += cpor[24]*y[24]/27.046210; /*C2H3 */
    result += cpor[25]*y[25]/43.045610; /*CH2CHO */
    result += cpor[26]*y[26]/44.053580; /*C2H4O */
    result += cpor[27]*y[27]/42.037640; /*CH2CO */
    result += cpor[28]*y[28]/41.029670; /*HCCO */
    result += cpor[29]*y[29]/25.030270; /*C2H */
    result += cpor[30]*y[30]/31.034460; /*CH2OH */
    result += cpor[31]*y[31]/32.042430; /*CH3OH */
    result += cpor[32]*y[32]/40.065330; /*C3H4 */
    result += cpor[33]*y[33]/39.057360; /*C3H3 */
    result += cpor[34]*y[34]/41.073300; /*C3H5 */
    result += cpor[35]*y[35]/42.081270; /*C3H6 */
    result += cpor[36]*y[36]/44.097210; /*C3H8 */
    result += cpor[37]*y[37]/43.089240; /*I-C3H7 */
    result += cpor[38]*y[38]/43.089240; /*N-C3H7 */

    *cpbs = result * 8.31451e+07;
}


/*Returns the mean specific heat at CV (Eq. 35) */
void CKCVBL(double *T, double *x, int * iwrk, double * rwrk, double * cvbl)
{
    int id; /*loop counter */
    double result = 0; 
    double tT = *T; /*temporary temperature */
    double tc[] = { log(tT), tT, tT*tT, tT*tT*tT, tT*tT*tT*tT }; /*temperature cache */
    double cvor[39]; /* temporary storage */
    cv_R(cvor, tc);

    /*perform dot product */
    for (id = 0; id < 39; ++id) {
        result += x[id]*cvor[id];
    }

    *cvbl = result * 8.31451e+07;
}


/*Returns the mean specific heat at CV (Eq. 36) */
void CKCVBS(double *T, double *y, int * iwrk, double * rwrk, double * cvbs)
{
    double result = 0; 
    double tT = *T; /*temporary temperature */
    double tc[] = { log(tT), tT, tT*tT, tT*tT*tT, tT*tT*tT*tT }; /*temperature cache */
    double cvor[39]; /* temporary storage */
    cv_R(cvor, tc);
    /*multiply by y/molecularweight */
    result += cvor[0]*y[0]/28.013400; /*N2 */
    result += cvor[1]*y[1]/39.948000; /*AR */
    result += cvor[2]*y[2]/1.007970; /*H */
    result += cvor[3]*y[3]/31.998800; /*O2 */
    result += cvor[4]*y[4]/17.007370; /*OH */
    result += cvor[5]*y[5]/15.999400; /*O */
    result += cvor[6]*y[6]/2.015940; /*H2 */
    result += cvor[7]*y[7]/18.015340; /*H2O */
    result += cvor[8]*y[8]/33.006770; /*HO2 */
    result += cvor[9]*y[9]/34.014740; /*H2O2 */
    result += cvor[10]*y[10]/28.010550; /*CO */
    result += cvor[11]*y[11]/44.009950; /*CO2 */
    result += cvor[12]*y[12]/29.018520; /*HCO */
    result += cvor[13]*y[13]/30.026490; /*CH2O */
    result += cvor[14]*y[14]/16.043030; /*CH4 */
    result += cvor[15]*y[15]/15.035060; /*CH3 */
    result += cvor[16]*y[16]/14.027090; /*T-CH2 */
    result += cvor[17]*y[17]/14.027090; /*S-CH2 */
    result += cvor[18]*y[18]/28.054180; /*C2H4 */
    result += cvor[19]*y[19]/31.034460; /*CH3O */
    result += cvor[20]*y[20]/29.062150; /*C2H5 */
    result += cvor[21]*y[21]/30.070120; /*C2H6 */
    result += cvor[22]*y[22]/13.019120; /*CH */
    result += cvor[23]*y[23]/26.038240; /*C2H2 */
    result += cvor[24]*y[24]/27.046210; /*C2H3 */
    result += cvor[25]*y[25]/43.045610; /*CH2CHO */
    result += cvor[26]*y[26]/44.053580; /*C2H4O */
    result += cvor[27]*y[27]/42.037640; /*CH2CO */
    result += cvor[28]*y[28]/41.029670; /*HCCO */
    result += cvor[29]*y[29]/25.030270; /*C2H */
    result += cvor[30]*y[30]/31.034460; /*CH2OH */
    result += cvor[31]*y[31]/32.042430; /*CH3OH */
    result += cvor[32]*y[32]/40.065330; /*C3H4 */
    result += cvor[33]*y[33]/39.057360; /*C3H3 */
    result += cvor[34]*y[34]/41.073300; /*C3H5 */
    result += cvor[35]*y[35]/42.081270; /*C3H6 */
    result += cvor[36]*y[36]/44.097210; /*C3H8 */
    result += cvor[37]*y[37]/43.089240; /*I-C3H7 */
    result += cvor[38]*y[38]/43.089240; /*N-C3H7 */

    *cvbs = result * 8.31451e+07;
}


/*Returns the mean enthalpy of the mixture in molar units */
void CKHBML(double *T, double *x, int * iwrk, double * rwrk, double * hbml)
{
    int id; /*loop counter */
    double result = 0; 
    double tT = *T; /*temporary temperature */
    double tc[] = { log(tT), tT, tT*tT, tT*tT*tT, tT*tT*tT*tT }; /*temperature cache */
    double hml[39]; /* temporary storage */
    double RT = 8.31451e+07*tT; /*R*T */
    speciesEnthalpy(hml, tc);

    /*perform dot product */
    for (id = 0; id < 39; ++id) {
        result += x[id]*hml[id];
    }

    *hbml = result * RT;
}


/*Returns mean enthalpy of mixture in mass units */
void CKHBMS(double *T, double *y, int * iwrk, double * rwrk, double * hbms)
{
    double result = 0;
    double tT = *T; /*temporary temperature */
    double tc[] = { log(tT), tT, tT*tT, tT*tT*tT, tT*tT*tT*tT }; /*temperature cache */
    double hml[39]; /* temporary storage */
    double RT = 8.31451e+07*tT; /*R*T */
    speciesEnthalpy(hml, tc);
    /*perform dot product + scaling by wt */
    result += y[0]*hml[0]/28.013400; /*N2 */
    result += y[1]*hml[1]/39.948000; /*AR */
    result += y[2]*hml[2]/1.007970; /*H */
    result += y[3]*hml[3]/31.998800; /*O2 */
    result += y[4]*hml[4]/17.007370; /*OH */
    result += y[5]*hml[5]/15.999400; /*O */
    result += y[6]*hml[6]/2.015940; /*H2 */
    result += y[7]*hml[7]/18.015340; /*H2O */
    result += y[8]*hml[8]/33.006770; /*HO2 */
    result += y[9]*hml[9]/34.014740; /*H2O2 */
    result += y[10]*hml[10]/28.010550; /*CO */
    result += y[11]*hml[11]/44.009950; /*CO2 */
    result += y[12]*hml[12]/29.018520; /*HCO */
    result += y[13]*hml[13]/30.026490; /*CH2O */
    result += y[14]*hml[14]/16.043030; /*CH4 */
    result += y[15]*hml[15]/15.035060; /*CH3 */
    result += y[16]*hml[16]/14.027090; /*T-CH2 */
    result += y[17]*hml[17]/14.027090; /*S-CH2 */
    result += y[18]*hml[18]/28.054180; /*C2H4 */
    result += y[19]*hml[19]/31.034460; /*CH3O */
    result += y[20]*hml[20]/29.062150; /*C2H5 */
    result += y[21]*hml[21]/30.070120; /*C2H6 */
    result += y[22]*hml[22]/13.019120; /*CH */
    result += y[23]*hml[23]/26.038240; /*C2H2 */
    result += y[24]*hml[24]/27.046210; /*C2H3 */
    result += y[25]*hml[25]/43.045610; /*CH2CHO */
    result += y[26]*hml[26]/44.053580; /*C2H4O */
    result += y[27]*hml[27]/42.037640; /*CH2CO */
    result += y[28]*hml[28]/41.029670; /*HCCO */
    result += y[29]*hml[29]/25.030270; /*C2H */
    result += y[30]*hml[30]/31.034460; /*CH2OH */
    result += y[31]*hml[31]/32.042430; /*CH3OH */
    result += y[32]*hml[32]/40.065330; /*C3H4 */
    result += y[33]*hml[33]/39.057360; /*C3H3 */
    result += y[34]*hml[34]/41.073300; /*C3H5 */
    result += y[35]*hml[35]/42.081270; /*C3H6 */
    result += y[36]*hml[36]/44.097210; /*C3H8 */
    result += y[37]*hml[37]/43.089240; /*I-C3H7 */
    result += y[38]*hml[38]/43.089240; /*N-C3H7 */

    *hbms = result * RT;
}


/*get mean internal energy in molar units */
void CKUBML(double *T, double *x, int * iwrk, double * rwrk, double * ubml)
{
    int id; /*loop counter */
    double result = 0; 
    double tT = *T; /*temporary temperature */
    double tc[] = { log(tT), tT, tT*tT, tT*tT*tT, tT*tT*tT*tT }; /*temperature cache */
    double uml[39]; /* temporary energy array */
    double RT = 8.31451e+07*tT; /*R*T */
    speciesInternalEnergy(uml, tc);

    /*perform dot product */
    for (id = 0; id < 39; ++id) {
        result += x[id]*uml[id];
    }

    *ubml = result * RT;
}


/*get mean internal energy in mass units */
void CKUBMS(double *T, double *y, int * iwrk, double * rwrk, double * ubms)
{
    double result = 0;
    double tT = *T; /*temporary temperature */
    double tc[] = { log(tT), tT, tT*tT, tT*tT*tT, tT*tT*tT*tT }; /*temperature cache */
    double ums[39]; /* temporary energy array */
    double RT = 8.31451e+07*tT; /*R*T */
    speciesInternalEnergy(ums, tc);
    /*perform dot product + scaling by wt */
    result += y[0]*ums[0]/28.013400; /*N2 */
    result += y[1]*ums[1]/39.948000; /*AR */
    result += y[2]*ums[2]/1.007970; /*H */
    result += y[3]*ums[3]/31.998800; /*O2 */
    result += y[4]*ums[4]/17.007370; /*OH */
    result += y[5]*ums[5]/15.999400; /*O */
    result += y[6]*ums[6]/2.015940; /*H2 */
    result += y[7]*ums[7]/18.015340; /*H2O */
    result += y[8]*ums[8]/33.006770; /*HO2 */
    result += y[9]*ums[9]/34.014740; /*H2O2 */
    result += y[10]*ums[10]/28.010550; /*CO */
    result += y[11]*ums[11]/44.009950; /*CO2 */
    result += y[12]*ums[12]/29.018520; /*HCO */
    result += y[13]*ums[13]/30.026490; /*CH2O */
    result += y[14]*ums[14]/16.043030; /*CH4 */
    result += y[15]*ums[15]/15.035060; /*CH3 */
    result += y[16]*ums[16]/14.027090; /*T-CH2 */
    result += y[17]*ums[17]/14.027090; /*S-CH2 */
    result += y[18]*ums[18]/28.054180; /*C2H4 */
    result += y[19]*ums[19]/31.034460; /*CH3O */
    result += y[20]*ums[20]/29.062150; /*C2H5 */
    result += y[21]*ums[21]/30.070120; /*C2H6 */
    result += y[22]*ums[22]/13.019120; /*CH */
    result += y[23]*ums[23]/26.038240; /*C2H2 */
    result += y[24]*ums[24]/27.046210; /*C2H3 */
    result += y[25]*ums[25]/43.045610; /*CH2CHO */
    result += y[26]*ums[26]/44.053580; /*C2H4O */
    result += y[27]*ums[27]/42.037640; /*CH2CO */
    result += y[28]*ums[28]/41.029670; /*HCCO */
    result += y[29]*ums[29]/25.030270; /*C2H */
    result += y[30]*ums[30]/31.034460; /*CH2OH */
    result += y[31]*ums[31]/32.042430; /*CH3OH */
    result += y[32]*ums[32]/40.065330; /*C3H4 */
    result += y[33]*ums[33]/39.057360; /*C3H3 */
    result += y[34]*ums[34]/41.073300; /*C3H5 */
    result += y[35]*ums[35]/42.081270; /*C3H6 */
    result += y[36]*ums[36]/44.097210; /*C3H8 */
    result += y[37]*ums[37]/43.089240; /*I-C3H7 */
    result += y[38]*ums[38]/43.089240; /*N-C3H7 */

    *ubms = result * RT;
}


/*get mixture entropy in molar units */
void CKSBML(double *P, double *T, double *x, int * iwrk, double * rwrk, double * sbml)
{
    int id; /*loop counter */
    double result = 0; 
    /*Log of normalized pressure in cgs units dynes/cm^2 by Patm */
    double logPratio = log ( *P / 1013250.0 ); 
    double tT = *T; /*temporary temperature */
    double tc[] = { log(tT), tT, tT*tT, tT*tT*tT, tT*tT*tT*tT }; /*temperature cache */
    double sor[39]; /* temporary storage */
    speciesEntropy(sor, tc);

    /*Compute Eq 42 */
    for (id = 0; id < 39; ++id) {
        result += x[id]*(sor[id]-log((x[id]+1e-100))-logPratio);
    }

    *sbml = result * 8.31451e+07;
}


/*get mixture entropy in mass units */
void CKSBMS(double *P, double *T, double *y, int * iwrk, double * rwrk, double * sbms)
{
    double result = 0; 
    /*Log of normalized pressure in cgs units dynes/cm^2 by Patm */
    double logPratio = log ( *P / 1013250.0 ); 
    double tT = *T; /*temporary temperature */
    double tc[] = { log(tT), tT, tT*tT, tT*tT*tT, tT*tT*tT*tT }; /*temperature cache */
    double sor[39]; /* temporary storage */
    double x[39]; /* need a ytx conversion */
    double YOW = 0; /*See Eq 4, 6 in CK Manual */
    /*Compute inverse of mean molecular wt first */
    YOW += y[0]/28.013400; /*N2 */
    YOW += y[1]/39.948000; /*AR */
    YOW += y[2]/1.007970; /*H */
    YOW += y[3]/31.998800; /*O2 */
    YOW += y[4]/17.007370; /*OH */
    YOW += y[5]/15.999400; /*O */
    YOW += y[6]/2.015940; /*H2 */
    YOW += y[7]/18.015340; /*H2O */
    YOW += y[8]/33.006770; /*HO2 */
    YOW += y[9]/34.014740; /*H2O2 */
    YOW += y[10]/28.010550; /*CO */
    YOW += y[11]/44.009950; /*CO2 */
    YOW += y[12]/29.018520; /*HCO */
    YOW += y[13]/30.026490; /*CH2O */
    YOW += y[14]/16.043030; /*CH4 */
    YOW += y[15]/15.035060; /*CH3 */
    YOW += y[16]/14.027090; /*T-CH2 */
    YOW += y[17]/14.027090; /*S-CH2 */
    YOW += y[18]/28.054180; /*C2H4 */
    YOW += y[19]/31.034460; /*CH3O */
    YOW += y[20]/29.062150; /*C2H5 */
    YOW += y[21]/30.070120; /*C2H6 */
    YOW += y[22]/13.019120; /*CH */
    YOW += y[23]/26.038240; /*C2H2 */
    YOW += y[24]/27.046210; /*C2H3 */
    YOW += y[25]/43.045610; /*CH2CHO */
    YOW += y[26]/44.053580; /*C2H4O */
    YOW += y[27]/42.037640; /*CH2CO */
    YOW += y[28]/41.029670; /*HCCO */
    YOW += y[29]/25.030270; /*C2H */
    YOW += y[30]/31.034460; /*CH2OH */
    YOW += y[31]/32.042430; /*CH3OH */
    YOW += y[32]/40.065330; /*C3H4 */
    YOW += y[33]/39.057360; /*C3H3 */
    YOW += y[34]/41.073300; /*C3H5 */
    YOW += y[35]/42.081270; /*C3H6 */
    YOW += y[36]/44.097210; /*C3H8 */
    YOW += y[37]/43.089240; /*I-C3H7 */
    YOW += y[38]/43.089240; /*N-C3H7 */
    /*Now compute y to x conversion */
    x[0] = y[0]/(28.013400*YOW); 
    x[1] = y[1]/(39.948000*YOW); 
    x[2] = y[2]/(1.007970*YOW); 
    x[3] = y[3]/(31.998800*YOW); 
    x[4] = y[4]/(17.007370*YOW); 
    x[5] = y[5]/(15.999400*YOW); 
    x[6] = y[6]/(2.015940*YOW); 
    x[7] = y[7]/(18.015340*YOW); 
    x[8] = y[8]/(33.006770*YOW); 
    x[9] = y[9]/(34.014740*YOW); 
    x[10] = y[10]/(28.010550*YOW); 
    x[11] = y[11]/(44.009950*YOW); 
    x[12] = y[12]/(29.018520*YOW); 
    x[13] = y[13]/(30.026490*YOW); 
    x[14] = y[14]/(16.043030*YOW); 
    x[15] = y[15]/(15.035060*YOW); 
    x[16] = y[16]/(14.027090*YOW); 
    x[17] = y[17]/(14.027090*YOW); 
    x[18] = y[18]/(28.054180*YOW); 
    x[19] = y[19]/(31.034460*YOW); 
    x[20] = y[20]/(29.062150*YOW); 
    x[21] = y[21]/(30.070120*YOW); 
    x[22] = y[22]/(13.019120*YOW); 
    x[23] = y[23]/(26.038240*YOW); 
    x[24] = y[24]/(27.046210*YOW); 
    x[25] = y[25]/(43.045610*YOW); 
    x[26] = y[26]/(44.053580*YOW); 
    x[27] = y[27]/(42.037640*YOW); 
    x[28] = y[28]/(41.029670*YOW); 
    x[29] = y[29]/(25.030270*YOW); 
    x[30] = y[30]/(31.034460*YOW); 
    x[31] = y[31]/(32.042430*YOW); 
    x[32] = y[32]/(40.065330*YOW); 
    x[33] = y[33]/(39.057360*YOW); 
    x[34] = y[34]/(41.073300*YOW); 
    x[35] = y[35]/(42.081270*YOW); 
    x[36] = y[36]/(44.097210*YOW); 
    x[37] = y[37]/(43.089240*YOW); 
    x[38] = y[38]/(43.089240*YOW); 
    speciesEntropy(sor, tc);
    /*Perform computation in Eq 42 and 43 */
    result += x[0]*(sor[0]-log((x[0]+1e-100))-logPratio);
    result += x[1]*(sor[1]-log((x[1]+1e-100))-logPratio);
    result += x[2]*(sor[2]-log((x[2]+1e-100))-logPratio);
    result += x[3]*(sor[3]-log((x[3]+1e-100))-logPratio);
    result += x[4]*(sor[4]-log((x[4]+1e-100))-logPratio);
    result += x[5]*(sor[5]-log((x[5]+1e-100))-logPratio);
    result += x[6]*(sor[6]-log((x[6]+1e-100))-logPratio);
    result += x[7]*(sor[7]-log((x[7]+1e-100))-logPratio);
    result += x[8]*(sor[8]-log((x[8]+1e-100))-logPratio);
    result += x[9]*(sor[9]-log((x[9]+1e-100))-logPratio);
    result += x[10]*(sor[10]-log((x[10]+1e-100))-logPratio);
    result += x[11]*(sor[11]-log((x[11]+1e-100))-logPratio);
    result += x[12]*(sor[12]-log((x[12]+1e-100))-logPratio);
    result += x[13]*(sor[13]-log((x[13]+1e-100))-logPratio);
    result += x[14]*(sor[14]-log((x[14]+1e-100))-logPratio);
    result += x[15]*(sor[15]-log((x[15]+1e-100))-logPratio);
    result += x[16]*(sor[16]-log((x[16]+1e-100))-logPratio);
    result += x[17]*(sor[17]-log((x[17]+1e-100))-logPratio);
    result += x[18]*(sor[18]-log((x[18]+1e-100))-logPratio);
    result += x[19]*(sor[19]-log((x[19]+1e-100))-logPratio);
    result += x[20]*(sor[20]-log((x[20]+1e-100))-logPratio);
    result += x[21]*(sor[21]-log((x[21]+1e-100))-logPratio);
    result += x[22]*(sor[22]-log((x[22]+1e-100))-logPratio);
    result += x[23]*(sor[23]-log((x[23]+1e-100))-logPratio);
    result += x[24]*(sor[24]-log((x[24]+1e-100))-logPratio);
    result += x[25]*(sor[25]-log((x[25]+1e-100))-logPratio);
    result += x[26]*(sor[26]-log((x[26]+1e-100))-logPratio);
    result += x[27]*(sor[27]-log((x[27]+1e-100))-logPratio);
    result += x[28]*(sor[28]-log((x[28]+1e-100))-logPratio);
    result += x[29]*(sor[29]-log((x[29]+1e-100))-logPratio);
    result += x[30]*(sor[30]-log((x[30]+1e-100))-logPratio);
    result += x[31]*(sor[31]-log((x[31]+1e-100))-logPratio);
    result += x[32]*(sor[32]-log((x[32]+1e-100))-logPratio);
    result += x[33]*(sor[33]-log((x[33]+1e-100))-logPratio);
    result += x[34]*(sor[34]-log((x[34]+1e-100))-logPratio);
    result += x[35]*(sor[35]-log((x[35]+1e-100))-logPratio);
    result += x[36]*(sor[36]-log((x[36]+1e-100))-logPratio);
    result += x[37]*(sor[37]-log((x[37]+1e-100))-logPratio);
    result += x[38]*(sor[38]-log((x[38]+1e-100))-logPratio);
    /*Scale by R/W */
    *sbms = result * 8.31451e+07 * YOW;
}


/*Returns mean gibbs free energy in molar units */
void CKGBML(double *P, double *T, double *x, int * iwrk, double * rwrk, double * gbml)
{
    int id; /*loop counter */
    double result = 0; 
    /*Log of normalized pressure in cgs units dynes/cm^2 by Patm */
    double logPratio = log ( *P / 1013250.0 ); 
    double tT = *T; /*temporary temperature */
    double tc[] = { log(tT), tT, tT*tT, tT*tT*tT, tT*tT*tT*tT }; /*temperature cache */
    double RT = 8.31451e+07*tT; /*R*T */
    double gort[39]; /* temporary storage */
    /*Compute g/RT */
    gibbs(gort, tc);

    /*Compute Eq 44 */
    for (id = 0; id < 39; ++id) {
        result += x[id]*(gort[id]+log((x[id]+1e-100))+logPratio);
    }

    *gbml = result * RT;
}


/*Returns mixture gibbs free energy in mass units */
void CKGBMS(double *P, double *T, double *y, int * iwrk, double * rwrk, double * gbms)
{
    double result = 0; 
    /*Log of normalized pressure in cgs units dynes/cm^2 by Patm */
    double logPratio = log ( *P / 1013250.0 ); 
    double tT = *T; /*temporary temperature */
    double tc[] = { log(tT), tT, tT*tT, tT*tT*tT, tT*tT*tT*tT }; /*temperature cache */
    double RT = 8.31451e+07*tT; /*R*T */
    double gort[39]; /* temporary storage */
    double x[39]; /* need a ytx conversion */
    double YOW = 0; /*To hold 1/molecularweight */
    /*Compute inverse of mean molecular wt first */
    YOW += y[0]/28.013400; /*N2 */
    YOW += y[1]/39.948000; /*AR */
    YOW += y[2]/1.007970; /*H */
    YOW += y[3]/31.998800; /*O2 */
    YOW += y[4]/17.007370; /*OH */
    YOW += y[5]/15.999400; /*O */
    YOW += y[6]/2.015940; /*H2 */
    YOW += y[7]/18.015340; /*H2O */
    YOW += y[8]/33.006770; /*HO2 */
    YOW += y[9]/34.014740; /*H2O2 */
    YOW += y[10]/28.010550; /*CO */
    YOW += y[11]/44.009950; /*CO2 */
    YOW += y[12]/29.018520; /*HCO */
    YOW += y[13]/30.026490; /*CH2O */
    YOW += y[14]/16.043030; /*CH4 */
    YOW += y[15]/15.035060; /*CH3 */
    YOW += y[16]/14.027090; /*T-CH2 */
    YOW += y[17]/14.027090; /*S-CH2 */
    YOW += y[18]/28.054180; /*C2H4 */
    YOW += y[19]/31.034460; /*CH3O */
    YOW += y[20]/29.062150; /*C2H5 */
    YOW += y[21]/30.070120; /*C2H6 */
    YOW += y[22]/13.019120; /*CH */
    YOW += y[23]/26.038240; /*C2H2 */
    YOW += y[24]/27.046210; /*C2H3 */
    YOW += y[25]/43.045610; /*CH2CHO */
    YOW += y[26]/44.053580; /*C2H4O */
    YOW += y[27]/42.037640; /*CH2CO */
    YOW += y[28]/41.029670; /*HCCO */
    YOW += y[29]/25.030270; /*C2H */
    YOW += y[30]/31.034460; /*CH2OH */
    YOW += y[31]/32.042430; /*CH3OH */
    YOW += y[32]/40.065330; /*C3H4 */
    YOW += y[33]/39.057360; /*C3H3 */
    YOW += y[34]/41.073300; /*C3H5 */
    YOW += y[35]/42.081270; /*C3H6 */
    YOW += y[36]/44.097210; /*C3H8 */
    YOW += y[37]/43.089240; /*I-C3H7 */
    YOW += y[38]/43.089240; /*N-C3H7 */
    /*Now compute y to x conversion */
    x[0] = y[0]/(28.013400*YOW); 
    x[1] = y[1]/(39.948000*YOW); 
    x[2] = y[2]/(1.007970*YOW); 
    x[3] = y[3]/(31.998800*YOW); 
    x[4] = y[4]/(17.007370*YOW); 
    x[5] = y[5]/(15.999400*YOW); 
    x[6] = y[6]/(2.015940*YOW); 
    x[7] = y[7]/(18.015340*YOW); 
    x[8] = y[8]/(33.006770*YOW); 
    x[9] = y[9]/(34.014740*YOW); 
    x[10] = y[10]/(28.010550*YOW); 
    x[11] = y[11]/(44.009950*YOW); 
    x[12] = y[12]/(29.018520*YOW); 
    x[13] = y[13]/(30.026490*YOW); 
    x[14] = y[14]/(16.043030*YOW); 
    x[15] = y[15]/(15.035060*YOW); 
    x[16] = y[16]/(14.027090*YOW); 
    x[17] = y[17]/(14.027090*YOW); 
    x[18] = y[18]/(28.054180*YOW); 
    x[19] = y[19]/(31.034460*YOW); 
    x[20] = y[20]/(29.062150*YOW); 
    x[21] = y[21]/(30.070120*YOW); 
    x[22] = y[22]/(13.019120*YOW); 
    x[23] = y[23]/(26.038240*YOW); 
    x[24] = y[24]/(27.046210*YOW); 
    x[25] = y[25]/(43.045610*YOW); 
    x[26] = y[26]/(44.053580*YOW); 
    x[27] = y[27]/(42.037640*YOW); 
    x[28] = y[28]/(41.029670*YOW); 
    x[29] = y[29]/(25.030270*YOW); 
    x[30] = y[30]/(31.034460*YOW); 
    x[31] = y[31]/(32.042430*YOW); 
    x[32] = y[32]/(40.065330*YOW); 
    x[33] = y[33]/(39.057360*YOW); 
    x[34] = y[34]/(41.073300*YOW); 
    x[35] = y[35]/(42.081270*YOW); 
    x[36] = y[36]/(44.097210*YOW); 
    x[37] = y[37]/(43.089240*YOW); 
    x[38] = y[38]/(43.089240*YOW); 
    gibbs(gort, tc);
    /*Perform computation in Eq 44 */
    result += x[0]*(gort[0]+log((x[0]+1e-100))+logPratio);
    result += x[1]*(gort[1]+log((x[1]+1e-100))+logPratio);
    result += x[2]*(gort[2]+log((x[2]+1e-100))+logPratio);
    result += x[3]*(gort[3]+log((x[3]+1e-100))+logPratio);
    result += x[4]*(gort[4]+log((x[4]+1e-100))+logPratio);
    result += x[5]*(gort[5]+log((x[5]+1e-100))+logPratio);
    result += x[6]*(gort[6]+log((x[6]+1e-100))+logPratio);
    result += x[7]*(gort[7]+log((x[7]+1e-100))+logPratio);
    result += x[8]*(gort[8]+log((x[8]+1e-100))+logPratio);
    result += x[9]*(gort[9]+log((x[9]+1e-100))+logPratio);
    result += x[10]*(gort[10]+log((x[10]+1e-100))+logPratio);
    result += x[11]*(gort[11]+log((x[11]+1e-100))+logPratio);
    result += x[12]*(gort[12]+log((x[12]+1e-100))+logPratio);
    result += x[13]*(gort[13]+log((x[13]+1e-100))+logPratio);
    result += x[14]*(gort[14]+log((x[14]+1e-100))+logPratio);
    result += x[15]*(gort[15]+log((x[15]+1e-100))+logPratio);
    result += x[16]*(gort[16]+log((x[16]+1e-100))+logPratio);
    result += x[17]*(gort[17]+log((x[17]+1e-100))+logPratio);
    result += x[18]*(gort[18]+log((x[18]+1e-100))+logPratio);
    result += x[19]*(gort[19]+log((x[19]+1e-100))+logPratio);
    result += x[20]*(gort[20]+log((x[20]+1e-100))+logPratio);
    result += x[21]*(gort[21]+log((x[21]+1e-100))+logPratio);
    result += x[22]*(gort[22]+log((x[22]+1e-100))+logPratio);
    result += x[23]*(gort[23]+log((x[23]+1e-100))+logPratio);
    result += x[24]*(gort[24]+log((x[24]+1e-100))+logPratio);
    result += x[25]*(gort[25]+log((x[25]+1e-100))+logPratio);
    result += x[26]*(gort[26]+log((x[26]+1e-100))+logPratio);
    result += x[27]*(gort[27]+log((x[27]+1e-100))+logPratio);
    result += x[28]*(gort[28]+log((x[28]+1e-100))+logPratio);
    result += x[29]*(gort[29]+log((x[29]+1e-100))+logPratio);
    result += x[30]*(gort[30]+log((x[30]+1e-100))+logPratio);
    result += x[31]*(gort[31]+log((x[31]+1e-100))+logPratio);
    result += x[32]*(gort[32]+log((x[32]+1e-100))+logPratio);
    result += x[33]*(gort[33]+log((x[33]+1e-100))+logPratio);
    result += x[34]*(gort[34]+log((x[34]+1e-100))+logPratio);
    result += x[35]*(gort[35]+log((x[35]+1e-100))+logPratio);
    result += x[36]*(gort[36]+log((x[36]+1e-100))+logPratio);
    result += x[37]*(gort[37]+log((x[37]+1e-100))+logPratio);
    result += x[38]*(gort[38]+log((x[38]+1e-100))+logPratio);
    /*Scale by RT/W */
    *gbms = result * RT * YOW;
}


/*Returns mean helmholtz free energy in molar units */
void CKABML(double *P, double *T, double *x, int * iwrk, double * rwrk, double * abml)
{
    int id; /*loop counter */
    double result = 0; 
    /*Log of normalized pressure in cgs units dynes/cm^2 by Patm */
    double logPratio = log ( *P / 1013250.0 ); 
    double tT = *T; /*temporary temperature */
    double tc[] = { log(tT), tT, tT*tT, tT*tT*tT, tT*tT*tT*tT }; /*temperature cache */
    double RT = 8.31451e+07*tT; /*R*T */
    double aort[39]; /* temporary storage */
    /*Compute g/RT */
    helmholtz(aort, tc);

    /*Compute Eq 44 */
    for (id = 0; id < 39; ++id) {
        result += x[id]*(aort[id]+log((x[id]+1e-100))+logPratio);
    }

    *abml = result * RT;
}


/*Returns mixture helmholtz free energy in mass units */
void CKABMS(double *P, double *T, double *y, int * iwrk, double * rwrk, double * abms)
{
    double result = 0; 
    /*Log of normalized pressure in cgs units dynes/cm^2 by Patm */
    double logPratio = log ( *P / 1013250.0 ); 
    double tT = *T; /*temporary temperature */
    double tc[] = { log(tT), tT, tT*tT, tT*tT*tT, tT*tT*tT*tT }; /*temperature cache */
    double RT = 8.31451e+07*tT; /*R*T */
    double aort[39]; /* temporary storage */
    double x[39]; /* need a ytx conversion */
    double YOW = 0; /*To hold 1/molecularweight */
    /*Compute inverse of mean molecular wt first */
    YOW += y[0]/28.013400; /*N2 */
    YOW += y[1]/39.948000; /*AR */
    YOW += y[2]/1.007970; /*H */
    YOW += y[3]/31.998800; /*O2 */
    YOW += y[4]/17.007370; /*OH */
    YOW += y[5]/15.999400; /*O */
    YOW += y[6]/2.015940; /*H2 */
    YOW += y[7]/18.015340; /*H2O */
    YOW += y[8]/33.006770; /*HO2 */
    YOW += y[9]/34.014740; /*H2O2 */
    YOW += y[10]/28.010550; /*CO */
    YOW += y[11]/44.009950; /*CO2 */
    YOW += y[12]/29.018520; /*HCO */
    YOW += y[13]/30.026490; /*CH2O */
    YOW += y[14]/16.043030; /*CH4 */
    YOW += y[15]/15.035060; /*CH3 */
    YOW += y[16]/14.027090; /*T-CH2 */
    YOW += y[17]/14.027090; /*S-CH2 */
    YOW += y[18]/28.054180; /*C2H4 */
    YOW += y[19]/31.034460; /*CH3O */
    YOW += y[20]/29.062150; /*C2H5 */
    YOW += y[21]/30.070120; /*C2H6 */
    YOW += y[22]/13.019120; /*CH */
    YOW += y[23]/26.038240; /*C2H2 */
    YOW += y[24]/27.046210; /*C2H3 */
    YOW += y[25]/43.045610; /*CH2CHO */
    YOW += y[26]/44.053580; /*C2H4O */
    YOW += y[27]/42.037640; /*CH2CO */
    YOW += y[28]/41.029670; /*HCCO */
    YOW += y[29]/25.030270; /*C2H */
    YOW += y[30]/31.034460; /*CH2OH */
    YOW += y[31]/32.042430; /*CH3OH */
    YOW += y[32]/40.065330; /*C3H4 */
    YOW += y[33]/39.057360; /*C3H3 */
    YOW += y[34]/41.073300; /*C3H5 */
    YOW += y[35]/42.081270; /*C3H6 */
    YOW += y[36]/44.097210; /*C3H8 */
    YOW += y[37]/43.089240; /*I-C3H7 */
    YOW += y[38]/43.089240; /*N-C3H7 */
    /*Now compute y to x conversion */
    x[0] = y[0]/(28.013400*YOW); 
    x[1] = y[1]/(39.948000*YOW); 
    x[2] = y[2]/(1.007970*YOW); 
    x[3] = y[3]/(31.998800*YOW); 
    x[4] = y[4]/(17.007370*YOW); 
    x[5] = y[5]/(15.999400*YOW); 
    x[6] = y[6]/(2.015940*YOW); 
    x[7] = y[7]/(18.015340*YOW); 
    x[8] = y[8]/(33.006770*YOW); 
    x[9] = y[9]/(34.014740*YOW); 
    x[10] = y[10]/(28.010550*YOW); 
    x[11] = y[11]/(44.009950*YOW); 
    x[12] = y[12]/(29.018520*YOW); 
    x[13] = y[13]/(30.026490*YOW); 
    x[14] = y[14]/(16.043030*YOW); 
    x[15] = y[15]/(15.035060*YOW); 
    x[16] = y[16]/(14.027090*YOW); 
    x[17] = y[17]/(14.027090*YOW); 
    x[18] = y[18]/(28.054180*YOW); 
    x[19] = y[19]/(31.034460*YOW); 
    x[20] = y[20]/(29.062150*YOW); 
    x[21] = y[21]/(30.070120*YOW); 
    x[22] = y[22]/(13.019120*YOW); 
    x[23] = y[23]/(26.038240*YOW); 
    x[24] = y[24]/(27.046210*YOW); 
    x[25] = y[25]/(43.045610*YOW); 
    x[26] = y[26]/(44.053580*YOW); 
    x[27] = y[27]/(42.037640*YOW); 
    x[28] = y[28]/(41.029670*YOW); 
    x[29] = y[29]/(25.030270*YOW); 
    x[30] = y[30]/(31.034460*YOW); 
    x[31] = y[31]/(32.042430*YOW); 
    x[32] = y[32]/(40.065330*YOW); 
    x[33] = y[33]/(39.057360*YOW); 
    x[34] = y[34]/(41.073300*YOW); 
    x[35] = y[35]/(42.081270*YOW); 
    x[36] = y[36]/(44.097210*YOW); 
    x[37] = y[37]/(43.089240*YOW); 
    x[38] = y[38]/(43.089240*YOW); 
    helmholtz(aort, tc);
    /*Perform computation in Eq 44 */
    result += x[0]*(aort[0]+log((x[0]+1e-100))+logPratio);
    result += x[1]*(aort[1]+log((x[1]+1e-100))+logPratio);
    result += x[2]*(aort[2]+log((x[2]+1e-100))+logPratio);
    result += x[3]*(aort[3]+log((x[3]+1e-100))+logPratio);
    result += x[4]*(aort[4]+log((x[4]+1e-100))+logPratio);
    result += x[5]*(aort[5]+log((x[5]+1e-100))+logPratio);
    result += x[6]*(aort[6]+log((x[6]+1e-100))+logPratio);
    result += x[7]*(aort[7]+log((x[7]+1e-100))+logPratio);
    result += x[8]*(aort[8]+log((x[8]+1e-100))+logPratio);
    result += x[9]*(aort[9]+log((x[9]+1e-100))+logPratio);
    result += x[10]*(aort[10]+log((x[10]+1e-100))+logPratio);
    result += x[11]*(aort[11]+log((x[11]+1e-100))+logPratio);
    result += x[12]*(aort[12]+log((x[12]+1e-100))+logPratio);
    result += x[13]*(aort[13]+log((x[13]+1e-100))+logPratio);
    result += x[14]*(aort[14]+log((x[14]+1e-100))+logPratio);
    result += x[15]*(aort[15]+log((x[15]+1e-100))+logPratio);
    result += x[16]*(aort[16]+log((x[16]+1e-100))+logPratio);
    result += x[17]*(aort[17]+log((x[17]+1e-100))+logPratio);
    result += x[18]*(aort[18]+log((x[18]+1e-100))+logPratio);
    result += x[19]*(aort[19]+log((x[19]+1e-100))+logPratio);
    result += x[20]*(aort[20]+log((x[20]+1e-100))+logPratio);
    result += x[21]*(aort[21]+log((x[21]+1e-100))+logPratio);
    result += x[22]*(aort[22]+log((x[22]+1e-100))+logPratio);
    result += x[23]*(aort[23]+log((x[23]+1e-100))+logPratio);
    result += x[24]*(aort[24]+log((x[24]+1e-100))+logPratio);
    result += x[25]*(aort[25]+log((x[25]+1e-100))+logPratio);
    result += x[26]*(aort[26]+log((x[26]+1e-100))+logPratio);
    result += x[27]*(aort[27]+log((x[27]+1e-100))+logPratio);
    result += x[28]*(aort[28]+log((x[28]+1e-100))+logPratio);
    result += x[29]*(aort[29]+log((x[29]+1e-100))+logPratio);
    result += x[30]*(aort[30]+log((x[30]+1e-100))+logPratio);
    result += x[31]*(aort[31]+log((x[31]+1e-100))+logPratio);
    result += x[32]*(aort[32]+log((x[32]+1e-100))+logPratio);
    result += x[33]*(aort[33]+log((x[33]+1e-100))+logPratio);
    result += x[34]*(aort[34]+log((x[34]+1e-100))+logPratio);
    result += x[35]*(aort[35]+log((x[35]+1e-100))+logPratio);
    result += x[36]*(aort[36]+log((x[36]+1e-100))+logPratio);
    result += x[37]*(aort[37]+log((x[37]+1e-100))+logPratio);
    result += x[38]*(aort[38]+log((x[38]+1e-100))+logPratio);
    /*Scale by RT/W */
    *abms = result * RT * YOW;
}


/*compute the production rate for each species */
void CKWC(double * T, double * C, int * iwrk, double * rwrk, double * wdot)
{
    int id; /*loop counter */

    /*convert to SI */
    for (id = 0; id < 39; ++id) {
        C[id] *= 1.0e6;
    }

    /*convert to chemkin units */
    productionRate(wdot, C, *T);

    /*convert to chemkin units */
    for (id = 0; id < 39; ++id) {
        C[id] *= 1.0e-6;
        wdot[id] *= 1.0e-6;
    }
}


/*Returns the molar production rate of species */
/*Given P, T, and mass fractions */
void CKWYP(double * P, double * T, double * y, int * iwrk, double * rwrk, double * wdot)
{
    int id; /*loop counter */
    double c[39]; /*temporary storage */
    double YOW = 0; 
    double PWORT; 
    /*Compute inverse of mean molecular wt first */
    YOW += y[0]/28.013400; /*N2 */
    YOW += y[1]/39.948000; /*AR */
    YOW += y[2]/1.007970; /*H */
    YOW += y[3]/31.998800; /*O2 */
    YOW += y[4]/17.007370; /*OH */
    YOW += y[5]/15.999400; /*O */
    YOW += y[6]/2.015940; /*H2 */
    YOW += y[7]/18.015340; /*H2O */
    YOW += y[8]/33.006770; /*HO2 */
    YOW += y[9]/34.014740; /*H2O2 */
    YOW += y[10]/28.010550; /*CO */
    YOW += y[11]/44.009950; /*CO2 */
    YOW += y[12]/29.018520; /*HCO */
    YOW += y[13]/30.026490; /*CH2O */
    YOW += y[14]/16.043030; /*CH4 */
    YOW += y[15]/15.035060; /*CH3 */
    YOW += y[16]/14.027090; /*T-CH2 */
    YOW += y[17]/14.027090; /*S-CH2 */
    YOW += y[18]/28.054180; /*C2H4 */
    YOW += y[19]/31.034460; /*CH3O */
    YOW += y[20]/29.062150; /*C2H5 */
    YOW += y[21]/30.070120; /*C2H6 */
    YOW += y[22]/13.019120; /*CH */
    YOW += y[23]/26.038240; /*C2H2 */
    YOW += y[24]/27.046210; /*C2H3 */
    YOW += y[25]/43.045610; /*CH2CHO */
    YOW += y[26]/44.053580; /*C2H4O */
    YOW += y[27]/42.037640; /*CH2CO */
    YOW += y[28]/41.029670; /*HCCO */
    YOW += y[29]/25.030270; /*C2H */
    YOW += y[30]/31.034460; /*CH2OH */
    YOW += y[31]/32.042430; /*CH3OH */
    YOW += y[32]/40.065330; /*C3H4 */
    YOW += y[33]/39.057360; /*C3H3 */
    YOW += y[34]/41.073300; /*C3H5 */
    YOW += y[35]/42.081270; /*C3H6 */
    YOW += y[36]/44.097210; /*C3H8 */
    YOW += y[37]/43.089240; /*I-C3H7 */
    YOW += y[38]/43.089240; /*N-C3H7 */
    /*PW/RT (see Eq. 7) */
    PWORT = (*P)/(YOW * 8.31451e+07 * (*T)); 
    /*multiply by 1e6 so c goes to SI */
    PWORT *= 1e6; 
    /*Now compute conversion (and go to SI) */
    c[0] = PWORT * y[0]/28.013400; 
    c[1] = PWORT * y[1]/39.948000; 
    c[2] = PWORT * y[2]/1.007970; 
    c[3] = PWORT * y[3]/31.998800; 
    c[4] = PWORT * y[4]/17.007370; 
    c[5] = PWORT * y[5]/15.999400; 
    c[6] = PWORT * y[6]/2.015940; 
    c[7] = PWORT * y[7]/18.015340; 
    c[8] = PWORT * y[8]/33.006770; 
    c[9] = PWORT * y[9]/34.014740; 
    c[10] = PWORT * y[10]/28.010550; 
    c[11] = PWORT * y[11]/44.009950; 
    c[12] = PWORT * y[12]/29.018520; 
    c[13] = PWORT * y[13]/30.026490; 
    c[14] = PWORT * y[14]/16.043030; 
    c[15] = PWORT * y[15]/15.035060; 
    c[16] = PWORT * y[16]/14.027090; 
    c[17] = PWORT * y[17]/14.027090; 
    c[18] = PWORT * y[18]/28.054180; 
    c[19] = PWORT * y[19]/31.034460; 
    c[20] = PWORT * y[20]/29.062150; 
    c[21] = PWORT * y[21]/30.070120; 
    c[22] = PWORT * y[22]/13.019120; 
    c[23] = PWORT * y[23]/26.038240; 
    c[24] = PWORT * y[24]/27.046210; 
    c[25] = PWORT * y[25]/43.045610; 
    c[26] = PWORT * y[26]/44.053580; 
    c[27] = PWORT * y[27]/42.037640; 
    c[28] = PWORT * y[28]/41.029670; 
    c[29] = PWORT * y[29]/25.030270; 
    c[30] = PWORT * y[30]/31.034460; 
    c[31] = PWORT * y[31]/32.042430; 
    c[32] = PWORT * y[32]/40.065330; 
    c[33] = PWORT * y[33]/39.057360; 
    c[34] = PWORT * y[34]/41.073300; 
    c[35] = PWORT * y[35]/42.081270; 
    c[36] = PWORT * y[36]/44.097210; 
    c[37] = PWORT * y[37]/43.089240; 
    c[38] = PWORT * y[38]/43.089240; 

    /*convert to chemkin units */
    productionRate(wdot, c, *T);

    /*convert to chemkin units */
    for (id = 0; id < 39; ++id) {
        wdot[id] *= 1.0e-6;
    }
}


/*Returns the molar production rate of species */
/*Given P, T, and mole fractions */
void CKWXP(double * P, double * T, double * x, int * iwrk, double * rwrk, double * wdot)
{
    int id; /*loop counter */
    double c[39]; /*temporary storage */
    double PORT = 1e6 * (*P)/(8.31451e+07 * (*T)); /*1e6 * P/RT so c goes to SI units */

    /*Compute conversion, see Eq 10 */
    for (id = 0; id < 39; ++id) {
        c[id] = x[id]*PORT;
    }

    /*convert to chemkin units */
    productionRate(wdot, c, *T);

    /*convert to chemkin units */
    for (id = 0; id < 39; ++id) {
        wdot[id] *= 1.0e-6;
    }
}


/*Returns the molar production rate of species */
/*Given rho, T, and mass fractions */
void CKWYR(double * rho, double * T, double * y, int * iwrk, double * rwrk, double * wdot)
{
    int id; /*loop counter */
    double c[39]; /*temporary storage */
    /*See Eq 8 with an extra 1e6 so c goes to SI */
    c[0] = 1e6 * (*rho) * y[0]/28.013400; 
    c[1] = 1e6 * (*rho) * y[1]/39.948000; 
    c[2] = 1e6 * (*rho) * y[2]/1.007970; 
    c[3] = 1e6 * (*rho) * y[3]/31.998800; 
    c[4] = 1e6 * (*rho) * y[4]/17.007370; 
    c[5] = 1e6 * (*rho) * y[5]/15.999400; 
    c[6] = 1e6 * (*rho) * y[6]/2.015940; 
    c[7] = 1e6 * (*rho) * y[7]/18.015340; 
    c[8] = 1e6 * (*rho) * y[8]/33.006770; 
    c[9] = 1e6 * (*rho) * y[9]/34.014740; 
    c[10] = 1e6 * (*rho) * y[10]/28.010550; 
    c[11] = 1e6 * (*rho) * y[11]/44.009950; 
    c[12] = 1e6 * (*rho) * y[12]/29.018520; 
    c[13] = 1e6 * (*rho) * y[13]/30.026490; 
    c[14] = 1e6 * (*rho) * y[14]/16.043030; 
    c[15] = 1e6 * (*rho) * y[15]/15.035060; 
    c[16] = 1e6 * (*rho) * y[16]/14.027090; 
    c[17] = 1e6 * (*rho) * y[17]/14.027090; 
    c[18] = 1e6 * (*rho) * y[18]/28.054180; 
    c[19] = 1e6 * (*rho) * y[19]/31.034460; 
    c[20] = 1e6 * (*rho) * y[20]/29.062150; 
    c[21] = 1e6 * (*rho) * y[21]/30.070120; 
    c[22] = 1e6 * (*rho) * y[22]/13.019120; 
    c[23] = 1e6 * (*rho) * y[23]/26.038240; 
    c[24] = 1e6 * (*rho) * y[24]/27.046210; 
    c[25] = 1e6 * (*rho) * y[25]/43.045610; 
    c[26] = 1e6 * (*rho) * y[26]/44.053580; 
    c[27] = 1e6 * (*rho) * y[27]/42.037640; 
    c[28] = 1e6 * (*rho) * y[28]/41.029670; 
    c[29] = 1e6 * (*rho) * y[29]/25.030270; 
    c[30] = 1e6 * (*rho) * y[30]/31.034460; 
    c[31] = 1e6 * (*rho) * y[31]/32.042430; 
    c[32] = 1e6 * (*rho) * y[32]/40.065330; 
    c[33] = 1e6 * (*rho) * y[33]/39.057360; 
    c[34] = 1e6 * (*rho) * y[34]/41.073300; 
    c[35] = 1e6 * (*rho) * y[35]/42.081270; 
    c[36] = 1e6 * (*rho) * y[36]/44.097210; 
    c[37] = 1e6 * (*rho) * y[37]/43.089240; 
    c[38] = 1e6 * (*rho) * y[38]/43.089240; 

    /*call productionRate */
    productionRate(wdot, c, *T);

    /*convert to chemkin units */
    for (id = 0; id < 39; ++id) {
        wdot[id] *= 1.0e-6;
    }
}


/*Returns the molar production rate of species */
/*Given rho, T, and mole fractions */
void CKWXR(double * rho, double * T, double * x, int * iwrk, double * rwrk, double * wdot)
{
    int id; /*loop counter */
    double c[39]; /*temporary storage */
    double XW = 0; /*See Eq 4, 11 in CK Manual */
    double ROW; 
    /*Compute mean molecular wt first */
    XW += x[0]*28.013400; /*N2 */
    XW += x[1]*39.948000; /*AR */
    XW += x[2]*1.007970; /*H */
    XW += x[3]*31.998800; /*O2 */
    XW += x[4]*17.007370; /*OH */
    XW += x[5]*15.999400; /*O */
    XW += x[6]*2.015940; /*H2 */
    XW += x[7]*18.015340; /*H2O */
    XW += x[8]*33.006770; /*HO2 */
    XW += x[9]*34.014740; /*H2O2 */
    XW += x[10]*28.010550; /*CO */
    XW += x[11]*44.009950; /*CO2 */
    XW += x[12]*29.018520; /*HCO */
    XW += x[13]*30.026490; /*CH2O */
    XW += x[14]*16.043030; /*CH4 */
    XW += x[15]*15.035060; /*CH3 */
    XW += x[16]*14.027090; /*T-CH2 */
    XW += x[17]*14.027090; /*S-CH2 */
    XW += x[18]*28.054180; /*C2H4 */
    XW += x[19]*31.034460; /*CH3O */
    XW += x[20]*29.062150; /*C2H5 */
    XW += x[21]*30.070120; /*C2H6 */
    XW += x[22]*13.019120; /*CH */
    XW += x[23]*26.038240; /*C2H2 */
    XW += x[24]*27.046210; /*C2H3 */
    XW += x[25]*43.045610; /*CH2CHO */
    XW += x[26]*44.053580; /*C2H4O */
    XW += x[27]*42.037640; /*CH2CO */
    XW += x[28]*41.029670; /*HCCO */
    XW += x[29]*25.030270; /*C2H */
    XW += x[30]*31.034460; /*CH2OH */
    XW += x[31]*32.042430; /*CH3OH */
    XW += x[32]*40.065330; /*C3H4 */
    XW += x[33]*39.057360; /*C3H3 */
    XW += x[34]*41.073300; /*C3H5 */
    XW += x[35]*42.081270; /*C3H6 */
    XW += x[36]*44.097210; /*C3H8 */
    XW += x[37]*43.089240; /*I-C3H7 */
    XW += x[38]*43.089240; /*N-C3H7 */
    /*Extra 1e6 factor to take c to SI */
    ROW = 1e6*(*rho) / XW;

    /*Compute conversion, see Eq 11 */
    for (id = 0; id < 39; ++id) {
        c[id] = x[id]*ROW;
    }

    /*convert to chemkin units */
    productionRate(wdot, c, *T);

    /*convert to chemkin units */
    for (id = 0; id < 39; ++id) {
        wdot[id] *= 1.0e-6;
    }
}


/*Returns the rate of progress for each reaction */
void CKQC(double * T, double * C, int * iwrk, double * rwrk, double * qdot)
{
    int id; /*loop counter */

    /*convert to SI */
    for (id = 0; id < 39; ++id) {
        C[id] *= 1.0e6;
    }

    /*convert to chemkin units */
    progressRate(qdot, C, *T);

    /*convert to chemkin units */
    for (id = 0; id < 39; ++id) {
        C[id] *= 1.0e-6;
    }

    for (id = 0; id < 175; ++id) {
        qdot[id] *= 1.0e-6;
    }
}


/*Returns the progress rates of each reactions */
/*Given P, T, and mole fractions */
void CKKFKR(double * P, double * T, double * x, int * iwrk, double * rwrk, double * q_f, double * q_r)
{
    int id; /*loop counter */
    double c[39]; /*temporary storage */
    double PORT = 1e6 * (*P)/(8.31451e+07 * (*T)); /*1e6 * P/RT so c goes to SI units */

    /*Compute conversion, see Eq 10 */
    for (id = 0; id < 39; ++id) {
        c[id] = x[id]*PORT;
    }

    /*convert to chemkin units */
    progressRateFR(q_f, q_r, c, *T);

    /*convert to chemkin units */
    for (id = 0; id < 175; ++id) {
        q_f[id] *= 1.0e-6;
        q_r[id] *= 1.0e-6;
    }
}


/*Returns the progress rates of each reactions */
/*Given P, T, and mass fractions */
void CKQYP(double * P, double * T, double * y, int * iwrk, double * rwrk, double * qdot)
{
    int id; /*loop counter */
    double c[39]; /*temporary storage */
    double YOW = 0; 
    double PWORT; 
    /*Compute inverse of mean molecular wt first */
    YOW += y[0]/28.013400; /*N2 */
    YOW += y[1]/39.948000; /*AR */
    YOW += y[2]/1.007970; /*H */
    YOW += y[3]/31.998800; /*O2 */
    YOW += y[4]/17.007370; /*OH */
    YOW += y[5]/15.999400; /*O */
    YOW += y[6]/2.015940; /*H2 */
    YOW += y[7]/18.015340; /*H2O */
    YOW += y[8]/33.006770; /*HO2 */
    YOW += y[9]/34.014740; /*H2O2 */
    YOW += y[10]/28.010550; /*CO */
    YOW += y[11]/44.009950; /*CO2 */
    YOW += y[12]/29.018520; /*HCO */
    YOW += y[13]/30.026490; /*CH2O */
    YOW += y[14]/16.043030; /*CH4 */
    YOW += y[15]/15.035060; /*CH3 */
    YOW += y[16]/14.027090; /*T-CH2 */
    YOW += y[17]/14.027090; /*S-CH2 */
    YOW += y[18]/28.054180; /*C2H4 */
    YOW += y[19]/31.034460; /*CH3O */
    YOW += y[20]/29.062150; /*C2H5 */
    YOW += y[21]/30.070120; /*C2H6 */
    YOW += y[22]/13.019120; /*CH */
    YOW += y[23]/26.038240; /*C2H2 */
    YOW += y[24]/27.046210; /*C2H3 */
    YOW += y[25]/43.045610; /*CH2CHO */
    YOW += y[26]/44.053580; /*C2H4O */
    YOW += y[27]/42.037640; /*CH2CO */
    YOW += y[28]/41.029670; /*HCCO */
    YOW += y[29]/25.030270; /*C2H */
    YOW += y[30]/31.034460; /*CH2OH */
    YOW += y[31]/32.042430; /*CH3OH */
    YOW += y[32]/40.065330; /*C3H4 */
    YOW += y[33]/39.057360; /*C3H3 */
    YOW += y[34]/41.073300; /*C3H5 */
    YOW += y[35]/42.081270; /*C3H6 */
    YOW += y[36]/44.097210; /*C3H8 */
    YOW += y[37]/43.089240; /*I-C3H7 */
    YOW += y[38]/43.089240; /*N-C3H7 */
    /*PW/RT (see Eq. 7) */
    PWORT = (*P)/(YOW * 8.31451e+07 * (*T)); 
    /*multiply by 1e6 so c goes to SI */
    PWORT *= 1e6; 
    /*Now compute conversion (and go to SI) */
    c[0] = PWORT * y[0]/28.013400; 
    c[1] = PWORT * y[1]/39.948000; 
    c[2] = PWORT * y[2]/1.007970; 
    c[3] = PWORT * y[3]/31.998800; 
    c[4] = PWORT * y[4]/17.007370; 
    c[5] = PWORT * y[5]/15.999400; 
    c[6] = PWORT * y[6]/2.015940; 
    c[7] = PWORT * y[7]/18.015340; 
    c[8] = PWORT * y[8]/33.006770; 
    c[9] = PWORT * y[9]/34.014740; 
    c[10] = PWORT * y[10]/28.010550; 
    c[11] = PWORT * y[11]/44.009950; 
    c[12] = PWORT * y[12]/29.018520; 
    c[13] = PWORT * y[13]/30.026490; 
    c[14] = PWORT * y[14]/16.043030; 
    c[15] = PWORT * y[15]/15.035060; 
    c[16] = PWORT * y[16]/14.027090; 
    c[17] = PWORT * y[17]/14.027090; 
    c[18] = PWORT * y[18]/28.054180; 
    c[19] = PWORT * y[19]/31.034460; 
    c[20] = PWORT * y[20]/29.062150; 
    c[21] = PWORT * y[21]/30.070120; 
    c[22] = PWORT * y[22]/13.019120; 
    c[23] = PWORT * y[23]/26.038240; 
    c[24] = PWORT * y[24]/27.046210; 
    c[25] = PWORT * y[25]/43.045610; 
    c[26] = PWORT * y[26]/44.053580; 
    c[27] = PWORT * y[27]/42.037640; 
    c[28] = PWORT * y[28]/41.029670; 
    c[29] = PWORT * y[29]/25.030270; 
    c[30] = PWORT * y[30]/31.034460; 
    c[31] = PWORT * y[31]/32.042430; 
    c[32] = PWORT * y[32]/40.065330; 
    c[33] = PWORT * y[33]/39.057360; 
    c[34] = PWORT * y[34]/41.073300; 
    c[35] = PWORT * y[35]/42.081270; 
    c[36] = PWORT * y[36]/44.097210; 
    c[37] = PWORT * y[37]/43.089240; 
    c[38] = PWORT * y[38]/43.089240; 

    /*convert to chemkin units */
    progressRate(qdot, c, *T);

    /*convert to chemkin units */
    for (id = 0; id < 175; ++id) {
        qdot[id] *= 1.0e-6;
    }
}


/*Returns the progress rates of each reactions */
/*Given P, T, and mole fractions */
void CKQXP(double * P, double * T, double * x, int * iwrk, double * rwrk, double * qdot)
{
    int id; /*loop counter */
    double c[39]; /*temporary storage */
    double PORT = 1e6 * (*P)/(8.31451e+07 * (*T)); /*1e6 * P/RT so c goes to SI units */

    /*Compute conversion, see Eq 10 */
    for (id = 0; id < 39; ++id) {
        c[id] = x[id]*PORT;
    }

    /*convert to chemkin units */
    progressRate(qdot, c, *T);

    /*convert to chemkin units */
    for (id = 0; id < 175; ++id) {
        qdot[id] *= 1.0e-6;
    }
}


/*Returns the progress rates of each reactions */
/*Given rho, T, and mass fractions */
void CKQYR(double * rho, double * T, double * y, int * iwrk, double * rwrk, double * qdot)
{
    int id; /*loop counter */
    double c[39]; /*temporary storage */
    /*See Eq 8 with an extra 1e6 so c goes to SI */
    c[0] = 1e6 * (*rho) * y[0]/28.013400; 
    c[1] = 1e6 * (*rho) * y[1]/39.948000; 
    c[2] = 1e6 * (*rho) * y[2]/1.007970; 
    c[3] = 1e6 * (*rho) * y[3]/31.998800; 
    c[4] = 1e6 * (*rho) * y[4]/17.007370; 
    c[5] = 1e6 * (*rho) * y[5]/15.999400; 
    c[6] = 1e6 * (*rho) * y[6]/2.015940; 
    c[7] = 1e6 * (*rho) * y[7]/18.015340; 
    c[8] = 1e6 * (*rho) * y[8]/33.006770; 
    c[9] = 1e6 * (*rho) * y[9]/34.014740; 
    c[10] = 1e6 * (*rho) * y[10]/28.010550; 
    c[11] = 1e6 * (*rho) * y[11]/44.009950; 
    c[12] = 1e6 * (*rho) * y[12]/29.018520; 
    c[13] = 1e6 * (*rho) * y[13]/30.026490; 
    c[14] = 1e6 * (*rho) * y[14]/16.043030; 
    c[15] = 1e6 * (*rho) * y[15]/15.035060; 
    c[16] = 1e6 * (*rho) * y[16]/14.027090; 
    c[17] = 1e6 * (*rho) * y[17]/14.027090; 
    c[18] = 1e6 * (*rho) * y[18]/28.054180; 
    c[19] = 1e6 * (*rho) * y[19]/31.034460; 
    c[20] = 1e6 * (*rho) * y[20]/29.062150; 
    c[21] = 1e6 * (*rho) * y[21]/30.070120; 
    c[22] = 1e6 * (*rho) * y[22]/13.019120; 
    c[23] = 1e6 * (*rho) * y[23]/26.038240; 
    c[24] = 1e6 * (*rho) * y[24]/27.046210; 
    c[25] = 1e6 * (*rho) * y[25]/43.045610; 
    c[26] = 1e6 * (*rho) * y[26]/44.053580; 
    c[27] = 1e6 * (*rho) * y[27]/42.037640; 
    c[28] = 1e6 * (*rho) * y[28]/41.029670; 
    c[29] = 1e6 * (*rho) * y[29]/25.030270; 
    c[30] = 1e6 * (*rho) * y[30]/31.034460; 
    c[31] = 1e6 * (*rho) * y[31]/32.042430; 
    c[32] = 1e6 * (*rho) * y[32]/40.065330; 
    c[33] = 1e6 * (*rho) * y[33]/39.057360; 
    c[34] = 1e6 * (*rho) * y[34]/41.073300; 
    c[35] = 1e6 * (*rho) * y[35]/42.081270; 
    c[36] = 1e6 * (*rho) * y[36]/44.097210; 
    c[37] = 1e6 * (*rho) * y[37]/43.089240; 
    c[38] = 1e6 * (*rho) * y[38]/43.089240; 

    /*call progressRate */
    progressRate(qdot, c, *T);

    /*convert to chemkin units */
    for (id = 0; id < 175; ++id) {
        qdot[id] *= 1.0e-6;
    }
}


/*Returns the progress rates of each reactions */
/*Given rho, T, and mole fractions */
void CKQXR(double * rho, double * T, double * x, int * iwrk, double * rwrk, double * qdot)
{
    int id; /*loop counter */
    double c[39]; /*temporary storage */
    double XW = 0; /*See Eq 4, 11 in CK Manual */
    double ROW; 
    /*Compute mean molecular wt first */
    XW += x[0]*28.013400; /*N2 */
    XW += x[1]*39.948000; /*AR */
    XW += x[2]*1.007970; /*H */
    XW += x[3]*31.998800; /*O2 */
    XW += x[4]*17.007370; /*OH */
    XW += x[5]*15.999400; /*O */
    XW += x[6]*2.015940; /*H2 */
    XW += x[7]*18.015340; /*H2O */
    XW += x[8]*33.006770; /*HO2 */
    XW += x[9]*34.014740; /*H2O2 */
    XW += x[10]*28.010550; /*CO */
    XW += x[11]*44.009950; /*CO2 */
    XW += x[12]*29.018520; /*HCO */
    XW += x[13]*30.026490; /*CH2O */
    XW += x[14]*16.043030; /*CH4 */
    XW += x[15]*15.035060; /*CH3 */
    XW += x[16]*14.027090; /*T-CH2 */
    XW += x[17]*14.027090; /*S-CH2 */
    XW += x[18]*28.054180; /*C2H4 */
    XW += x[19]*31.034460; /*CH3O */
    XW += x[20]*29.062150; /*C2H5 */
    XW += x[21]*30.070120; /*C2H6 */
    XW += x[22]*13.019120; /*CH */
    XW += x[23]*26.038240; /*C2H2 */
    XW += x[24]*27.046210; /*C2H3 */
    XW += x[25]*43.045610; /*CH2CHO */
    XW += x[26]*44.053580; /*C2H4O */
    XW += x[27]*42.037640; /*CH2CO */
    XW += x[28]*41.029670; /*HCCO */
    XW += x[29]*25.030270; /*C2H */
    XW += x[30]*31.034460; /*CH2OH */
    XW += x[31]*32.042430; /*CH3OH */
    XW += x[32]*40.065330; /*C3H4 */
    XW += x[33]*39.057360; /*C3H3 */
    XW += x[34]*41.073300; /*C3H5 */
    XW += x[35]*42.081270; /*C3H6 */
    XW += x[36]*44.097210; /*C3H8 */
    XW += x[37]*43.089240; /*I-C3H7 */
    XW += x[38]*43.089240; /*N-C3H7 */
    /*Extra 1e6 factor to take c to SI */
    ROW = 1e6*(*rho) / XW;

    /*Compute conversion, see Eq 11 */
    for (id = 0; id < 39; ++id) {
        c[id] = x[id]*ROW;
    }

    /*convert to chemkin units */
    progressRate(qdot, c, *T);

    /*convert to chemkin units */
    for (id = 0; id < 175; ++id) {
        qdot[id] *= 1.0e-6;
    }
}


/*Returns the stoichiometric coefficients */
/*of the reaction mechanism. (Eq 50) */
void CKNU(int * kdim, int * iwrk, double * rwrk, int * nuki)
{
    int id; /*loop counter */
    int kd = (*kdim); 
    /*Zero nuki */
    for (id = 0; id < 39 * kd; ++ id) {
         nuki[id] = 0; 
    }

    /*reaction 1: H + O2 <=> OH + O */
    nuki[ 2 * kd + 0 ] += -1 ;
    nuki[ 3 * kd + 0 ] += -1 ;
    nuki[ 4 * kd + 0 ] += +1 ;
    nuki[ 5 * kd + 0 ] += +1 ;

    /*reaction 2: H2 + O <=> OH + H */
    nuki[ 6 * kd + 1 ] += -1 ;
    nuki[ 5 * kd + 1 ] += -1 ;
    nuki[ 4 * kd + 1 ] += +1 ;
    nuki[ 2 * kd + 1 ] += +1 ;

    /*reaction 3: H2 + OH <=> H2O + H */
    nuki[ 6 * kd + 2 ] += -1 ;
    nuki[ 4 * kd + 2 ] += -1 ;
    nuki[ 7 * kd + 2 ] += +1 ;
    nuki[ 2 * kd + 2 ] += +1 ;

    /*reaction 4: H2O + O <=> 2 OH */
    nuki[ 7 * kd + 3 ] += -1 ;
    nuki[ 5 * kd + 3 ] += -1 ;
    nuki[ 4 * kd + 3 ] += +2 ;

    /*reaction 5: H + O + M <=> OH + M */
    nuki[ 2 * kd + 4 ] += -1 ;
    nuki[ 5 * kd + 4 ] += -1 ;
    nuki[ 4 * kd + 4 ] += +1 ;

    /*reaction 6: H2 + O2 <=> 2 OH */
    nuki[ 6 * kd + 5 ] += -1 ;
    nuki[ 3 * kd + 5 ] += -1 ;
    nuki[ 4 * kd + 5 ] += +2 ;

    /*reaction 7: 2 H + M <=> H2 + M */
    nuki[ 2 * kd + 6 ] += -2 ;
    nuki[ 6 * kd + 6 ] += +1 ;

    /*reaction 8: H + OH + M <=> H2O + M */
    nuki[ 2 * kd + 7 ] += -1 ;
    nuki[ 4 * kd + 7 ] += -1 ;
    nuki[ 7 * kd + 7 ] += +1 ;

    /*reaction 9: 2 O + M <=> O2 + M */
    nuki[ 5 * kd + 8 ] += -2 ;
    nuki[ 3 * kd + 8 ] += +1 ;

    /*reaction 10: H + O2 (+M) <=> HO2 (+M) */
    nuki[ 2 * kd + 9 ] += -1 ;
    nuki[ 3 * kd + 9 ] += -1 ;
    nuki[ 8 * kd + 9 ] += +1 ;

    /*reaction 11: O + OH + M <=> HO2 + M */
    nuki[ 5 * kd + 10 ] += -1 ;
    nuki[ 4 * kd + 10 ] += -1 ;
    nuki[ 8 * kd + 10 ] += +1 ;

    /*reaction 12: HO2 + H <=> 2 OH */
    nuki[ 8 * kd + 11 ] += -1 ;
    nuki[ 2 * kd + 11 ] += -1 ;
    nuki[ 4 * kd + 11 ] += +2 ;

    /*reaction 13: HO2 + H <=> H2 + O2 */
    nuki[ 8 * kd + 12 ] += -1 ;
    nuki[ 2 * kd + 12 ] += -1 ;
    nuki[ 6 * kd + 12 ] += +1 ;
    nuki[ 3 * kd + 12 ] += +1 ;

    /*reaction 14: HO2 + H <=> H2O + O */
    nuki[ 8 * kd + 13 ] += -1 ;
    nuki[ 2 * kd + 13 ] += -1 ;
    nuki[ 7 * kd + 13 ] += +1 ;
    nuki[ 5 * kd + 13 ] += +1 ;

    /*reaction 15: HO2 + O <=> OH + O2 */
    nuki[ 8 * kd + 14 ] += -1 ;
    nuki[ 5 * kd + 14 ] += -1 ;
    nuki[ 4 * kd + 14 ] += +1 ;
    nuki[ 3 * kd + 14 ] += +1 ;

    /*reaction 16: HO2 + OH <=> H2O + O2 */
    nuki[ 8 * kd + 15 ] += -1 ;
    nuki[ 4 * kd + 15 ] += -1 ;
    nuki[ 7 * kd + 15 ] += +1 ;
    nuki[ 3 * kd + 15 ] += +1 ;

    /*reaction 17: 2 OH (+M) <=> H2O2 (+M) */
    nuki[ 4 * kd + 16 ] += -2 ;
    nuki[ 9 * kd + 16 ] += +1 ;

    /*reaction 18: 2 HO2 <=> H2O2 + O2 */
    nuki[ 8 * kd + 17 ] += -2 ;
    nuki[ 9 * kd + 17 ] += +1 ;
    nuki[ 3 * kd + 17 ] += +1 ;

    /*reaction 19: H2O2 + H <=> HO2 + H2 */
    nuki[ 9 * kd + 18 ] += -1 ;
    nuki[ 2 * kd + 18 ] += -1 ;
    nuki[ 8 * kd + 18 ] += +1 ;
    nuki[ 6 * kd + 18 ] += +1 ;

    /*reaction 20: H2O2 + H <=> H2O + OH */
    nuki[ 9 * kd + 19 ] += -1 ;
    nuki[ 2 * kd + 19 ] += -1 ;
    nuki[ 7 * kd + 19 ] += +1 ;
    nuki[ 4 * kd + 19 ] += +1 ;

    /*reaction 21: H2O2 + OH <=> H2O + HO2 */
    nuki[ 9 * kd + 20 ] += -1 ;
    nuki[ 4 * kd + 20 ] += -1 ;
    nuki[ 7 * kd + 20 ] += +1 ;
    nuki[ 8 * kd + 20 ] += +1 ;

    /*reaction 22: H2O2 + O <=> HO2 + OH */
    nuki[ 9 * kd + 21 ] += -1 ;
    nuki[ 5 * kd + 21 ] += -1 ;
    nuki[ 8 * kd + 21 ] += +1 ;
    nuki[ 4 * kd + 21 ] += +1 ;

    /*reaction 23: CO + OH <=> CO2 + H */
    nuki[ 10 * kd + 22 ] += -1 ;
    nuki[ 4 * kd + 22 ] += -1 ;
    nuki[ 11 * kd + 22 ] += +1 ;
    nuki[ 2 * kd + 22 ] += +1 ;

    /*reaction 24: CO + HO2 <=> CO2 + OH */
    nuki[ 10 * kd + 23 ] += -1 ;
    nuki[ 8 * kd + 23 ] += -1 ;
    nuki[ 11 * kd + 23 ] += +1 ;
    nuki[ 4 * kd + 23 ] += +1 ;

    /*reaction 25: HCO + M <=> CO + H + M */
    nuki[ 12 * kd + 24 ] += -1 ;
    nuki[ 10 * kd + 24 ] += +1 ;
    nuki[ 2 * kd + 24 ] += +1 ;

    /*reaction 26: HCO + H <=> CO + H2 */
    nuki[ 12 * kd + 25 ] += -1 ;
    nuki[ 2 * kd + 25 ] += -1 ;
    nuki[ 10 * kd + 25 ] += +1 ;
    nuki[ 6 * kd + 25 ] += +1 ;

    /*reaction 27: HCO + O <=> CO + OH */
    nuki[ 12 * kd + 26 ] += -1 ;
    nuki[ 5 * kd + 26 ] += -1 ;
    nuki[ 10 * kd + 26 ] += +1 ;
    nuki[ 4 * kd + 26 ] += +1 ;

    /*reaction 28: HCO + O <=> CO2 + H */
    nuki[ 12 * kd + 27 ] += -1 ;
    nuki[ 5 * kd + 27 ] += -1 ;
    nuki[ 11 * kd + 27 ] += +1 ;
    nuki[ 2 * kd + 27 ] += +1 ;

    /*reaction 29: HCO + OH <=> CO + H2O */
    nuki[ 12 * kd + 28 ] += -1 ;
    nuki[ 4 * kd + 28 ] += -1 ;
    nuki[ 10 * kd + 28 ] += +1 ;
    nuki[ 7 * kd + 28 ] += +1 ;

    /*reaction 30: HCO + O2 <=> CO + HO2 */
    nuki[ 12 * kd + 29 ] += -1 ;
    nuki[ 3 * kd + 29 ] += -1 ;
    nuki[ 10 * kd + 29 ] += +1 ;
    nuki[ 8 * kd + 29 ] += +1 ;

    /*reaction 31: CH2O + M <=> HCO + H + M */
    nuki[ 13 * kd + 30 ] += -1 ;
    nuki[ 12 * kd + 30 ] += +1 ;
    nuki[ 2 * kd + 30 ] += +1 ;

    /*reaction 32: CH2O + H <=> HCO + H2 */
    nuki[ 13 * kd + 31 ] += -1 ;
    nuki[ 2 * kd + 31 ] += -1 ;
    nuki[ 12 * kd + 31 ] += +1 ;
    nuki[ 6 * kd + 31 ] += +1 ;

    /*reaction 33: CH2O + O <=> HCO + OH */
    nuki[ 13 * kd + 32 ] += -1 ;
    nuki[ 5 * kd + 32 ] += -1 ;
    nuki[ 12 * kd + 32 ] += +1 ;
    nuki[ 4 * kd + 32 ] += +1 ;

    /*reaction 34: CH2O + OH <=> HCO + H2O */
    nuki[ 13 * kd + 33 ] += -1 ;
    nuki[ 4 * kd + 33 ] += -1 ;
    nuki[ 12 * kd + 33 ] += +1 ;
    nuki[ 7 * kd + 33 ] += +1 ;

    /*reaction 35: CH4 + H <=> H2 + CH3 */
    nuki[ 14 * kd + 34 ] += -1 ;
    nuki[ 2 * kd + 34 ] += -1 ;
    nuki[ 6 * kd + 34 ] += +1 ;
    nuki[ 15 * kd + 34 ] += +1 ;

    /*reaction 36: CH4 + OH <=> H2O + CH3 */
    nuki[ 14 * kd + 35 ] += -1 ;
    nuki[ 4 * kd + 35 ] += -1 ;
    nuki[ 7 * kd + 35 ] += +1 ;
    nuki[ 15 * kd + 35 ] += +1 ;

    /*reaction 37: CH4 + O <=> CH3 + OH */
    nuki[ 14 * kd + 36 ] += -1 ;
    nuki[ 5 * kd + 36 ] += -1 ;
    nuki[ 15 * kd + 36 ] += +1 ;
    nuki[ 4 * kd + 36 ] += +1 ;

    /*reaction 38: CH4 + O2 <=> CH3 + HO2 */
    nuki[ 14 * kd + 37 ] += -1 ;
    nuki[ 3 * kd + 37 ] += -1 ;
    nuki[ 15 * kd + 37 ] += +1 ;
    nuki[ 8 * kd + 37 ] += +1 ;

    /*reaction 39: CH4 + HO2 <=> CH3 + H2O2 */
    nuki[ 14 * kd + 38 ] += -1 ;
    nuki[ 8 * kd + 38 ] += -1 ;
    nuki[ 15 * kd + 38 ] += +1 ;
    nuki[ 9 * kd + 38 ] += +1 ;

    /*reaction 40: CH3 + H <=> T-CH2 + H2 */
    nuki[ 15 * kd + 39 ] += -1 ;
    nuki[ 2 * kd + 39 ] += -1 ;
    nuki[ 16 * kd + 39 ] += +1 ;
    nuki[ 6 * kd + 39 ] += +1 ;

    /*reaction 41: CH3 + H <=> S-CH2 + H2 */
    nuki[ 15 * kd + 40 ] += -1 ;
    nuki[ 2 * kd + 40 ] += -1 ;
    nuki[ 17 * kd + 40 ] += +1 ;
    nuki[ 6 * kd + 40 ] += +1 ;

    /*reaction 42: CH3 + OH <=> S-CH2 + H2O */
    nuki[ 15 * kd + 41 ] += -1 ;
    nuki[ 4 * kd + 41 ] += -1 ;
    nuki[ 17 * kd + 41 ] += +1 ;
    nuki[ 7 * kd + 41 ] += +1 ;

    /*reaction 43: CH3 + O <=> CH2O + H */
    nuki[ 15 * kd + 42 ] += -1 ;
    nuki[ 5 * kd + 42 ] += -1 ;
    nuki[ 13 * kd + 42 ] += +1 ;
    nuki[ 2 * kd + 42 ] += +1 ;

    /*reaction 44: CH3 + T-CH2 <=> C2H4 + H */
    nuki[ 15 * kd + 43 ] += -1 ;
    nuki[ 16 * kd + 43 ] += -1 ;
    nuki[ 18 * kd + 43 ] += +1 ;
    nuki[ 2 * kd + 43 ] += +1 ;

    /*reaction 45: CH3 + HO2 <=> CH3O + OH */
    nuki[ 15 * kd + 44 ] += -1 ;
    nuki[ 8 * kd + 44 ] += -1 ;
    nuki[ 19 * kd + 44 ] += +1 ;
    nuki[ 4 * kd + 44 ] += +1 ;

    /*reaction 46: CH3 + O2 <=> CH2O + OH */
    nuki[ 15 * kd + 45 ] += -1 ;
    nuki[ 3 * kd + 45 ] += -1 ;
    nuki[ 13 * kd + 45 ] += +1 ;
    nuki[ 4 * kd + 45 ] += +1 ;

    /*reaction 47: CH3 + O2 <=> CH3O + O */
    nuki[ 15 * kd + 46 ] += -1 ;
    nuki[ 3 * kd + 46 ] += -1 ;
    nuki[ 19 * kd + 46 ] += +1 ;
    nuki[ 5 * kd + 46 ] += +1 ;

    /*reaction 48: 2 CH3 <=> C2H4 + H2 */
    nuki[ 15 * kd + 47 ] += -2 ;
    nuki[ 18 * kd + 47 ] += +1 ;
    nuki[ 6 * kd + 47 ] += +1 ;

    /*reaction 49: 2 CH3 <=> C2H5 + H */
    nuki[ 15 * kd + 48 ] += -2 ;
    nuki[ 20 * kd + 48 ] += +1 ;
    nuki[ 2 * kd + 48 ] += +1 ;

    /*reaction 50: CH3 + H (+M) <=> CH4 (+M) */
    nuki[ 15 * kd + 49 ] += -1 ;
    nuki[ 2 * kd + 49 ] += -1 ;
    nuki[ 14 * kd + 49 ] += +1 ;

    /*reaction 51: 2 CH3 (+M) <=> C2H6 (+M) */
    nuki[ 15 * kd + 50 ] += -2 ;
    nuki[ 21 * kd + 50 ] += +1 ;

    /*reaction 52: S-CH2 + OH <=> CH2O + H */
    nuki[ 17 * kd + 51 ] += -1 ;
    nuki[ 4 * kd + 51 ] += -1 ;
    nuki[ 13 * kd + 51 ] += +1 ;
    nuki[ 2 * kd + 51 ] += +1 ;

    /*reaction 53: S-CH2 + O2 <=> CO + OH + H */
    nuki[ 17 * kd + 52 ] += -1 ;
    nuki[ 3 * kd + 52 ] += -1 ;
    nuki[ 10 * kd + 52 ] += +1 ;
    nuki[ 4 * kd + 52 ] += +1 ;
    nuki[ 2 * kd + 52 ] += +1 ;

    /*reaction 54: S-CH2 + CO2 <=> CO + CH2O */
    nuki[ 17 * kd + 53 ] += -1 ;
    nuki[ 11 * kd + 53 ] += -1 ;
    nuki[ 10 * kd + 53 ] += +1 ;
    nuki[ 13 * kd + 53 ] += +1 ;

    /*reaction 55: S-CH2 + M <=> T-CH2 + M */
    nuki[ 17 * kd + 54 ] += -1 ;
    nuki[ 16 * kd + 54 ] += +1 ;

    /*reaction 56: T-CH2 + H <=> CH + H2 */
    nuki[ 16 * kd + 55 ] += -1 ;
    nuki[ 2 * kd + 55 ] += -1 ;
    nuki[ 22 * kd + 55 ] += +1 ;
    nuki[ 6 * kd + 55 ] += +1 ;

    /*reaction 57: T-CH2 + OH <=> CH2O + H */
    nuki[ 16 * kd + 56 ] += -1 ;
    nuki[ 4 * kd + 56 ] += -1 ;
    nuki[ 13 * kd + 56 ] += +1 ;
    nuki[ 2 * kd + 56 ] += +1 ;

    /*reaction 58: T-CH2 + OH <=> CH + H2O */
    nuki[ 16 * kd + 57 ] += -1 ;
    nuki[ 4 * kd + 57 ] += -1 ;
    nuki[ 22 * kd + 57 ] += +1 ;
    nuki[ 7 * kd + 57 ] += +1 ;

    /*reaction 59: T-CH2 + O <=> CO + 2 H */
    nuki[ 16 * kd + 58 ] += -1 ;
    nuki[ 5 * kd + 58 ] += -1 ;
    nuki[ 10 * kd + 58 ] += +1 ;
    nuki[ 2 * kd + 58 ] += +2 ;

    /*reaction 60: T-CH2 + O <=> CO + H2 */
    nuki[ 16 * kd + 59 ] += -1 ;
    nuki[ 5 * kd + 59 ] += -1 ;
    nuki[ 10 * kd + 59 ] += +1 ;
    nuki[ 6 * kd + 59 ] += +1 ;

    /*reaction 61: T-CH2 + O2 <=> CO2 + H2 */
    nuki[ 16 * kd + 60 ] += -1 ;
    nuki[ 3 * kd + 60 ] += -1 ;
    nuki[ 11 * kd + 60 ] += +1 ;
    nuki[ 6 * kd + 60 ] += +1 ;

    /*reaction 62: T-CH2 + O2 <=> CO + OH + H */
    nuki[ 16 * kd + 61 ] += -1 ;
    nuki[ 3 * kd + 61 ] += -1 ;
    nuki[ 10 * kd + 61 ] += +1 ;
    nuki[ 4 * kd + 61 ] += +1 ;
    nuki[ 2 * kd + 61 ] += +1 ;

    /*reaction 63: 2 T-CH2 <=> C2H2 + 2 H */
    nuki[ 16 * kd + 62 ] += -2 ;
    nuki[ 23 * kd + 62 ] += +1 ;
    nuki[ 2 * kd + 62 ] += +2 ;

    /*reaction 64: CH + O <=> CO + H */
    nuki[ 22 * kd + 63 ] += -1 ;
    nuki[ 5 * kd + 63 ] += -1 ;
    nuki[ 10 * kd + 63 ] += +1 ;
    nuki[ 2 * kd + 63 ] += +1 ;

    /*reaction 65: CH + O2 <=> HCO + O */
    nuki[ 22 * kd + 64 ] += -1 ;
    nuki[ 3 * kd + 64 ] += -1 ;
    nuki[ 12 * kd + 64 ] += +1 ;
    nuki[ 5 * kd + 64 ] += +1 ;

    /*reaction 66: CH + H2O <=> CH2O + H */
    nuki[ 22 * kd + 65 ] += -1 ;
    nuki[ 7 * kd + 65 ] += -1 ;
    nuki[ 13 * kd + 65 ] += +1 ;
    nuki[ 2 * kd + 65 ] += +1 ;

    /*reaction 67: CH + CO2 <=> HCO + CO */
    nuki[ 22 * kd + 66 ] += -1 ;
    nuki[ 11 * kd + 66 ] += -1 ;
    nuki[ 12 * kd + 66 ] += +1 ;
    nuki[ 10 * kd + 66 ] += +1 ;

    /*reaction 68: CH3O + H <=> CH2O + H2 */
    nuki[ 19 * kd + 67 ] += -1 ;
    nuki[ 2 * kd + 67 ] += -1 ;
    nuki[ 13 * kd + 67 ] += +1 ;
    nuki[ 6 * kd + 67 ] += +1 ;

    /*reaction 69: CH3O + H <=> S-CH2 + H2O */
    nuki[ 19 * kd + 68 ] += -1 ;
    nuki[ 2 * kd + 68 ] += -1 ;
    nuki[ 17 * kd + 68 ] += +1 ;
    nuki[ 7 * kd + 68 ] += +1 ;

    /*reaction 70: CH3O + OH <=> CH2O + H2O */
    nuki[ 19 * kd + 69 ] += -1 ;
    nuki[ 4 * kd + 69 ] += -1 ;
    nuki[ 13 * kd + 69 ] += +1 ;
    nuki[ 7 * kd + 69 ] += +1 ;

    /*reaction 71: CH3O + O <=> OH + CH2O */
    nuki[ 19 * kd + 70 ] += -1 ;
    nuki[ 5 * kd + 70 ] += -1 ;
    nuki[ 4 * kd + 70 ] += +1 ;
    nuki[ 13 * kd + 70 ] += +1 ;

    /*reaction 72: CH3O + O2 <=> CH2O + HO2 */
    nuki[ 19 * kd + 71 ] += -1 ;
    nuki[ 3 * kd + 71 ] += -1 ;
    nuki[ 13 * kd + 71 ] += +1 ;
    nuki[ 8 * kd + 71 ] += +1 ;

    /*reaction 73: CH3O + M <=> CH2O + H + M */
    nuki[ 19 * kd + 72 ] += -1 ;
    nuki[ 13 * kd + 72 ] += +1 ;
    nuki[ 2 * kd + 72 ] += +1 ;

    /*reaction 74: C2H6 + H <=> C2H5 + H2 */
    nuki[ 21 * kd + 73 ] += -1 ;
    nuki[ 2 * kd + 73 ] += -1 ;
    nuki[ 20 * kd + 73 ] += +1 ;
    nuki[ 6 * kd + 73 ] += +1 ;

    /*reaction 75: C2H6 + O <=> C2H5 + OH */
    nuki[ 21 * kd + 74 ] += -1 ;
    nuki[ 5 * kd + 74 ] += -1 ;
    nuki[ 20 * kd + 74 ] += +1 ;
    nuki[ 4 * kd + 74 ] += +1 ;

    /*reaction 76: C2H6 + OH <=> C2H5 + H2O */
    nuki[ 21 * kd + 75 ] += -1 ;
    nuki[ 4 * kd + 75 ] += -1 ;
    nuki[ 20 * kd + 75 ] += +1 ;
    nuki[ 7 * kd + 75 ] += +1 ;

    /*reaction 77: C2H6 + CH3 <=> C2H5 + CH4 */
    nuki[ 21 * kd + 76 ] += -1 ;
    nuki[ 15 * kd + 76 ] += -1 ;
    nuki[ 20 * kd + 76 ] += +1 ;
    nuki[ 14 * kd + 76 ] += +1 ;

    /*reaction 78: C2H6 (+M) <=> C2H5 + H (+M) */
    nuki[ 21 * kd + 77 ] += -1 ;
    nuki[ 20 * kd + 77 ] += +1 ;
    nuki[ 2 * kd + 77 ] += +1 ;

    /*reaction 79: C2H5 + H <=> C2H4 + H2 */
    nuki[ 20 * kd + 78 ] += -1 ;
    nuki[ 2 * kd + 78 ] += -1 ;
    nuki[ 18 * kd + 78 ] += +1 ;
    nuki[ 6 * kd + 78 ] += +1 ;

    /*reaction 80: C2H5 + O <=> C2H4 + OH */
    nuki[ 20 * kd + 79 ] += -1 ;
    nuki[ 5 * kd + 79 ] += -1 ;
    nuki[ 18 * kd + 79 ] += +1 ;
    nuki[ 4 * kd + 79 ] += +1 ;

    /*reaction 81: C2H5 + O <=> CH3 + CH2O */
    nuki[ 20 * kd + 80 ] += -1 ;
    nuki[ 5 * kd + 80 ] += -1 ;
    nuki[ 15 * kd + 80 ] += +1 ;
    nuki[ 13 * kd + 80 ] += +1 ;

    /*reaction 82: C2H5 + O2 <=> C2H4 + HO2 */
    nuki[ 20 * kd + 81 ] += -1 ;
    nuki[ 3 * kd + 81 ] += -1 ;
    nuki[ 18 * kd + 81 ] += +1 ;
    nuki[ 8 * kd + 81 ] += +1 ;

    /*reaction 83: C2H5 (+M) <=> C2H4 + H (+M) */
    nuki[ 20 * kd + 82 ] += -1 ;
    nuki[ 18 * kd + 82 ] += +1 ;
    nuki[ 2 * kd + 82 ] += +1 ;

    /*reaction 84: C2H4 + H <=> C2H3 + H2 */
    nuki[ 18 * kd + 83 ] += -1 ;
    nuki[ 2 * kd + 83 ] += -1 ;
    nuki[ 24 * kd + 83 ] += +1 ;
    nuki[ 6 * kd + 83 ] += +1 ;

    /*reaction 85: C2H4 + OH <=> C2H3 + H2O */
    nuki[ 18 * kd + 84 ] += -1 ;
    nuki[ 4 * kd + 84 ] += -1 ;
    nuki[ 24 * kd + 84 ] += +1 ;
    nuki[ 7 * kd + 84 ] += +1 ;

    /*reaction 86: C2H4 + O <=> CH3 + HCO */
    nuki[ 18 * kd + 85 ] += -1 ;
    nuki[ 5 * kd + 85 ] += -1 ;
    nuki[ 15 * kd + 85 ] += +1 ;
    nuki[ 12 * kd + 85 ] += +1 ;

    /*reaction 87: C2H4 + O <=> CH2CHO + H */
    nuki[ 18 * kd + 86 ] += -1 ;
    nuki[ 5 * kd + 86 ] += -1 ;
    nuki[ 25 * kd + 86 ] += +1 ;
    nuki[ 2 * kd + 86 ] += +1 ;

    /*reaction 88: 2 C2H4 <=> C2H3 + C2H5 */
    nuki[ 18 * kd + 87 ] += -2 ;
    nuki[ 24 * kd + 87 ] += +1 ;
    nuki[ 20 * kd + 87 ] += +1 ;

    /*reaction 89: C2H4 + O2 <=> C2H3 + HO2 */
    nuki[ 18 * kd + 88 ] += -1 ;
    nuki[ 3 * kd + 88 ] += -1 ;
    nuki[ 24 * kd + 88 ] += +1 ;
    nuki[ 8 * kd + 88 ] += +1 ;

    /*reaction 90: C2H4 + HO2 <=> C2H4O + OH */
    nuki[ 18 * kd + 89 ] += -1 ;
    nuki[ 8 * kd + 89 ] += -1 ;
    nuki[ 26 * kd + 89 ] += +1 ;
    nuki[ 4 * kd + 89 ] += +1 ;

    /*reaction 91: C2H4O + HO2 <=> CH3 + CO + H2O2 */
    nuki[ 26 * kd + 90 ] += -1 ;
    nuki[ 8 * kd + 90 ] += -1 ;
    nuki[ 15 * kd + 90 ] += +1 ;
    nuki[ 10 * kd + 90 ] += +1 ;
    nuki[ 9 * kd + 90 ] += +1 ;

    /*reaction 92: C2H4 + M <=> C2H3 + H + M */
    nuki[ 18 * kd + 91 ] += -1 ;
    nuki[ 24 * kd + 91 ] += +1 ;
    nuki[ 2 * kd + 91 ] += +1 ;

    /*reaction 93: C2H4 + M <=> C2H2 + H2 + M */
    nuki[ 18 * kd + 92 ] += -1 ;
    nuki[ 23 * kd + 92 ] += +1 ;
    nuki[ 6 * kd + 92 ] += +1 ;

    /*reaction 94: C2H3 + H <=> C2H2 + H2 */
    nuki[ 24 * kd + 93 ] += -1 ;
    nuki[ 2 * kd + 93 ] += -1 ;
    nuki[ 23 * kd + 93 ] += +1 ;
    nuki[ 6 * kd + 93 ] += +1 ;

    /*reaction 95: C2H3 (+M) <=> C2H2 + H (+M) */
    nuki[ 24 * kd + 94 ] += -1 ;
    nuki[ 23 * kd + 94 ] += +1 ;
    nuki[ 2 * kd + 94 ] += +1 ;

    /*reaction 96: C2H3 + O2 <=> CH2O + HCO */
    nuki[ 24 * kd + 95 ] += -1 ;
    nuki[ 3 * kd + 95 ] += -1 ;
    nuki[ 13 * kd + 95 ] += +1 ;
    nuki[ 12 * kd + 95 ] += +1 ;

    /*reaction 97: C2H3 + O2 <=> CH2CHO + O */
    nuki[ 24 * kd + 96 ] += -1 ;
    nuki[ 3 * kd + 96 ] += -1 ;
    nuki[ 25 * kd + 96 ] += +1 ;
    nuki[ 5 * kd + 96 ] += +1 ;

    /*reaction 98: C2H3 + O2 <=> C2H2 + HO2 */
    nuki[ 24 * kd + 97 ] += -1 ;
    nuki[ 3 * kd + 97 ] += -1 ;
    nuki[ 23 * kd + 97 ] += +1 ;
    nuki[ 8 * kd + 97 ] += +1 ;

    /*reaction 99: CH2CHO <=> CH2CO + H */
    nuki[ 25 * kd + 98 ] += -1 ;
    nuki[ 27 * kd + 98 ] += +1 ;
    nuki[ 2 * kd + 98 ] += +1 ;

    /*reaction 100: C2H2 + O <=> HCCO + H */
    nuki[ 23 * kd + 99 ] += -1 ;
    nuki[ 5 * kd + 99 ] += -1 ;
    nuki[ 28 * kd + 99 ] += +1 ;
    nuki[ 2 * kd + 99 ] += +1 ;

    /*reaction 101: C2H2 + O <=> T-CH2 + CO */
    nuki[ 23 * kd + 100 ] += -1 ;
    nuki[ 5 * kd + 100 ] += -1 ;
    nuki[ 16 * kd + 100 ] += +1 ;
    nuki[ 10 * kd + 100 ] += +1 ;

    /*reaction 102: C2H2 + O2 <=> CH2O + CO */
    nuki[ 23 * kd + 101 ] += -1 ;
    nuki[ 3 * kd + 101 ] += -1 ;
    nuki[ 13 * kd + 101 ] += +1 ;
    nuki[ 10 * kd + 101 ] += +1 ;

    /*reaction 103: C2H2 + OH <=> CH2CO + H */
    nuki[ 23 * kd + 102 ] += -1 ;
    nuki[ 4 * kd + 102 ] += -1 ;
    nuki[ 27 * kd + 102 ] += +1 ;
    nuki[ 2 * kd + 102 ] += +1 ;

    /*reaction 104: C2H2 + OH <=> C2H + H2O */
    nuki[ 23 * kd + 103 ] += -1 ;
    nuki[ 4 * kd + 103 ] += -1 ;
    nuki[ 29 * kd + 103 ] += +1 ;
    nuki[ 7 * kd + 103 ] += +1 ;

    /*reaction 105: CH2CO + H <=> CH3 + CO */
    nuki[ 27 * kd + 104 ] += -1 ;
    nuki[ 2 * kd + 104 ] += -1 ;
    nuki[ 15 * kd + 104 ] += +1 ;
    nuki[ 10 * kd + 104 ] += +1 ;

    /*reaction 106: CH2CO + O <=> T-CH2 + CO2 */
    nuki[ 27 * kd + 105 ] += -1 ;
    nuki[ 5 * kd + 105 ] += -1 ;
    nuki[ 16 * kd + 105 ] += +1 ;
    nuki[ 11 * kd + 105 ] += +1 ;

    /*reaction 107: CH2CO + O <=> HCCO + OH */
    nuki[ 27 * kd + 106 ] += -1 ;
    nuki[ 5 * kd + 106 ] += -1 ;
    nuki[ 28 * kd + 106 ] += +1 ;
    nuki[ 4 * kd + 106 ] += +1 ;

    /*reaction 108: CH2CO + CH3 <=> C2H5 + CO */
    nuki[ 27 * kd + 107 ] += -1 ;
    nuki[ 15 * kd + 107 ] += -1 ;
    nuki[ 20 * kd + 107 ] += +1 ;
    nuki[ 10 * kd + 107 ] += +1 ;

    /*reaction 109: HCCO + H <=> S-CH2 + CO */
    nuki[ 28 * kd + 108 ] += -1 ;
    nuki[ 2 * kd + 108 ] += -1 ;
    nuki[ 17 * kd + 108 ] += +1 ;
    nuki[ 10 * kd + 108 ] += +1 ;

    /*reaction 110: HCCO + OH <=> HCO + CO + H */
    nuki[ 28 * kd + 109 ] += -1 ;
    nuki[ 4 * kd + 109 ] += -1 ;
    nuki[ 12 * kd + 109 ] += +1 ;
    nuki[ 10 * kd + 109 ] += +1 ;
    nuki[ 2 * kd + 109 ] += +1 ;

    /*reaction 111: HCCO + O <=> 2 CO + H */
    nuki[ 28 * kd + 110 ] += -1 ;
    nuki[ 5 * kd + 110 ] += -1 ;
    nuki[ 10 * kd + 110 ] += +2 ;
    nuki[ 2 * kd + 110 ] += +1 ;

    /*reaction 112: HCCO + O2 <=> 2 CO + OH */
    nuki[ 28 * kd + 111 ] += -1 ;
    nuki[ 3 * kd + 111 ] += -1 ;
    nuki[ 10 * kd + 111 ] += +2 ;
    nuki[ 4 * kd + 111 ] += +1 ;

    /*reaction 113: HCCO + O2 <=> CO2 + CO + H */
    nuki[ 28 * kd + 112 ] += -1 ;
    nuki[ 3 * kd + 112 ] += -1 ;
    nuki[ 11 * kd + 112 ] += +1 ;
    nuki[ 10 * kd + 112 ] += +1 ;
    nuki[ 2 * kd + 112 ] += +1 ;

    /*reaction 114: C2H + OH <=> HCCO + H */
    nuki[ 29 * kd + 113 ] += -1 ;
    nuki[ 4 * kd + 113 ] += -1 ;
    nuki[ 28 * kd + 113 ] += +1 ;
    nuki[ 2 * kd + 113 ] += +1 ;

    /*reaction 115: C2H + O <=> CO + CH */
    nuki[ 29 * kd + 114 ] += -1 ;
    nuki[ 5 * kd + 114 ] += -1 ;
    nuki[ 10 * kd + 114 ] += +1 ;
    nuki[ 22 * kd + 114 ] += +1 ;

    /*reaction 116: C2H + O2 <=> HCCO + O */
    nuki[ 29 * kd + 115 ] += -1 ;
    nuki[ 3 * kd + 115 ] += -1 ;
    nuki[ 28 * kd + 115 ] += +1 ;
    nuki[ 5 * kd + 115 ] += +1 ;

    /*reaction 117: C2H + O2 <=> CH + CO2 */
    nuki[ 29 * kd + 116 ] += -1 ;
    nuki[ 3 * kd + 116 ] += -1 ;
    nuki[ 22 * kd + 116 ] += +1 ;
    nuki[ 11 * kd + 116 ] += +1 ;

    /*reaction 118: C2H + O2 <=> HCO + CO */
    nuki[ 29 * kd + 117 ] += -1 ;
    nuki[ 3 * kd + 117 ] += -1 ;
    nuki[ 12 * kd + 117 ] += +1 ;
    nuki[ 10 * kd + 117 ] += +1 ;

    /*reaction 119: CH2OH + H <=> CH2O + H2 */
    nuki[ 30 * kd + 118 ] += -1 ;
    nuki[ 2 * kd + 118 ] += -1 ;
    nuki[ 13 * kd + 118 ] += +1 ;
    nuki[ 6 * kd + 118 ] += +1 ;

    /*reaction 120: CH2OH + H <=> CH3 + OH */
    nuki[ 30 * kd + 119 ] += -1 ;
    nuki[ 2 * kd + 119 ] += -1 ;
    nuki[ 15 * kd + 119 ] += +1 ;
    nuki[ 4 * kd + 119 ] += +1 ;

    /*reaction 121: CH2OH + OH <=> CH2O + H2O */
    nuki[ 30 * kd + 120 ] += -1 ;
    nuki[ 4 * kd + 120 ] += -1 ;
    nuki[ 13 * kd + 120 ] += +1 ;
    nuki[ 7 * kd + 120 ] += +1 ;

    /*reaction 122: CH2OH + O2 <=> CH2O + HO2 */
    nuki[ 30 * kd + 121 ] += -1 ;
    nuki[ 3 * kd + 121 ] += -1 ;
    nuki[ 13 * kd + 121 ] += +1 ;
    nuki[ 8 * kd + 121 ] += +1 ;

    /*reaction 123: CH2OH + M <=> CH2O + H + M */
    nuki[ 30 * kd + 122 ] += -1 ;
    nuki[ 13 * kd + 122 ] += +1 ;
    nuki[ 2 * kd + 122 ] += +1 ;

    /*reaction 124: CH3O + M <=> CH2OH + M */
    nuki[ 19 * kd + 123 ] += -1 ;
    nuki[ 30 * kd + 123 ] += +1 ;

    /*reaction 125: CH2CO + OH <=> CH2OH + CO */
    nuki[ 27 * kd + 124 ] += -1 ;
    nuki[ 4 * kd + 124 ] += -1 ;
    nuki[ 30 * kd + 124 ] += +1 ;
    nuki[ 10 * kd + 124 ] += +1 ;

    /*reaction 126: CH3OH + OH <=> CH2OH + H2O */
    nuki[ 31 * kd + 125 ] += -1 ;
    nuki[ 4 * kd + 125 ] += -1 ;
    nuki[ 30 * kd + 125 ] += +1 ;
    nuki[ 7 * kd + 125 ] += +1 ;

    /*reaction 127: CH3OH + OH <=> CH3O + H2O */
    nuki[ 31 * kd + 126 ] += -1 ;
    nuki[ 4 * kd + 126 ] += -1 ;
    nuki[ 19 * kd + 126 ] += +1 ;
    nuki[ 7 * kd + 126 ] += +1 ;

    /*reaction 128: CH3OH + H <=> CH2OH + H2 */
    nuki[ 31 * kd + 127 ] += -1 ;
    nuki[ 2 * kd + 127 ] += -1 ;
    nuki[ 30 * kd + 127 ] += +1 ;
    nuki[ 6 * kd + 127 ] += +1 ;

    /*reaction 129: CH3OH + H <=> CH3O + H2 */
    nuki[ 31 * kd + 128 ] += -1 ;
    nuki[ 2 * kd + 128 ] += -1 ;
    nuki[ 19 * kd + 128 ] += +1 ;
    nuki[ 6 * kd + 128 ] += +1 ;

    /*reaction 130: CH3OH + O <=> CH2OH + OH */
    nuki[ 31 * kd + 129 ] += -1 ;
    nuki[ 5 * kd + 129 ] += -1 ;
    nuki[ 30 * kd + 129 ] += +1 ;
    nuki[ 4 * kd + 129 ] += +1 ;

    /*reaction 131: CH3OH + HO2 <=> CH2OH + H2O2 */
    nuki[ 31 * kd + 130 ] += -1 ;
    nuki[ 8 * kd + 130 ] += -1 ;
    nuki[ 30 * kd + 130 ] += +1 ;
    nuki[ 9 * kd + 130 ] += +1 ;

    /*reaction 132: CH3OH + O2 <=> CH2OH + HO2 */
    nuki[ 31 * kd + 131 ] += -1 ;
    nuki[ 3 * kd + 131 ] += -1 ;
    nuki[ 30 * kd + 131 ] += +1 ;
    nuki[ 8 * kd + 131 ] += +1 ;

    /*reaction 133: C3H4 + O <=> C2H4 + CO */
    nuki[ 32 * kd + 132 ] += -1 ;
    nuki[ 5 * kd + 132 ] += -1 ;
    nuki[ 18 * kd + 132 ] += +1 ;
    nuki[ 10 * kd + 132 ] += +1 ;

    /*reaction 134: CH3 + C2H2 <=> C3H4 + H */
    nuki[ 15 * kd + 133 ] += -1 ;
    nuki[ 23 * kd + 133 ] += -1 ;
    nuki[ 32 * kd + 133 ] += +1 ;
    nuki[ 2 * kd + 133 ] += +1 ;

    /*reaction 135: C3H4 + O <=> HCCO + CH3 */
    nuki[ 32 * kd + 134 ] += -1 ;
    nuki[ 5 * kd + 134 ] += -1 ;
    nuki[ 28 * kd + 134 ] += +1 ;
    nuki[ 15 * kd + 134 ] += +1 ;

    /*reaction 136: C3H3 + H (+M) <=> C3H4 (+M) */
    nuki[ 33 * kd + 135 ] += -1 ;
    nuki[ 2 * kd + 135 ] += -1 ;
    nuki[ 32 * kd + 135 ] += +1 ;

    /*reaction 137: C3H3 + HO2 <=> C3H4 + O2 */
    nuki[ 33 * kd + 136 ] += -1 ;
    nuki[ 8 * kd + 136 ] += -1 ;
    nuki[ 32 * kd + 136 ] += +1 ;
    nuki[ 3 * kd + 136 ] += +1 ;

    /*reaction 138: C3H4 + OH <=> C3H3 + H2O */
    nuki[ 32 * kd + 137 ] += -1 ;
    nuki[ 4 * kd + 137 ] += -1 ;
    nuki[ 33 * kd + 137 ] += +1 ;
    nuki[ 7 * kd + 137 ] += +1 ;

    /*reaction 139: C3H3 + O2 <=> CH2CO + HCO */
    nuki[ 33 * kd + 138 ] += -1 ;
    nuki[ 3 * kd + 138 ] += -1 ;
    nuki[ 27 * kd + 138 ] += +1 ;
    nuki[ 12 * kd + 138 ] += +1 ;

    /*reaction 140: C3H4 + H (+M) <=> C3H5 (+M) */
    nuki[ 32 * kd + 139 ] += -1 ;
    nuki[ 2 * kd + 139 ] += -1 ;
    nuki[ 34 * kd + 139 ] += +1 ;

    /*reaction 141: C3H5 + H <=> C3H4 + H2 */
    nuki[ 34 * kd + 140 ] += -1 ;
    nuki[ 2 * kd + 140 ] += -1 ;
    nuki[ 32 * kd + 140 ] += +1 ;
    nuki[ 6 * kd + 140 ] += +1 ;

    /*reaction 142: C3H5 + O2 <=> C3H4 + HO2 */
    nuki[ 34 * kd + 141 ] += -1 ;
    nuki[ 3 * kd + 141 ] += -1 ;
    nuki[ 32 * kd + 141 ] += +1 ;
    nuki[ 8 * kd + 141 ] += +1 ;

    /*reaction 143: C3H5 + CH3 <=> C3H4 + CH4 */
    nuki[ 34 * kd + 142 ] += -1 ;
    nuki[ 15 * kd + 142 ] += -1 ;
    nuki[ 32 * kd + 142 ] += +1 ;
    nuki[ 14 * kd + 142 ] += +1 ;

    /*reaction 144: C2H2 + CH3 (+M) <=> C3H5 (+M) */
    nuki[ 23 * kd + 143 ] += -1 ;
    nuki[ 15 * kd + 143 ] += -1 ;
    nuki[ 34 * kd + 143 ] += +1 ;

    /*reaction 145: C3H5 + OH <=> C3H4 + H2O */
    nuki[ 34 * kd + 144 ] += -1 ;
    nuki[ 4 * kd + 144 ] += -1 ;
    nuki[ 32 * kd + 144 ] += +1 ;
    nuki[ 7 * kd + 144 ] += +1 ;

    /*reaction 146: C3H3 + HCO <=> C3H4 + CO */
    nuki[ 33 * kd + 145 ] += -1 ;
    nuki[ 12 * kd + 145 ] += -1 ;
    nuki[ 32 * kd + 145 ] += +1 ;
    nuki[ 10 * kd + 145 ] += +1 ;

    /*reaction 147: C3H3 + HO2 <=> OH + CO + C2H3 */
    nuki[ 33 * kd + 146 ] += -1 ;
    nuki[ 8 * kd + 146 ] += -1 ;
    nuki[ 4 * kd + 146 ] += +1 ;
    nuki[ 10 * kd + 146 ] += +1 ;
    nuki[ 24 * kd + 146 ] += +1 ;

    /*reaction 148: C3H4 + O2 <=> CH3 + HCO + CO */
    nuki[ 32 * kd + 147 ] += -1 ;
    nuki[ 3 * kd + 147 ] += -1 ;
    nuki[ 15 * kd + 147 ] += +1 ;
    nuki[ 12 * kd + 147 ] += +1 ;
    nuki[ 10 * kd + 147 ] += +1 ;

    /*reaction 149: C3H6 + O <=> C2H5 + HCO */
    nuki[ 35 * kd + 148 ] += -1 ;
    nuki[ 5 * kd + 148 ] += -1 ;
    nuki[ 20 * kd + 148 ] += +1 ;
    nuki[ 12 * kd + 148 ] += +1 ;

    /*reaction 150: C3H6 + OH <=> C3H5 + H2O */
    nuki[ 35 * kd + 149 ] += -1 ;
    nuki[ 4 * kd + 149 ] += -1 ;
    nuki[ 34 * kd + 149 ] += +1 ;
    nuki[ 7 * kd + 149 ] += +1 ;

    /*reaction 151: C3H6 + O <=> CH2CO + CH3 + H */
    nuki[ 35 * kd + 150 ] += -1 ;
    nuki[ 5 * kd + 150 ] += -1 ;
    nuki[ 27 * kd + 150 ] += +1 ;
    nuki[ 15 * kd + 150 ] += +1 ;
    nuki[ 2 * kd + 150 ] += +1 ;

    /*reaction 152: C3H6 + H <=> C3H5 + H2 */
    nuki[ 35 * kd + 151 ] += -1 ;
    nuki[ 2 * kd + 151 ] += -1 ;
    nuki[ 34 * kd + 151 ] += +1 ;
    nuki[ 6 * kd + 151 ] += +1 ;

    /*reaction 153: C3H5 + H (+M) <=> C3H6 (+M) */
    nuki[ 34 * kd + 152 ] += -1 ;
    nuki[ 2 * kd + 152 ] += -1 ;
    nuki[ 35 * kd + 152 ] += +1 ;

    /*reaction 154: C3H5 + HO2 <=> C3H6 + O2 */
    nuki[ 34 * kd + 153 ] += -1 ;
    nuki[ 8 * kd + 153 ] += -1 ;
    nuki[ 35 * kd + 153 ] += +1 ;
    nuki[ 3 * kd + 153 ] += +1 ;

    /*reaction 155: C3H5 + HO2 <=> OH + C2H3 + CH2O */
    nuki[ 34 * kd + 154 ] += -1 ;
    nuki[ 8 * kd + 154 ] += -1 ;
    nuki[ 4 * kd + 154 ] += +1 ;
    nuki[ 24 * kd + 154 ] += +1 ;
    nuki[ 13 * kd + 154 ] += +1 ;

    /*reaction 156: C2H3 + CH3 (+M) <=> C3H6 (+M) */
    nuki[ 24 * kd + 155 ] += -1 ;
    nuki[ 15 * kd + 155 ] += -1 ;
    nuki[ 35 * kd + 155 ] += +1 ;

    /*reaction 157: C3H6 + H <=> C2H4 + CH3 */
    nuki[ 35 * kd + 156 ] += -1 ;
    nuki[ 2 * kd + 156 ] += -1 ;
    nuki[ 18 * kd + 156 ] += +1 ;
    nuki[ 15 * kd + 156 ] += +1 ;

    /*reaction 158: CH3 + C2H3 <=> C3H5 + H */
    nuki[ 15 * kd + 157 ] += -1 ;
    nuki[ 24 * kd + 157 ] += -1 ;
    nuki[ 34 * kd + 157 ] += +1 ;
    nuki[ 2 * kd + 157 ] += +1 ;

    /*reaction 159: C3H8 (+M) <=> CH3 + C2H5 (+M) */
    nuki[ 36 * kd + 158 ] += -1 ;
    nuki[ 15 * kd + 158 ] += +1 ;
    nuki[ 20 * kd + 158 ] += +1 ;

    /*reaction 160: C3H8 + O2 <=> I-C3H7 + HO2 */
    nuki[ 36 * kd + 159 ] += -1 ;
    nuki[ 3 * kd + 159 ] += -1 ;
    nuki[ 37 * kd + 159 ] += +1 ;
    nuki[ 8 * kd + 159 ] += +1 ;

    /*reaction 161: C3H8 + O2 <=> N-C3H7 + HO2 */
    nuki[ 36 * kd + 160 ] += -1 ;
    nuki[ 3 * kd + 160 ] += -1 ;
    nuki[ 38 * kd + 160 ] += +1 ;
    nuki[ 8 * kd + 160 ] += +1 ;

    /*reaction 162: C3H8 + H <=> I-C3H7 + H2 */
    nuki[ 36 * kd + 161 ] += -1 ;
    nuki[ 2 * kd + 161 ] += -1 ;
    nuki[ 37 * kd + 161 ] += +1 ;
    nuki[ 6 * kd + 161 ] += +1 ;

    /*reaction 163: C3H8 + H <=> N-C3H7 + H2 */
    nuki[ 36 * kd + 162 ] += -1 ;
    nuki[ 2 * kd + 162 ] += -1 ;
    nuki[ 38 * kd + 162 ] += +1 ;
    nuki[ 6 * kd + 162 ] += +1 ;

    /*reaction 164: C3H8 + O <=> I-C3H7 + OH */
    nuki[ 36 * kd + 163 ] += -1 ;
    nuki[ 5 * kd + 163 ] += -1 ;
    nuki[ 37 * kd + 163 ] += +1 ;
    nuki[ 4 * kd + 163 ] += +1 ;

    /*reaction 165: C3H8 + O <=> N-C3H7 + OH */
    nuki[ 36 * kd + 164 ] += -1 ;
    nuki[ 5 * kd + 164 ] += -1 ;
    nuki[ 38 * kd + 164 ] += +1 ;
    nuki[ 4 * kd + 164 ] += +1 ;

    /*reaction 166: C3H8 + OH <=> N-C3H7 + H2O */
    nuki[ 36 * kd + 165 ] += -1 ;
    nuki[ 4 * kd + 165 ] += -1 ;
    nuki[ 38 * kd + 165 ] += +1 ;
    nuki[ 7 * kd + 165 ] += +1 ;

    /*reaction 167: C3H8 + OH <=> I-C3H7 + H2O */
    nuki[ 36 * kd + 166 ] += -1 ;
    nuki[ 4 * kd + 166 ] += -1 ;
    nuki[ 37 * kd + 166 ] += +1 ;
    nuki[ 7 * kd + 166 ] += +1 ;

    /*reaction 168: C3H8 + HO2 <=> I-C3H7 + H2O2 */
    nuki[ 36 * kd + 167 ] += -1 ;
    nuki[ 8 * kd + 167 ] += -1 ;
    nuki[ 37 * kd + 167 ] += +1 ;
    nuki[ 9 * kd + 167 ] += +1 ;

    /*reaction 169: C3H8 + HO2 <=> N-C3H7 + H2O2 */
    nuki[ 36 * kd + 168 ] += -1 ;
    nuki[ 8 * kd + 168 ] += -1 ;
    nuki[ 38 * kd + 168 ] += +1 ;
    nuki[ 9 * kd + 168 ] += +1 ;

    /*reaction 170: I-C3H7 + C3H8 <=> N-C3H7 + C3H8 */
    nuki[ 37 * kd + 169 ] += -1 ;
    nuki[ 36 * kd + 169 ] += -1 ;
    nuki[ 38 * kd + 169 ] += +1 ;
    nuki[ 36 * kd + 169 ] += +1 ;

    /*reaction 171: C3H6 + H (+M) <=> I-C3H7 (+M) */
    nuki[ 35 * kd + 170 ] += -1 ;
    nuki[ 2 * kd + 170 ] += -1 ;
    nuki[ 37 * kd + 170 ] += +1 ;

    /*reaction 172: I-C3H7 + O2 <=> C3H6 + HO2 */
    nuki[ 37 * kd + 171 ] += -1 ;
    nuki[ 3 * kd + 171 ] += -1 ;
    nuki[ 35 * kd + 171 ] += +1 ;
    nuki[ 8 * kd + 171 ] += +1 ;

    /*reaction 173: N-C3H7 (+M) <=> CH3 + C2H4 (+M) */
    nuki[ 38 * kd + 172 ] += -1 ;
    nuki[ 15 * kd + 172 ] += +1 ;
    nuki[ 18 * kd + 172 ] += +1 ;

    /*reaction 174: H + C3H6 (+M) <=> N-C3H7 (+M) */
    nuki[ 2 * kd + 173 ] += -1 ;
    nuki[ 35 * kd + 173 ] += -1 ;
    nuki[ 38 * kd + 173 ] += +1 ;

    /*reaction 175: N-C3H7 + O2 <=> C3H6 + HO2 */
    nuki[ 38 * kd + 174 ] += -1 ;
    nuki[ 3 * kd + 174 ] += -1 ;
    nuki[ 35 * kd + 174 ] += +1 ;
    nuki[ 8 * kd + 174 ] += +1 ;
}


/*Returns the elemental composition  */
/*of the speciesi (mdim is num of elements) */
void CKNCF(int * mdim, int * iwrk, double * rwrk, int * ncf)
{
    int id; /*loop counter */
    int kd = (*mdim); 
    /*Zero ncf */
    for (id = 0; id < 5 * 39; ++ id) {
         ncf[id] = 0; 
    }

    /*N2 */
    ncf[ 0 * kd + 0 ] = 2; /*N */

    /*AR */
    ncf[ 1 * kd + 1 ] = 1; /*AR */

    /*H */
    ncf[ 2 * kd + 2 ] = 1; /*H */

    /*O2 */
    ncf[ 3 * kd + 3 ] = 2; /*O */

    /*OH */
    ncf[ 4 * kd + 3 ] = 1; /*O */
    ncf[ 4 * kd + 2 ] = 1; /*H */

    /*O */
    ncf[ 5 * kd + 3 ] = 1; /*O */

    /*H2 */
    ncf[ 6 * kd + 2 ] = 2; /*H */

    /*H2O */
    ncf[ 7 * kd + 2 ] = 2; /*H */
    ncf[ 7 * kd + 3 ] = 1; /*O */

    /*HO2 */
    ncf[ 8 * kd + 2 ] = 1; /*H */
    ncf[ 8 * kd + 3 ] = 2; /*O */

    /*H2O2 */
    ncf[ 9 * kd + 2 ] = 2; /*H */
    ncf[ 9 * kd + 3 ] = 2; /*O */

    /*CO */
    ncf[ 10 * kd + 4 ] = 1; /*C */
    ncf[ 10 * kd + 3 ] = 1; /*O */

    /*CO2 */
    ncf[ 11 * kd + 4 ] = 1; /*C */
    ncf[ 11 * kd + 3 ] = 2; /*O */

    /*HCO */
    ncf[ 12 * kd + 2 ] = 1; /*H */
    ncf[ 12 * kd + 4 ] = 1; /*C */
    ncf[ 12 * kd + 3 ] = 1; /*O */

    /*CH2O */
    ncf[ 13 * kd + 2 ] = 2; /*H */
    ncf[ 13 * kd + 4 ] = 1; /*C */
    ncf[ 13 * kd + 3 ] = 1; /*O */

    /*CH4 */
    ncf[ 14 * kd + 4 ] = 1; /*C */
    ncf[ 14 * kd + 2 ] = 4; /*H */

    /*CH3 */
    ncf[ 15 * kd + 4 ] = 1; /*C */
    ncf[ 15 * kd + 2 ] = 3; /*H */

    /*T-CH2 */
    ncf[ 16 * kd + 4 ] = 1; /*C */
    ncf[ 16 * kd + 2 ] = 2; /*H */

    /*S-CH2 */
    ncf[ 17 * kd + 4 ] = 1; /*C */
    ncf[ 17 * kd + 2 ] = 2; /*H */

    /*C2H4 */
    ncf[ 18 * kd + 4 ] = 2; /*C */
    ncf[ 18 * kd + 2 ] = 4; /*H */

    /*CH3O */
    ncf[ 19 * kd + 4 ] = 1; /*C */
    ncf[ 19 * kd + 2 ] = 3; /*H */
    ncf[ 19 * kd + 3 ] = 1; /*O */

    /*C2H5 */
    ncf[ 20 * kd + 4 ] = 2; /*C */
    ncf[ 20 * kd + 2 ] = 5; /*H */

    /*C2H6 */
    ncf[ 21 * kd + 4 ] = 2; /*C */
    ncf[ 21 * kd + 2 ] = 6; /*H */

    /*CH */
    ncf[ 22 * kd + 4 ] = 1; /*C */
    ncf[ 22 * kd + 2 ] = 1; /*H */

    /*C2H2 */
    ncf[ 23 * kd + 4 ] = 2; /*C */
    ncf[ 23 * kd + 2 ] = 2; /*H */

    /*C2H3 */
    ncf[ 24 * kd + 4 ] = 2; /*C */
    ncf[ 24 * kd + 2 ] = 3; /*H */

    /*CH2CHO */
    ncf[ 25 * kd + 3 ] = 1; /*O */
    ncf[ 25 * kd + 2 ] = 3; /*H */
    ncf[ 25 * kd + 4 ] = 2; /*C */

    /*C2H4O */
    ncf[ 26 * kd + 4 ] = 2; /*C */
    ncf[ 26 * kd + 2 ] = 4; /*H */
    ncf[ 26 * kd + 3 ] = 1; /*O */

    /*CH2CO */
    ncf[ 27 * kd + 4 ] = 2; /*C */
    ncf[ 27 * kd + 2 ] = 2; /*H */
    ncf[ 27 * kd + 3 ] = 1; /*O */

    /*HCCO */
    ncf[ 28 * kd + 2 ] = 1; /*H */
    ncf[ 28 * kd + 4 ] = 2; /*C */
    ncf[ 28 * kd + 3 ] = 1; /*O */

    /*C2H */
    ncf[ 29 * kd + 4 ] = 2; /*C */
    ncf[ 29 * kd + 2 ] = 1; /*H */

    /*CH2OH */
    ncf[ 30 * kd + 4 ] = 1; /*C */
    ncf[ 30 * kd + 2 ] = 3; /*H */
    ncf[ 30 * kd + 3 ] = 1; /*O */

    /*CH3OH */
    ncf[ 31 * kd + 4 ] = 1; /*C */
    ncf[ 31 * kd + 2 ] = 4; /*H */
    ncf[ 31 * kd + 3 ] = 1; /*O */

    /*C3H4 */
    ncf[ 32 * kd + 4 ] = 3; /*C */
    ncf[ 32 * kd + 2 ] = 4; /*H */

    /*C3H3 */
    ncf[ 33 * kd + 4 ] = 3; /*C */
    ncf[ 33 * kd + 2 ] = 3; /*H */

    /*C3H5 */
    ncf[ 34 * kd + 4 ] = 3; /*C */
    ncf[ 34 * kd + 2 ] = 5; /*H */

    /*C3H6 */
    ncf[ 35 * kd + 4 ] = 3; /*C */
    ncf[ 35 * kd + 2 ] = 6; /*H */

    /*C3H8 */
    ncf[ 36 * kd + 4 ] = 3; /*C */
    ncf[ 36 * kd + 2 ] = 8; /*H */

    /*I-C3H7 */
    ncf[ 37 * kd + 4 ] = 3; /*C */
    ncf[ 37 * kd + 2 ] = 7; /*H */

    /*N-C3H7 */
    ncf[ 38 * kd + 4 ] = 3; /*C */
    ncf[ 38 * kd + 2 ] = 7; /*H */

}


/*Returns the arrehenius coefficients  */
/*for all reactions */
void CKABE(int * iwrk, double * rwrk, double * a, double * b, double * e)
{

    /*reaction 1: H + O2 <=> OH + O */
    a[0] = 3.52e+16;
    b[0] = -0.7;
    e[0] = 17069.79;

    /*reaction 2: H2 + O <=> OH + H */
    a[1] = 50600;
    b[1] = 2.67;
    e[1] = 6290.63;

    /*reaction 3: H2 + OH <=> H2O + H */
    a[2] = 1.17e+09;
    b[2] = 1.3;
    e[2] = 3635.28;

    /*reaction 4: H2O + O <=> 2 OH */
    a[3] = 7.6;
    b[3] = 3.84;
    e[3] = 12779.64;

    /*reaction 5: H + O + M <=> OH + M */
    a[4] = 6.2e+16;
    b[4] = -0.6;
    e[4] = 0;

    /*reaction 6: H2 + O2 <=> 2 OH */
    a[5] = 1.7e+13;
    b[5] = 0;
    e[5] = 47813.1;

    /*reaction 7: 2 H + M <=> H2 + M */
    a[6] = 7.2e+17;
    b[6] = -1;
    e[6] = 0;

    /*reaction 8: H + OH + M <=> H2O + M */
    a[7] = 3.8e+22;
    b[7] = -2;
    e[7] = 0;

    /*reaction 9: 2 O + M <=> O2 + M */
    a[8] = 6.17e+15;
    b[8] = -0.5;
    e[8] = 0;

    /*reaction 10: H + O2 (+M) <=> HO2 (+M) */
    a[9] = 4.65e+12;
    b[9] = 0.44;
    e[9] = 0;

    /*reaction 11: O + OH + M <=> HO2 + M */
    a[10] = 1e+16;
    b[10] = 0;
    e[10] = 0;

    /*reaction 12: HO2 + H <=> 2 OH */
    a[11] = 7.08e+13;
    b[11] = 0;
    e[11] = 299.95;

    /*reaction 13: HO2 + H <=> H2 + O2 */
    a[12] = 4.28e+13;
    b[12] = 0;
    e[12] = 1410.13;

    /*reaction 14: HO2 + H <=> H2O + O */
    a[13] = 3.1e+13;
    b[13] = 0;
    e[13] = 1720.84;

    /*reaction 15: HO2 + O <=> OH + O2 */
    a[14] = 2e+13;
    b[14] = 0;
    e[14] = 0;

    /*reaction 16: HO2 + OH <=> H2O + O2 */
    a[15] = 2.89e+13;
    b[15] = 0;
    e[15] = -497.13;

    /*reaction 17: 2 OH (+M) <=> H2O2 (+M) */
    a[16] = 7.4e+13;
    b[16] = -0.37;
    e[16] = 0;

    /*reaction 18: 2 HO2 <=> H2O2 + O2 */
    a[17] = 3.02e+12;
    b[17] = 0;
    e[17] = 1386.23;

    /*reaction 19: H2O2 + H <=> HO2 + H2 */
    a[18] = 4.79e+13;
    b[18] = 0;
    e[18] = 7958.89;

    /*reaction 20: H2O2 + H <=> H2O + OH */
    a[19] = 1e+13;
    b[19] = 0;
    e[19] = 3585.09;

    /*reaction 21: H2O2 + OH <=> H2O + HO2 */
    a[20] = 7.08e+12;
    b[20] = 0;
    e[20] = 1434.03;

    /*reaction 22: H2O2 + O <=> HO2 + OH */
    a[21] = 9.63e+06;
    b[21] = 2;
    e[21] = 3991.4;

    /*reaction 23: CO + OH <=> CO2 + H */
    a[22] = 4.4e+06;
    b[22] = 1.5;
    e[22] = -740.92;

    /*reaction 24: CO + HO2 <=> CO2 + OH */
    a[23] = 6.03e+13;
    b[23] = 0;
    e[23] = 22944.55;

    /*reaction 25: HCO + M <=> CO + H + M */
    a[24] = 1.86e+17;
    b[24] = -1;
    e[24] = 17000.48;

    /*reaction 26: HCO + H <=> CO + H2 */
    a[25] = 1e+14;
    b[25] = 0;
    e[25] = 0;

    /*reaction 27: HCO + O <=> CO + OH */
    a[26] = 3e+13;
    b[26] = 0;
    e[26] = 0;

    /*reaction 28: HCO + O <=> CO2 + H */
    a[27] = 3e+13;
    b[27] = 0;
    e[27] = 0;

    /*reaction 29: HCO + OH <=> CO + H2O */
    a[28] = 5.02e+13;
    b[28] = 0;
    e[28] = 0;

    /*reaction 30: HCO + O2 <=> CO + HO2 */
    a[29] = 3e+12;
    b[29] = 0;
    e[29] = 0;

    /*reaction 31: CH2O + M <=> HCO + H + M */
    a[30] = 6.26e+16;
    b[30] = 0;
    e[30] = 77915.87;

    /*reaction 32: CH2O + H <=> HCO + H2 */
    a[31] = 1.26e+08;
    b[31] = 1.62;
    e[31] = 2165.39;

    /*reaction 33: CH2O + O <=> HCO + OH */
    a[32] = 3.5e+13;
    b[32] = 0;
    e[32] = 3513.38;

    /*reaction 34: CH2O + OH <=> HCO + H2O */
    a[33] = 3.9e+10;
    b[33] = 0.89;
    e[33] = 406.31;

    /*reaction 35: CH4 + H <=> H2 + CH3 */
    a[34] = 13000;
    b[34] = 3;
    e[34] = 8037.76;

    /*reaction 36: CH4 + OH <=> H2O + CH3 */
    a[35] = 1.6e+07;
    b[35] = 1.83;
    e[35] = 2782.03;

    /*reaction 37: CH4 + O <=> CH3 + OH */
    a[36] = 1.9e+09;
    b[36] = 1.44;
    e[36] = 8675.91;

    /*reaction 38: CH4 + O2 <=> CH3 + HO2 */
    a[37] = 3.98e+13;
    b[37] = 0;
    e[37] = 56890.54;

    /*reaction 39: CH4 + HO2 <=> CH3 + H2O2 */
    a[38] = 9.03e+12;
    b[38] = 0;
    e[38] = 24641.49;

    /*reaction 40: CH3 + H <=> T-CH2 + H2 */
    a[39] = 1.8e+14;
    b[39] = 0;
    e[39] = 15105.16;

    /*reaction 41: CH3 + H <=> S-CH2 + H2 */
    a[40] = 1.55e+14;
    b[40] = 0;
    e[40] = 13479.92;

    /*reaction 42: CH3 + OH <=> S-CH2 + H2O */
    a[41] = 1e+13;
    b[41] = 0;
    e[41] = 2502.39;

    /*reaction 43: CH3 + O <=> CH2O + H */
    a[42] = 8.43e+13;
    b[42] = 0;
    e[42] = 0;

    /*reaction 44: CH3 + T-CH2 <=> C2H4 + H */
    a[43] = 4.22e+13;
    b[43] = 0;
    e[43] = 0;

    /*reaction 45: CH3 + HO2 <=> CH3O + OH */
    a[44] = 5e+12;
    b[44] = 0;
    e[44] = 0;

    /*reaction 46: CH3 + O2 <=> CH2O + OH */
    a[45] = 3.3e+11;
    b[45] = 0;
    e[45] = 8941.2;

    /*reaction 47: CH3 + O2 <=> CH3O + O */
    a[46] = 1.33e+14;
    b[46] = 0;
    e[46] = 31405.35;

    /*reaction 48: 2 CH3 <=> C2H4 + H2 */
    a[47] = 1e+14;
    b[47] = 0;
    e[47] = 32002.87;

    /*reaction 49: 2 CH3 <=> C2H5 + H */
    a[48] = 3.16e+13;
    b[48] = 0;
    e[48] = 14698.85;

    /*reaction 50: CH3 + H (+M) <=> CH4 (+M) */
    a[49] = 2.11e+14;
    b[49] = 0;
    e[49] = 0;

    /*reaction 51: 2 CH3 (+M) <=> C2H6 (+M) */
    a[50] = 1.81e+13;
    b[50] = 0;
    e[50] = 0;

    /*reaction 52: S-CH2 + OH <=> CH2O + H */
    a[51] = 3e+13;
    b[51] = 0;
    e[51] = 0;

    /*reaction 53: S-CH2 + O2 <=> CO + OH + H */
    a[52] = 3.13e+13;
    b[52] = 0;
    e[52] = 0;

    /*reaction 54: S-CH2 + CO2 <=> CO + CH2O */
    a[53] = 3e+12;
    b[53] = 0;
    e[53] = 0;

    /*reaction 55: S-CH2 + M <=> T-CH2 + M */
    a[54] = 6e+12;
    b[54] = 0;
    e[54] = 0;

    /*reaction 56: T-CH2 + H <=> CH + H2 */
    a[55] = 6.02e+12;
    b[55] = 0;
    e[55] = -1787.76;

    /*reaction 57: T-CH2 + OH <=> CH2O + H */
    a[56] = 2.5e+13;
    b[56] = 0;
    e[56] = 0;

    /*reaction 58: T-CH2 + OH <=> CH + H2O */
    a[57] = 1.13e+07;
    b[57] = 2;
    e[57] = 2999.52;

    /*reaction 59: T-CH2 + O <=> CO + 2 H */
    a[58] = 8e+13;
    b[58] = 0;
    e[58] = 0;

    /*reaction 60: T-CH2 + O <=> CO + H2 */
    a[59] = 4e+13;
    b[59] = 0;
    e[59] = 0;

    /*reaction 61: T-CH2 + O2 <=> CO2 + H2 */
    a[60] = 2.63e+12;
    b[60] = 0;
    e[60] = 1491.4;

    /*reaction 62: T-CH2 + O2 <=> CO + OH + H */
    a[61] = 6.58e+12;
    b[61] = 0;
    e[61] = 1491.4;

    /*reaction 63: 2 T-CH2 <=> C2H2 + 2 H */
    a[62] = 1e+14;
    b[62] = 0;
    e[62] = 0;

    /*reaction 64: CH + O <=> CO + H */
    a[63] = 4e+13;
    b[63] = 0;
    e[63] = 0;

    /*reaction 65: CH + O2 <=> HCO + O */
    a[64] = 1.77e+11;
    b[64] = 0.76;
    e[64] = -478.01;

    /*reaction 66: CH + H2O <=> CH2O + H */
    a[65] = 1.17e+15;
    b[65] = -0.75;
    e[65] = 0;

    /*reaction 67: CH + CO2 <=> HCO + CO */
    a[66] = 48;
    b[66] = 3.22;
    e[66] = -3226.58;

    /*reaction 68: CH3O + H <=> CH2O + H2 */
    a[67] = 2e+13;
    b[67] = 0;
    e[67] = 0;

    /*reaction 69: CH3O + H <=> S-CH2 + H2O */
    a[68] = 1.6e+13;
    b[68] = 0;
    e[68] = 0;

    /*reaction 70: CH3O + OH <=> CH2O + H2O */
    a[69] = 5e+12;
    b[69] = 0;
    e[69] = 0;

    /*reaction 71: CH3O + O <=> OH + CH2O */
    a[70] = 1e+13;
    b[70] = 0;
    e[70] = 0;

    /*reaction 72: CH3O + O2 <=> CH2O + HO2 */
    a[71] = 4.28e-13;
    b[71] = 7.6;
    e[71] = -3537.28;

    /*reaction 73: CH3O + M <=> CH2O + H + M */
    a[72] = 1e+13;
    b[72] = 0;
    e[72] = 13503.82;

    /*reaction 74: C2H6 + H <=> C2H5 + H2 */
    a[73] = 540;
    b[73] = 3.5;
    e[73] = 5210.33;

    /*reaction 75: C2H6 + O <=> C2H5 + OH */
    a[74] = 1.4;
    b[74] = 4.3;
    e[74] = 2772.47;

    /*reaction 76: C2H6 + OH <=> C2H5 + H2O */
    a[75] = 2.2e+07;
    b[75] = 1.9;
    e[75] = 1123.33;

    /*reaction 77: C2H6 + CH3 <=> C2H5 + CH4 */
    a[76] = 0.55;
    b[76] = 4;
    e[76] = 8293.5;

    /*reaction 78: C2H6 (+M) <=> C2H5 + H (+M) */
    a[77] = 8.85e+20;
    b[77] = -1.23;
    e[77] = 102222.75;

    /*reaction 79: C2H5 + H <=> C2H4 + H2 */
    a[78] = 3e+13;
    b[78] = 0;
    e[78] = 0;

    /*reaction 80: C2H5 + O <=> C2H4 + OH */
    a[79] = 3.06e+13;
    b[79] = 0;
    e[79] = 0;

    /*reaction 81: C2H5 + O <=> CH3 + CH2O */
    a[80] = 4.24e+13;
    b[80] = 0;
    e[80] = 0;

    /*reaction 82: C2H5 + O2 <=> C2H4 + HO2 */
    a[81] = 2e+12;
    b[81] = 0;
    e[81] = 4995.22;

    /*reaction 83: C2H5 (+M) <=> C2H4 + H (+M) */
    a[82] = 1.11e+10;
    b[82] = 1.037;
    e[82] = 36768.64;

    /*reaction 84: C2H4 + H <=> C2H3 + H2 */
    a[83] = 4.49e+07;
    b[83] = 2.12;
    e[83] = 13360.42;

    /*reaction 85: C2H4 + OH <=> C2H3 + H2O */
    a[84] = 553000;
    b[84] = 2.31;
    e[84] = 2963.67;

    /*reaction 86: C2H4 + O <=> CH3 + HCO */
    a[85] = 2.25e+06;
    b[85] = 2.08;
    e[85] = 0;

    /*reaction 87: C2H4 + O <=> CH2CHO + H */
    a[86] = 1.21e+06;
    b[86] = 2.08;
    e[86] = 0;

    /*reaction 88: 2 C2H4 <=> C2H3 + C2H5 */
    a[87] = 5.01e+14;
    b[87] = 0;
    e[87] = 64700.05;

    /*reaction 89: C2H4 + O2 <=> C2H3 + HO2 */
    a[88] = 4.22e+13;
    b[88] = 0;
    e[88] = 57623.09;

    /*reaction 90: C2H4 + HO2 <=> C2H4O + OH */
    a[89] = 2.23e+12;
    b[89] = 0;
    e[89] = 17189.29;

    /*reaction 91: C2H4O + HO2 <=> CH3 + CO + H2O2 */
    a[90] = 4e+12;
    b[90] = 0;
    e[90] = 17007.65;

    /*reaction 92: C2H4 + M <=> C2H3 + H + M */
    a[91] = 2.6e+17;
    b[91] = 0;
    e[91] = 96568.12;

    /*reaction 93: C2H4 + M <=> C2H2 + H2 + M */
    a[92] = 3.5e+16;
    b[92] = 0;
    e[92] = 71532.03;

    /*reaction 94: C2H3 + H <=> C2H2 + H2 */
    a[93] = 1.21e+13;
    b[93] = 0;
    e[93] = 0;

    /*reaction 95: C2H3 (+M) <=> C2H2 + H (+M) */
    a[94] = 6.38e+09;
    b[94] = 1;
    e[94] = 37626.67;

    /*reaction 96: C2H3 + O2 <=> CH2O + HCO */
    a[95] = 1.7e+29;
    b[95] = -5.312;
    e[95] = 6503.11;

    /*reaction 97: C2H3 + O2 <=> CH2CHO + O */
    a[96] = 7e+14;
    b[96] = -0.611;
    e[96] = 5262.43;

    /*reaction 98: C2H3 + O2 <=> C2H2 + HO2 */
    a[97] = 5.19e+15;
    b[97] = -1.26;
    e[97] = 3312.62;

    /*reaction 99: CH2CHO <=> CH2CO + H */
    a[98] = 1.047e+37;
    b[98] = -7.189;
    e[98] = 44340.34;

    /*reaction 100: C2H2 + O <=> HCCO + H */
    a[99] = 4e+14;
    b[99] = 0;
    e[99] = 10659.66;

    /*reaction 101: C2H2 + O <=> T-CH2 + CO */
    a[100] = 1.6e+14;
    b[100] = 0;
    e[100] = 9894.84;

    /*reaction 102: C2H2 + O2 <=> CH2O + CO */
    a[101] = 4.6e+15;
    b[101] = -0.54;
    e[101] = 44933.08;

    /*reaction 103: C2H2 + OH <=> CH2CO + H */
    a[102] = 1.9e+07;
    b[102] = 1.7;
    e[102] = 999.04;

    /*reaction 104: C2H2 + OH <=> C2H + H2O */
    a[103] = 3.37e+07;
    b[103] = 2;
    e[103] = 14000.96;

    /*reaction 105: CH2CO + H <=> CH3 + CO */
    a[104] = 1.5e+09;
    b[104] = 1.43;
    e[104] = 2688.81;

    /*reaction 106: CH2CO + O <=> T-CH2 + CO2 */
    a[105] = 2e+13;
    b[105] = 0;
    e[105] = 2294.46;

    /*reaction 107: CH2CO + O <=> HCCO + OH */
    a[106] = 1e+13;
    b[106] = 0;
    e[106] = 2000.48;

    /*reaction 108: CH2CO + CH3 <=> C2H5 + CO */
    a[107] = 9e+10;
    b[107] = 0;
    e[107] = 0;

    /*reaction 109: HCCO + H <=> S-CH2 + CO */
    a[108] = 1.5e+14;
    b[108] = 0;
    e[108] = 0;

    /*reaction 110: HCCO + OH <=> HCO + CO + H */
    a[109] = 2e+12;
    b[109] = 0;
    e[109] = 0;

    /*reaction 111: HCCO + O <=> 2 CO + H */
    a[110] = 9.64e+13;
    b[110] = 0;
    e[110] = 0;

    /*reaction 112: HCCO + O2 <=> 2 CO + OH */
    a[111] = 2.88e+07;
    b[111] = 1.7;
    e[111] = 1001.43;

    /*reaction 113: HCCO + O2 <=> CO2 + CO + H */
    a[112] = 1.4e+07;
    b[112] = 1.7;
    e[112] = 1001.43;

    /*reaction 114: C2H + OH <=> HCCO + H */
    a[113] = 2e+13;
    b[113] = 0;
    e[113] = 0;

    /*reaction 115: C2H + O <=> CO + CH */
    a[114] = 1.02e+13;
    b[114] = 0;
    e[114] = 0;

    /*reaction 116: C2H + O2 <=> HCCO + O */
    a[115] = 6.02e+11;
    b[115] = 0;
    e[115] = 0;

    /*reaction 117: C2H + O2 <=> CH + CO2 */
    a[116] = 4.5e+15;
    b[116] = 0;
    e[116] = 25095.6;

    /*reaction 118: C2H + O2 <=> HCO + CO */
    a[117] = 2.41e+12;
    b[117] = 0;
    e[117] = 0;

    /*reaction 119: CH2OH + H <=> CH2O + H2 */
    a[118] = 3e+13;
    b[118] = 0;
    e[118] = 0;

    /*reaction 120: CH2OH + H <=> CH3 + OH */
    a[119] = 1.75e+14;
    b[119] = 0;
    e[119] = 2796.37;

    /*reaction 121: CH2OH + OH <=> CH2O + H2O */
    a[120] = 2.4e+13;
    b[120] = 0;
    e[120] = 0;

    /*reaction 122: CH2OH + O2 <=> CH2O + HO2 */
    a[121] = 5e+12;
    b[121] = 0;
    e[121] = 0;

    /*reaction 123: CH2OH + M <=> CH2O + H + M */
    a[122] = 5e+13;
    b[122] = 0;
    e[122] = 25119.5;

    /*reaction 124: CH3O + M <=> CH2OH + M */
    a[123] = 1e+14;
    b[123] = 0;
    e[123] = 19120.46;

    /*reaction 125: CH2CO + OH <=> CH2OH + CO */
    a[124] = 1.02e+13;
    b[124] = 0;
    e[124] = 0;

    /*reaction 126: CH3OH + OH <=> CH2OH + H2O */
    a[125] = 1.44e+06;
    b[125] = 2;
    e[125] = -838.91;

    /*reaction 127: CH3OH + OH <=> CH3O + H2O */
    a[126] = 6.3e+06;
    b[126] = 2;
    e[126] = 1505.74;

    /*reaction 128: CH3OH + H <=> CH2OH + H2 */
    a[127] = 1.64e+07;
    b[127] = 2;
    e[127] = 4517.21;

    /*reaction 129: CH3OH + H <=> CH3O + H2 */
    a[128] = 3.83e+07;
    b[128] = 2;
    e[128] = 5855.64;

    /*reaction 130: CH3OH + O <=> CH2OH + OH */
    a[129] = 1e+13;
    b[129] = 0;
    e[129] = 4684.51;

    /*reaction 131: CH3OH + HO2 <=> CH2OH + H2O2 */
    a[130] = 6.2e+12;
    b[130] = 0;
    e[130] = 19383.37;

    /*reaction 132: CH3OH + O2 <=> CH2OH + HO2 */
    a[131] = 2e+13;
    b[131] = 0;
    e[131] = 44933.08;

    /*reaction 133: C3H4 + O <=> C2H4 + CO */
    a[132] = 2e+07;
    b[132] = 1.8;
    e[132] = 1000;

    /*reaction 134: CH3 + C2H2 <=> C3H4 + H */
    a[133] = 2.56e+09;
    b[133] = 1.1;
    e[133] = 13643.88;

    /*reaction 135: C3H4 + O <=> HCCO + CH3 */
    a[134] = 7.3e+12;
    b[134] = 0;
    e[134] = 2250;

    /*reaction 136: C3H3 + H (+M) <=> C3H4 (+M) */
    a[135] = 3e+13;
    b[135] = 0;
    e[135] = 0;

    /*reaction 137: C3H3 + HO2 <=> C3H4 + O2 */
    a[136] = 2.5e+12;
    b[136] = 0;
    e[136] = 0;

    /*reaction 138: C3H4 + OH <=> C3H3 + H2O */
    a[137] = 5.3e+06;
    b[137] = 2;
    e[137] = 2000;

    /*reaction 139: C3H3 + O2 <=> CH2CO + HCO */
    a[138] = 3e+10;
    b[138] = 0;
    e[138] = 2868.07;

    /*reaction 140: C3H4 + H (+M) <=> C3H5 (+M) */
    a[139] = 4e+13;
    b[139] = 0;
    e[139] = 0;

    /*reaction 141: C3H5 + H <=> C3H4 + H2 */
    a[140] = 1.8e+13;
    b[140] = 0;
    e[140] = 0;

    /*reaction 142: C3H5 + O2 <=> C3H4 + HO2 */
    a[141] = 4.99e+15;
    b[141] = -1.4;
    e[141] = 22428.06;

    /*reaction 143: C3H5 + CH3 <=> C3H4 + CH4 */
    a[142] = 3e+12;
    b[142] = -0.32;
    e[142] = -130.98;

    /*reaction 144: C2H2 + CH3 (+M) <=> C3H5 (+M) */
    a[143] = 6e+08;
    b[143] = 0;
    e[143] = 0;

    /*reaction 145: C3H5 + OH <=> C3H4 + H2O */
    a[144] = 6e+12;
    b[144] = 0;
    e[144] = 0;

    /*reaction 146: C3H3 + HCO <=> C3H4 + CO */
    a[145] = 2.5e+13;
    b[145] = 0;
    e[145] = 0;

    /*reaction 147: C3H3 + HO2 <=> OH + CO + C2H3 */
    a[146] = 8e+11;
    b[146] = 0;
    e[146] = 0;

    /*reaction 148: C3H4 + O2 <=> CH3 + HCO + CO */
    a[147] = 4e+14;
    b[147] = 0;
    e[147] = 41826;

    /*reaction 149: C3H6 + O <=> C2H5 + HCO */
    a[148] = 3.5e+07;
    b[148] = 1.65;
    e[148] = -972.75;

    /*reaction 150: C3H6 + OH <=> C3H5 + H2O */
    a[149] = 3.1e+06;
    b[149] = 2;
    e[149] = -298.28;

    /*reaction 151: C3H6 + O <=> CH2CO + CH3 + H */
    a[150] = 1.2e+08;
    b[150] = 1.65;
    e[150] = 327.44;

    /*reaction 152: C3H6 + H <=> C3H5 + H2 */
    a[151] = 170000;
    b[151] = 2.5;
    e[151] = 2492.83;

    /*reaction 153: C3H5 + H (+M) <=> C3H6 (+M) */
    a[152] = 2e+14;
    b[152] = 0;
    e[152] = 0;

    /*reaction 154: C3H5 + HO2 <=> C3H6 + O2 */
    a[153] = 2.66e+12;
    b[153] = 0;
    e[153] = 0;

    /*reaction 155: C3H5 + HO2 <=> OH + C2H3 + CH2O */
    a[154] = 3e+12;
    b[154] = 0;
    e[154] = 0;

    /*reaction 156: C2H3 + CH3 (+M) <=> C3H6 (+M) */
    a[155] = 2.5e+13;
    b[155] = 0;
    e[155] = 0;

    /*reaction 157: C3H6 + H <=> C2H4 + CH3 */
    a[156] = 1.6e+22;
    b[156] = -2.39;
    e[156] = 11185.47;

    /*reaction 158: CH3 + C2H3 <=> C3H5 + H */
    a[157] = 1.5e+24;
    b[157] = -2.83;
    e[157] = 18618.55;

    /*reaction 159: C3H8 (+M) <=> CH3 + C2H5 (+M) */
    a[158] = 1.1e+17;
    b[158] = 0;
    e[158] = 84392.93;

    /*reaction 160: C3H8 + O2 <=> I-C3H7 + HO2 */
    a[159] = 4e+13;
    b[159] = 0;
    e[159] = 47500;

    /*reaction 161: C3H8 + O2 <=> N-C3H7 + HO2 */
    a[160] = 4e+13;
    b[160] = 0;
    e[160] = 50932.12;

    /*reaction 162: C3H8 + H <=> I-C3H7 + H2 */
    a[161] = 1.3e+06;
    b[161] = 2.4;
    e[161] = 4471.08;

    /*reaction 163: C3H8 + H <=> N-C3H7 + H2 */
    a[162] = 1.33e+06;
    b[162] = 2.54;
    e[162] = 6761.47;

    /*reaction 164: C3H8 + O <=> I-C3H7 + OH */
    a[163] = 47600;
    b[163] = 2.71;
    e[163] = 2107.31;

    /*reaction 165: C3H8 + O <=> N-C3H7 + OH */
    a[164] = 190000;
    b[164] = 2.68;
    e[164] = 3718.45;

    /*reaction 166: C3H8 + OH <=> N-C3H7 + H2O */
    a[165] = 1400;
    b[165] = 2.66;
    e[165] = 527.25;

    /*reaction 167: C3H8 + OH <=> I-C3H7 + H2O */
    a[166] = 27000;
    b[166] = 2.39;
    e[166] = 393.16;

    /*reaction 168: C3H8 + HO2 <=> I-C3H7 + H2O2 */
    a[167] = 9640;
    b[167] = 2.6;
    e[167] = 13917.3;

    /*reaction 169: C3H8 + HO2 <=> N-C3H7 + H2O2 */
    a[168] = 47600;
    b[168] = 2.55;
    e[168] = 16491.4;

    /*reaction 170: I-C3H7 + C3H8 <=> N-C3H7 + C3H8 */
    a[169] = 0.0084;
    b[169] = 4.2;
    e[169] = 8675.91;

    /*reaction 171: C3H6 + H (+M) <=> I-C3H7 (+M) */
    a[170] = 1.33e+13;
    b[170] = 0;
    e[170] = 1560.71;

    /*reaction 172: I-C3H7 + O2 <=> C3H6 + HO2 */
    a[171] = 1.3e+11;
    b[171] = 0;
    e[171] = 0;

    /*reaction 173: N-C3H7 (+M) <=> CH3 + C2H4 (+M) */
    a[172] = 1.23e+13;
    b[172] = -0.1;
    e[172] = 30210.33;

    /*reaction 174: H + C3H6 (+M) <=> N-C3H7 (+M) */
    a[173] = 1.33e+13;
    b[173] = 0;
    e[173] = 3260.04;

    /*reaction 175: N-C3H7 + O2 <=> C3H6 + HO2 */
    a[174] = 9e+10;
    b[174] = 0;
    e[174] = 0;

    return;
}


/*Returns the equil constants for each reaction */
void CKEQC(double * T, double * C, int * iwrk, double * rwrk, double * eqcon)
{
    double tT = *T; /*temporary temperature */
    double tc[] = { log(tT), tT, tT*tT, tT*tT*tT, tT*tT*tT*tT }; /*temperature cache */
    double gort[39]; /* temporary storage */

    /*compute the Gibbs free energy */
    gibbs(gort, tc);

    /*compute the equilibrium constants */
    equilibriumConstants(eqcon, gort, tT);

    /*reaction 1: H + O2 <=> OH + O */
    /*eqcon[0] *= 1;  */

    /*reaction 2: H2 + O <=> OH + H */
    /*eqcon[1] *= 1;  */

    /*reaction 3: H2 + OH <=> H2O + H */
    /*eqcon[2] *= 1;  */

    /*reaction 4: H2O + O <=> 2 OH */
    /*eqcon[3] *= 1;  */

    /*reaction 5: H + O + M <=> OH + M */
    eqcon[4] *= 1e+06; 

    /*reaction 6: H2 + O2 <=> 2 OH */
    /*eqcon[5] *= 1;  */

    /*reaction 7: 2 H + M <=> H2 + M */
    eqcon[6] *= 1e+06; 

    /*reaction 8: H + OH + M <=> H2O + M */
    eqcon[7] *= 1e+06; 

    /*reaction 9: 2 O + M <=> O2 + M */
    eqcon[8] *= 1e+06; 

    /*reaction 10: H + O2 (+M) <=> HO2 (+M) */
    eqcon[9] *= 1e+06; 

    /*reaction 11: O + OH + M <=> HO2 + M */
    eqcon[10] *= 1e+06; 

    /*reaction 12: HO2 + H <=> 2 OH */
    /*eqcon[11] *= 1;  */

    /*reaction 13: HO2 + H <=> H2 + O2 */
    /*eqcon[12] *= 1;  */

    /*reaction 14: HO2 + H <=> H2O + O */
    /*eqcon[13] *= 1;  */

    /*reaction 15: HO2 + O <=> OH + O2 */
    /*eqcon[14] *= 1;  */

    /*reaction 16: HO2 + OH <=> H2O + O2 */
    /*eqcon[15] *= 1;  */

    /*reaction 17: 2 OH (+M) <=> H2O2 (+M) */
    eqcon[16] *= 1e+06; 

    /*reaction 18: 2 HO2 <=> H2O2 + O2 */
    /*eqcon[17] *= 1;  */

    /*reaction 19: H2O2 + H <=> HO2 + H2 */
    /*eqcon[18] *= 1;  */

    /*reaction 20: H2O2 + H <=> H2O + OH */
    /*eqcon[19] *= 1;  */

    /*reaction 21: H2O2 + OH <=> H2O + HO2 */
    /*eqcon[20] *= 1;  */

    /*reaction 22: H2O2 + O <=> HO2 + OH */
    /*eqcon[21] *= 1;  */

    /*reaction 23: CO + OH <=> CO2 + H */
    /*eqcon[22] *= 1;  */

    /*reaction 24: CO + HO2 <=> CO2 + OH */
    /*eqcon[23] *= 1;  */

    /*reaction 25: HCO + M <=> CO + H + M */
    eqcon[24] *= 1e-06; 

    /*reaction 26: HCO + H <=> CO + H2 */
    /*eqcon[25] *= 1;  */

    /*reaction 27: HCO + O <=> CO + OH */
    /*eqcon[26] *= 1;  */

    /*reaction 28: HCO + O <=> CO2 + H */
    /*eqcon[27] *= 1;  */

    /*reaction 29: HCO + OH <=> CO + H2O */
    /*eqcon[28] *= 1;  */

    /*reaction 30: HCO + O2 <=> CO + HO2 */
    /*eqcon[29] *= 1;  */

    /*reaction 31: CH2O + M <=> HCO + H + M */
    eqcon[30] *= 1e-06; 

    /*reaction 32: CH2O + H <=> HCO + H2 */
    /*eqcon[31] *= 1;  */

    /*reaction 33: CH2O + O <=> HCO + OH */
    /*eqcon[32] *= 1;  */

    /*reaction 34: CH2O + OH <=> HCO + H2O */
    /*eqcon[33] *= 1;  */

    /*reaction 35: CH4 + H <=> H2 + CH3 */
    /*eqcon[34] *= 1;  */

    /*reaction 36: CH4 + OH <=> H2O + CH3 */
    /*eqcon[35] *= 1;  */

    /*reaction 37: CH4 + O <=> CH3 + OH */
    /*eqcon[36] *= 1;  */

    /*reaction 38: CH4 + O2 <=> CH3 + HO2 */
    /*eqcon[37] *= 1;  */

    /*reaction 39: CH4 + HO2 <=> CH3 + H2O2 */
    /*eqcon[38] *= 1;  */

    /*reaction 40: CH3 + H <=> T-CH2 + H2 */
    /*eqcon[39] *= 1;  */

    /*reaction 41: CH3 + H <=> S-CH2 + H2 */
    /*eqcon[40] *= 1;  */

    /*reaction 42: CH3 + OH <=> S-CH2 + H2O */
    /*eqcon[41] *= 1;  */

    /*reaction 43: CH3 + O <=> CH2O + H */
    /*eqcon[42] *= 1;  */

    /*reaction 44: CH3 + T-CH2 <=> C2H4 + H */
    /*eqcon[43] *= 1;  */

    /*reaction 45: CH3 + HO2 <=> CH3O + OH */
    /*eqcon[44] *= 1;  */

    /*reaction 46: CH3 + O2 <=> CH2O + OH */
    /*eqcon[45] *= 1;  */

    /*reaction 47: CH3 + O2 <=> CH3O + O */
    /*eqcon[46] *= 1;  */

    /*reaction 48: 2 CH3 <=> C2H4 + H2 */
    /*eqcon[47] *= 1;  */

    /*reaction 49: 2 CH3 <=> C2H5 + H */
    /*eqcon[48] *= 1;  */

    /*reaction 50: CH3 + H (+M) <=> CH4 (+M) */
    eqcon[49] *= 1e+06; 

    /*reaction 51: 2 CH3 (+M) <=> C2H6 (+M) */
    eqcon[50] *= 1e+06; 

    /*reaction 52: S-CH2 + OH <=> CH2O + H */
    /*eqcon[51] *= 1;  */

    /*reaction 53: S-CH2 + O2 <=> CO + OH + H */
    eqcon[52] *= 1e-06; 

    /*reaction 54: S-CH2 + CO2 <=> CO + CH2O */
    /*eqcon[53] *= 1;  */

    /*reaction 55: S-CH2 + M <=> T-CH2 + M */
    /*eqcon[54] *= 1;  */

    /*reaction 56: T-CH2 + H <=> CH + H2 */
    /*eqcon[55] *= 1;  */

    /*reaction 57: T-CH2 + OH <=> CH2O + H */
    /*eqcon[56] *= 1;  */

    /*reaction 58: T-CH2 + OH <=> CH + H2O */
    /*eqcon[57] *= 1;  */

    /*reaction 59: T-CH2 + O <=> CO + 2 H */
    eqcon[58] *= 1e-06; 

    /*reaction 60: T-CH2 + O <=> CO + H2 */
    /*eqcon[59] *= 1;  */

    /*reaction 61: T-CH2 + O2 <=> CO2 + H2 */
    /*eqcon[60] *= 1;  */

    /*reaction 62: T-CH2 + O2 <=> CO + OH + H */
    eqcon[61] *= 1e-06; 

    /*reaction 63: 2 T-CH2 <=> C2H2 + 2 H */
    eqcon[62] *= 1e-06; 

    /*reaction 64: CH + O <=> CO + H */
    /*eqcon[63] *= 1;  */

    /*reaction 65: CH + O2 <=> HCO + O */
    /*eqcon[64] *= 1;  */

    /*reaction 66: CH + H2O <=> CH2O + H */
    /*eqcon[65] *= 1;  */

    /*reaction 67: CH + CO2 <=> HCO + CO */
    /*eqcon[66] *= 1;  */

    /*reaction 68: CH3O + H <=> CH2O + H2 */
    /*eqcon[67] *= 1;  */

    /*reaction 69: CH3O + H <=> S-CH2 + H2O */
    /*eqcon[68] *= 1;  */

    /*reaction 70: CH3O + OH <=> CH2O + H2O */
    /*eqcon[69] *= 1;  */

    /*reaction 71: CH3O + O <=> OH + CH2O */
    /*eqcon[70] *= 1;  */

    /*reaction 72: CH3O + O2 <=> CH2O + HO2 */
    /*eqcon[71] *= 1;  */

    /*reaction 73: CH3O + M <=> CH2O + H + M */
    eqcon[72] *= 1e-06; 

    /*reaction 74: C2H6 + H <=> C2H5 + H2 */
    /*eqcon[73] *= 1;  */

    /*reaction 75: C2H6 + O <=> C2H5 + OH */
    /*eqcon[74] *= 1;  */

    /*reaction 76: C2H6 + OH <=> C2H5 + H2O */
    /*eqcon[75] *= 1;  */

    /*reaction 77: C2H6 + CH3 <=> C2H5 + CH4 */
    /*eqcon[76] *= 1;  */

    /*reaction 78: C2H6 (+M) <=> C2H5 + H (+M) */
    eqcon[77] *= 1e-06; 

    /*reaction 79: C2H5 + H <=> C2H4 + H2 */
    /*eqcon[78] *= 1;  */

    /*reaction 80: C2H5 + O <=> C2H4 + OH */
    /*eqcon[79] *= 1;  */

    /*reaction 81: C2H5 + O <=> CH3 + CH2O */
    /*eqcon[80] *= 1;  */

    /*reaction 82: C2H5 + O2 <=> C2H4 + HO2 */
    /*eqcon[81] *= 1;  */

    /*reaction 83: C2H5 (+M) <=> C2H4 + H (+M) */
    eqcon[82] *= 1e-06; 

    /*reaction 84: C2H4 + H <=> C2H3 + H2 */
    /*eqcon[83] *= 1;  */

    /*reaction 85: C2H4 + OH <=> C2H3 + H2O */
    /*eqcon[84] *= 1;  */

    /*reaction 86: C2H4 + O <=> CH3 + HCO */
    /*eqcon[85] *= 1;  */

    /*reaction 87: C2H4 + O <=> CH2CHO + H */
    /*eqcon[86] *= 1;  */

    /*reaction 88: 2 C2H4 <=> C2H3 + C2H5 */
    /*eqcon[87] *= 1;  */

    /*reaction 89: C2H4 + O2 <=> C2H3 + HO2 */
    /*eqcon[88] *= 1;  */

    /*reaction 90: C2H4 + HO2 <=> C2H4O + OH */
    /*eqcon[89] *= 1;  */

    /*reaction 91: C2H4O + HO2 <=> CH3 + CO + H2O2 */
    eqcon[90] *= 1e-06; 

    /*reaction 92: C2H4 + M <=> C2H3 + H + M */
    eqcon[91] *= 1e-06; 

    /*reaction 93: C2H4 + M <=> C2H2 + H2 + M */
    eqcon[92] *= 1e-06; 

    /*reaction 94: C2H3 + H <=> C2H2 + H2 */
    /*eqcon[93] *= 1;  */

    /*reaction 95: C2H3 (+M) <=> C2H2 + H (+M) */
    eqcon[94] *= 1e-06; 

    /*reaction 96: C2H3 + O2 <=> CH2O + HCO */
    /*eqcon[95] *= 1;  */

    /*reaction 97: C2H3 + O2 <=> CH2CHO + O */
    /*eqcon[96] *= 1;  */

    /*reaction 98: C2H3 + O2 <=> C2H2 + HO2 */
    /*eqcon[97] *= 1;  */

    /*reaction 99: CH2CHO <=> CH2CO + H */
    eqcon[98] *= 1e-06; 

    /*reaction 100: C2H2 + O <=> HCCO + H */
    /*eqcon[99] *= 1;  */

    /*reaction 101: C2H2 + O <=> T-CH2 + CO */
    /*eqcon[100] *= 1;  */

    /*reaction 102: C2H2 + O2 <=> CH2O + CO */
    /*eqcon[101] *= 1;  */

    /*reaction 103: C2H2 + OH <=> CH2CO + H */
    /*eqcon[102] *= 1;  */

    /*reaction 104: C2H2 + OH <=> C2H + H2O */
    /*eqcon[103] *= 1;  */

    /*reaction 105: CH2CO + H <=> CH3 + CO */
    /*eqcon[104] *= 1;  */

    /*reaction 106: CH2CO + O <=> T-CH2 + CO2 */
    /*eqcon[105] *= 1;  */

    /*reaction 107: CH2CO + O <=> HCCO + OH */
    /*eqcon[106] *= 1;  */

    /*reaction 108: CH2CO + CH3 <=> C2H5 + CO */
    /*eqcon[107] *= 1;  */

    /*reaction 109: HCCO + H <=> S-CH2 + CO */
    /*eqcon[108] *= 1;  */

    /*reaction 110: HCCO + OH <=> HCO + CO + H */
    eqcon[109] *= 1e-06; 

    /*reaction 111: HCCO + O <=> 2 CO + H */
    eqcon[110] *= 1e-06; 

    /*reaction 112: HCCO + O2 <=> 2 CO + OH */
    eqcon[111] *= 1e-06; 

    /*reaction 113: HCCO + O2 <=> CO2 + CO + H */
    eqcon[112] *= 1e-06; 

    /*reaction 114: C2H + OH <=> HCCO + H */
    /*eqcon[113] *= 1;  */

    /*reaction 115: C2H + O <=> CO + CH */
    /*eqcon[114] *= 1;  */

    /*reaction 116: C2H + O2 <=> HCCO + O */
    /*eqcon[115] *= 1;  */

    /*reaction 117: C2H + O2 <=> CH + CO2 */
    /*eqcon[116] *= 1;  */

    /*reaction 118: C2H + O2 <=> HCO + CO */
    /*eqcon[117] *= 1;  */

    /*reaction 119: CH2OH + H <=> CH2O + H2 */
    /*eqcon[118] *= 1;  */

    /*reaction 120: CH2OH + H <=> CH3 + OH */
    /*eqcon[119] *= 1;  */

    /*reaction 121: CH2OH + OH <=> CH2O + H2O */
    /*eqcon[120] *= 1;  */

    /*reaction 122: CH2OH + O2 <=> CH2O + HO2 */
    /*eqcon[121] *= 1;  */

    /*reaction 123: CH2OH + M <=> CH2O + H + M */
    eqcon[122] *= 1e-06; 

    /*reaction 124: CH3O + M <=> CH2OH + M */
    /*eqcon[123] *= 1;  */

    /*reaction 125: CH2CO + OH <=> CH2OH + CO */
    /*eqcon[124] *= 1;  */

    /*reaction 126: CH3OH + OH <=> CH2OH + H2O */
    /*eqcon[125] *= 1;  */

    /*reaction 127: CH3OH + OH <=> CH3O + H2O */
    /*eqcon[126] *= 1;  */

    /*reaction 128: CH3OH + H <=> CH2OH + H2 */
    /*eqcon[127] *= 1;  */

    /*reaction 129: CH3OH + H <=> CH3O + H2 */
    /*eqcon[128] *= 1;  */

    /*reaction 130: CH3OH + O <=> CH2OH + OH */
    /*eqcon[129] *= 1;  */

    /*reaction 131: CH3OH + HO2 <=> CH2OH + H2O2 */
    /*eqcon[130] *= 1;  */

    /*reaction 132: CH3OH + O2 <=> CH2OH + HO2 */
    /*eqcon[131] *= 1;  */

    /*reaction 133: C3H4 + O <=> C2H4 + CO */
    /*eqcon[132] *= 1;  */

    /*reaction 134: CH3 + C2H2 <=> C3H4 + H */
    /*eqcon[133] *= 1;  */

    /*reaction 135: C3H4 + O <=> HCCO + CH3 */
    /*eqcon[134] *= 1;  */

    /*reaction 136: C3H3 + H (+M) <=> C3H4 (+M) */
    eqcon[135] *= 1e+06; 

    /*reaction 137: C3H3 + HO2 <=> C3H4 + O2 */
    /*eqcon[136] *= 1;  */

    /*reaction 138: C3H4 + OH <=> C3H3 + H2O */
    /*eqcon[137] *= 1;  */

    /*reaction 139: C3H3 + O2 <=> CH2CO + HCO */
    /*eqcon[138] *= 1;  */

    /*reaction 140: C3H4 + H (+M) <=> C3H5 (+M) */
    eqcon[139] *= 1e+06; 

    /*reaction 141: C3H5 + H <=> C3H4 + H2 */
    /*eqcon[140] *= 1;  */

    /*reaction 142: C3H5 + O2 <=> C3H4 + HO2 */
    /*eqcon[141] *= 1;  */

    /*reaction 143: C3H5 + CH3 <=> C3H4 + CH4 */
    /*eqcon[142] *= 1;  */

    /*reaction 144: C2H2 + CH3 (+M) <=> C3H5 (+M) */
    eqcon[143] *= 1e+06; 

    /*reaction 145: C3H5 + OH <=> C3H4 + H2O */
    /*eqcon[144] *= 1;  */

    /*reaction 146: C3H3 + HCO <=> C3H4 + CO */
    /*eqcon[145] *= 1;  */

    /*reaction 147: C3H3 + HO2 <=> OH + CO + C2H3 */
    eqcon[146] *= 1e-06; 

    /*reaction 148: C3H4 + O2 <=> CH3 + HCO + CO */
    eqcon[147] *= 1e-06; 

    /*reaction 149: C3H6 + O <=> C2H5 + HCO */
    /*eqcon[148] *= 1;  */

    /*reaction 150: C3H6 + OH <=> C3H5 + H2O */
    /*eqcon[149] *= 1;  */

    /*reaction 151: C3H6 + O <=> CH2CO + CH3 + H */
    eqcon[150] *= 1e-06; 

    /*reaction 152: C3H6 + H <=> C3H5 + H2 */
    /*eqcon[151] *= 1;  */

    /*reaction 153: C3H5 + H (+M) <=> C3H6 (+M) */
    eqcon[152] *= 1e+06; 

    /*reaction 154: C3H5 + HO2 <=> C3H6 + O2 */
    /*eqcon[153] *= 1;  */

    /*reaction 155: C3H5 + HO2 <=> OH + C2H3 + CH2O */
    eqcon[154] *= 1e-06; 

    /*reaction 156: C2H3 + CH3 (+M) <=> C3H6 (+M) */
    eqcon[155] *= 1e+06; 

    /*reaction 157: C3H6 + H <=> C2H4 + CH3 */
    /*eqcon[156] *= 1;  */

    /*reaction 158: CH3 + C2H3 <=> C3H5 + H */
    /*eqcon[157] *= 1;  */

    /*reaction 159: C3H8 (+M) <=> CH3 + C2H5 (+M) */
    eqcon[158] *= 1e-06; 

    /*reaction 160: C3H8 + O2 <=> I-C3H7 + HO2 */
    /*eqcon[159] *= 1;  */

    /*reaction 161: C3H8 + O2 <=> N-C3H7 + HO2 */
    /*eqcon[160] *= 1;  */

    /*reaction 162: C3H8 + H <=> I-C3H7 + H2 */
    /*eqcon[161] *= 1;  */

    /*reaction 163: C3H8 + H <=> N-C3H7 + H2 */
    /*eqcon[162] *= 1;  */

    /*reaction 164: C3H8 + O <=> I-C3H7 + OH */
    /*eqcon[163] *= 1;  */

    /*reaction 165: C3H8 + O <=> N-C3H7 + OH */
    /*eqcon[164] *= 1;  */

    /*reaction 166: C3H8 + OH <=> N-C3H7 + H2O */
    /*eqcon[165] *= 1;  */

    /*reaction 167: C3H8 + OH <=> I-C3H7 + H2O */
    /*eqcon[166] *= 1;  */

    /*reaction 168: C3H8 + HO2 <=> I-C3H7 + H2O2 */
    /*eqcon[167] *= 1;  */

    /*reaction 169: C3H8 + HO2 <=> N-C3H7 + H2O2 */
    /*eqcon[168] *= 1;  */

    /*reaction 170: I-C3H7 + C3H8 <=> N-C3H7 + C3H8 */
    /*eqcon[169] *= 1;  */

    /*reaction 171: C3H6 + H (+M) <=> I-C3H7 (+M) */
    eqcon[170] *= 1e+06; 

    /*reaction 172: I-C3H7 + O2 <=> C3H6 + HO2 */
    /*eqcon[171] *= 1;  */

    /*reaction 173: N-C3H7 (+M) <=> CH3 + C2H4 (+M) */
    eqcon[172] *= 1e-06; 

    /*reaction 174: H + C3H6 (+M) <=> N-C3H7 (+M) */
    eqcon[173] *= 1e+06; 

    /*reaction 175: N-C3H7 + O2 <=> C3H6 + HO2 */
    /*eqcon[174] *= 1;  */
}


/*Returns the equil constants for each reaction */
/*Given P, T, and mass fractions */
void CKEQYP(double * P, double * T, double * y, int * iwrk, double * rwrk, double * eqcon)
{
    double tT = *T; /*temporary temperature */
    double tc[] = { log(tT), tT, tT*tT, tT*tT*tT, tT*tT*tT*tT }; /*temperature cache */
    double gort[39]; /* temporary storage */

    /*compute the Gibbs free energy */
    gibbs(gort, tc);

    /*compute the equilibrium constants */
    equilibriumConstants(eqcon, gort, tT);

    /*reaction 1: H + O2 <=> OH + O */
    /*eqcon[0] *= 1;  */

    /*reaction 2: H2 + O <=> OH + H */
    /*eqcon[1] *= 1;  */

    /*reaction 3: H2 + OH <=> H2O + H */
    /*eqcon[2] *= 1;  */

    /*reaction 4: H2O + O <=> 2 OH */
    /*eqcon[3] *= 1;  */

    /*reaction 5: H + O + M <=> OH + M */
    eqcon[4] *= 1e+06; 

    /*reaction 6: H2 + O2 <=> 2 OH */
    /*eqcon[5] *= 1;  */

    /*reaction 7: 2 H + M <=> H2 + M */
    eqcon[6] *= 1e+06; 

    /*reaction 8: H + OH + M <=> H2O + M */
    eqcon[7] *= 1e+06; 

    /*reaction 9: 2 O + M <=> O2 + M */
    eqcon[8] *= 1e+06; 

    /*reaction 10: H + O2 (+M) <=> HO2 (+M) */
    eqcon[9] *= 1e+06; 

    /*reaction 11: O + OH + M <=> HO2 + M */
    eqcon[10] *= 1e+06; 

    /*reaction 12: HO2 + H <=> 2 OH */
    /*eqcon[11] *= 1;  */

    /*reaction 13: HO2 + H <=> H2 + O2 */
    /*eqcon[12] *= 1;  */

    /*reaction 14: HO2 + H <=> H2O + O */
    /*eqcon[13] *= 1;  */

    /*reaction 15: HO2 + O <=> OH + O2 */
    /*eqcon[14] *= 1;  */

    /*reaction 16: HO2 + OH <=> H2O + O2 */
    /*eqcon[15] *= 1;  */

    /*reaction 17: 2 OH (+M) <=> H2O2 (+M) */
    eqcon[16] *= 1e+06; 

    /*reaction 18: 2 HO2 <=> H2O2 + O2 */
    /*eqcon[17] *= 1;  */

    /*reaction 19: H2O2 + H <=> HO2 + H2 */
    /*eqcon[18] *= 1;  */

    /*reaction 20: H2O2 + H <=> H2O + OH */
    /*eqcon[19] *= 1;  */

    /*reaction 21: H2O2 + OH <=> H2O + HO2 */
    /*eqcon[20] *= 1;  */

    /*reaction 22: H2O2 + O <=> HO2 + OH */
    /*eqcon[21] *= 1;  */

    /*reaction 23: CO + OH <=> CO2 + H */
    /*eqcon[22] *= 1;  */

    /*reaction 24: CO + HO2 <=> CO2 + OH */
    /*eqcon[23] *= 1;  */

    /*reaction 25: HCO + M <=> CO + H + M */
    eqcon[24] *= 1e-06; 

    /*reaction 26: HCO + H <=> CO + H2 */
    /*eqcon[25] *= 1;  */

    /*reaction 27: HCO + O <=> CO + OH */
    /*eqcon[26] *= 1;  */

    /*reaction 28: HCO + O <=> CO2 + H */
    /*eqcon[27] *= 1;  */

    /*reaction 29: HCO + OH <=> CO + H2O */
    /*eqcon[28] *= 1;  */

    /*reaction 30: HCO + O2 <=> CO + HO2 */
    /*eqcon[29] *= 1;  */

    /*reaction 31: CH2O + M <=> HCO + H + M */
    eqcon[30] *= 1e-06; 

    /*reaction 32: CH2O + H <=> HCO + H2 */
    /*eqcon[31] *= 1;  */

    /*reaction 33: CH2O + O <=> HCO + OH */
    /*eqcon[32] *= 1;  */

    /*reaction 34: CH2O + OH <=> HCO + H2O */
    /*eqcon[33] *= 1;  */

    /*reaction 35: CH4 + H <=> H2 + CH3 */
    /*eqcon[34] *= 1;  */

    /*reaction 36: CH4 + OH <=> H2O + CH3 */
    /*eqcon[35] *= 1;  */

    /*reaction 37: CH4 + O <=> CH3 + OH */
    /*eqcon[36] *= 1;  */

    /*reaction 38: CH4 + O2 <=> CH3 + HO2 */
    /*eqcon[37] *= 1;  */

    /*reaction 39: CH4 + HO2 <=> CH3 + H2O2 */
    /*eqcon[38] *= 1;  */

    /*reaction 40: CH3 + H <=> T-CH2 + H2 */
    /*eqcon[39] *= 1;  */

    /*reaction 41: CH3 + H <=> S-CH2 + H2 */
    /*eqcon[40] *= 1;  */

    /*reaction 42: CH3 + OH <=> S-CH2 + H2O */
    /*eqcon[41] *= 1;  */

    /*reaction 43: CH3 + O <=> CH2O + H */
    /*eqcon[42] *= 1;  */

    /*reaction 44: CH3 + T-CH2 <=> C2H4 + H */
    /*eqcon[43] *= 1;  */

    /*reaction 45: CH3 + HO2 <=> CH3O + OH */
    /*eqcon[44] *= 1;  */

    /*reaction 46: CH3 + O2 <=> CH2O + OH */
    /*eqcon[45] *= 1;  */

    /*reaction 47: CH3 + O2 <=> CH3O + O */
    /*eqcon[46] *= 1;  */

    /*reaction 48: 2 CH3 <=> C2H4 + H2 */
    /*eqcon[47] *= 1;  */

    /*reaction 49: 2 CH3 <=> C2H5 + H */
    /*eqcon[48] *= 1;  */

    /*reaction 50: CH3 + H (+M) <=> CH4 (+M) */
    eqcon[49] *= 1e+06; 

    /*reaction 51: 2 CH3 (+M) <=> C2H6 (+M) */
    eqcon[50] *= 1e+06; 

    /*reaction 52: S-CH2 + OH <=> CH2O + H */
    /*eqcon[51] *= 1;  */

    /*reaction 53: S-CH2 + O2 <=> CO + OH + H */
    eqcon[52] *= 1e-06; 

    /*reaction 54: S-CH2 + CO2 <=> CO + CH2O */
    /*eqcon[53] *= 1;  */

    /*reaction 55: S-CH2 + M <=> T-CH2 + M */
    /*eqcon[54] *= 1;  */

    /*reaction 56: T-CH2 + H <=> CH + H2 */
    /*eqcon[55] *= 1;  */

    /*reaction 57: T-CH2 + OH <=> CH2O + H */
    /*eqcon[56] *= 1;  */

    /*reaction 58: T-CH2 + OH <=> CH + H2O */
    /*eqcon[57] *= 1;  */

    /*reaction 59: T-CH2 + O <=> CO + 2 H */
    eqcon[58] *= 1e-06; 

    /*reaction 60: T-CH2 + O <=> CO + H2 */
    /*eqcon[59] *= 1;  */

    /*reaction 61: T-CH2 + O2 <=> CO2 + H2 */
    /*eqcon[60] *= 1;  */

    /*reaction 62: T-CH2 + O2 <=> CO + OH + H */
    eqcon[61] *= 1e-06; 

    /*reaction 63: 2 T-CH2 <=> C2H2 + 2 H */
    eqcon[62] *= 1e-06; 

    /*reaction 64: CH + O <=> CO + H */
    /*eqcon[63] *= 1;  */

    /*reaction 65: CH + O2 <=> HCO + O */
    /*eqcon[64] *= 1;  */

    /*reaction 66: CH + H2O <=> CH2O + H */
    /*eqcon[65] *= 1;  */

    /*reaction 67: CH + CO2 <=> HCO + CO */
    /*eqcon[66] *= 1;  */

    /*reaction 68: CH3O + H <=> CH2O + H2 */
    /*eqcon[67] *= 1;  */

    /*reaction 69: CH3O + H <=> S-CH2 + H2O */
    /*eqcon[68] *= 1;  */

    /*reaction 70: CH3O + OH <=> CH2O + H2O */
    /*eqcon[69] *= 1;  */

    /*reaction 71: CH3O + O <=> OH + CH2O */
    /*eqcon[70] *= 1;  */

    /*reaction 72: CH3O + O2 <=> CH2O + HO2 */
    /*eqcon[71] *= 1;  */

    /*reaction 73: CH3O + M <=> CH2O + H + M */
    eqcon[72] *= 1e-06; 

    /*reaction 74: C2H6 + H <=> C2H5 + H2 */
    /*eqcon[73] *= 1;  */

    /*reaction 75: C2H6 + O <=> C2H5 + OH */
    /*eqcon[74] *= 1;  */

    /*reaction 76: C2H6 + OH <=> C2H5 + H2O */
    /*eqcon[75] *= 1;  */

    /*reaction 77: C2H6 + CH3 <=> C2H5 + CH4 */
    /*eqcon[76] *= 1;  */

    /*reaction 78: C2H6 (+M) <=> C2H5 + H (+M) */
    eqcon[77] *= 1e-06; 

    /*reaction 79: C2H5 + H <=> C2H4 + H2 */
    /*eqcon[78] *= 1;  */

    /*reaction 80: C2H5 + O <=> C2H4 + OH */
    /*eqcon[79] *= 1;  */

    /*reaction 81: C2H5 + O <=> CH3 + CH2O */
    /*eqcon[80] *= 1;  */

    /*reaction 82: C2H5 + O2 <=> C2H4 + HO2 */
    /*eqcon[81] *= 1;  */

    /*reaction 83: C2H5 (+M) <=> C2H4 + H (+M) */
    eqcon[82] *= 1e-06; 

    /*reaction 84: C2H4 + H <=> C2H3 + H2 */
    /*eqcon[83] *= 1;  */

    /*reaction 85: C2H4 + OH <=> C2H3 + H2O */
    /*eqcon[84] *= 1;  */

    /*reaction 86: C2H4 + O <=> CH3 + HCO */
    /*eqcon[85] *= 1;  */

    /*reaction 87: C2H4 + O <=> CH2CHO + H */
    /*eqcon[86] *= 1;  */

    /*reaction 88: 2 C2H4 <=> C2H3 + C2H5 */
    /*eqcon[87] *= 1;  */

    /*reaction 89: C2H4 + O2 <=> C2H3 + HO2 */
    /*eqcon[88] *= 1;  */

    /*reaction 90: C2H4 + HO2 <=> C2H4O + OH */
    /*eqcon[89] *= 1;  */

    /*reaction 91: C2H4O + HO2 <=> CH3 + CO + H2O2 */
    eqcon[90] *= 1e-06; 

    /*reaction 92: C2H4 + M <=> C2H3 + H + M */
    eqcon[91] *= 1e-06; 

    /*reaction 93: C2H4 + M <=> C2H2 + H2 + M */
    eqcon[92] *= 1e-06; 

    /*reaction 94: C2H3 + H <=> C2H2 + H2 */
    /*eqcon[93] *= 1;  */

    /*reaction 95: C2H3 (+M) <=> C2H2 + H (+M) */
    eqcon[94] *= 1e-06; 

    /*reaction 96: C2H3 + O2 <=> CH2O + HCO */
    /*eqcon[95] *= 1;  */

    /*reaction 97: C2H3 + O2 <=> CH2CHO + O */
    /*eqcon[96] *= 1;  */

    /*reaction 98: C2H3 + O2 <=> C2H2 + HO2 */
    /*eqcon[97] *= 1;  */

    /*reaction 99: CH2CHO <=> CH2CO + H */
    eqcon[98] *= 1e-06; 

    /*reaction 100: C2H2 + O <=> HCCO + H */
    /*eqcon[99] *= 1;  */

    /*reaction 101: C2H2 + O <=> T-CH2 + CO */
    /*eqcon[100] *= 1;  */

    /*reaction 102: C2H2 + O2 <=> CH2O + CO */
    /*eqcon[101] *= 1;  */

    /*reaction 103: C2H2 + OH <=> CH2CO + H */
    /*eqcon[102] *= 1;  */

    /*reaction 104: C2H2 + OH <=> C2H + H2O */
    /*eqcon[103] *= 1;  */

    /*reaction 105: CH2CO + H <=> CH3 + CO */
    /*eqcon[104] *= 1;  */

    /*reaction 106: CH2CO + O <=> T-CH2 + CO2 */
    /*eqcon[105] *= 1;  */

    /*reaction 107: CH2CO + O <=> HCCO + OH */
    /*eqcon[106] *= 1;  */

    /*reaction 108: CH2CO + CH3 <=> C2H5 + CO */
    /*eqcon[107] *= 1;  */

    /*reaction 109: HCCO + H <=> S-CH2 + CO */
    /*eqcon[108] *= 1;  */

    /*reaction 110: HCCO + OH <=> HCO + CO + H */
    eqcon[109] *= 1e-06; 

    /*reaction 111: HCCO + O <=> 2 CO + H */
    eqcon[110] *= 1e-06; 

    /*reaction 112: HCCO + O2 <=> 2 CO + OH */
    eqcon[111] *= 1e-06; 

    /*reaction 113: HCCO + O2 <=> CO2 + CO + H */
    eqcon[112] *= 1e-06; 

    /*reaction 114: C2H + OH <=> HCCO + H */
    /*eqcon[113] *= 1;  */

    /*reaction 115: C2H + O <=> CO + CH */
    /*eqcon[114] *= 1;  */

    /*reaction 116: C2H + O2 <=> HCCO + O */
    /*eqcon[115] *= 1;  */

    /*reaction 117: C2H + O2 <=> CH + CO2 */
    /*eqcon[116] *= 1;  */

    /*reaction 118: C2H + O2 <=> HCO + CO */
    /*eqcon[117] *= 1;  */

    /*reaction 119: CH2OH + H <=> CH2O + H2 */
    /*eqcon[118] *= 1;  */

    /*reaction 120: CH2OH + H <=> CH3 + OH */
    /*eqcon[119] *= 1;  */

    /*reaction 121: CH2OH + OH <=> CH2O + H2O */
    /*eqcon[120] *= 1;  */

    /*reaction 122: CH2OH + O2 <=> CH2O + HO2 */
    /*eqcon[121] *= 1;  */

    /*reaction 123: CH2OH + M <=> CH2O + H + M */
    eqcon[122] *= 1e-06; 

    /*reaction 124: CH3O + M <=> CH2OH + M */
    /*eqcon[123] *= 1;  */

    /*reaction 125: CH2CO + OH <=> CH2OH + CO */
    /*eqcon[124] *= 1;  */

    /*reaction 126: CH3OH + OH <=> CH2OH + H2O */
    /*eqcon[125] *= 1;  */

    /*reaction 127: CH3OH + OH <=> CH3O + H2O */
    /*eqcon[126] *= 1;  */

    /*reaction 128: CH3OH + H <=> CH2OH + H2 */
    /*eqcon[127] *= 1;  */

    /*reaction 129: CH3OH + H <=> CH3O + H2 */
    /*eqcon[128] *= 1;  */

    /*reaction 130: CH3OH + O <=> CH2OH + OH */
    /*eqcon[129] *= 1;  */

    /*reaction 131: CH3OH + HO2 <=> CH2OH + H2O2 */
    /*eqcon[130] *= 1;  */

    /*reaction 132: CH3OH + O2 <=> CH2OH + HO2 */
    /*eqcon[131] *= 1;  */

    /*reaction 133: C3H4 + O <=> C2H4 + CO */
    /*eqcon[132] *= 1;  */

    /*reaction 134: CH3 + C2H2 <=> C3H4 + H */
    /*eqcon[133] *= 1;  */

    /*reaction 135: C3H4 + O <=> HCCO + CH3 */
    /*eqcon[134] *= 1;  */

    /*reaction 136: C3H3 + H (+M) <=> C3H4 (+M) */
    eqcon[135] *= 1e+06; 

    /*reaction 137: C3H3 + HO2 <=> C3H4 + O2 */
    /*eqcon[136] *= 1;  */

    /*reaction 138: C3H4 + OH <=> C3H3 + H2O */
    /*eqcon[137] *= 1;  */

    /*reaction 139: C3H3 + O2 <=> CH2CO + HCO */
    /*eqcon[138] *= 1;  */

    /*reaction 140: C3H4 + H (+M) <=> C3H5 (+M) */
    eqcon[139] *= 1e+06; 

    /*reaction 141: C3H5 + H <=> C3H4 + H2 */
    /*eqcon[140] *= 1;  */

    /*reaction 142: C3H5 + O2 <=> C3H4 + HO2 */
    /*eqcon[141] *= 1;  */

    /*reaction 143: C3H5 + CH3 <=> C3H4 + CH4 */
    /*eqcon[142] *= 1;  */

    /*reaction 144: C2H2 + CH3 (+M) <=> C3H5 (+M) */
    eqcon[143] *= 1e+06; 

    /*reaction 145: C3H5 + OH <=> C3H4 + H2O */
    /*eqcon[144] *= 1;  */

    /*reaction 146: C3H3 + HCO <=> C3H4 + CO */
    /*eqcon[145] *= 1;  */

    /*reaction 147: C3H3 + HO2 <=> OH + CO + C2H3 */
    eqcon[146] *= 1e-06; 

    /*reaction 148: C3H4 + O2 <=> CH3 + HCO + CO */
    eqcon[147] *= 1e-06; 

    /*reaction 149: C3H6 + O <=> C2H5 + HCO */
    /*eqcon[148] *= 1;  */

    /*reaction 150: C3H6 + OH <=> C3H5 + H2O */
    /*eqcon[149] *= 1;  */

    /*reaction 151: C3H6 + O <=> CH2CO + CH3 + H */
    eqcon[150] *= 1e-06; 

    /*reaction 152: C3H6 + H <=> C3H5 + H2 */
    /*eqcon[151] *= 1;  */

    /*reaction 153: C3H5 + H (+M) <=> C3H6 (+M) */
    eqcon[152] *= 1e+06; 

    /*reaction 154: C3H5 + HO2 <=> C3H6 + O2 */
    /*eqcon[153] *= 1;  */

    /*reaction 155: C3H5 + HO2 <=> OH + C2H3 + CH2O */
    eqcon[154] *= 1e-06; 

    /*reaction 156: C2H3 + CH3 (+M) <=> C3H6 (+M) */
    eqcon[155] *= 1e+06; 

    /*reaction 157: C3H6 + H <=> C2H4 + CH3 */
    /*eqcon[156] *= 1;  */

    /*reaction 158: CH3 + C2H3 <=> C3H5 + H */
    /*eqcon[157] *= 1;  */

    /*reaction 159: C3H8 (+M) <=> CH3 + C2H5 (+M) */
    eqcon[158] *= 1e-06; 

    /*reaction 160: C3H8 + O2 <=> I-C3H7 + HO2 */
    /*eqcon[159] *= 1;  */

    /*reaction 161: C3H8 + O2 <=> N-C3H7 + HO2 */
    /*eqcon[160] *= 1;  */

    /*reaction 162: C3H8 + H <=> I-C3H7 + H2 */
    /*eqcon[161] *= 1;  */

    /*reaction 163: C3H8 + H <=> N-C3H7 + H2 */
    /*eqcon[162] *= 1;  */

    /*reaction 164: C3H8 + O <=> I-C3H7 + OH */
    /*eqcon[163] *= 1;  */

    /*reaction 165: C3H8 + O <=> N-C3H7 + OH */
    /*eqcon[164] *= 1;  */

    /*reaction 166: C3H8 + OH <=> N-C3H7 + H2O */
    /*eqcon[165] *= 1;  */

    /*reaction 167: C3H8 + OH <=> I-C3H7 + H2O */
    /*eqcon[166] *= 1;  */

    /*reaction 168: C3H8 + HO2 <=> I-C3H7 + H2O2 */
    /*eqcon[167] *= 1;  */

    /*reaction 169: C3H8 + HO2 <=> N-C3H7 + H2O2 */
    /*eqcon[168] *= 1;  */

    /*reaction 170: I-C3H7 + C3H8 <=> N-C3H7 + C3H8 */
    /*eqcon[169] *= 1;  */

    /*reaction 171: C3H6 + H (+M) <=> I-C3H7 (+M) */
    eqcon[170] *= 1e+06; 

    /*reaction 172: I-C3H7 + O2 <=> C3H6 + HO2 */
    /*eqcon[171] *= 1;  */

    /*reaction 173: N-C3H7 (+M) <=> CH3 + C2H4 (+M) */
    eqcon[172] *= 1e-06; 

    /*reaction 174: H + C3H6 (+M) <=> N-C3H7 (+M) */
    eqcon[173] *= 1e+06; 

    /*reaction 175: N-C3H7 + O2 <=> C3H6 + HO2 */
    /*eqcon[174] *= 1;  */
}


/*Returns the equil constants for each reaction */
/*Given P, T, and mole fractions */
void CKEQXP(double * P, double * T, double * x, int * iwrk, double * rwrk, double * eqcon)
{
    double tT = *T; /*temporary temperature */
    double tc[] = { log(tT), tT, tT*tT, tT*tT*tT, tT*tT*tT*tT }; /*temperature cache */
    double gort[39]; /* temporary storage */

    /*compute the Gibbs free energy */
    gibbs(gort, tc);

    /*compute the equilibrium constants */
    equilibriumConstants(eqcon, gort, tT);

    /*reaction 1: H + O2 <=> OH + O */
    /*eqcon[0] *= 1;  */

    /*reaction 2: H2 + O <=> OH + H */
    /*eqcon[1] *= 1;  */

    /*reaction 3: H2 + OH <=> H2O + H */
    /*eqcon[2] *= 1;  */

    /*reaction 4: H2O + O <=> 2 OH */
    /*eqcon[3] *= 1;  */

    /*reaction 5: H + O + M <=> OH + M */
    eqcon[4] *= 1e+06; 

    /*reaction 6: H2 + O2 <=> 2 OH */
    /*eqcon[5] *= 1;  */

    /*reaction 7: 2 H + M <=> H2 + M */
    eqcon[6] *= 1e+06; 

    /*reaction 8: H + OH + M <=> H2O + M */
    eqcon[7] *= 1e+06; 

    /*reaction 9: 2 O + M <=> O2 + M */
    eqcon[8] *= 1e+06; 

    /*reaction 10: H + O2 (+M) <=> HO2 (+M) */
    eqcon[9] *= 1e+06; 

    /*reaction 11: O + OH + M <=> HO2 + M */
    eqcon[10] *= 1e+06; 

    /*reaction 12: HO2 + H <=> 2 OH */
    /*eqcon[11] *= 1;  */

    /*reaction 13: HO2 + H <=> H2 + O2 */
    /*eqcon[12] *= 1;  */

    /*reaction 14: HO2 + H <=> H2O + O */
    /*eqcon[13] *= 1;  */

    /*reaction 15: HO2 + O <=> OH + O2 */
    /*eqcon[14] *= 1;  */

    /*reaction 16: HO2 + OH <=> H2O + O2 */
    /*eqcon[15] *= 1;  */

    /*reaction 17: 2 OH (+M) <=> H2O2 (+M) */
    eqcon[16] *= 1e+06; 

    /*reaction 18: 2 HO2 <=> H2O2 + O2 */
    /*eqcon[17] *= 1;  */

    /*reaction 19: H2O2 + H <=> HO2 + H2 */
    /*eqcon[18] *= 1;  */

    /*reaction 20: H2O2 + H <=> H2O + OH */
    /*eqcon[19] *= 1;  */

    /*reaction 21: H2O2 + OH <=> H2O + HO2 */
    /*eqcon[20] *= 1;  */

    /*reaction 22: H2O2 + O <=> HO2 + OH */
    /*eqcon[21] *= 1;  */

    /*reaction 23: CO + OH <=> CO2 + H */
    /*eqcon[22] *= 1;  */

    /*reaction 24: CO + HO2 <=> CO2 + OH */
    /*eqcon[23] *= 1;  */

    /*reaction 25: HCO + M <=> CO + H + M */
    eqcon[24] *= 1e-06; 

    /*reaction 26: HCO + H <=> CO + H2 */
    /*eqcon[25] *= 1;  */

    /*reaction 27: HCO + O <=> CO + OH */
    /*eqcon[26] *= 1;  */

    /*reaction 28: HCO + O <=> CO2 + H */
    /*eqcon[27] *= 1;  */

    /*reaction 29: HCO + OH <=> CO + H2O */
    /*eqcon[28] *= 1;  */

    /*reaction 30: HCO + O2 <=> CO + HO2 */
    /*eqcon[29] *= 1;  */

    /*reaction 31: CH2O + M <=> HCO + H + M */
    eqcon[30] *= 1e-06; 

    /*reaction 32: CH2O + H <=> HCO + H2 */
    /*eqcon[31] *= 1;  */

    /*reaction 33: CH2O + O <=> HCO + OH */
    /*eqcon[32] *= 1;  */

    /*reaction 34: CH2O + OH <=> HCO + H2O */
    /*eqcon[33] *= 1;  */

    /*reaction 35: CH4 + H <=> H2 + CH3 */
    /*eqcon[34] *= 1;  */

    /*reaction 36: CH4 + OH <=> H2O + CH3 */
    /*eqcon[35] *= 1;  */

    /*reaction 37: CH4 + O <=> CH3 + OH */
    /*eqcon[36] *= 1;  */

    /*reaction 38: CH4 + O2 <=> CH3 + HO2 */
    /*eqcon[37] *= 1;  */

    /*reaction 39: CH4 + HO2 <=> CH3 + H2O2 */
    /*eqcon[38] *= 1;  */

    /*reaction 40: CH3 + H <=> T-CH2 + H2 */
    /*eqcon[39] *= 1;  */

    /*reaction 41: CH3 + H <=> S-CH2 + H2 */
    /*eqcon[40] *= 1;  */

    /*reaction 42: CH3 + OH <=> S-CH2 + H2O */
    /*eqcon[41] *= 1;  */

    /*reaction 43: CH3 + O <=> CH2O + H */
    /*eqcon[42] *= 1;  */

    /*reaction 44: CH3 + T-CH2 <=> C2H4 + H */
    /*eqcon[43] *= 1;  */

    /*reaction 45: CH3 + HO2 <=> CH3O + OH */
    /*eqcon[44] *= 1;  */

    /*reaction 46: CH3 + O2 <=> CH2O + OH */
    /*eqcon[45] *= 1;  */

    /*reaction 47: CH3 + O2 <=> CH3O + O */
    /*eqcon[46] *= 1;  */

    /*reaction 48: 2 CH3 <=> C2H4 + H2 */
    /*eqcon[47] *= 1;  */

    /*reaction 49: 2 CH3 <=> C2H5 + H */
    /*eqcon[48] *= 1;  */

    /*reaction 50: CH3 + H (+M) <=> CH4 (+M) */
    eqcon[49] *= 1e+06; 

    /*reaction 51: 2 CH3 (+M) <=> C2H6 (+M) */
    eqcon[50] *= 1e+06; 

    /*reaction 52: S-CH2 + OH <=> CH2O + H */
    /*eqcon[51] *= 1;  */

    /*reaction 53: S-CH2 + O2 <=> CO + OH + H */
    eqcon[52] *= 1e-06; 

    /*reaction 54: S-CH2 + CO2 <=> CO + CH2O */
    /*eqcon[53] *= 1;  */

    /*reaction 55: S-CH2 + M <=> T-CH2 + M */
    /*eqcon[54] *= 1;  */

    /*reaction 56: T-CH2 + H <=> CH + H2 */
    /*eqcon[55] *= 1;  */

    /*reaction 57: T-CH2 + OH <=> CH2O + H */
    /*eqcon[56] *= 1;  */

    /*reaction 58: T-CH2 + OH <=> CH + H2O */
    /*eqcon[57] *= 1;  */

    /*reaction 59: T-CH2 + O <=> CO + 2 H */
    eqcon[58] *= 1e-06; 

    /*reaction 60: T-CH2 + O <=> CO + H2 */
    /*eqcon[59] *= 1;  */

    /*reaction 61: T-CH2 + O2 <=> CO2 + H2 */
    /*eqcon[60] *= 1;  */

    /*reaction 62: T-CH2 + O2 <=> CO + OH + H */
    eqcon[61] *= 1e-06; 

    /*reaction 63: 2 T-CH2 <=> C2H2 + 2 H */
    eqcon[62] *= 1e-06; 

    /*reaction 64: CH + O <=> CO + H */
    /*eqcon[63] *= 1;  */

    /*reaction 65: CH + O2 <=> HCO + O */
    /*eqcon[64] *= 1;  */

    /*reaction 66: CH + H2O <=> CH2O + H */
    /*eqcon[65] *= 1;  */

    /*reaction 67: CH + CO2 <=> HCO + CO */
    /*eqcon[66] *= 1;  */

    /*reaction 68: CH3O + H <=> CH2O + H2 */
    /*eqcon[67] *= 1;  */

    /*reaction 69: CH3O + H <=> S-CH2 + H2O */
    /*eqcon[68] *= 1;  */

    /*reaction 70: CH3O + OH <=> CH2O + H2O */
    /*eqcon[69] *= 1;  */

    /*reaction 71: CH3O + O <=> OH + CH2O */
    /*eqcon[70] *= 1;  */

    /*reaction 72: CH3O + O2 <=> CH2O + HO2 */
    /*eqcon[71] *= 1;  */

    /*reaction 73: CH3O + M <=> CH2O + H + M */
    eqcon[72] *= 1e-06; 

    /*reaction 74: C2H6 + H <=> C2H5 + H2 */
    /*eqcon[73] *= 1;  */

    /*reaction 75: C2H6 + O <=> C2H5 + OH */
    /*eqcon[74] *= 1;  */

    /*reaction 76: C2H6 + OH <=> C2H5 + H2O */
    /*eqcon[75] *= 1;  */

    /*reaction 77: C2H6 + CH3 <=> C2H5 + CH4 */
    /*eqcon[76] *= 1;  */

    /*reaction 78: C2H6 (+M) <=> C2H5 + H (+M) */
    eqcon[77] *= 1e-06; 

    /*reaction 79: C2H5 + H <=> C2H4 + H2 */
    /*eqcon[78] *= 1;  */

    /*reaction 80: C2H5 + O <=> C2H4 + OH */
    /*eqcon[79] *= 1;  */

    /*reaction 81: C2H5 + O <=> CH3 + CH2O */
    /*eqcon[80] *= 1;  */

    /*reaction 82: C2H5 + O2 <=> C2H4 + HO2 */
    /*eqcon[81] *= 1;  */

    /*reaction 83: C2H5 (+M) <=> C2H4 + H (+M) */
    eqcon[82] *= 1e-06; 

    /*reaction 84: C2H4 + H <=> C2H3 + H2 */
    /*eqcon[83] *= 1;  */

    /*reaction 85: C2H4 + OH <=> C2H3 + H2O */
    /*eqcon[84] *= 1;  */

    /*reaction 86: C2H4 + O <=> CH3 + HCO */
    /*eqcon[85] *= 1;  */

    /*reaction 87: C2H4 + O <=> CH2CHO + H */
    /*eqcon[86] *= 1;  */

    /*reaction 88: 2 C2H4 <=> C2H3 + C2H5 */
    /*eqcon[87] *= 1;  */

    /*reaction 89: C2H4 + O2 <=> C2H3 + HO2 */
    /*eqcon[88] *= 1;  */

    /*reaction 90: C2H4 + HO2 <=> C2H4O + OH */
    /*eqcon[89] *= 1;  */

    /*reaction 91: C2H4O + HO2 <=> CH3 + CO + H2O2 */
    eqcon[90] *= 1e-06; 

    /*reaction 92: C2H4 + M <=> C2H3 + H + M */
    eqcon[91] *= 1e-06; 

    /*reaction 93: C2H4 + M <=> C2H2 + H2 + M */
    eqcon[92] *= 1e-06; 

    /*reaction 94: C2H3 + H <=> C2H2 + H2 */
    /*eqcon[93] *= 1;  */

    /*reaction 95: C2H3 (+M) <=> C2H2 + H (+M) */
    eqcon[94] *= 1e-06; 

    /*reaction 96: C2H3 + O2 <=> CH2O + HCO */
    /*eqcon[95] *= 1;  */

    /*reaction 97: C2H3 + O2 <=> CH2CHO + O */
    /*eqcon[96] *= 1;  */

    /*reaction 98: C2H3 + O2 <=> C2H2 + HO2 */
    /*eqcon[97] *= 1;  */

    /*reaction 99: CH2CHO <=> CH2CO + H */
    eqcon[98] *= 1e-06; 

    /*reaction 100: C2H2 + O <=> HCCO + H */
    /*eqcon[99] *= 1;  */

    /*reaction 101: C2H2 + O <=> T-CH2 + CO */
    /*eqcon[100] *= 1;  */

    /*reaction 102: C2H2 + O2 <=> CH2O + CO */
    /*eqcon[101] *= 1;  */

    /*reaction 103: C2H2 + OH <=> CH2CO + H */
    /*eqcon[102] *= 1;  */

    /*reaction 104: C2H2 + OH <=> C2H + H2O */
    /*eqcon[103] *= 1;  */

    /*reaction 105: CH2CO + H <=> CH3 + CO */
    /*eqcon[104] *= 1;  */

    /*reaction 106: CH2CO + O <=> T-CH2 + CO2 */
    /*eqcon[105] *= 1;  */

    /*reaction 107: CH2CO + O <=> HCCO + OH */
    /*eqcon[106] *= 1;  */

    /*reaction 108: CH2CO + CH3 <=> C2H5 + CO */
    /*eqcon[107] *= 1;  */

    /*reaction 109: HCCO + H <=> S-CH2 + CO */
    /*eqcon[108] *= 1;  */

    /*reaction 110: HCCO + OH <=> HCO + CO + H */
    eqcon[109] *= 1e-06; 

    /*reaction 111: HCCO + O <=> 2 CO + H */
    eqcon[110] *= 1e-06; 

    /*reaction 112: HCCO + O2 <=> 2 CO + OH */
    eqcon[111] *= 1e-06; 

    /*reaction 113: HCCO + O2 <=> CO2 + CO + H */
    eqcon[112] *= 1e-06; 

    /*reaction 114: C2H + OH <=> HCCO + H */
    /*eqcon[113] *= 1;  */

    /*reaction 115: C2H + O <=> CO + CH */
    /*eqcon[114] *= 1;  */

    /*reaction 116: C2H + O2 <=> HCCO + O */
    /*eqcon[115] *= 1;  */

    /*reaction 117: C2H + O2 <=> CH + CO2 */
    /*eqcon[116] *= 1;  */

    /*reaction 118: C2H + O2 <=> HCO + CO */
    /*eqcon[117] *= 1;  */

    /*reaction 119: CH2OH + H <=> CH2O + H2 */
    /*eqcon[118] *= 1;  */

    /*reaction 120: CH2OH + H <=> CH3 + OH */
    /*eqcon[119] *= 1;  */

    /*reaction 121: CH2OH + OH <=> CH2O + H2O */
    /*eqcon[120] *= 1;  */

    /*reaction 122: CH2OH + O2 <=> CH2O + HO2 */
    /*eqcon[121] *= 1;  */

    /*reaction 123: CH2OH + M <=> CH2O + H + M */
    eqcon[122] *= 1e-06; 

    /*reaction 124: CH3O + M <=> CH2OH + M */
    /*eqcon[123] *= 1;  */

    /*reaction 125: CH2CO + OH <=> CH2OH + CO */
    /*eqcon[124] *= 1;  */

    /*reaction 126: CH3OH + OH <=> CH2OH + H2O */
    /*eqcon[125] *= 1;  */

    /*reaction 127: CH3OH + OH <=> CH3O + H2O */
    /*eqcon[126] *= 1;  */

    /*reaction 128: CH3OH + H <=> CH2OH + H2 */
    /*eqcon[127] *= 1;  */

    /*reaction 129: CH3OH + H <=> CH3O + H2 */
    /*eqcon[128] *= 1;  */

    /*reaction 130: CH3OH + O <=> CH2OH + OH */
    /*eqcon[129] *= 1;  */

    /*reaction 131: CH3OH + HO2 <=> CH2OH + H2O2 */
    /*eqcon[130] *= 1;  */

    /*reaction 132: CH3OH + O2 <=> CH2OH + HO2 */
    /*eqcon[131] *= 1;  */

    /*reaction 133: C3H4 + O <=> C2H4 + CO */
    /*eqcon[132] *= 1;  */

    /*reaction 134: CH3 + C2H2 <=> C3H4 + H */
    /*eqcon[133] *= 1;  */

    /*reaction 135: C3H4 + O <=> HCCO + CH3 */
    /*eqcon[134] *= 1;  */

    /*reaction 136: C3H3 + H (+M) <=> C3H4 (+M) */
    eqcon[135] *= 1e+06; 

    /*reaction 137: C3H3 + HO2 <=> C3H4 + O2 */
    /*eqcon[136] *= 1;  */

    /*reaction 138: C3H4 + OH <=> C3H3 + H2O */
    /*eqcon[137] *= 1;  */

    /*reaction 139: C3H3 + O2 <=> CH2CO + HCO */
    /*eqcon[138] *= 1;  */

    /*reaction 140: C3H4 + H (+M) <=> C3H5 (+M) */
    eqcon[139] *= 1e+06; 

    /*reaction 141: C3H5 + H <=> C3H4 + H2 */
    /*eqcon[140] *= 1;  */

    /*reaction 142: C3H5 + O2 <=> C3H4 + HO2 */
    /*eqcon[141] *= 1;  */

    /*reaction 143: C3H5 + CH3 <=> C3H4 + CH4 */
    /*eqcon[142] *= 1;  */

    /*reaction 144: C2H2 + CH3 (+M) <=> C3H5 (+M) */
    eqcon[143] *= 1e+06; 

    /*reaction 145: C3H5 + OH <=> C3H4 + H2O */
    /*eqcon[144] *= 1;  */

    /*reaction 146: C3H3 + HCO <=> C3H4 + CO */
    /*eqcon[145] *= 1;  */

    /*reaction 147: C3H3 + HO2 <=> OH + CO + C2H3 */
    eqcon[146] *= 1e-06; 

    /*reaction 148: C3H4 + O2 <=> CH3 + HCO + CO */
    eqcon[147] *= 1e-06; 

    /*reaction 149: C3H6 + O <=> C2H5 + HCO */
    /*eqcon[148] *= 1;  */

    /*reaction 150: C3H6 + OH <=> C3H5 + H2O */
    /*eqcon[149] *= 1;  */

    /*reaction 151: C3H6 + O <=> CH2CO + CH3 + H */
    eqcon[150] *= 1e-06; 

    /*reaction 152: C3H6 + H <=> C3H5 + H2 */
    /*eqcon[151] *= 1;  */

    /*reaction 153: C3H5 + H (+M) <=> C3H6 (+M) */
    eqcon[152] *= 1e+06; 

    /*reaction 154: C3H5 + HO2 <=> C3H6 + O2 */
    /*eqcon[153] *= 1;  */

    /*reaction 155: C3H5 + HO2 <=> OH + C2H3 + CH2O */
    eqcon[154] *= 1e-06; 

    /*reaction 156: C2H3 + CH3 (+M) <=> C3H6 (+M) */
    eqcon[155] *= 1e+06; 

    /*reaction 157: C3H6 + H <=> C2H4 + CH3 */
    /*eqcon[156] *= 1;  */

    /*reaction 158: CH3 + C2H3 <=> C3H5 + H */
    /*eqcon[157] *= 1;  */

    /*reaction 159: C3H8 (+M) <=> CH3 + C2H5 (+M) */
    eqcon[158] *= 1e-06; 

    /*reaction 160: C3H8 + O2 <=> I-C3H7 + HO2 */
    /*eqcon[159] *= 1;  */

    /*reaction 161: C3H8 + O2 <=> N-C3H7 + HO2 */
    /*eqcon[160] *= 1;  */

    /*reaction 162: C3H8 + H <=> I-C3H7 + H2 */
    /*eqcon[161] *= 1;  */

    /*reaction 163: C3H8 + H <=> N-C3H7 + H2 */
    /*eqcon[162] *= 1;  */

    /*reaction 164: C3H8 + O <=> I-C3H7 + OH */
    /*eqcon[163] *= 1;  */

    /*reaction 165: C3H8 + O <=> N-C3H7 + OH */
    /*eqcon[164] *= 1;  */

    /*reaction 166: C3H8 + OH <=> N-C3H7 + H2O */
    /*eqcon[165] *= 1;  */

    /*reaction 167: C3H8 + OH <=> I-C3H7 + H2O */
    /*eqcon[166] *= 1;  */

    /*reaction 168: C3H8 + HO2 <=> I-C3H7 + H2O2 */
    /*eqcon[167] *= 1;  */

    /*reaction 169: C3H8 + HO2 <=> N-C3H7 + H2O2 */
    /*eqcon[168] *= 1;  */

    /*reaction 170: I-C3H7 + C3H8 <=> N-C3H7 + C3H8 */
    /*eqcon[169] *= 1;  */

    /*reaction 171: C3H6 + H (+M) <=> I-C3H7 (+M) */
    eqcon[170] *= 1e+06; 

    /*reaction 172: I-C3H7 + O2 <=> C3H6 + HO2 */
    /*eqcon[171] *= 1;  */

    /*reaction 173: N-C3H7 (+M) <=> CH3 + C2H4 (+M) */
    eqcon[172] *= 1e-06; 

    /*reaction 174: H + C3H6 (+M) <=> N-C3H7 (+M) */
    eqcon[173] *= 1e+06; 

    /*reaction 175: N-C3H7 + O2 <=> C3H6 + HO2 */
    /*eqcon[174] *= 1;  */
}


/*Returns the equil constants for each reaction */
/*Given rho, T, and mass fractions */
void CKEQYR(double * rho, double * T, double * y, int * iwrk, double * rwrk, double * eqcon)
{
    double tT = *T; /*temporary temperature */
    double tc[] = { log(tT), tT, tT*tT, tT*tT*tT, tT*tT*tT*tT }; /*temperature cache */
    double gort[39]; /* temporary storage */

    /*compute the Gibbs free energy */
    gibbs(gort, tc);

    /*compute the equilibrium constants */
    equilibriumConstants(eqcon, gort, tT);

    /*reaction 1: H + O2 <=> OH + O */
    /*eqcon[0] *= 1;  */

    /*reaction 2: H2 + O <=> OH + H */
    /*eqcon[1] *= 1;  */

    /*reaction 3: H2 + OH <=> H2O + H */
    /*eqcon[2] *= 1;  */

    /*reaction 4: H2O + O <=> 2 OH */
    /*eqcon[3] *= 1;  */

    /*reaction 5: H + O + M <=> OH + M */
    eqcon[4] *= 1e+06; 

    /*reaction 6: H2 + O2 <=> 2 OH */
    /*eqcon[5] *= 1;  */

    /*reaction 7: 2 H + M <=> H2 + M */
    eqcon[6] *= 1e+06; 

    /*reaction 8: H + OH + M <=> H2O + M */
    eqcon[7] *= 1e+06; 

    /*reaction 9: 2 O + M <=> O2 + M */
    eqcon[8] *= 1e+06; 

    /*reaction 10: H + O2 (+M) <=> HO2 (+M) */
    eqcon[9] *= 1e+06; 

    /*reaction 11: O + OH + M <=> HO2 + M */
    eqcon[10] *= 1e+06; 

    /*reaction 12: HO2 + H <=> 2 OH */
    /*eqcon[11] *= 1;  */

    /*reaction 13: HO2 + H <=> H2 + O2 */
    /*eqcon[12] *= 1;  */

    /*reaction 14: HO2 + H <=> H2O + O */
    /*eqcon[13] *= 1;  */

    /*reaction 15: HO2 + O <=> OH + O2 */
    /*eqcon[14] *= 1;  */

    /*reaction 16: HO2 + OH <=> H2O + O2 */
    /*eqcon[15] *= 1;  */

    /*reaction 17: 2 OH (+M) <=> H2O2 (+M) */
    eqcon[16] *= 1e+06; 

    /*reaction 18: 2 HO2 <=> H2O2 + O2 */
    /*eqcon[17] *= 1;  */

    /*reaction 19: H2O2 + H <=> HO2 + H2 */
    /*eqcon[18] *= 1;  */

    /*reaction 20: H2O2 + H <=> H2O + OH */
    /*eqcon[19] *= 1;  */

    /*reaction 21: H2O2 + OH <=> H2O + HO2 */
    /*eqcon[20] *= 1;  */

    /*reaction 22: H2O2 + O <=> HO2 + OH */
    /*eqcon[21] *= 1;  */

    /*reaction 23: CO + OH <=> CO2 + H */
    /*eqcon[22] *= 1;  */

    /*reaction 24: CO + HO2 <=> CO2 + OH */
    /*eqcon[23] *= 1;  */

    /*reaction 25: HCO + M <=> CO + H + M */
    eqcon[24] *= 1e-06; 

    /*reaction 26: HCO + H <=> CO + H2 */
    /*eqcon[25] *= 1;  */

    /*reaction 27: HCO + O <=> CO + OH */
    /*eqcon[26] *= 1;  */

    /*reaction 28: HCO + O <=> CO2 + H */
    /*eqcon[27] *= 1;  */

    /*reaction 29: HCO + OH <=> CO + H2O */
    /*eqcon[28] *= 1;  */

    /*reaction 30: HCO + O2 <=> CO + HO2 */
    /*eqcon[29] *= 1;  */

    /*reaction 31: CH2O + M <=> HCO + H + M */
    eqcon[30] *= 1e-06; 

    /*reaction 32: CH2O + H <=> HCO + H2 */
    /*eqcon[31] *= 1;  */

    /*reaction 33: CH2O + O <=> HCO + OH */
    /*eqcon[32] *= 1;  */

    /*reaction 34: CH2O + OH <=> HCO + H2O */
    /*eqcon[33] *= 1;  */

    /*reaction 35: CH4 + H <=> H2 + CH3 */
    /*eqcon[34] *= 1;  */

    /*reaction 36: CH4 + OH <=> H2O + CH3 */
    /*eqcon[35] *= 1;  */

    /*reaction 37: CH4 + O <=> CH3 + OH */
    /*eqcon[36] *= 1;  */

    /*reaction 38: CH4 + O2 <=> CH3 + HO2 */
    /*eqcon[37] *= 1;  */

    /*reaction 39: CH4 + HO2 <=> CH3 + H2O2 */
    /*eqcon[38] *= 1;  */

    /*reaction 40: CH3 + H <=> T-CH2 + H2 */
    /*eqcon[39] *= 1;  */

    /*reaction 41: CH3 + H <=> S-CH2 + H2 */
    /*eqcon[40] *= 1;  */

    /*reaction 42: CH3 + OH <=> S-CH2 + H2O */
    /*eqcon[41] *= 1;  */

    /*reaction 43: CH3 + O <=> CH2O + H */
    /*eqcon[42] *= 1;  */

    /*reaction 44: CH3 + T-CH2 <=> C2H4 + H */
    /*eqcon[43] *= 1;  */

    /*reaction 45: CH3 + HO2 <=> CH3O + OH */
    /*eqcon[44] *= 1;  */

    /*reaction 46: CH3 + O2 <=> CH2O + OH */
    /*eqcon[45] *= 1;  */

    /*reaction 47: CH3 + O2 <=> CH3O + O */
    /*eqcon[46] *= 1;  */

    /*reaction 48: 2 CH3 <=> C2H4 + H2 */
    /*eqcon[47] *= 1;  */

    /*reaction 49: 2 CH3 <=> C2H5 + H */
    /*eqcon[48] *= 1;  */

    /*reaction 50: CH3 + H (+M) <=> CH4 (+M) */
    eqcon[49] *= 1e+06; 

    /*reaction 51: 2 CH3 (+M) <=> C2H6 (+M) */
    eqcon[50] *= 1e+06; 

    /*reaction 52: S-CH2 + OH <=> CH2O + H */
    /*eqcon[51] *= 1;  */

    /*reaction 53: S-CH2 + O2 <=> CO + OH + H */
    eqcon[52] *= 1e-06; 

    /*reaction 54: S-CH2 + CO2 <=> CO + CH2O */
    /*eqcon[53] *= 1;  */

    /*reaction 55: S-CH2 + M <=> T-CH2 + M */
    /*eqcon[54] *= 1;  */

    /*reaction 56: T-CH2 + H <=> CH + H2 */
    /*eqcon[55] *= 1;  */

    /*reaction 57: T-CH2 + OH <=> CH2O + H */
    /*eqcon[56] *= 1;  */

    /*reaction 58: T-CH2 + OH <=> CH + H2O */
    /*eqcon[57] *= 1;  */

    /*reaction 59: T-CH2 + O <=> CO + 2 H */
    eqcon[58] *= 1e-06; 

    /*reaction 60: T-CH2 + O <=> CO + H2 */
    /*eqcon[59] *= 1;  */

    /*reaction 61: T-CH2 + O2 <=> CO2 + H2 */
    /*eqcon[60] *= 1;  */

    /*reaction 62: T-CH2 + O2 <=> CO + OH + H */
    eqcon[61] *= 1e-06; 

    /*reaction 63: 2 T-CH2 <=> C2H2 + 2 H */
    eqcon[62] *= 1e-06; 

    /*reaction 64: CH + O <=> CO + H */
    /*eqcon[63] *= 1;  */

    /*reaction 65: CH + O2 <=> HCO + O */
    /*eqcon[64] *= 1;  */

    /*reaction 66: CH + H2O <=> CH2O + H */
    /*eqcon[65] *= 1;  */

    /*reaction 67: CH + CO2 <=> HCO + CO */
    /*eqcon[66] *= 1;  */

    /*reaction 68: CH3O + H <=> CH2O + H2 */
    /*eqcon[67] *= 1;  */

    /*reaction 69: CH3O + H <=> S-CH2 + H2O */
    /*eqcon[68] *= 1;  */

    /*reaction 70: CH3O + OH <=> CH2O + H2O */
    /*eqcon[69] *= 1;  */

    /*reaction 71: CH3O + O <=> OH + CH2O */
    /*eqcon[70] *= 1;  */

    /*reaction 72: CH3O + O2 <=> CH2O + HO2 */
    /*eqcon[71] *= 1;  */

    /*reaction 73: CH3O + M <=> CH2O + H + M */
    eqcon[72] *= 1e-06; 

    /*reaction 74: C2H6 + H <=> C2H5 + H2 */
    /*eqcon[73] *= 1;  */

    /*reaction 75: C2H6 + O <=> C2H5 + OH */
    /*eqcon[74] *= 1;  */

    /*reaction 76: C2H6 + OH <=> C2H5 + H2O */
    /*eqcon[75] *= 1;  */

    /*reaction 77: C2H6 + CH3 <=> C2H5 + CH4 */
    /*eqcon[76] *= 1;  */

    /*reaction 78: C2H6 (+M) <=> C2H5 + H (+M) */
    eqcon[77] *= 1e-06; 

    /*reaction 79: C2H5 + H <=> C2H4 + H2 */
    /*eqcon[78] *= 1;  */

    /*reaction 80: C2H5 + O <=> C2H4 + OH */
    /*eqcon[79] *= 1;  */

    /*reaction 81: C2H5 + O <=> CH3 + CH2O */
    /*eqcon[80] *= 1;  */

    /*reaction 82: C2H5 + O2 <=> C2H4 + HO2 */
    /*eqcon[81] *= 1;  */

    /*reaction 83: C2H5 (+M) <=> C2H4 + H (+M) */
    eqcon[82] *= 1e-06; 

    /*reaction 84: C2H4 + H <=> C2H3 + H2 */
    /*eqcon[83] *= 1;  */

    /*reaction 85: C2H4 + OH <=> C2H3 + H2O */
    /*eqcon[84] *= 1;  */

    /*reaction 86: C2H4 + O <=> CH3 + HCO */
    /*eqcon[85] *= 1;  */

    /*reaction 87: C2H4 + O <=> CH2CHO + H */
    /*eqcon[86] *= 1;  */

    /*reaction 88: 2 C2H4 <=> C2H3 + C2H5 */
    /*eqcon[87] *= 1;  */

    /*reaction 89: C2H4 + O2 <=> C2H3 + HO2 */
    /*eqcon[88] *= 1;  */

    /*reaction 90: C2H4 + HO2 <=> C2H4O + OH */
    /*eqcon[89] *= 1;  */

    /*reaction 91: C2H4O + HO2 <=> CH3 + CO + H2O2 */
    eqcon[90] *= 1e-06; 

    /*reaction 92: C2H4 + M <=> C2H3 + H + M */
    eqcon[91] *= 1e-06; 

    /*reaction 93: C2H4 + M <=> C2H2 + H2 + M */
    eqcon[92] *= 1e-06; 

    /*reaction 94: C2H3 + H <=> C2H2 + H2 */
    /*eqcon[93] *= 1;  */

    /*reaction 95: C2H3 (+M) <=> C2H2 + H (+M) */
    eqcon[94] *= 1e-06; 

    /*reaction 96: C2H3 + O2 <=> CH2O + HCO */
    /*eqcon[95] *= 1;  */

    /*reaction 97: C2H3 + O2 <=> CH2CHO + O */
    /*eqcon[96] *= 1;  */

    /*reaction 98: C2H3 + O2 <=> C2H2 + HO2 */
    /*eqcon[97] *= 1;  */

    /*reaction 99: CH2CHO <=> CH2CO + H */
    eqcon[98] *= 1e-06; 

    /*reaction 100: C2H2 + O <=> HCCO + H */
    /*eqcon[99] *= 1;  */

    /*reaction 101: C2H2 + O <=> T-CH2 + CO */
    /*eqcon[100] *= 1;  */

    /*reaction 102: C2H2 + O2 <=> CH2O + CO */
    /*eqcon[101] *= 1;  */

    /*reaction 103: C2H2 + OH <=> CH2CO + H */
    /*eqcon[102] *= 1;  */

    /*reaction 104: C2H2 + OH <=> C2H + H2O */
    /*eqcon[103] *= 1;  */

    /*reaction 105: CH2CO + H <=> CH3 + CO */
    /*eqcon[104] *= 1;  */

    /*reaction 106: CH2CO + O <=> T-CH2 + CO2 */
    /*eqcon[105] *= 1;  */

    /*reaction 107: CH2CO + O <=> HCCO + OH */
    /*eqcon[106] *= 1;  */

    /*reaction 108: CH2CO + CH3 <=> C2H5 + CO */
    /*eqcon[107] *= 1;  */

    /*reaction 109: HCCO + H <=> S-CH2 + CO */
    /*eqcon[108] *= 1;  */

    /*reaction 110: HCCO + OH <=> HCO + CO + H */
    eqcon[109] *= 1e-06; 

    /*reaction 111: HCCO + O <=> 2 CO + H */
    eqcon[110] *= 1e-06; 

    /*reaction 112: HCCO + O2 <=> 2 CO + OH */
    eqcon[111] *= 1e-06; 

    /*reaction 113: HCCO + O2 <=> CO2 + CO + H */
    eqcon[112] *= 1e-06; 

    /*reaction 114: C2H + OH <=> HCCO + H */
    /*eqcon[113] *= 1;  */

    /*reaction 115: C2H + O <=> CO + CH */
    /*eqcon[114] *= 1;  */

    /*reaction 116: C2H + O2 <=> HCCO + O */
    /*eqcon[115] *= 1;  */

    /*reaction 117: C2H + O2 <=> CH + CO2 */
    /*eqcon[116] *= 1;  */

    /*reaction 118: C2H + O2 <=> HCO + CO */
    /*eqcon[117] *= 1;  */

    /*reaction 119: CH2OH + H <=> CH2O + H2 */
    /*eqcon[118] *= 1;  */

    /*reaction 120: CH2OH + H <=> CH3 + OH */
    /*eqcon[119] *= 1;  */

    /*reaction 121: CH2OH + OH <=> CH2O + H2O */
    /*eqcon[120] *= 1;  */

    /*reaction 122: CH2OH + O2 <=> CH2O + HO2 */
    /*eqcon[121] *= 1;  */

    /*reaction 123: CH2OH + M <=> CH2O + H + M */
    eqcon[122] *= 1e-06; 

    /*reaction 124: CH3O + M <=> CH2OH + M */
    /*eqcon[123] *= 1;  */

    /*reaction 125: CH2CO + OH <=> CH2OH + CO */
    /*eqcon[124] *= 1;  */

    /*reaction 126: CH3OH + OH <=> CH2OH + H2O */
    /*eqcon[125] *= 1;  */

    /*reaction 127: CH3OH + OH <=> CH3O + H2O */
    /*eqcon[126] *= 1;  */

    /*reaction 128: CH3OH + H <=> CH2OH + H2 */
    /*eqcon[127] *= 1;  */

    /*reaction 129: CH3OH + H <=> CH3O + H2 */
    /*eqcon[128] *= 1;  */

    /*reaction 130: CH3OH + O <=> CH2OH + OH */
    /*eqcon[129] *= 1;  */

    /*reaction 131: CH3OH + HO2 <=> CH2OH + H2O2 */
    /*eqcon[130] *= 1;  */

    /*reaction 132: CH3OH + O2 <=> CH2OH + HO2 */
    /*eqcon[131] *= 1;  */

    /*reaction 133: C3H4 + O <=> C2H4 + CO */
    /*eqcon[132] *= 1;  */

    /*reaction 134: CH3 + C2H2 <=> C3H4 + H */
    /*eqcon[133] *= 1;  */

    /*reaction 135: C3H4 + O <=> HCCO + CH3 */
    /*eqcon[134] *= 1;  */

    /*reaction 136: C3H3 + H (+M) <=> C3H4 (+M) */
    eqcon[135] *= 1e+06; 

    /*reaction 137: C3H3 + HO2 <=> C3H4 + O2 */
    /*eqcon[136] *= 1;  */

    /*reaction 138: C3H4 + OH <=> C3H3 + H2O */
    /*eqcon[137] *= 1;  */

    /*reaction 139: C3H3 + O2 <=> CH2CO + HCO */
    /*eqcon[138] *= 1;  */

    /*reaction 140: C3H4 + H (+M) <=> C3H5 (+M) */
    eqcon[139] *= 1e+06; 

    /*reaction 141: C3H5 + H <=> C3H4 + H2 */
    /*eqcon[140] *= 1;  */

    /*reaction 142: C3H5 + O2 <=> C3H4 + HO2 */
    /*eqcon[141] *= 1;  */

    /*reaction 143: C3H5 + CH3 <=> C3H4 + CH4 */
    /*eqcon[142] *= 1;  */

    /*reaction 144: C2H2 + CH3 (+M) <=> C3H5 (+M) */
    eqcon[143] *= 1e+06; 

    /*reaction 145: C3H5 + OH <=> C3H4 + H2O */
    /*eqcon[144] *= 1;  */

    /*reaction 146: C3H3 + HCO <=> C3H4 + CO */
    /*eqcon[145] *= 1;  */

    /*reaction 147: C3H3 + HO2 <=> OH + CO + C2H3 */
    eqcon[146] *= 1e-06; 

    /*reaction 148: C3H4 + O2 <=> CH3 + HCO + CO */
    eqcon[147] *= 1e-06; 

    /*reaction 149: C3H6 + O <=> C2H5 + HCO */
    /*eqcon[148] *= 1;  */

    /*reaction 150: C3H6 + OH <=> C3H5 + H2O */
    /*eqcon[149] *= 1;  */

    /*reaction 151: C3H6 + O <=> CH2CO + CH3 + H */
    eqcon[150] *= 1e-06; 

    /*reaction 152: C3H6 + H <=> C3H5 + H2 */
    /*eqcon[151] *= 1;  */

    /*reaction 153: C3H5 + H (+M) <=> C3H6 (+M) */
    eqcon[152] *= 1e+06; 

    /*reaction 154: C3H5 + HO2 <=> C3H6 + O2 */
    /*eqcon[153] *= 1;  */

    /*reaction 155: C3H5 + HO2 <=> OH + C2H3 + CH2O */
    eqcon[154] *= 1e-06; 

    /*reaction 156: C2H3 + CH3 (+M) <=> C3H6 (+M) */
    eqcon[155] *= 1e+06; 

    /*reaction 157: C3H6 + H <=> C2H4 + CH3 */
    /*eqcon[156] *= 1;  */

    /*reaction 158: CH3 + C2H3 <=> C3H5 + H */
    /*eqcon[157] *= 1;  */

    /*reaction 159: C3H8 (+M) <=> CH3 + C2H5 (+M) */
    eqcon[158] *= 1e-06; 

    /*reaction 160: C3H8 + O2 <=> I-C3H7 + HO2 */
    /*eqcon[159] *= 1;  */

    /*reaction 161: C3H8 + O2 <=> N-C3H7 + HO2 */
    /*eqcon[160] *= 1;  */

    /*reaction 162: C3H8 + H <=> I-C3H7 + H2 */
    /*eqcon[161] *= 1;  */

    /*reaction 163: C3H8 + H <=> N-C3H7 + H2 */
    /*eqcon[162] *= 1;  */

    /*reaction 164: C3H8 + O <=> I-C3H7 + OH */
    /*eqcon[163] *= 1;  */

    /*reaction 165: C3H8 + O <=> N-C3H7 + OH */
    /*eqcon[164] *= 1;  */

    /*reaction 166: C3H8 + OH <=> N-C3H7 + H2O */
    /*eqcon[165] *= 1;  */

    /*reaction 167: C3H8 + OH <=> I-C3H7 + H2O */
    /*eqcon[166] *= 1;  */

    /*reaction 168: C3H8 + HO2 <=> I-C3H7 + H2O2 */
    /*eqcon[167] *= 1;  */

    /*reaction 169: C3H8 + HO2 <=> N-C3H7 + H2O2 */
    /*eqcon[168] *= 1;  */

    /*reaction 170: I-C3H7 + C3H8 <=> N-C3H7 + C3H8 */
    /*eqcon[169] *= 1;  */

    /*reaction 171: C3H6 + H (+M) <=> I-C3H7 (+M) */
    eqcon[170] *= 1e+06; 

    /*reaction 172: I-C3H7 + O2 <=> C3H6 + HO2 */
    /*eqcon[171] *= 1;  */

    /*reaction 173: N-C3H7 (+M) <=> CH3 + C2H4 (+M) */
    eqcon[172] *= 1e-06; 

    /*reaction 174: H + C3H6 (+M) <=> N-C3H7 (+M) */
    eqcon[173] *= 1e+06; 

    /*reaction 175: N-C3H7 + O2 <=> C3H6 + HO2 */
    /*eqcon[174] *= 1;  */
}


/*Returns the equil constants for each reaction */
/*Given rho, T, and mole fractions */
void CKEQXR(double * rho, double * T, double * x, int * iwrk, double * rwrk, double * eqcon)
{
    double tT = *T; /*temporary temperature */
    double tc[] = { log(tT), tT, tT*tT, tT*tT*tT, tT*tT*tT*tT }; /*temperature cache */
    double gort[39]; /* temporary storage */

    /*compute the Gibbs free energy */
    gibbs(gort, tc);

    /*compute the equilibrium constants */
    equilibriumConstants(eqcon, gort, tT);

    /*reaction 1: H + O2 <=> OH + O */
    /*eqcon[0] *= 1;  */

    /*reaction 2: H2 + O <=> OH + H */
    /*eqcon[1] *= 1;  */

    /*reaction 3: H2 + OH <=> H2O + H */
    /*eqcon[2] *= 1;  */

    /*reaction 4: H2O + O <=> 2 OH */
    /*eqcon[3] *= 1;  */

    /*reaction 5: H + O + M <=> OH + M */
    eqcon[4] *= 1e+06; 

    /*reaction 6: H2 + O2 <=> 2 OH */
    /*eqcon[5] *= 1;  */

    /*reaction 7: 2 H + M <=> H2 + M */
    eqcon[6] *= 1e+06; 

    /*reaction 8: H + OH + M <=> H2O + M */
    eqcon[7] *= 1e+06; 

    /*reaction 9: 2 O + M <=> O2 + M */
    eqcon[8] *= 1e+06; 

    /*reaction 10: H + O2 (+M) <=> HO2 (+M) */
    eqcon[9] *= 1e+06; 

    /*reaction 11: O + OH + M <=> HO2 + M */
    eqcon[10] *= 1e+06; 

    /*reaction 12: HO2 + H <=> 2 OH */
    /*eqcon[11] *= 1;  */

    /*reaction 13: HO2 + H <=> H2 + O2 */
    /*eqcon[12] *= 1;  */

    /*reaction 14: HO2 + H <=> H2O + O */
    /*eqcon[13] *= 1;  */

    /*reaction 15: HO2 + O <=> OH + O2 */
    /*eqcon[14] *= 1;  */

    /*reaction 16: HO2 + OH <=> H2O + O2 */
    /*eqcon[15] *= 1;  */

    /*reaction 17: 2 OH (+M) <=> H2O2 (+M) */
    eqcon[16] *= 1e+06; 

    /*reaction 18: 2 HO2 <=> H2O2 + O2 */
    /*eqcon[17] *= 1;  */

    /*reaction 19: H2O2 + H <=> HO2 + H2 */
    /*eqcon[18] *= 1;  */

    /*reaction 20: H2O2 + H <=> H2O + OH */
    /*eqcon[19] *= 1;  */

    /*reaction 21: H2O2 + OH <=> H2O + HO2 */
    /*eqcon[20] *= 1;  */

    /*reaction 22: H2O2 + O <=> HO2 + OH */
    /*eqcon[21] *= 1;  */

    /*reaction 23: CO + OH <=> CO2 + H */
    /*eqcon[22] *= 1;  */

    /*reaction 24: CO + HO2 <=> CO2 + OH */
    /*eqcon[23] *= 1;  */

    /*reaction 25: HCO + M <=> CO + H + M */
    eqcon[24] *= 1e-06; 

    /*reaction 26: HCO + H <=> CO + H2 */
    /*eqcon[25] *= 1;  */

    /*reaction 27: HCO + O <=> CO + OH */
    /*eqcon[26] *= 1;  */

    /*reaction 28: HCO + O <=> CO2 + H */
    /*eqcon[27] *= 1;  */

    /*reaction 29: HCO + OH <=> CO + H2O */
    /*eqcon[28] *= 1;  */

    /*reaction 30: HCO + O2 <=> CO + HO2 */
    /*eqcon[29] *= 1;  */

    /*reaction 31: CH2O + M <=> HCO + H + M */
    eqcon[30] *= 1e-06; 

    /*reaction 32: CH2O + H <=> HCO + H2 */
    /*eqcon[31] *= 1;  */

    /*reaction 33: CH2O + O <=> HCO + OH */
    /*eqcon[32] *= 1;  */

    /*reaction 34: CH2O + OH <=> HCO + H2O */
    /*eqcon[33] *= 1;  */

    /*reaction 35: CH4 + H <=> H2 + CH3 */
    /*eqcon[34] *= 1;  */

    /*reaction 36: CH4 + OH <=> H2O + CH3 */
    /*eqcon[35] *= 1;  */

    /*reaction 37: CH4 + O <=> CH3 + OH */
    /*eqcon[36] *= 1;  */

    /*reaction 38: CH4 + O2 <=> CH3 + HO2 */
    /*eqcon[37] *= 1;  */

    /*reaction 39: CH4 + HO2 <=> CH3 + H2O2 */
    /*eqcon[38] *= 1;  */

    /*reaction 40: CH3 + H <=> T-CH2 + H2 */
    /*eqcon[39] *= 1;  */

    /*reaction 41: CH3 + H <=> S-CH2 + H2 */
    /*eqcon[40] *= 1;  */

    /*reaction 42: CH3 + OH <=> S-CH2 + H2O */
    /*eqcon[41] *= 1;  */

    /*reaction 43: CH3 + O <=> CH2O + H */
    /*eqcon[42] *= 1;  */

    /*reaction 44: CH3 + T-CH2 <=> C2H4 + H */
    /*eqcon[43] *= 1;  */

    /*reaction 45: CH3 + HO2 <=> CH3O + OH */
    /*eqcon[44] *= 1;  */

    /*reaction 46: CH3 + O2 <=> CH2O + OH */
    /*eqcon[45] *= 1;  */

    /*reaction 47: CH3 + O2 <=> CH3O + O */
    /*eqcon[46] *= 1;  */

    /*reaction 48: 2 CH3 <=> C2H4 + H2 */
    /*eqcon[47] *= 1;  */

    /*reaction 49: 2 CH3 <=> C2H5 + H */
    /*eqcon[48] *= 1;  */

    /*reaction 50: CH3 + H (+M) <=> CH4 (+M) */
    eqcon[49] *= 1e+06; 

    /*reaction 51: 2 CH3 (+M) <=> C2H6 (+M) */
    eqcon[50] *= 1e+06; 

    /*reaction 52: S-CH2 + OH <=> CH2O + H */
    /*eqcon[51] *= 1;  */

    /*reaction 53: S-CH2 + O2 <=> CO + OH + H */
    eqcon[52] *= 1e-06; 

    /*reaction 54: S-CH2 + CO2 <=> CO + CH2O */
    /*eqcon[53] *= 1;  */

    /*reaction 55: S-CH2 + M <=> T-CH2 + M */
    /*eqcon[54] *= 1;  */

    /*reaction 56: T-CH2 + H <=> CH + H2 */
    /*eqcon[55] *= 1;  */

    /*reaction 57: T-CH2 + OH <=> CH2O + H */
    /*eqcon[56] *= 1;  */

    /*reaction 58: T-CH2 + OH <=> CH + H2O */
    /*eqcon[57] *= 1;  */

    /*reaction 59: T-CH2 + O <=> CO + 2 H */
    eqcon[58] *= 1e-06; 

    /*reaction 60: T-CH2 + O <=> CO + H2 */
    /*eqcon[59] *= 1;  */

    /*reaction 61: T-CH2 + O2 <=> CO2 + H2 */
    /*eqcon[60] *= 1;  */

    /*reaction 62: T-CH2 + O2 <=> CO + OH + H */
    eqcon[61] *= 1e-06; 

    /*reaction 63: 2 T-CH2 <=> C2H2 + 2 H */
    eqcon[62] *= 1e-06; 

    /*reaction 64: CH + O <=> CO + H */
    /*eqcon[63] *= 1;  */

    /*reaction 65: CH + O2 <=> HCO + O */
    /*eqcon[64] *= 1;  */

    /*reaction 66: CH + H2O <=> CH2O + H */
    /*eqcon[65] *= 1;  */

    /*reaction 67: CH + CO2 <=> HCO + CO */
    /*eqcon[66] *= 1;  */

    /*reaction 68: CH3O + H <=> CH2O + H2 */
    /*eqcon[67] *= 1;  */

    /*reaction 69: CH3O + H <=> S-CH2 + H2O */
    /*eqcon[68] *= 1;  */

    /*reaction 70: CH3O + OH <=> CH2O + H2O */
    /*eqcon[69] *= 1;  */

    /*reaction 71: CH3O + O <=> OH + CH2O */
    /*eqcon[70] *= 1;  */

    /*reaction 72: CH3O + O2 <=> CH2O + HO2 */
    /*eqcon[71] *= 1;  */

    /*reaction 73: CH3O + M <=> CH2O + H + M */
    eqcon[72] *= 1e-06; 

    /*reaction 74: C2H6 + H <=> C2H5 + H2 */
    /*eqcon[73] *= 1;  */

    /*reaction 75: C2H6 + O <=> C2H5 + OH */
    /*eqcon[74] *= 1;  */

    /*reaction 76: C2H6 + OH <=> C2H5 + H2O */
    /*eqcon[75] *= 1;  */

    /*reaction 77: C2H6 + CH3 <=> C2H5 + CH4 */
    /*eqcon[76] *= 1;  */

    /*reaction 78: C2H6 (+M) <=> C2H5 + H (+M) */
    eqcon[77] *= 1e-06; 

    /*reaction 79: C2H5 + H <=> C2H4 + H2 */
    /*eqcon[78] *= 1;  */

    /*reaction 80: C2H5 + O <=> C2H4 + OH */
    /*eqcon[79] *= 1;  */

    /*reaction 81: C2H5 + O <=> CH3 + CH2O */
    /*eqcon[80] *= 1;  */

    /*reaction 82: C2H5 + O2 <=> C2H4 + HO2 */
    /*eqcon[81] *= 1;  */

    /*reaction 83: C2H5 (+M) <=> C2H4 + H (+M) */
    eqcon[82] *= 1e-06; 

    /*reaction 84: C2H4 + H <=> C2H3 + H2 */
    /*eqcon[83] *= 1;  */

    /*reaction 85: C2H4 + OH <=> C2H3 + H2O */
    /*eqcon[84] *= 1;  */

    /*reaction 86: C2H4 + O <=> CH3 + HCO */
    /*eqcon[85] *= 1;  */

    /*reaction 87: C2H4 + O <=> CH2CHO + H */
    /*eqcon[86] *= 1;  */

    /*reaction 88: 2 C2H4 <=> C2H3 + C2H5 */
    /*eqcon[87] *= 1;  */

    /*reaction 89: C2H4 + O2 <=> C2H3 + HO2 */
    /*eqcon[88] *= 1;  */

    /*reaction 90: C2H4 + HO2 <=> C2H4O + OH */
    /*eqcon[89] *= 1;  */

    /*reaction 91: C2H4O + HO2 <=> CH3 + CO + H2O2 */
    eqcon[90] *= 1e-06; 

    /*reaction 92: C2H4 + M <=> C2H3 + H + M */
    eqcon[91] *= 1e-06; 

    /*reaction 93: C2H4 + M <=> C2H2 + H2 + M */
    eqcon[92] *= 1e-06; 

    /*reaction 94: C2H3 + H <=> C2H2 + H2 */
    /*eqcon[93] *= 1;  */

    /*reaction 95: C2H3 (+M) <=> C2H2 + H (+M) */
    eqcon[94] *= 1e-06; 

    /*reaction 96: C2H3 + O2 <=> CH2O + HCO */
    /*eqcon[95] *= 1;  */

    /*reaction 97: C2H3 + O2 <=> CH2CHO + O */
    /*eqcon[96] *= 1;  */

    /*reaction 98: C2H3 + O2 <=> C2H2 + HO2 */
    /*eqcon[97] *= 1;  */

    /*reaction 99: CH2CHO <=> CH2CO + H */
    eqcon[98] *= 1e-06; 

    /*reaction 100: C2H2 + O <=> HCCO + H */
    /*eqcon[99] *= 1;  */

    /*reaction 101: C2H2 + O <=> T-CH2 + CO */
    /*eqcon[100] *= 1;  */

    /*reaction 102: C2H2 + O2 <=> CH2O + CO */
    /*eqcon[101] *= 1;  */

    /*reaction 103: C2H2 + OH <=> CH2CO + H */
    /*eqcon[102] *= 1;  */

    /*reaction 104: C2H2 + OH <=> C2H + H2O */
    /*eqcon[103] *= 1;  */

    /*reaction 105: CH2CO + H <=> CH3 + CO */
    /*eqcon[104] *= 1;  */

    /*reaction 106: CH2CO + O <=> T-CH2 + CO2 */
    /*eqcon[105] *= 1;  */

    /*reaction 107: CH2CO + O <=> HCCO + OH */
    /*eqcon[106] *= 1;  */

    /*reaction 108: CH2CO + CH3 <=> C2H5 + CO */
    /*eqcon[107] *= 1;  */

    /*reaction 109: HCCO + H <=> S-CH2 + CO */
    /*eqcon[108] *= 1;  */

    /*reaction 110: HCCO + OH <=> HCO + CO + H */
    eqcon[109] *= 1e-06; 

    /*reaction 111: HCCO + O <=> 2 CO + H */
    eqcon[110] *= 1e-06; 

    /*reaction 112: HCCO + O2 <=> 2 CO + OH */
    eqcon[111] *= 1e-06; 

    /*reaction 113: HCCO + O2 <=> CO2 + CO + H */
    eqcon[112] *= 1e-06; 

    /*reaction 114: C2H + OH <=> HCCO + H */
    /*eqcon[113] *= 1;  */

    /*reaction 115: C2H + O <=> CO + CH */
    /*eqcon[114] *= 1;  */

    /*reaction 116: C2H + O2 <=> HCCO + O */
    /*eqcon[115] *= 1;  */

    /*reaction 117: C2H + O2 <=> CH + CO2 */
    /*eqcon[116] *= 1;  */

    /*reaction 118: C2H + O2 <=> HCO + CO */
    /*eqcon[117] *= 1;  */

    /*reaction 119: CH2OH + H <=> CH2O + H2 */
    /*eqcon[118] *= 1;  */

    /*reaction 120: CH2OH + H <=> CH3 + OH */
    /*eqcon[119] *= 1;  */

    /*reaction 121: CH2OH + OH <=> CH2O + H2O */
    /*eqcon[120] *= 1;  */

    /*reaction 122: CH2OH + O2 <=> CH2O + HO2 */
    /*eqcon[121] *= 1;  */

    /*reaction 123: CH2OH + M <=> CH2O + H + M */
    eqcon[122] *= 1e-06; 

    /*reaction 124: CH3O + M <=> CH2OH + M */
    /*eqcon[123] *= 1;  */

    /*reaction 125: CH2CO + OH <=> CH2OH + CO */
    /*eqcon[124] *= 1;  */

    /*reaction 126: CH3OH + OH <=> CH2OH + H2O */
    /*eqcon[125] *= 1;  */

    /*reaction 127: CH3OH + OH <=> CH3O + H2O */
    /*eqcon[126] *= 1;  */

    /*reaction 128: CH3OH + H <=> CH2OH + H2 */
    /*eqcon[127] *= 1;  */

    /*reaction 129: CH3OH + H <=> CH3O + H2 */
    /*eqcon[128] *= 1;  */

    /*reaction 130: CH3OH + O <=> CH2OH + OH */
    /*eqcon[129] *= 1;  */

    /*reaction 131: CH3OH + HO2 <=> CH2OH + H2O2 */
    /*eqcon[130] *= 1;  */

    /*reaction 132: CH3OH + O2 <=> CH2OH + HO2 */
    /*eqcon[131] *= 1;  */

    /*reaction 133: C3H4 + O <=> C2H4 + CO */
    /*eqcon[132] *= 1;  */

    /*reaction 134: CH3 + C2H2 <=> C3H4 + H */
    /*eqcon[133] *= 1;  */

    /*reaction 135: C3H4 + O <=> HCCO + CH3 */
    /*eqcon[134] *= 1;  */

    /*reaction 136: C3H3 + H (+M) <=> C3H4 (+M) */
    eqcon[135] *= 1e+06; 

    /*reaction 137: C3H3 + HO2 <=> C3H4 + O2 */
    /*eqcon[136] *= 1;  */

    /*reaction 138: C3H4 + OH <=> C3H3 + H2O */
    /*eqcon[137] *= 1;  */

    /*reaction 139: C3H3 + O2 <=> CH2CO + HCO */
    /*eqcon[138] *= 1;  */

    /*reaction 140: C3H4 + H (+M) <=> C3H5 (+M) */
    eqcon[139] *= 1e+06; 

    /*reaction 141: C3H5 + H <=> C3H4 + H2 */
    /*eqcon[140] *= 1;  */

    /*reaction 142: C3H5 + O2 <=> C3H4 + HO2 */
    /*eqcon[141] *= 1;  */

    /*reaction 143: C3H5 + CH3 <=> C3H4 + CH4 */
    /*eqcon[142] *= 1;  */

    /*reaction 144: C2H2 + CH3 (+M) <=> C3H5 (+M) */
    eqcon[143] *= 1e+06; 

    /*reaction 145: C3H5 + OH <=> C3H4 + H2O */
    /*eqcon[144] *= 1;  */

    /*reaction 146: C3H3 + HCO <=> C3H4 + CO */
    /*eqcon[145] *= 1;  */

    /*reaction 147: C3H3 + HO2 <=> OH + CO + C2H3 */
    eqcon[146] *= 1e-06; 

    /*reaction 148: C3H4 + O2 <=> CH3 + HCO + CO */
    eqcon[147] *= 1e-06; 

    /*reaction 149: C3H6 + O <=> C2H5 + HCO */
    /*eqcon[148] *= 1;  */

    /*reaction 150: C3H6 + OH <=> C3H5 + H2O */
    /*eqcon[149] *= 1;  */

    /*reaction 151: C3H6 + O <=> CH2CO + CH3 + H */
    eqcon[150] *= 1e-06; 

    /*reaction 152: C3H6 + H <=> C3H5 + H2 */
    /*eqcon[151] *= 1;  */

    /*reaction 153: C3H5 + H (+M) <=> C3H6 (+M) */
    eqcon[152] *= 1e+06; 

    /*reaction 154: C3H5 + HO2 <=> C3H6 + O2 */
    /*eqcon[153] *= 1;  */

    /*reaction 155: C3H5 + HO2 <=> OH + C2H3 + CH2O */
    eqcon[154] *= 1e-06; 

    /*reaction 156: C2H3 + CH3 (+M) <=> C3H6 (+M) */
    eqcon[155] *= 1e+06; 

    /*reaction 157: C3H6 + H <=> C2H4 + CH3 */
    /*eqcon[156] *= 1;  */

    /*reaction 158: CH3 + C2H3 <=> C3H5 + H */
    /*eqcon[157] *= 1;  */

    /*reaction 159: C3H8 (+M) <=> CH3 + C2H5 (+M) */
    eqcon[158] *= 1e-06; 

    /*reaction 160: C3H8 + O2 <=> I-C3H7 + HO2 */
    /*eqcon[159] *= 1;  */

    /*reaction 161: C3H8 + O2 <=> N-C3H7 + HO2 */
    /*eqcon[160] *= 1;  */

    /*reaction 162: C3H8 + H <=> I-C3H7 + H2 */
    /*eqcon[161] *= 1;  */

    /*reaction 163: C3H8 + H <=> N-C3H7 + H2 */
    /*eqcon[162] *= 1;  */

    /*reaction 164: C3H8 + O <=> I-C3H7 + OH */
    /*eqcon[163] *= 1;  */

    /*reaction 165: C3H8 + O <=> N-C3H7 + OH */
    /*eqcon[164] *= 1;  */

    /*reaction 166: C3H8 + OH <=> N-C3H7 + H2O */
    /*eqcon[165] *= 1;  */

    /*reaction 167: C3H8 + OH <=> I-C3H7 + H2O */
    /*eqcon[166] *= 1;  */

    /*reaction 168: C3H8 + HO2 <=> I-C3H7 + H2O2 */
    /*eqcon[167] *= 1;  */

    /*reaction 169: C3H8 + HO2 <=> N-C3H7 + H2O2 */
    /*eqcon[168] *= 1;  */

    /*reaction 170: I-C3H7 + C3H8 <=> N-C3H7 + C3H8 */
    /*eqcon[169] *= 1;  */

    /*reaction 171: C3H6 + H (+M) <=> I-C3H7 (+M) */
    eqcon[170] *= 1e+06; 

    /*reaction 172: I-C3H7 + O2 <=> C3H6 + HO2 */
    /*eqcon[171] *= 1;  */

    /*reaction 173: N-C3H7 (+M) <=> CH3 + C2H4 (+M) */
    eqcon[172] *= 1e-06; 

    /*reaction 174: H + C3H6 (+M) <=> N-C3H7 (+M) */
    eqcon[173] *= 1e+06; 

    /*reaction 175: N-C3H7 + O2 <=> C3H6 + HO2 */
    /*eqcon[174] *= 1;  */
}

static double T_save = -1;
#ifdef BL_USE_OMP
#pragma omp threadprivate(T_save)
#endif

static double k_f_save[175];
#ifdef BL_USE_OMP
#pragma omp threadprivate(k_f_save)
#endif

static double Kc_save[175];
#ifdef BL_USE_OMP
#pragma omp threadprivate(Kc_save)
#endif

/*compute the production rate for each species */
void productionRate(double * wdot, double * sc, double T)
{
    double qdot;

    int id; /*loop counter */
    double mixture;                 /*mixture concentration */
    double g_RT[39];                /*Gibbs free energy */
    double Kc;                      /*equilibrium constant */
    double k_f;                     /*forward reaction rate */
    double k_r;                     /*reverse reaction rate */
    double q_f;                     /*forward progress rate */
    double q_r;                     /*reverse progress rate */
    double phi_f;                   /*forward phase space factor */
    double phi_r;                   /*reverse phase space factor */
    double alpha;                   /*enhancement */
    double redP;                    /*reduced pressure */
    double logPred;                 /*log of above */
    double F;                       /*fallof rate enhancement */

    double F_troe;                  /*TROE intermediate */
    double logFcent;                /*TROE intermediate */
    double troe;                    /*TROE intermediate */
    double troe_c;                  /*TROE intermediate */
    double troe_n;                  /*TROE intermediate */

    double X;                       /*SRI intermediate */
    double F_sri;                   /*SRI intermediate */
    double tc[] = { log(T), T, T*T, T*T*T, T*T*T*T }; /*temperature cache */

    double invT = 1.0 / tc[1];

    /*reference concentration: P_atm / (RT) in inverse mol/m^3 */
    double refC = 101325 / 8.31451 / T;

    /*compute the mixture concentration */
    mixture = 0.0;
    for (id = 0; id < 39; ++id) {
        mixture += sc[id];
    }

    /*compute the Gibbs free energy */
    gibbs(g_RT, tc);

    /*zero out wdot */
    for (id = 0; id < 39; ++id) {
        wdot[id] = 0.0;
    }

    if (T != T_save)
    {
        T_save = T;

        k_f_save[0] = 1e-06 * 3.52e+16*exp(-0.7*tc[0]-8589.8028097867463657*invT);
        k_f_save[1] = 1e-06 * 50600*exp(2.67*tc[0]-3165.5498544111437695*invT);
        k_f_save[2] = 1e-06 * 1.17e+09*exp(1.3*tc[0]-1829.3334808665815672*invT);
        k_f_save[3] = 1e-06 * 7.6*exp(3.84*tc[0]-6430.9278309846276898*invT);
        k_f_save[4] = 1e-12 * 6.2e+16*exp(-0.6*tc[0]);
        k_f_save[5] = 1e-06 * 1.7e+13*exp(-24060.348763787642383*invT);
        k_f_save[6] = 1e-12 * 7.2e+17*exp(-1*tc[0]);
        k_f_save[7] = 1e-12 * 3.8e+22*exp(-2*tc[0]);
        k_f_save[8] = 1e-12 * 6.17e+15*exp(-0.5*tc[0]);
        k_f_save[9] = 1e-06 * 4.65e+12*exp(0.44*tc[0]);
        k_f_save[10] = 1e-12 * 1e+16;
        k_f_save[11] = 1e-06 * 7.08e+13*exp(-150.93983890812566528*invT);
        k_f_save[12] = 1e-06 * 4.28e+13*exp(-709.60091695120945587*invT);
        k_f_save[13] = 1e-06 * 3.1e+13*exp(-865.95536718339383242*invT);
        k_f_save[14] = 1e-06 * 2e+13;
        k_f_save[15] = 1e-06 * 2.89e+13*exp(+250.16410107150028352*invT);
        k_f_save[16] = 1e-06 * 7.4e+13*exp(-0.37*tc[0]);
        k_f_save[17] = 1e-06 * 3.02e+12*exp(-697.57403863847662251*invT);
        k_f_save[18] = 1e-06 * 4.79e+13*exp(-4005.0460893065260279*invT);
        k_f_save[19] = 1e-06 * 1e+13*exp(-1804.0770364098425489*invT);
        k_f_save[20] = 1e-06 * 7.08e+12*exp(-721.62779526394217555*invT);
        k_f_save[21] = 1e-06 * 9.63e+06*exp(2*tc[0]-2008.5389998929581452*invT);
        k_f_save[22] = 1e-06 * 4.4e+06*exp(1.5*tc[0]+372.84329202803286307*invT);
        k_f_save[23] = 1e-06 * 6.03e+13*exp(-11546.079949389681133*invT);
        k_f_save[24] = 1e-06 * 1.86e+17*exp(-1*tc[0]-8554.9248626798198529*invT);
        k_f_save[25] = 1e-06 * 1e+14;
        k_f_save[26] = 1e-06 * 3e+13;
        k_f_save[27] = 1e-06 * 3e+13;
        k_f_save[28] = 1e-06 * 5.02e+13;
        k_f_save[29] = 1e-06 * 3e+12;
        k_f_save[30] = 1e-06 * 6.26e+16*exp(-39208.564314673982153*invT);
        k_f_save[31] = 1e-06 * 1.26e+08*exp(1.62*tc[0]-1089.6603359668820303*invT);
        k_f_save[32] = 1e-06 * 3.5e+13*exp(-1767.9913693049861649*invT);
        k_f_save[33] = 1e-06 * 3.9e+10*exp(0.89*tc[0]-204.46196348311565316*invT);
        k_f_save[34] = 1e-06 * 13000*exp(3*tc[0]-4044.7347877385441279*invT);
        k_f_save[35] = 1e-06 * 1.6e+07*exp(1.83*tc[0]-1399.9638607687043077*invT);
        k_f_save[36] = 1e-06 * 1.9e+09*exp(1.44*tc[0]-4365.8625030218254324*invT);
        k_f_save[37] = 1e-06 * 3.98e+13*exp(-28628.267854630037618*invT);
        k_f_save[38] = 1e-06 * 9.03e+12*exp(-12400.00843826034361*invT);
        k_f_save[39] = 1e-06 * 1.8e+14*exp(-7601.1682516468199537*invT);
        k_f_save[40] = 1e-06 * 1.55e+14*exp(-6783.3203977143575685*invT);
        k_f_save[41] = 1e-06 * 1e+13*exp(-1259.2443523430724781*invT);
        k_f_save[42] = 1e-06 * 8.43e+13;
        k_f_save[43] = 1e-06 * 4.22e+13;
        k_f_save[44] = 1e-06 * 5e+12;
        k_f_save[45] = 1e-06 * 3.3e+11*exp(-4499.3608522931599509*invT);
        k_f_save[46] = 1e-06 * 1.33e+14*exp(-15803.69551543025409*invT);
        k_f_save[47] = 1e-06 * 1e+14*exp(-16104.377537581891374*invT);
        k_f_save[48] = 1e-06 * 3.16e+13*exp(-7396.7062881637039027*invT);
        k_f_save[49] = 1e-06 * 2.11e+14;
        k_f_save[50] = 1e-06 * 1.81e+13;
        k_f_save[51] = 1e-06 * 3e+13;
        k_f_save[52] = 1e-06 * 3.13e+13;
        k_f_save[53] = 1e-06 * 3e+12;
        k_f_save[54] = 1e-06 * 6e+12;
        k_f_save[55] = 1e-06 * 6.02e+12*exp(+899.63062645904562942*invT);
        k_f_save[56] = 1e-06 * 2.5e+13;
        k_f_save[57] = 1e-06 * 1.13e+07*exp(2*tc[0]-1509.4084534145727048*invT);
        k_f_save[58] = 1e-06 * 8e+13;
        k_f_save[59] = 1e-06 * 4e+13;
        k_f_save[60] = 1e-06 * 2.63e+12*exp(-750.49733538115901865*invT);
        k_f_save[61] = 1e-06 * 6.58e+12*exp(-750.49733538115901865*invT);
        k_f_save[62] = 1e-06 * 1e+14;
        k_f_save[63] = 1e-06 * 4e+13;
        k_f_save[64] = 1e-06 * 1.77e+11*exp(0.76*tc[0]+240.54259842131403957*invT);
        k_f_save[65] = 1e-06 * 1.17e+15*exp(-0.75*tc[0]);
        k_f_save[66] = 1e-06 * 48*exp(3.22*tc[0]+1623.6688295521923919*invT);
        k_f_save[67] = 1e-06 * 2e+13;
        k_f_save[68] = 1e-06 * 1.6e+13;
        k_f_save[69] = 1e-06 * 5e+12;
        k_f_save[70] = 1e-06 * 1e+13;
        k_f_save[71] = 1e-06 * 4.28e-13*exp(7.6*tc[0]+1780.0182476177189983*invT);
        k_f_save[72] = 1e-06 * 1e+13*exp(-6795.3472760270897197*invT);
        k_f_save[73] = 1e-06 * 540*exp(3.5*tc[0]-2621.9248903423049342*invT);
        k_f_save[74] = 1e-06 * 1.4*exp(4.3*tc[0]-1395.1531094436111289*invT);
        k_f_save[75] = 1e-06 * 2.2e+07*exp(1.9*tc[0]-565.27837719841579656*invT);
        k_f_save[76] = 1e-06 * 0.55*exp(4*tc[0]-4173.427417851442442*invT);
        k_f_save[77] = 1 * 8.85e+20*exp(-1.23*tc[0]-51440.191424389413442*invT);
        k_f_save[78] = 1e-06 * 3e+13;
        k_f_save[79] = 1e-06 * 3.06e+13;
        k_f_save[80] = 1e-06 * 4.24e+13;
        k_f_save[81] = 1e-06 * 2e+12*exp(-2513.6779533610520048*invT);
        k_f_save[82] = 1 * 1.11e+10*exp(1.037*tc[0]-18502.592426974046248*invT);
        k_f_save[83] = 1e-06 * 4.49e+07*exp(2.12*tc[0]-6723.1860061506931743*invT);
        k_f_save[84] = 1e-06 * 553000*exp(2.31*tc[0]-1491.3681359454735684*invT);
        k_f_save[85] = 1e-06 * 2.25e+06*exp(2.08*tc[0]);
        k_f_save[86] = 1e-06 * 1.21e+06*exp(2.08*tc[0]);
        k_f_save[87] = 1e-06 * 5.01e+14*exp(-32558.143438398656144*invT);
        k_f_save[88] = 1e-06 * 4.22e+13*exp(-28996.899223165284639*invT);
        k_f_save[89] = 1e-06 * 2.23e+12*exp(-8649.9372013504107599*invT);
        k_f_save[90] = 1e-06 * 4e+12*exp(-8558.5329261736405897*invT);
        k_f_save[91] = 1e-06 * 2.6e+17*exp(-48594.68736943006661*invT);
        k_f_save[92] = 1e-06 * 3.5e+16*exp(-35996.109634843189269*invT);
        k_f_save[93] = 1e-06 * 1.21e+13;
        k_f_save[94] = 1 * 6.38e+09*exp(1*tc[0]-18934.36742273447453*invT);
        k_f_save[95] = 1e-06 * 1.7e+29*exp(-5.312*tc[0]-3272.4733315613302693*invT);
        k_f_save[96] = 1e-06 * 7e+14*exp(-0.611*tc[0]-2648.1424786307311479*invT);
        k_f_save[97] = 1e-06 * 5.19e+15*exp(-1.26*tc[0]-1666.9655914780303192*invT);
        k_f_save[98] = 1 * 1.047e+37*exp(-7.189*tc[0]-22312.798055447645311*invT);
        k_f_save[99] = 1e-06 * 4e+14*exp(-5364.1185638119377472*invT);
        k_f_save[100] = 1e-06 * 1.6e+14*exp(-4979.2483934711726761*invT);
        k_f_save[101] = 1e-06 * 4.6e+15*exp(-0.54*tc[0]-22611.074701936737256*invT);
        k_f_save[102] = 1e-06 * 1.9e+07*exp(1.7*tc[0]-502.73357780554715646*invT);
        k_f_save[103] = 1e-06 * 3.37e+07*exp(2*tc[0]-7045.5164092652476029*invT);
        k_f_save[104] = 1e-06 * 1.5e+09*exp(1.43*tc[0]-1353.0540031823884419*invT);
        k_f_save[105] = 1e-06 * 2e+13*exp(-1154.6105110222970325*invT);
        k_f_save[106] = 1e-06 * 1e+13*exp(-1006.674875609025662*invT);
        k_f_save[107] = 1e-06 * 9e+10;
        k_f_save[108] = 1e-06 * 1.5e+14;
        k_f_save[109] = 1e-06 * 2e+12;
        k_f_save[110] = 1e-06 * 9.64e+13;
        k_f_save[111] = 1e-06 * 2.88e+07*exp(1.7*tc[0]-503.93626563682039432*invT);
        k_f_save[112] = 1e-06 * 1.4e+07*exp(1.7*tc[0]-503.93626563682039432*invT);
        k_f_save[113] = 1e-06 * 2e+13;
        k_f_save[114] = 1e-06 * 1.02e+13;
        k_f_save[115] = 1e-06 * 6.02e+11;
        k_f_save[116] = 1e-06 * 4.5e+15*exp(-12628.524158368922144*invT);
        k_f_save[117] = 1e-06 * 2.41e+12;
        k_f_save[118] = 1e-06 * 3e+13;
        k_f_save[119] = 1e-06 * 1.75e+14*exp(-1407.1799877563439622*invT);
        k_f_save[120] = 1e-06 * 2.4e+13;
        k_f_save[121] = 1e-06 * 5e+12;
        k_f_save[122] = 1e-06 * 5e+13*exp(-12640.551036681656115*invT);
        k_f_save[123] = 1e-06 * 1e+14*exp(-9621.7341298525097955*invT);
        k_f_save[124] = 1e-06 * 1.02e+13;
        k_f_save[125] = 1e-06 * 1.44e+06*exp(2*tc[0]+422.15349311023737755*invT);
        k_f_save[126] = 1e-06 * 6.3e+06*exp(2*tc[0]-757.7134623687986732*invT);
        k_f_save[127] = 1e-06 * 1.64e+07*exp(2*tc[0]-2273.135354939737681*invT);
        k_f_save[128] = 1e-06 * 3.83e+07*exp(2*tc[0]-2946.6556369527488641*invT);
        k_f_save[129] = 1e-06 * 1e+13*exp(-2357.3235031288677419*invT);
        k_f_save[130] = 1e-06 * 6.2e+12*exp(-9754.0348234592293011*invT);
        k_f_save[131] = 1e-06 * 2e+13*exp(-22611.074701936737256*invT);
        k_f_save[132] = 1e-06 * 2e+07*exp(1.8*tc[0]-503.21666580471963925*invT);
        k_f_save[133] = 1e-06 * 2.56e+09*exp(1.1*tc[0]-6865.82780223969894*invT);
        k_f_save[134] = 1e-06 * 7.3e+12*exp(-1132.2374980606193731*invT);
        k_f_save[135] = 1e-06 * 3e+13;
        k_f_save[136] = 1e-06 * 2.5e+12;
        k_f_save[137] = 1e-06 * 5.3e+06*exp(2*tc[0]-1006.4333316094392785*invT);
        k_f_save[138] = 1e-06 * 3e+10*exp(-1443.2606226945424623*invT);
        k_f_save[139] = 1e-06 * 4e+13;
        k_f_save[140] = 1e-06 * 1.8e+13;
        k_f_save[141] = 1e-06 * 4.99e+15*exp(-1.4*tc[0]-11286.173573668202152*invT);
        k_f_save[142] = 1e-06 * 3e+12*exp(-0.32*tc[0]+65.911318887102183339*invT);
        k_f_save[143] = 1e-06 * 6e+08;
        k_f_save[144] = 1e-06 * 6e+12;
        k_f_save[145] = 1e-06 * 2.5e+13;
        k_f_save[146] = 1e-06 * 8e+11;
        k_f_save[147] = 1e-06 * 4e+14*exp(-21047.540263948205393*invT);
        k_f_save[148] = 1e-06 * 3.5e+07*exp(1.65*tc[0]+489.50401166154108523*invT);
        k_f_save[149] = 1e-06 * 3.1e+06*exp(2*tc[0]+150.09946707623177531*invT);
        k_f_save[150] = 1e-06 * 1.2e+08*exp(1.65*tc[0]-164.77326505109741106*invT);
        k_f_save[151] = 1e-06 * 170000*exp(2.5*tc[0]-1254.4336010179792993*invT);
        k_f_save[152] = 1e-06 * 2e+14;
        k_f_save[153] = 1e-06 * 2.66e+12;
        k_f_save[154] = 1e-06 * 3e+12;
        k_f_save[155] = 1e-06 * 2.5e+13;
        k_f_save[156] = 1e-06 * 1.6e+22*exp(-2.39*tc[0]-5628.714918858717283*invT);
        k_f_save[157] = 1e-06 * 1.5e+24*exp(-2.83*tc[0]-9369.1646531184633204*invT);
        k_f_save[158] = 1 * 1.1e+17*exp(-42467.928852091099543*invT);
        k_f_save[159] = 1e-06 * 4e+13*exp(-23902.791625724184996*invT);
        k_f_save[160] = 1e-06 * 4e+13*exp(-25629.891608765879937*invT);
        k_f_save[161] = 1e-06 * 1.3e+06*exp(2.4*tc[0]-2249.9219701461661316*invT);
        k_f_save[162] = 1e-06 * 1.33e+06*exp(2.54*tc[0]-3402.4843893386382661*invT);
        k_f_save[163] = 1e-06 * 47600*exp(2.71*tc[0]-1060.4335120169437232*invT);
        k_f_save[164] = 1e-06 * 190000*exp(2.68*tc[0]-1871.1860109615599868*invT);
        k_f_save[165] = 1e-06 * 1400*exp(2.66*tc[0]-265.32098704553845891*invT);
        k_f_save[166] = 1e-06 * 27000*exp(2.39*tc[0]-197.84466432778359035*invT);
        k_f_save[167] = 1e-06 * 9640*exp(2.6*tc[0]-7003.4173030040255981*invT);
        k_f_save[168] = 1e-06 * 47600*exp(2.55*tc[0]-8298.7473224519562791*invT);
        k_f_save[169] = 1e-06 * 0.0084*exp(4.2*tc[0]-4365.8625030218254324*invT);
        k_f_save[170] = 1e-06 * 1.33e+13*exp(-785.3752824880841672*invT);
        k_f_save[171] = 1e-06 * 1.3e+11;
        k_f_save[172] = 1 * 1.23e+13*exp(-0.1*tc[0]-15202.341535460298473*invT);
        k_f_save[173] = 1e-06 * 1.33e+13*exp(-1640.5064591900184041*invT);
        k_f_save[174] = 1e-06 * 9e+10;

        Kc_save[0] = exp((g_RT[2] + g_RT[3]) - (g_RT[4] + g_RT[5]));
        Kc_save[1] = exp((g_RT[6] + g_RT[5]) - (g_RT[4] + g_RT[2]));
        Kc_save[2] = exp((g_RT[6] + g_RT[4]) - (g_RT[7] + g_RT[2]));
        Kc_save[3] = exp((g_RT[7] + g_RT[5]) - (2 * g_RT[4]));
        Kc_save[4] = 1.0 / (refC) * exp((g_RT[2] + g_RT[5]) - (g_RT[4]));
        Kc_save[5] = exp((g_RT[6] + g_RT[3]) - (2 * g_RT[4]));
        Kc_save[6] = 1.0 / (refC) * exp((2 * g_RT[2]) - (g_RT[6]));
        Kc_save[7] = 1.0 / (refC) * exp((g_RT[2] + g_RT[4]) - (g_RT[7]));
        Kc_save[8] = 1.0 / (refC) * exp((2 * g_RT[5]) - (g_RT[3]));
        Kc_save[9] = 1.0 / (refC) * exp((g_RT[2] + g_RT[3]) - (g_RT[8]));
        Kc_save[10] = 1.0 / (refC) * exp((g_RT[5] + g_RT[4]) - (g_RT[8]));
        Kc_save[11] = exp((g_RT[8] + g_RT[2]) - (2 * g_RT[4]));
        Kc_save[12] = exp((g_RT[8] + g_RT[2]) - (g_RT[6] + g_RT[3]));
        Kc_save[13] = exp((g_RT[8] + g_RT[2]) - (g_RT[7] + g_RT[5]));
        Kc_save[14] = exp((g_RT[8] + g_RT[5]) - (g_RT[4] + g_RT[3]));
        Kc_save[15] = exp((g_RT[8] + g_RT[4]) - (g_RT[7] + g_RT[3]));
        Kc_save[16] = 1.0 / (refC) * exp((2 * g_RT[4]) - (g_RT[9]));
        Kc_save[17] = exp((2 * g_RT[8]) - (g_RT[9] + g_RT[3]));
        Kc_save[18] = exp((g_RT[9] + g_RT[2]) - (g_RT[8] + g_RT[6]));
        Kc_save[19] = exp((g_RT[9] + g_RT[2]) - (g_RT[7] + g_RT[4]));
        Kc_save[20] = exp((g_RT[9] + g_RT[4]) - (g_RT[7] + g_RT[8]));
        Kc_save[21] = exp((g_RT[9] + g_RT[5]) - (g_RT[8] + g_RT[4]));
        Kc_save[22] = exp((g_RT[10] + g_RT[4]) - (g_RT[11] + g_RT[2]));
        Kc_save[23] = exp((g_RT[10] + g_RT[8]) - (g_RT[11] + g_RT[4]));
        Kc_save[24] = refC * exp((g_RT[12]) - (g_RT[10] + g_RT[2]));
        Kc_save[25] = exp((g_RT[12] + g_RT[2]) - (g_RT[10] + g_RT[6]));
        Kc_save[26] = exp((g_RT[12] + g_RT[5]) - (g_RT[10] + g_RT[4]));
        Kc_save[27] = exp((g_RT[12] + g_RT[5]) - (g_RT[11] + g_RT[2]));
        Kc_save[28] = exp((g_RT[12] + g_RT[4]) - (g_RT[10] + g_RT[7]));
        Kc_save[29] = exp((g_RT[12] + g_RT[3]) - (g_RT[10] + g_RT[8]));
        Kc_save[30] = refC * exp((g_RT[13]) - (g_RT[12] + g_RT[2]));
        Kc_save[31] = exp((g_RT[13] + g_RT[2]) - (g_RT[12] + g_RT[6]));
        Kc_save[32] = exp((g_RT[13] + g_RT[5]) - (g_RT[12] + g_RT[4]));
        Kc_save[33] = exp((g_RT[13] + g_RT[4]) - (g_RT[12] + g_RT[7]));
        Kc_save[34] = exp((g_RT[14] + g_RT[2]) - (g_RT[6] + g_RT[15]));
        Kc_save[35] = exp((g_RT[14] + g_RT[4]) - (g_RT[7] + g_RT[15]));
        Kc_save[36] = exp((g_RT[14] + g_RT[5]) - (g_RT[15] + g_RT[4]));
        Kc_save[37] = exp((g_RT[14] + g_RT[3]) - (g_RT[15] + g_RT[8]));
        Kc_save[38] = exp((g_RT[14] + g_RT[8]) - (g_RT[15] + g_RT[9]));
        Kc_save[39] = exp((g_RT[15] + g_RT[2]) - (g_RT[16] + g_RT[6]));
        Kc_save[40] = exp((g_RT[15] + g_RT[2]) - (g_RT[17] + g_RT[6]));
        Kc_save[41] = exp((g_RT[15] + g_RT[4]) - (g_RT[17] + g_RT[7]));
        Kc_save[42] = exp((g_RT[15] + g_RT[5]) - (g_RT[13] + g_RT[2]));
        Kc_save[43] = exp((g_RT[15] + g_RT[16]) - (g_RT[18] + g_RT[2]));
        Kc_save[44] = exp((g_RT[15] + g_RT[8]) - (g_RT[19] + g_RT[4]));
        Kc_save[45] = exp((g_RT[15] + g_RT[3]) - (g_RT[13] + g_RT[4]));
        Kc_save[46] = exp((g_RT[15] + g_RT[3]) - (g_RT[19] + g_RT[5]));
        Kc_save[47] = exp((2 * g_RT[15]) - (g_RT[18] + g_RT[6]));
        Kc_save[48] = exp((2 * g_RT[15]) - (g_RT[20] + g_RT[2]));
        Kc_save[49] = 1.0 / (refC) * exp((g_RT[15] + g_RT[2]) - (g_RT[14]));
        Kc_save[50] = 1.0 / (refC) * exp((2 * g_RT[15]) - (g_RT[21]));
        Kc_save[51] = exp((g_RT[17] + g_RT[4]) - (g_RT[13] + g_RT[2]));
        Kc_save[52] = refC * exp((g_RT[17] + g_RT[3]) - (g_RT[10] + g_RT[4] + g_RT[2]));
        Kc_save[53] = exp((g_RT[17] + g_RT[11]) - (g_RT[10] + g_RT[13]));
        Kc_save[54] = exp((g_RT[17]) - (g_RT[16]));
        Kc_save[55] = exp((g_RT[16] + g_RT[2]) - (g_RT[22] + g_RT[6]));
        Kc_save[56] = exp((g_RT[16] + g_RT[4]) - (g_RT[13] + g_RT[2]));
        Kc_save[57] = exp((g_RT[16] + g_RT[4]) - (g_RT[22] + g_RT[7]));
        Kc_save[58] = refC * exp((g_RT[16] + g_RT[5]) - (g_RT[10] + 2 * g_RT[2]));
        Kc_save[59] = exp((g_RT[16] + g_RT[5]) - (g_RT[10] + g_RT[6]));
        Kc_save[60] = exp((g_RT[16] + g_RT[3]) - (g_RT[11] + g_RT[6]));
        Kc_save[61] = refC * exp((g_RT[16] + g_RT[3]) - (g_RT[10] + g_RT[4] + g_RT[2]));
        Kc_save[62] = refC * exp((2 * g_RT[16]) - (g_RT[23] + 2 * g_RT[2]));
        Kc_save[63] = exp((g_RT[22] + g_RT[5]) - (g_RT[10] + g_RT[2]));
        Kc_save[64] = exp((g_RT[22] + g_RT[3]) - (g_RT[12] + g_RT[5]));
        Kc_save[65] = exp((g_RT[22] + g_RT[7]) - (g_RT[13] + g_RT[2]));
        Kc_save[66] = exp((g_RT[22] + g_RT[11]) - (g_RT[12] + g_RT[10]));
        Kc_save[67] = exp((g_RT[19] + g_RT[2]) - (g_RT[13] + g_RT[6]));
        Kc_save[68] = exp((g_RT[19] + g_RT[2]) - (g_RT[17] + g_RT[7]));
        Kc_save[69] = exp((g_RT[19] + g_RT[4]) - (g_RT[13] + g_RT[7]));
        Kc_save[70] = exp((g_RT[19] + g_RT[5]) - (g_RT[4] + g_RT[13]));
        Kc_save[71] = exp((g_RT[19] + g_RT[3]) - (g_RT[13] + g_RT[8]));
        Kc_save[72] = refC * exp((g_RT[19]) - (g_RT[13] + g_RT[2]));
        Kc_save[73] = exp((g_RT[21] + g_RT[2]) - (g_RT[20] + g_RT[6]));
        Kc_save[74] = exp((g_RT[21] + g_RT[5]) - (g_RT[20] + g_RT[4]));
        Kc_save[75] = exp((g_RT[21] + g_RT[4]) - (g_RT[20] + g_RT[7]));
        Kc_save[76] = exp((g_RT[21] + g_RT[15]) - (g_RT[20] + g_RT[14]));
        Kc_save[77] = refC * exp((g_RT[21]) - (g_RT[20] + g_RT[2]));
        Kc_save[78] = exp((g_RT[20] + g_RT[2]) - (g_RT[18] + g_RT[6]));
        Kc_save[79] = exp((g_RT[20] + g_RT[5]) - (g_RT[18] + g_RT[4]));
        Kc_save[80] = exp((g_RT[20] + g_RT[5]) - (g_RT[15] + g_RT[13]));
        Kc_save[81] = exp((g_RT[20] + g_RT[3]) - (g_RT[18] + g_RT[8]));
        Kc_save[82] = refC * exp((g_RT[20]) - (g_RT[18] + g_RT[2]));
        Kc_save[83] = exp((g_RT[18] + g_RT[2]) - (g_RT[24] + g_RT[6]));
        Kc_save[84] = exp((g_RT[18] + g_RT[4]) - (g_RT[24] + g_RT[7]));
        Kc_save[85] = exp((g_RT[18] + g_RT[5]) - (g_RT[15] + g_RT[12]));
        Kc_save[86] = exp((g_RT[18] + g_RT[5]) - (g_RT[25] + g_RT[2]));
        Kc_save[87] = exp((2 * g_RT[18]) - (g_RT[24] + g_RT[20]));
        Kc_save[88] = exp((g_RT[18] + g_RT[3]) - (g_RT[24] + g_RT[8]));
        Kc_save[89] = exp((g_RT[18] + g_RT[8]) - (g_RT[26] + g_RT[4]));
        Kc_save[90] = refC * exp((g_RT[26] + g_RT[8]) - (g_RT[15] + g_RT[10] + g_RT[9]));
        Kc_save[91] = refC * exp((g_RT[18]) - (g_RT[24] + g_RT[2]));
        Kc_save[92] = refC * exp((g_RT[18]) - (g_RT[23] + g_RT[6]));
        Kc_save[93] = exp((g_RT[24] + g_RT[2]) - (g_RT[23] + g_RT[6]));
        Kc_save[94] = refC * exp((g_RT[24]) - (g_RT[23] + g_RT[2]));
        Kc_save[95] = exp((g_RT[24] + g_RT[3]) - (g_RT[13] + g_RT[12]));
        Kc_save[96] = exp((g_RT[24] + g_RT[3]) - (g_RT[25] + g_RT[5]));
        Kc_save[97] = exp((g_RT[24] + g_RT[3]) - (g_RT[23] + g_RT[8]));
        Kc_save[98] = refC * exp((g_RT[25]) - (g_RT[27] + g_RT[2]));
        Kc_save[99] = exp((g_RT[23] + g_RT[5]) - (g_RT[28] + g_RT[2]));
        Kc_save[100] = exp((g_RT[23] + g_RT[5]) - (g_RT[16] + g_RT[10]));
        Kc_save[101] = exp((g_RT[23] + g_RT[3]) - (g_RT[13] + g_RT[10]));
        Kc_save[102] = exp((g_RT[23] + g_RT[4]) - (g_RT[27] + g_RT[2]));
        Kc_save[103] = exp((g_RT[23] + g_RT[4]) - (g_RT[29] + g_RT[7]));
        Kc_save[104] = exp((g_RT[27] + g_RT[2]) - (g_RT[15] + g_RT[10]));
        Kc_save[105] = exp((g_RT[27] + g_RT[5]) - (g_RT[16] + g_RT[11]));
        Kc_save[106] = exp((g_RT[27] + g_RT[5]) - (g_RT[28] + g_RT[4]));
        Kc_save[107] = exp((g_RT[27] + g_RT[15]) - (g_RT[20] + g_RT[10]));
        Kc_save[108] = exp((g_RT[28] + g_RT[2]) - (g_RT[17] + g_RT[10]));
        Kc_save[109] = refC * exp((g_RT[28] + g_RT[4]) - (g_RT[12] + g_RT[10] + g_RT[2]));
        Kc_save[110] = refC * exp((g_RT[28] + g_RT[5]) - (2 * g_RT[10] + g_RT[2]));
        Kc_save[111] = refC * exp((g_RT[28] + g_RT[3]) - (2 * g_RT[10] + g_RT[4]));
        Kc_save[112] = refC * exp((g_RT[28] + g_RT[3]) - (g_RT[11] + g_RT[10] + g_RT[2]));
        Kc_save[113] = exp((g_RT[29] + g_RT[4]) - (g_RT[28] + g_RT[2]));
        Kc_save[114] = exp((g_RT[29] + g_RT[5]) - (g_RT[10] + g_RT[22]));
        Kc_save[115] = exp((g_RT[29] + g_RT[3]) - (g_RT[28] + g_RT[5]));
        Kc_save[116] = exp((g_RT[29] + g_RT[3]) - (g_RT[22] + g_RT[11]));
        Kc_save[117] = exp((g_RT[29] + g_RT[3]) - (g_RT[12] + g_RT[10]));
        Kc_save[118] = exp((g_RT[30] + g_RT[2]) - (g_RT[13] + g_RT[6]));
        Kc_save[119] = exp((g_RT[30] + g_RT[2]) - (g_RT[15] + g_RT[4]));
        Kc_save[120] = exp((g_RT[30] + g_RT[4]) - (g_RT[13] + g_RT[7]));
        Kc_save[121] = exp((g_RT[30] + g_RT[3]) - (g_RT[13] + g_RT[8]));
        Kc_save[122] = refC * exp((g_RT[30]) - (g_RT[13] + g_RT[2]));
        Kc_save[123] = exp((g_RT[19]) - (g_RT[30]));
        Kc_save[124] = exp((g_RT[27] + g_RT[4]) - (g_RT[30] + g_RT[10]));
        Kc_save[125] = exp((g_RT[31] + g_RT[4]) - (g_RT[30] + g_RT[7]));
        Kc_save[126] = exp((g_RT[31] + g_RT[4]) - (g_RT[19] + g_RT[7]));
        Kc_save[127] = exp((g_RT[31] + g_RT[2]) - (g_RT[30] + g_RT[6]));
        Kc_save[128] = exp((g_RT[31] + g_RT[2]) - (g_RT[19] + g_RT[6]));
        Kc_save[129] = exp((g_RT[31] + g_RT[5]) - (g_RT[30] + g_RT[4]));
        Kc_save[130] = exp((g_RT[31] + g_RT[8]) - (g_RT[30] + g_RT[9]));
        Kc_save[131] = exp((g_RT[31] + g_RT[3]) - (g_RT[30] + g_RT[8]));
        Kc_save[132] = exp((g_RT[32] + g_RT[5]) - (g_RT[18] + g_RT[10]));
        Kc_save[133] = exp((g_RT[15] + g_RT[23]) - (g_RT[32] + g_RT[2]));
        Kc_save[134] = exp((g_RT[32] + g_RT[5]) - (g_RT[28] + g_RT[15]));
        Kc_save[135] = 1.0 / (refC) * exp((g_RT[33] + g_RT[2]) - (g_RT[32]));
        Kc_save[136] = exp((g_RT[33] + g_RT[8]) - (g_RT[32] + g_RT[3]));
        Kc_save[137] = exp((g_RT[32] + g_RT[4]) - (g_RT[33] + g_RT[7]));
        Kc_save[138] = exp((g_RT[33] + g_RT[3]) - (g_RT[27] + g_RT[12]));
        Kc_save[139] = 1.0 / (refC) * exp((g_RT[32] + g_RT[2]) - (g_RT[34]));
        Kc_save[140] = exp((g_RT[34] + g_RT[2]) - (g_RT[32] + g_RT[6]));
        Kc_save[141] = exp((g_RT[34] + g_RT[3]) - (g_RT[32] + g_RT[8]));
        Kc_save[142] = exp((g_RT[34] + g_RT[15]) - (g_RT[32] + g_RT[14]));
        Kc_save[143] = 1.0 / (refC) * exp((g_RT[23] + g_RT[15]) - (g_RT[34]));
        Kc_save[144] = exp((g_RT[34] + g_RT[4]) - (g_RT[32] + g_RT[7]));
        Kc_save[145] = exp((g_RT[33] + g_RT[12]) - (g_RT[32] + g_RT[10]));
        Kc_save[146] = refC * exp((g_RT[33] + g_RT[8]) - (g_RT[4] + g_RT[10] + g_RT[24]));
        Kc_save[147] = refC * exp((g_RT[32] + g_RT[3]) - (g_RT[15] + g_RT[12] + g_RT[10]));
        Kc_save[148] = exp((g_RT[35] + g_RT[5]) - (g_RT[20] + g_RT[12]));
        Kc_save[149] = exp((g_RT[35] + g_RT[4]) - (g_RT[34] + g_RT[7]));
        Kc_save[150] = refC * exp((g_RT[35] + g_RT[5]) - (g_RT[27] + g_RT[15] + g_RT[2]));
        Kc_save[151] = exp((g_RT[35] + g_RT[2]) - (g_RT[34] + g_RT[6]));
        Kc_save[152] = 1.0 / (refC) * exp((g_RT[34] + g_RT[2]) - (g_RT[35]));
        Kc_save[153] = exp((g_RT[34] + g_RT[8]) - (g_RT[35] + g_RT[3]));
        Kc_save[154] = refC * exp((g_RT[34] + g_RT[8]) - (g_RT[4] + g_RT[24] + g_RT[13]));
        Kc_save[155] = 1.0 / (refC) * exp((g_RT[24] + g_RT[15]) - (g_RT[35]));
        Kc_save[156] = exp((g_RT[35] + g_RT[2]) - (g_RT[18] + g_RT[15]));
        Kc_save[157] = exp((g_RT[15] + g_RT[24]) - (g_RT[34] + g_RT[2]));
        Kc_save[158] = refC * exp((g_RT[36]) - (g_RT[15] + g_RT[20]));
        Kc_save[159] = exp((g_RT[36] + g_RT[3]) - (g_RT[37] + g_RT[8]));
        Kc_save[160] = exp((g_RT[36] + g_RT[3]) - (g_RT[38] + g_RT[8]));
        Kc_save[161] = exp((g_RT[36] + g_RT[2]) - (g_RT[37] + g_RT[6]));
        Kc_save[162] = exp((g_RT[36] + g_RT[2]) - (g_RT[38] + g_RT[6]));
        Kc_save[163] = exp((g_RT[36] + g_RT[5]) - (g_RT[37] + g_RT[4]));
        Kc_save[164] = exp((g_RT[36] + g_RT[5]) - (g_RT[38] + g_RT[4]));
        Kc_save[165] = exp((g_RT[36] + g_RT[4]) - (g_RT[38] + g_RT[7]));
        Kc_save[166] = exp((g_RT[36] + g_RT[4]) - (g_RT[37] + g_RT[7]));
        Kc_save[167] = exp((g_RT[36] + g_RT[8]) - (g_RT[37] + g_RT[9]));
        Kc_save[168] = exp((g_RT[36] + g_RT[8]) - (g_RT[38] + g_RT[9]));
        Kc_save[169] = exp((g_RT[37] + g_RT[36]) - (g_RT[38] + g_RT[36]));
        Kc_save[170] = 1.0 / (refC) * exp((g_RT[35] + g_RT[2]) - (g_RT[37]));
        Kc_save[171] = exp((g_RT[37] + g_RT[3]) - (g_RT[35] + g_RT[8]));
        Kc_save[172] = refC * exp((g_RT[38]) - (g_RT[15] + g_RT[18]));
        Kc_save[173] = 1.0 / (refC) * exp((g_RT[2] + g_RT[35]) - (g_RT[38]));
        Kc_save[174] = exp((g_RT[38] + g_RT[3]) - (g_RT[35] + g_RT[8]));
    }

    /*reaction 1: H + O2 <=> OH + O */
    phi_f = sc[2]*sc[3];
    k_f = k_f_save[0];
    q_f = phi_f * k_f;
    phi_r = sc[4]*sc[5];
    Kc = Kc_save[0];
    k_r = k_f / Kc;
    q_r = phi_r * k_r;
    qdot = q_f - q_r;
    wdot[2] -= 1 * qdot;
    wdot[3] -= 1 * qdot;
    wdot[4] += 1 * qdot;
    wdot[5] += 1 * qdot;

    /*reaction 2: H2 + O <=> OH + H */
    phi_f = sc[6]*sc[5];
    k_f = k_f_save[1];
    q_f = phi_f * k_f;
    phi_r = sc[4]*sc[2];
    Kc = Kc_save[1];
    k_r = k_f / Kc;
    q_r = phi_r * k_r;
    qdot = q_f - q_r;
    wdot[6] -= 1 * qdot;
    wdot[5] -= 1 * qdot;
    wdot[4] += 1 * qdot;
    wdot[2] += 1 * qdot;

    /*reaction 3: H2 + OH <=> H2O + H */
    phi_f = sc[6]*sc[4];
    k_f = k_f_save[2];
    q_f = phi_f * k_f;
    phi_r = sc[7]*sc[2];
    Kc = Kc_save[2];
    k_r = k_f / Kc;
    q_r = phi_r * k_r;
    qdot = q_f - q_r;
    wdot[6] -= 1 * qdot;
    wdot[4] -= 1 * qdot;
    wdot[7] += 1 * qdot;
    wdot[2] += 1 * qdot;

    /*reaction 4: H2O + O <=> 2 OH */
    phi_f = sc[7]*sc[5];
    k_f = k_f_save[3];
    q_f = phi_f * k_f;
    phi_r = sc[4]*sc[4];
    Kc = Kc_save[3];
    k_r = k_f / Kc;
    q_r = phi_r * k_r;
    qdot = q_f - q_r;
    wdot[7] -= 1 * qdot;
    wdot[5] -= 1 * qdot;
    wdot[4] += 2 * qdot;

    /*reaction 5: H + O + M <=> OH + M */
    phi_f = sc[2]*sc[5];
    alpha = mixture + 1.5*sc[6] + 11*sc[7] + 0.9*sc[10] + 2.8*sc[11];
    k_f = alpha * k_f_save[4];
    q_f = phi_f * k_f;
    phi_r = sc[4];
    Kc = Kc_save[4];
    k_r = k_f / Kc;
    q_r = phi_r * k_r;
    qdot = q_f - q_r;
    wdot[2] -= 1 * qdot;
    wdot[5] -= 1 * qdot;
    wdot[4] += 1 * qdot;

    /*reaction 6: H2 + O2 <=> 2 OH */
    phi_f = sc[6]*sc[3];
    k_f = k_f_save[5];
    q_f = phi_f * k_f;
    phi_r = sc[4]*sc[4];
    Kc = Kc_save[5];
    k_r = k_f / Kc;
    q_r = phi_r * k_r;
    qdot = q_f - q_r;
    wdot[6] -= 1 * qdot;
    wdot[3] -= 1 * qdot;
    wdot[4] += 2 * qdot;

    /*reaction 7: 2 H + M <=> H2 + M */
    phi_f = sc[2]*sc[2];
    alpha = mixture + 1.5*sc[6] + 15.3*sc[7] + 0.9*sc[10] + 2.8*sc[11];
    k_f = alpha * k_f_save[6];
    q_f = phi_f * k_f;
    phi_r = sc[6];
    Kc = Kc_save[6];
    k_r = k_f / Kc;
    q_r = phi_r * k_r;
    qdot = q_f - q_r;
    wdot[2] -= 2 * qdot;
    wdot[6] += 1 * qdot;

    /*reaction 8: H + OH + M <=> H2O + M */
    phi_f = sc[2]*sc[4];
    alpha = mixture + 1.5*sc[6] + 11*sc[7] + 0.9*sc[10] + 2.8*sc[11];
    k_f = alpha * k_f_save[7];
    q_f = phi_f * k_f;
    phi_r = sc[7];
    Kc = Kc_save[7];
    k_r = k_f / Kc;
    q_r = phi_r * k_r;
    qdot = q_f - q_r;
    wdot[2] -= 1 * qdot;
    wdot[4] -= 1 * qdot;
    wdot[7] += 1 * qdot;

    /*reaction 9: 2 O + M <=> O2 + M */
    phi_f = sc[5]*sc[5];
    alpha = mixture + 1.5*sc[6] + 11*sc[7] + 0.9*sc[10] + 2.8*sc[11];
    k_f = alpha * k_f_save[8];
    q_f = phi_f * k_f;
    phi_r = sc[3];
    Kc = Kc_save[8];
    k_r = k_f / Kc;
    q_r = phi_r * k_r;
    qdot = q_f - q_r;
    wdot[5] -= 2 * qdot;
    wdot[3] += 1 * qdot;

    /*reaction 10: H + O2 (+M) <=> HO2 (+M) */
    phi_f = sc[2]*sc[3];
    alpha = mixture + -0.5*sc[1] + -0.7*sc[3] + 6*sc[7] + -0.25*sc[10] + 0.5*sc[11] + 0.5*sc[21];
    k_f = k_f_save[9];
    redP = 1e-12 * alpha / k_f * 2.6e+19*exp(-1.2*tc[0]);
    F = redP / (1 + redP);
    logPred = log10(redP);
    logFcent = log10((1*exp(T/-345))+ (0*exp(T/-1))+ (exp(-345/T)));
    troe_c = -.4 - .67 * logFcent;
    troe_n = .75 - 1.27 * logFcent;
    troe = (troe_c + logPred) / (troe_n - .14*(troe_c + logPred));
    F_troe = pow(10, logFcent / (1.0 + troe*troe));
    F *= F_troe;
    k_f *= F;
    q_f = phi_f * k_f;
    phi_r = sc[8];
    Kc = Kc_save[9];
    k_r = k_f / Kc;
    q_r = phi_r * k_r;
    qdot = q_f - q_r;
    wdot[2] -= 1 * qdot;
    wdot[3] -= 1 * qdot;
    wdot[8] += 1 * qdot;

    /*reaction 11: O + OH + M <=> HO2 + M */
    phi_f = sc[5]*sc[4];
    alpha = mixture;
    k_f = alpha * k_f_save[10];
    q_f = phi_f * k_f;
    phi_r = sc[8];
    Kc = Kc_save[10];
    k_r = k_f / Kc;
    q_r = phi_r * k_r;
    qdot = q_f - q_r;
    wdot[5] -= 1 * qdot;
    wdot[4] -= 1 * qdot;
    wdot[8] += 1 * qdot;

    /*reaction 12: HO2 + H <=> 2 OH */
    phi_f = sc[8]*sc[2];
    k_f = k_f_save[11];
    q_f = phi_f * k_f;
    phi_r = sc[4]*sc[4];
    Kc = Kc_save[11];
    k_r = k_f / Kc;
    q_r = phi_r * k_r;
    qdot = q_f - q_r;
    wdot[8] -= 1 * qdot;
    wdot[2] -= 1 * qdot;
    wdot[4] += 2 * qdot;

    /*reaction 13: HO2 + H <=> H2 + O2 */
    phi_f = sc[8]*sc[2];
    k_f = k_f_save[12];
    q_f = phi_f * k_f;
    phi_r = sc[6]*sc[3];
    Kc = Kc_save[12];
    k_r = k_f / Kc;
    q_r = phi_r * k_r;
    qdot = q_f - q_r;
    wdot[8] -= 1 * qdot;
    wdot[2] -= 1 * qdot;
    wdot[6] += 1 * qdot;
    wdot[3] += 1 * qdot;

    /*reaction 14: HO2 + H <=> H2O + O */
    phi_f = sc[8]*sc[2];
    k_f = k_f_save[13];
    q_f = phi_f * k_f;
    phi_r = sc[7]*sc[5];
    Kc = Kc_save[13];
    k_r = k_f / Kc;
    q_r = phi_r * k_r;
    qdot = q_f - q_r;
    wdot[8] -= 1 * qdot;
    wdot[2] -= 1 * qdot;
    wdot[7] += 1 * qdot;
    wdot[5] += 1 * qdot;

    /*reaction 15: HO2 + O <=> OH + O2 */
    phi_f = sc[8]*sc[5];
    k_f = k_f_save[14];
    q_f = phi_f * k_f;
    phi_r = sc[4]*sc[3];
    Kc = Kc_save[14];
    k_r = k_f / Kc;
    q_r = phi_r * k_r;
    qdot = q_f - q_r;
    wdot[8] -= 1 * qdot;
    wdot[5] -= 1 * qdot;
    wdot[4] += 1 * qdot;
    wdot[3] += 1 * qdot;

    /*reaction 16: HO2 + OH <=> H2O + O2 */
    phi_f = sc[8]*sc[4];
    k_f = k_f_save[15];
    q_f = phi_f * k_f;
    phi_r = sc[7]*sc[3];
    Kc = Kc_save[15];
    k_r = k_f / Kc;
    q_r = phi_r * k_r;
    qdot = q_f - q_r;
    wdot[8] -= 1 * qdot;
    wdot[4] -= 1 * qdot;
    wdot[7] += 1 * qdot;
    wdot[3] += 1 * qdot;

    /*reaction 17: 2 OH (+M) <=> H2O2 (+M) */
    phi_f = sc[4]*sc[4];
    alpha = mixture + -0.3*sc[1] + sc[6] + 5*sc[7] + 0.5*sc[10] + sc[11] + sc[14] + 2*sc[21];
    k_f = k_f_save[16];
    redP = 1e-12 * alpha / k_f * 1.34e+17*exp(-0.584*tc[0]+1154.6105110222970325*invT);
    F = redP / (1 + redP);
    logPred = log10(redP);
    logFcent = log10((0.265*exp(T/-94))+ (0.735*exp(T/-1756))+ (exp(-5182/T)));
    troe_c = -.4 - .67 * logFcent;
    troe_n = .75 - 1.27 * logFcent;
    troe = (troe_c + logPred) / (troe_n - .14*(troe_c + logPred));
    F_troe = pow(10, logFcent / (1.0 + troe*troe));
    F *= F_troe;
    k_f *= F;
    q_f = phi_f * k_f;
    phi_r = sc[9];
    Kc = Kc_save[16];
    k_r = k_f / Kc;
    q_r = phi_r * k_r;
    qdot = q_f - q_r;
    wdot[4] -= 2 * qdot;
    wdot[9] += 1 * qdot;

    /*reaction 18: 2 HO2 <=> H2O2 + O2 */
    phi_f = sc[8]*sc[8];
    k_f = k_f_save[17];
    q_f = phi_f * k_f;
    phi_r = sc[9]*sc[3];
    Kc = Kc_save[17];
    k_r = k_f / Kc;
    q_r = phi_r * k_r;
    qdot = q_f - q_r;
    wdot[8] -= 2 * qdot;
    wdot[9] += 1 * qdot;
    wdot[3] += 1 * qdot;

    /*reaction 19: H2O2 + H <=> HO2 + H2 */
    phi_f = sc[9]*sc[2];
    k_f = k_f_save[18];
    q_f = phi_f * k_f;
    phi_r = sc[8]*sc[6];
    Kc = Kc_save[18];
    k_r = k_f / Kc;
    q_r = phi_r * k_r;
    qdot = q_f - q_r;
    wdot[9] -= 1 * qdot;
    wdot[2] -= 1 * qdot;
    wdot[8] += 1 * qdot;
    wdot[6] += 1 * qdot;

    /*reaction 20: H2O2 + H <=> H2O + OH */
    phi_f = sc[9]*sc[2];
    k_f = k_f_save[19];
    q_f = phi_f * k_f;
    phi_r = sc[7]*sc[4];
    Kc = Kc_save[19];
    k_r = k_f / Kc;
    q_r = phi_r * k_r;
    qdot = q_f - q_r;
    wdot[9] -= 1 * qdot;
    wdot[2] -= 1 * qdot;
    wdot[7] += 1 * qdot;
    wdot[4] += 1 * qdot;

    /*reaction 21: H2O2 + OH <=> H2O + HO2 */
    phi_f = sc[9]*sc[4];
    k_f = k_f_save[20];
    q_f = phi_f * k_f;
    phi_r = sc[7]*sc[8];
    Kc = Kc_save[20];
    k_r = k_f / Kc;
    q_r = phi_r * k_r;
    qdot = q_f - q_r;
    wdot[9] -= 1 * qdot;
    wdot[4] -= 1 * qdot;
    wdot[7] += 1 * qdot;
    wdot[8] += 1 * qdot;

    /*reaction 22: H2O2 + O <=> HO2 + OH */
    phi_f = sc[9]*sc[5];
    k_f = k_f_save[21];
    q_f = phi_f * k_f;
    phi_r = sc[8]*sc[4];
    Kc = Kc_save[21];
    k_r = k_f / Kc;
    q_r = phi_r * k_r;
    qdot = q_f - q_r;
    wdot[9] -= 1 * qdot;
    wdot[5] -= 1 * qdot;
    wdot[8] += 1 * qdot;
    wdot[4] += 1 * qdot;

    /*reaction 23: CO + OH <=> CO2 + H */
    phi_f = sc[10]*sc[4];
    k_f = k_f_save[22];
    q_f = phi_f * k_f;
    phi_r = sc[11]*sc[2];
    Kc = Kc_save[22];
    k_r = k_f / Kc;
    q_r = phi_r * k_r;
    qdot = q_f - q_r;
    wdot[10] -= 1 * qdot;
    wdot[4] -= 1 * qdot;
    wdot[11] += 1 * qdot;
    wdot[2] += 1 * qdot;

    /*reaction 24: CO + HO2 <=> CO2 + OH */
    phi_f = sc[10]*sc[8];
    k_f = k_f_save[23];
    q_f = phi_f * k_f;
    phi_r = sc[11]*sc[4];
    Kc = Kc_save[23];
    k_r = k_f / Kc;
    q_r = phi_r * k_r;
    qdot = q_f - q_r;
    wdot[10] -= 1 * qdot;
    wdot[8] -= 1 * qdot;
    wdot[11] += 1 * qdot;
    wdot[4] += 1 * qdot;

    /*reaction 25: HCO + M <=> CO + H + M */
    phi_f = sc[12];
    alpha = mixture + 0.9*sc[6] + 11*sc[7] + 1.5*sc[10] + 1.5*sc[11];
    k_f = alpha * k_f_save[24];
    q_f = phi_f * k_f;
    phi_r = sc[10]*sc[2];
    Kc = Kc_save[24];
    k_r = k_f / Kc;
    q_r = phi_r * k_r;
    qdot = q_f - q_r;
    wdot[12] -= 1 * qdot;
    wdot[10] += 1 * qdot;
    wdot[2] += 1 * qdot;

    /*reaction 26: HCO + H <=> CO + H2 */
    phi_f = sc[12]*sc[2];
    k_f = k_f_save[25];
    q_f = phi_f * k_f;
    phi_r = sc[10]*sc[6];
    Kc = Kc_save[25];
    k_r = k_f / Kc;
    q_r = phi_r * k_r;
    qdot = q_f - q_r;
    wdot[12] -= 1 * qdot;
    wdot[2] -= 1 * qdot;
    wdot[10] += 1 * qdot;
    wdot[6] += 1 * qdot;

    /*reaction 27: HCO + O <=> CO + OH */
    phi_f = sc[12]*sc[5];
    k_f = k_f_save[26];
    q_f = phi_f * k_f;
    phi_r = sc[10]*sc[4];
    Kc = Kc_save[26];
    k_r = k_f / Kc;
    q_r = phi_r * k_r;
    qdot = q_f - q_r;
    wdot[12] -= 1 * qdot;
    wdot[5] -= 1 * qdot;
    wdot[10] += 1 * qdot;
    wdot[4] += 1 * qdot;

    /*reaction 28: HCO + O <=> CO2 + H */
    phi_f = sc[12]*sc[5];
    k_f = k_f_save[27];
    q_f = phi_f * k_f;
    phi_r = sc[11]*sc[2];
    Kc = Kc_save[27];
    k_r = k_f / Kc;
    q_r = phi_r * k_r;
    qdot = q_f - q_r;
    wdot[12] -= 1 * qdot;
    wdot[5] -= 1 * qdot;
    wdot[11] += 1 * qdot;
    wdot[2] += 1 * qdot;

    /*reaction 29: HCO + OH <=> CO + H2O */
    phi_f = sc[12]*sc[4];
    k_f = k_f_save[28];
    q_f = phi_f * k_f;
    phi_r = sc[10]*sc[7];
    Kc = Kc_save[28];
    k_r = k_f / Kc;
    q_r = phi_r * k_r;
    qdot = q_f - q_r;
    wdot[12] -= 1 * qdot;
    wdot[4] -= 1 * qdot;
    wdot[10] += 1 * qdot;
    wdot[7] += 1 * qdot;

    /*reaction 30: HCO + O2 <=> CO + HO2 */
    phi_f = sc[12]*sc[3];
    k_f = k_f_save[29];
    q_f = phi_f * k_f;
    phi_r = sc[10]*sc[8];
    Kc = Kc_save[29];
    k_r = k_f / Kc;
    q_r = phi_r * k_r;
    qdot = q_f - q_r;
    wdot[12] -= 1 * qdot;
    wdot[3] -= 1 * qdot;
    wdot[10] += 1 * qdot;
    wdot[8] += 1 * qdot;

    /*reaction 31: CH2O + M <=> HCO + H + M */
    phi_f = sc[13];
    alpha = mixture + 1.5*sc[6] + 15.3*sc[7] + 0.9*sc[10] + 2.8*sc[11];
    k_f = alpha * k_f_save[30];
    q_f = phi_f * k_f;
    phi_r = sc[12]*sc[2];
    Kc = Kc_save[30];
    k_r = k_f / Kc;
    q_r = phi_r * k_r;
    qdot = q_f - q_r;
    wdot[13] -= 1 * qdot;
    wdot[12] += 1 * qdot;
    wdot[2] += 1 * qdot;

    /*reaction 32: CH2O + H <=> HCO + H2 */
    phi_f = sc[13]*sc[2];
    k_f = k_f_save[31];
    q_f = phi_f * k_f;
    phi_r = sc[12]*sc[6];
    Kc = Kc_save[31];
    k_r = k_f / Kc;
    q_r = phi_r * k_r;
    qdot = q_f - q_r;
    wdot[13] -= 1 * qdot;
    wdot[2] -= 1 * qdot;
    wdot[12] += 1 * qdot;
    wdot[6] += 1 * qdot;

    /*reaction 33: CH2O + O <=> HCO + OH */
    phi_f = sc[13]*sc[5];
    k_f = k_f_save[32];
    q_f = phi_f * k_f;
    phi_r = sc[12]*sc[4];
    Kc = Kc_save[32];
    k_r = k_f / Kc;
    q_r = phi_r * k_r;
    qdot = q_f - q_r;
    wdot[13] -= 1 * qdot;
    wdot[5] -= 1 * qdot;
    wdot[12] += 1 * qdot;
    wdot[4] += 1 * qdot;

    /*reaction 34: CH2O + OH <=> HCO + H2O */
    phi_f = sc[13]*sc[4];
    k_f = k_f_save[33];
    q_f = phi_f * k_f;
    phi_r = sc[12]*sc[7];
    Kc = Kc_save[33];
    k_r = k_f / Kc;
    q_r = phi_r * k_r;
    qdot = q_f - q_r;
    wdot[13] -= 1 * qdot;
    wdot[4] -= 1 * qdot;
    wdot[12] += 1 * qdot;
    wdot[7] += 1 * qdot;

    /*reaction 35: CH4 + H <=> H2 + CH3 */
    phi_f = sc[14]*sc[2];
    k_f = k_f_save[34];
    q_f = phi_f * k_f;
    phi_r = sc[6]*sc[15];
    Kc = Kc_save[34];
    k_r = k_f / Kc;
    q_r = phi_r * k_r;
    qdot = q_f - q_r;
    wdot[14] -= 1 * qdot;
    wdot[2] -= 1 * qdot;
    wdot[6] += 1 * qdot;
    wdot[15] += 1 * qdot;

    /*reaction 36: CH4 + OH <=> H2O + CH3 */
    phi_f = sc[14]*sc[4];
    k_f = k_f_save[35];
    q_f = phi_f * k_f;
    phi_r = sc[7]*sc[15];
    Kc = Kc_save[35];
    k_r = k_f / Kc;
    q_r = phi_r * k_r;
    qdot = q_f - q_r;
    wdot[14] -= 1 * qdot;
    wdot[4] -= 1 * qdot;
    wdot[7] += 1 * qdot;
    wdot[15] += 1 * qdot;

    /*reaction 37: CH4 + O <=> CH3 + OH */
    phi_f = sc[14]*sc[5];
    k_f = k_f_save[36];
    q_f = phi_f * k_f;
    phi_r = sc[15]*sc[4];
    Kc = Kc_save[36];
    k_r = k_f / Kc;
    q_r = phi_r * k_r;
    qdot = q_f - q_r;
    wdot[14] -= 1 * qdot;
    wdot[5] -= 1 * qdot;
    wdot[15] += 1 * qdot;
    wdot[4] += 1 * qdot;

    /*reaction 38: CH4 + O2 <=> CH3 + HO2 */
    phi_f = sc[14]*sc[3];
    k_f = k_f_save[37];
    q_f = phi_f * k_f;
    phi_r = sc[15]*sc[8];
    Kc = Kc_save[37];
    k_r = k_f / Kc;
    q_r = phi_r * k_r;
    qdot = q_f - q_r;
    wdot[14] -= 1 * qdot;
    wdot[3] -= 1 * qdot;
    wdot[15] += 1 * qdot;
    wdot[8] += 1 * qdot;

    /*reaction 39: CH4 + HO2 <=> CH3 + H2O2 */
    phi_f = sc[14]*sc[8];
    k_f = k_f_save[38];
    q_f = phi_f * k_f;
    phi_r = sc[15]*sc[9];
    Kc = Kc_save[38];
    k_r = k_f / Kc;
    q_r = phi_r * k_r;
    qdot = q_f - q_r;
    wdot[14] -= 1 * qdot;
    wdot[8] -= 1 * qdot;
    wdot[15] += 1 * qdot;
    wdot[9] += 1 * qdot;

    /*reaction 40: CH3 + H <=> T-CH2 + H2 */
    phi_f = sc[15]*sc[2];
    k_f = k_f_save[39];
    q_f = phi_f * k_f;
    phi_r = sc[16]*sc[6];
    Kc = Kc_save[39];
    k_r = k_f / Kc;
    q_r = phi_r * k_r;
    qdot = q_f - q_r;
    wdot[15] -= 1 * qdot;
    wdot[2] -= 1 * qdot;
    wdot[16] += 1 * qdot;
    wdot[6] += 1 * qdot;

    /*reaction 41: CH3 + H <=> S-CH2 + H2 */
    phi_f = sc[15]*sc[2];
    k_f = k_f_save[40];
    q_f = phi_f * k_f;
    phi_r = sc[17]*sc[6];
    Kc = Kc_save[40];
    k_r = k_f / Kc;
    q_r = phi_r * k_r;
    qdot = q_f - q_r;
    wdot[15] -= 1 * qdot;
    wdot[2] -= 1 * qdot;
    wdot[17] += 1 * qdot;
    wdot[6] += 1 * qdot;

    /*reaction 42: CH3 + OH <=> S-CH2 + H2O */
    phi_f = sc[15]*sc[4];
    k_f = k_f_save[41];
    q_f = phi_f * k_f;
    phi_r = sc[17]*sc[7];
    Kc = Kc_save[41];
    k_r = k_f / Kc;
    q_r = phi_r * k_r;
    qdot = q_f - q_r;
    wdot[15] -= 1 * qdot;
    wdot[4] -= 1 * qdot;
    wdot[17] += 1 * qdot;
    wdot[7] += 1 * qdot;

    /*reaction 43: CH3 + O <=> CH2O + H */
    phi_f = sc[15]*sc[5];
    k_f = k_f_save[42];
    q_f = phi_f * k_f;
    phi_r = sc[13]*sc[2];
    Kc = Kc_save[42];
    k_r = k_f / Kc;
    q_r = phi_r * k_r;
    qdot = q_f - q_r;
    wdot[15] -= 1 * qdot;
    wdot[5] -= 1 * qdot;
    wdot[13] += 1 * qdot;
    wdot[2] += 1 * qdot;

    /*reaction 44: CH3 + T-CH2 <=> C2H4 + H */
    phi_f = sc[15]*sc[16];
    k_f = k_f_save[43];
    q_f = phi_f * k_f;
    phi_r = sc[18]*sc[2];
    Kc = Kc_save[43];
    k_r = k_f / Kc;
    q_r = phi_r * k_r;
    qdot = q_f - q_r;
    wdot[15] -= 1 * qdot;
    wdot[16] -= 1 * qdot;
    wdot[18] += 1 * qdot;
    wdot[2] += 1 * qdot;

    /*reaction 45: CH3 + HO2 <=> CH3O + OH */
    phi_f = sc[15]*sc[8];
    k_f = k_f_save[44];
    q_f = phi_f * k_f;
    phi_r = sc[19]*sc[4];
    Kc = Kc_save[44];
    k_r = k_f / Kc;
    q_r = phi_r * k_r;
    qdot = q_f - q_r;
    wdot[15] -= 1 * qdot;
    wdot[8] -= 1 * qdot;
    wdot[19] += 1 * qdot;
    wdot[4] += 1 * qdot;

    /*reaction 46: CH3 + O2 <=> CH2O + OH */
    phi_f = sc[15]*sc[3];
    k_f = k_f_save[45];
    q_f = phi_f * k_f;
    phi_r = sc[13]*sc[4];
    Kc = Kc_save[45];
    k_r = k_f / Kc;
    q_r = phi_r * k_r;
    qdot = q_f - q_r;
    wdot[15] -= 1 * qdot;
    wdot[3] -= 1 * qdot;
    wdot[13] += 1 * qdot;
    wdot[4] += 1 * qdot;

    /*reaction 47: CH3 + O2 <=> CH3O + O */
    phi_f = sc[15]*sc[3];
    k_f = k_f_save[46];
    q_f = phi_f * k_f;
    phi_r = sc[19]*sc[5];
    Kc = Kc_save[46];
    k_r = k_f / Kc;
    q_r = phi_r * k_r;
    qdot = q_f - q_r;
    wdot[15] -= 1 * qdot;
    wdot[3] -= 1 * qdot;
    wdot[19] += 1 * qdot;
    wdot[5] += 1 * qdot;

    /*reaction 48: 2 CH3 <=> C2H4 + H2 */
    phi_f = sc[15]*sc[15];
    k_f = k_f_save[47];
    q_f = phi_f * k_f;
    phi_r = sc[18]*sc[6];
    Kc = Kc_save[47];
    k_r = k_f / Kc;
    q_r = phi_r * k_r;
    qdot = q_f - q_r;
    wdot[15] -= 2 * qdot;
    wdot[18] += 1 * qdot;
    wdot[6] += 1 * qdot;

    /*reaction 49: 2 CH3 <=> C2H5 + H */
    phi_f = sc[15]*sc[15];
    k_f = k_f_save[48];
    q_f = phi_f * k_f;
    phi_r = sc[20]*sc[2];
    Kc = Kc_save[48];
    k_r = k_f / Kc;
    q_r = phi_r * k_r;
    qdot = q_f - q_r;
    wdot[15] -= 2 * qdot;
    wdot[20] += 1 * qdot;
    wdot[2] += 1 * qdot;

    /*reaction 50: CH3 + H (+M) <=> CH4 (+M) */
    phi_f = sc[15]*sc[2];
    alpha = mixture;
    k_f = k_f_save[49];
    redP = 1e-12 * alpha / k_f * 6.26e+23*exp(-1.8*tc[0]);
    F = redP / (1 + redP);
    logPred = log10(redP);
    logFcent = log10((0.63*exp(T/-3315))+ (0.37*exp(T/-61)));
    troe_c = -.4 - .67 * logFcent;
    troe_n = .75 - 1.27 * logFcent;
    troe = (troe_c + logPred) / (troe_n - .14*(troe_c + logPred));
    F_troe = pow(10, logFcent / (1.0 + troe*troe));
    F *= F_troe;
    k_f *= F;
    q_f = phi_f * k_f;
    phi_r = sc[14];
    Kc = Kc_save[49];
    k_r = k_f / Kc;
    q_r = phi_r * k_r;
    qdot = q_f - q_r;
    wdot[15] -= 1 * qdot;
    wdot[2] -= 1 * qdot;
    wdot[14] += 1 * qdot;

    /*reaction 51: 2 CH3 (+M) <=> C2H6 (+M) */
    phi_f = sc[15]*sc[15];
    alpha = mixture;
    k_f = k_f_save[50];
    redP = 1e-12 * alpha / k_f * 1.27e+41*exp(-7*tc[0]-1390.3423581185179501*invT);
    F = redP / (1 + redP);
    logPred = log10(redP);
    logFcent = log10((0.38*exp(T/-73))+ (0.62*exp(T/-1180)));
    troe_c = -.4 - .67 * logFcent;
    troe_n = .75 - 1.27 * logFcent;
    troe = (troe_c + logPred) / (troe_n - .14*(troe_c + logPred));
    F_troe = pow(10, logFcent / (1.0 + troe*troe));
    F *= F_troe;
    k_f *= F;
    q_f = phi_f * k_f;
    phi_r = sc[21];
    Kc = Kc_save[50];
    k_r = k_f / Kc;
    q_r = phi_r * k_r;
    qdot = q_f - q_r;
    wdot[15] -= 2 * qdot;
    wdot[21] += 1 * qdot;

    /*reaction 52: S-CH2 + OH <=> CH2O + H */
    phi_f = sc[17]*sc[4];
    k_f = k_f_save[51];
    q_f = phi_f * k_f;
    phi_r = sc[13]*sc[2];
    Kc = Kc_save[51];
    k_r = k_f / Kc;
    q_r = phi_r * k_r;
    qdot = q_f - q_r;
    wdot[17] -= 1 * qdot;
    wdot[4] -= 1 * qdot;
    wdot[13] += 1 * qdot;
    wdot[2] += 1 * qdot;

    /*reaction 53: S-CH2 + O2 <=> CO + OH + H */
    phi_f = sc[17]*sc[3];
    k_f = k_f_save[52];
    q_f = phi_f * k_f;
    phi_r = sc[10]*sc[4]*sc[2];
    Kc = Kc_save[52];
    k_r = k_f / Kc;
    q_r = phi_r * k_r;
    qdot = q_f - q_r;
    wdot[17] -= 1 * qdot;
    wdot[3] -= 1 * qdot;
    wdot[10] += 1 * qdot;
    wdot[4] += 1 * qdot;
    wdot[2] += 1 * qdot;

    /*reaction 54: S-CH2 + CO2 <=> CO + CH2O */
    phi_f = sc[17]*sc[11];
    k_f = k_f_save[53];
    q_f = phi_f * k_f;
    phi_r = sc[10]*sc[13];
    Kc = Kc_save[53];
    k_r = k_f / Kc;
    q_r = phi_r * k_r;
    qdot = q_f - q_r;
    wdot[17] -= 1 * qdot;
    wdot[11] -= 1 * qdot;
    wdot[10] += 1 * qdot;
    wdot[13] += 1 * qdot;

    /*reaction 55: S-CH2 + M <=> T-CH2 + M */
    phi_f = sc[17];
    alpha = mixture + 1.4*sc[6] + 14.4*sc[7] + 0.8*sc[10] + 2.6*sc[11];
    k_f = alpha * k_f_save[54];
    q_f = phi_f * k_f;
    phi_r = sc[16];
    Kc = Kc_save[54];
    k_r = k_f / Kc;
    q_r = phi_r * k_r;
    qdot = q_f - q_r;
    wdot[17] -= 1 * qdot;
    wdot[16] += 1 * qdot;

    /*reaction 56: T-CH2 + H <=> CH + H2 */
    phi_f = sc[16]*sc[2];
    k_f = k_f_save[55];
    q_f = phi_f * k_f;
    phi_r = sc[22]*sc[6];
    Kc = Kc_save[55];
    k_r = k_f / Kc;
    q_r = phi_r * k_r;
    qdot = q_f - q_r;
    wdot[16] -= 1 * qdot;
    wdot[2] -= 1 * qdot;
    wdot[22] += 1 * qdot;
    wdot[6] += 1 * qdot;

    /*reaction 57: T-CH2 + OH <=> CH2O + H */
    phi_f = sc[16]*sc[4];
    k_f = k_f_save[56];
    q_f = phi_f * k_f;
    phi_r = sc[13]*sc[2];
    Kc = Kc_save[56];
    k_r = k_f / Kc;
    q_r = phi_r * k_r;
    qdot = q_f - q_r;
    wdot[16] -= 1 * qdot;
    wdot[4] -= 1 * qdot;
    wdot[13] += 1 * qdot;
    wdot[2] += 1 * qdot;

    /*reaction 58: T-CH2 + OH <=> CH + H2O */
    phi_f = sc[16]*sc[4];
    k_f = k_f_save[57];
    q_f = phi_f * k_f;
    phi_r = sc[22]*sc[7];
    Kc = Kc_save[57];
    k_r = k_f / Kc;
    q_r = phi_r * k_r;
    qdot = q_f - q_r;
    wdot[16] -= 1 * qdot;
    wdot[4] -= 1 * qdot;
    wdot[22] += 1 * qdot;
    wdot[7] += 1 * qdot;

    /*reaction 59: T-CH2 + O <=> CO + 2 H */
    phi_f = sc[16]*sc[5];
    k_f = k_f_save[58];
    q_f = phi_f * k_f;
    phi_r = sc[10]*sc[2]*sc[2];
    Kc = Kc_save[58];
    k_r = k_f / Kc;
    q_r = phi_r * k_r;
    qdot = q_f - q_r;
    wdot[16] -= 1 * qdot;
    wdot[5] -= 1 * qdot;
    wdot[10] += 1 * qdot;
    wdot[2] += 2 * qdot;

    /*reaction 60: T-CH2 + O <=> CO + H2 */
    phi_f = sc[16]*sc[5];
    k_f = k_f_save[59];
    q_f = phi_f * k_f;
    phi_r = sc[10]*sc[6];
    Kc = Kc_save[59];
    k_r = k_f / Kc;
    q_r = phi_r * k_r;
    qdot = q_f - q_r;
    wdot[16] -= 1 * qdot;
    wdot[5] -= 1 * qdot;
    wdot[10] += 1 * qdot;
    wdot[6] += 1 * qdot;

    /*reaction 61: T-CH2 + O2 <=> CO2 + H2 */
    phi_f = sc[16]*sc[3];
    k_f = k_f_save[60];
    q_f = phi_f * k_f;
    phi_r = sc[11]*sc[6];
    Kc = Kc_save[60];
    k_r = k_f / Kc;
    q_r = phi_r * k_r;
    qdot = q_f - q_r;
    wdot[16] -= 1 * qdot;
    wdot[3] -= 1 * qdot;
    wdot[11] += 1 * qdot;
    wdot[6] += 1 * qdot;

    /*reaction 62: T-CH2 + O2 <=> CO + OH + H */
    phi_f = sc[16]*sc[3];
    k_f = k_f_save[61];
    q_f = phi_f * k_f;
    phi_r = sc[10]*sc[4]*sc[2];
    Kc = Kc_save[61];
    k_r = k_f / Kc;
    q_r = phi_r * k_r;
    qdot = q_f - q_r;
    wdot[16] -= 1 * qdot;
    wdot[3] -= 1 * qdot;
    wdot[10] += 1 * qdot;
    wdot[4] += 1 * qdot;
    wdot[2] += 1 * qdot;

    /*reaction 63: 2 T-CH2 <=> C2H2 + 2 H */
    phi_f = sc[16]*sc[16];
    k_f = k_f_save[62];
    q_f = phi_f * k_f;
    phi_r = sc[23]*sc[2]*sc[2];
    Kc = Kc_save[62];
    k_r = k_f / Kc;
    q_r = phi_r * k_r;
    qdot = q_f - q_r;
    wdot[16] -= 2 * qdot;
    wdot[23] += 1 * qdot;
    wdot[2] += 2 * qdot;

    /*reaction 64: CH + O <=> CO + H */
    phi_f = sc[22]*sc[5];
    k_f = k_f_save[63];
    q_f = phi_f * k_f;
    phi_r = sc[10]*sc[2];
    Kc = Kc_save[63];
    k_r = k_f / Kc;
    q_r = phi_r * k_r;
    qdot = q_f - q_r;
    wdot[22] -= 1 * qdot;
    wdot[5] -= 1 * qdot;
    wdot[10] += 1 * qdot;
    wdot[2] += 1 * qdot;

    /*reaction 65: CH + O2 <=> HCO + O */
    phi_f = sc[22]*sc[3];
    k_f = k_f_save[64];
    q_f = phi_f * k_f;
    phi_r = sc[12]*sc[5];
    Kc = Kc_save[64];
    k_r = k_f / Kc;
    q_r = phi_r * k_r;
    qdot = q_f - q_r;
    wdot[22] -= 1 * qdot;
    wdot[3] -= 1 * qdot;
    wdot[12] += 1 * qdot;
    wdot[5] += 1 * qdot;

    /*reaction 66: CH + H2O <=> CH2O + H */
    phi_f = sc[22]*sc[7];
    k_f = k_f_save[65];
    q_f = phi_f * k_f;
    phi_r = sc[13]*sc[2];
    Kc = Kc_save[65];
    k_r = k_f / Kc;
    q_r = phi_r * k_r;
    qdot = q_f - q_r;
    wdot[22] -= 1 * qdot;
    wdot[7] -= 1 * qdot;
    wdot[13] += 1 * qdot;
    wdot[2] += 1 * qdot;

    /*reaction 67: CH + CO2 <=> HCO + CO */
    phi_f = sc[22]*sc[11];
    k_f = k_f_save[66];
    q_f = phi_f * k_f;
    phi_r = sc[12]*sc[10];
    Kc = Kc_save[66];
    k_r = k_f / Kc;
    q_r = phi_r * k_r;
    qdot = q_f - q_r;
    wdot[22] -= 1 * qdot;
    wdot[11] -= 1 * qdot;
    wdot[12] += 1 * qdot;
    wdot[10] += 1 * qdot;

    /*reaction 68: CH3O + H <=> CH2O + H2 */
    phi_f = sc[19]*sc[2];
    k_f = k_f_save[67];
    q_f = phi_f * k_f;
    phi_r = sc[13]*sc[6];
    Kc = Kc_save[67];
    k_r = k_f / Kc;
    q_r = phi_r * k_r;
    qdot = q_f - q_r;
    wdot[19] -= 1 * qdot;
    wdot[2] -= 1 * qdot;
    wdot[13] += 1 * qdot;
    wdot[6] += 1 * qdot;

    /*reaction 69: CH3O + H <=> S-CH2 + H2O */
    phi_f = sc[19]*sc[2];
    k_f = k_f_save[68];
    q_f = phi_f * k_f;
    phi_r = sc[17]*sc[7];
    Kc = Kc_save[68];
    k_r = k_f / Kc;
    q_r = phi_r * k_r;
    qdot = q_f - q_r;
    wdot[19] -= 1 * qdot;
    wdot[2] -= 1 * qdot;
    wdot[17] += 1 * qdot;
    wdot[7] += 1 * qdot;

    /*reaction 70: CH3O + OH <=> CH2O + H2O */
    phi_f = sc[19]*sc[4];
    k_f = k_f_save[69];
    q_f = phi_f * k_f;
    phi_r = sc[13]*sc[7];
    Kc = Kc_save[69];
    k_r = k_f / Kc;
    q_r = phi_r * k_r;
    qdot = q_f - q_r;
    wdot[19] -= 1 * qdot;
    wdot[4] -= 1 * qdot;
    wdot[13] += 1 * qdot;
    wdot[7] += 1 * qdot;

    /*reaction 71: CH3O + O <=> OH + CH2O */
    phi_f = sc[19]*sc[5];
    k_f = k_f_save[70];
    q_f = phi_f * k_f;
    phi_r = sc[4]*sc[13];
    Kc = Kc_save[70];
    k_r = k_f / Kc;
    q_r = phi_r * k_r;
    qdot = q_f - q_r;
    wdot[19] -= 1 * qdot;
    wdot[5] -= 1 * qdot;
    wdot[4] += 1 * qdot;
    wdot[13] += 1 * qdot;

    /*reaction 72: CH3O + O2 <=> CH2O + HO2 */
    phi_f = sc[19]*sc[3];
    k_f = k_f_save[71];
    q_f = phi_f * k_f;
    phi_r = sc[13]*sc[8];
    Kc = Kc_save[71];
    k_r = k_f / Kc;
    q_r = phi_r * k_r;
    qdot = q_f - q_r;
    wdot[19] -= 1 * qdot;
    wdot[3] -= 1 * qdot;
    wdot[13] += 1 * qdot;
    wdot[8] += 1 * qdot;

    /*reaction 73: CH3O + M <=> CH2O + H + M */
    phi_f = sc[19];
    alpha = mixture;
    k_f = alpha * k_f_save[72];
    q_f = phi_f * k_f;
    phi_r = sc[13]*sc[2];
    Kc = Kc_save[72];
    k_r = k_f / Kc;
    q_r = phi_r * k_r;
    qdot = q_f - q_r;
    wdot[19] -= 1 * qdot;
    wdot[13] += 1 * qdot;
    wdot[2] += 1 * qdot;

    /*reaction 74: C2H6 + H <=> C2H5 + H2 */
    phi_f = sc[21]*sc[2];
    k_f = k_f_save[73];
    q_f = phi_f * k_f;
    phi_r = sc[20]*sc[6];
    Kc = Kc_save[73];
    k_r = k_f / Kc;
    q_r = phi_r * k_r;
    qdot = q_f - q_r;
    wdot[21] -= 1 * qdot;
    wdot[2] -= 1 * qdot;
    wdot[20] += 1 * qdot;
    wdot[6] += 1 * qdot;

    /*reaction 75: C2H6 + O <=> C2H5 + OH */
    phi_f = sc[21]*sc[5];
    k_f = k_f_save[74];
    q_f = phi_f * k_f;
    phi_r = sc[20]*sc[4];
    Kc = Kc_save[74];
    k_r = k_f / Kc;
    q_r = phi_r * k_r;
    qdot = q_f - q_r;
    wdot[21] -= 1 * qdot;
    wdot[5] -= 1 * qdot;
    wdot[20] += 1 * qdot;
    wdot[4] += 1 * qdot;

    /*reaction 76: C2H6 + OH <=> C2H5 + H2O */
    phi_f = sc[21]*sc[4];
    k_f = k_f_save[75];
    q_f = phi_f * k_f;
    phi_r = sc[20]*sc[7];
    Kc = Kc_save[75];
    k_r = k_f / Kc;
    q_r = phi_r * k_r;
    qdot = q_f - q_r;
    wdot[21] -= 1 * qdot;
    wdot[4] -= 1 * qdot;
    wdot[20] += 1 * qdot;
    wdot[7] += 1 * qdot;

    /*reaction 77: C2H6 + CH3 <=> C2H5 + CH4 */
    phi_f = sc[21]*sc[15];
    k_f = k_f_save[76];
    q_f = phi_f * k_f;
    phi_r = sc[20]*sc[14];
    Kc = Kc_save[76];
    k_r = k_f / Kc;
    q_r = phi_r * k_r;
    qdot = q_f - q_r;
    wdot[21] -= 1 * qdot;
    wdot[15] -= 1 * qdot;
    wdot[20] += 1 * qdot;
    wdot[14] += 1 * qdot;

    /*reaction 78: C2H6 (+M) <=> C2H5 + H (+M) */
    phi_f = sc[21];
    alpha = mixture;
    k_f = k_f_save[77];
    redP = 1e-6 * alpha / k_f * 4.9e+42*exp(-6.43*tc[0]-53929.815621124995232*invT);
    F = redP / (1 + redP);
    logPred = log10(redP);
    logFcent = log10((0.16*exp(T/-125))+ (0.84*exp(T/-2219))+ (exp(-6882/T)));
    troe_c = -.4 - .67 * logFcent;
    troe_n = .75 - 1.27 * logFcent;
    troe = (troe_c + logPred) / (troe_n - .14*(troe_c + logPred));
    F_troe = pow(10, logFcent / (1.0 + troe*troe));
    F *= F_troe;
    k_f *= F;
    q_f = phi_f * k_f;
    phi_r = sc[20]*sc[2];
    Kc = Kc_save[77];
    k_r = k_f / Kc;
    q_r = phi_r * k_r;
    qdot = q_f - q_r;
    wdot[21] -= 1 * qdot;
    wdot[20] += 1 * qdot;
    wdot[2] += 1 * qdot;

    /*reaction 79: C2H5 + H <=> C2H4 + H2 */
    phi_f = sc[20]*sc[2];
    k_f = k_f_save[78];
    q_f = phi_f * k_f;
    phi_r = sc[18]*sc[6];
    Kc = Kc_save[78];
    k_r = k_f / Kc;
    q_r = phi_r * k_r;
    qdot = q_f - q_r;
    wdot[20] -= 1 * qdot;
    wdot[2] -= 1 * qdot;
    wdot[18] += 1 * qdot;
    wdot[6] += 1 * qdot;

    /*reaction 80: C2H5 + O <=> C2H4 + OH */
    phi_f = sc[20]*sc[5];
    k_f = k_f_save[79];
    q_f = phi_f * k_f;
    phi_r = sc[18]*sc[4];
    Kc = Kc_save[79];
    k_r = k_f / Kc;
    q_r = phi_r * k_r;
    qdot = q_f - q_r;
    wdot[20] -= 1 * qdot;
    wdot[5] -= 1 * qdot;
    wdot[18] += 1 * qdot;
    wdot[4] += 1 * qdot;

    /*reaction 81: C2H5 + O <=> CH3 + CH2O */
    phi_f = sc[20]*sc[5];
    k_f = k_f_save[80];
    q_f = phi_f * k_f;
    phi_r = sc[15]*sc[13];
    Kc = Kc_save[80];
    k_r = k_f / Kc;
    q_r = phi_r * k_r;
    qdot = q_f - q_r;
    wdot[20] -= 1 * qdot;
    wdot[5] -= 1 * qdot;
    wdot[15] += 1 * qdot;
    wdot[13] += 1 * qdot;

    /*reaction 82: C2H5 + O2 <=> C2H4 + HO2 */
    phi_f = sc[20]*sc[3];
    k_f = k_f_save[81];
    q_f = phi_f * k_f;
    phi_r = sc[18]*sc[8];
    Kc = Kc_save[81];
    k_r = k_f / Kc;
    q_r = phi_r * k_r;
    qdot = q_f - q_r;
    wdot[20] -= 1 * qdot;
    wdot[3] -= 1 * qdot;
    wdot[18] += 1 * qdot;
    wdot[8] += 1 * qdot;

    /*reaction 83: C2H5 (+M) <=> C2H4 + H (+M) */
    phi_f = sc[20];
    alpha = mixture;
    k_f = k_f_save[82];
    redP = 1e-6 * alpha / k_f * 3.99e+33*exp(-4.99*tc[0]-20128.666632188789663*invT);
    F = redP / (1 + redP);
    logPred = log10(redP);
    logFcent = log10((0.832*exp(T/-1203)));
    troe_c = -.4 - .67 * logFcent;
    troe_n = .75 - 1.27 * logFcent;
    troe = (troe_c + logPred) / (troe_n - .14*(troe_c + logPred));
    F_troe = pow(10, logFcent / (1.0 + troe*troe));
    F *= F_troe;
    k_f *= F;
    q_f = phi_f * k_f;
    phi_r = sc[18]*sc[2];
    Kc = Kc_save[82];
    k_r = k_f / Kc;
    q_r = phi_r * k_r;
    qdot = q_f - q_r;
    wdot[20] -= 1 * qdot;
    wdot[18] += 1 * qdot;
    wdot[2] += 1 * qdot;

    /*reaction 84: C2H4 + H <=> C2H3 + H2 */
    phi_f = sc[18]*sc[2];
    k_f = k_f_save[83];
    q_f = phi_f * k_f;
    phi_r = sc[24]*sc[6];
    Kc = Kc_save[83];
    k_r = k_f / Kc;
    q_r = phi_r * k_r;
    qdot = q_f - q_r;
    wdot[18] -= 1 * qdot;
    wdot[2] -= 1 * qdot;
    wdot[24] += 1 * qdot;
    wdot[6] += 1 * qdot;

    /*reaction 85: C2H4 + OH <=> C2H3 + H2O */
    phi_f = sc[18]*sc[4];
    k_f = k_f_save[84];
    q_f = phi_f * k_f;
    phi_r = sc[24]*sc[7];
    Kc = Kc_save[84];
    k_r = k_f / Kc;
    q_r = phi_r * k_r;
    qdot = q_f - q_r;
    wdot[18] -= 1 * qdot;
    wdot[4] -= 1 * qdot;
    wdot[24] += 1 * qdot;
    wdot[7] += 1 * qdot;

    /*reaction 86: C2H4 + O <=> CH3 + HCO */
    phi_f = sc[18]*sc[5];
    k_f = k_f_save[85];
    q_f = phi_f * k_f;
    phi_r = sc[15]*sc[12];
    Kc = Kc_save[85];
    k_r = k_f / Kc;
    q_r = phi_r * k_r;
    qdot = q_f - q_r;
    wdot[18] -= 1 * qdot;
    wdot[5] -= 1 * qdot;
    wdot[15] += 1 * qdot;
    wdot[12] += 1 * qdot;

    /*reaction 87: C2H4 + O <=> CH2CHO + H */
    phi_f = sc[18]*sc[5];
    k_f = k_f_save[86];
    q_f = phi_f * k_f;
    phi_r = sc[25]*sc[2];
    Kc = Kc_save[86];
    k_r = k_f / Kc;
    q_r = phi_r * k_r;
    qdot = q_f - q_r;
    wdot[18] -= 1 * qdot;
    wdot[5] -= 1 * qdot;
    wdot[25] += 1 * qdot;
    wdot[2] += 1 * qdot;

    /*reaction 88: 2 C2H4 <=> C2H3 + C2H5 */
    phi_f = sc[18]*sc[18];
    k_f = k_f_save[87];
    q_f = phi_f * k_f;
    phi_r = sc[24]*sc[20];
    Kc = Kc_save[87];
    k_r = k_f / Kc;
    q_r = phi_r * k_r;
    qdot = q_f - q_r;
    wdot[18] -= 2 * qdot;
    wdot[24] += 1 * qdot;
    wdot[20] += 1 * qdot;

    /*reaction 89: C2H4 + O2 <=> C2H3 + HO2 */
    phi_f = sc[18]*sc[3];
    k_f = k_f_save[88];
    q_f = phi_f * k_f;
    phi_r = sc[24]*sc[8];
    Kc = Kc_save[88];
    k_r = k_f / Kc;
    q_r = phi_r * k_r;
    qdot = q_f - q_r;
    wdot[18] -= 1 * qdot;
    wdot[3] -= 1 * qdot;
    wdot[24] += 1 * qdot;
    wdot[8] += 1 * qdot;

    /*reaction 90: C2H4 + HO2 <=> C2H4O + OH */
    phi_f = sc[18]*sc[8];
    k_f = k_f_save[89];
    q_f = phi_f * k_f;
    phi_r = sc[26]*sc[4];
    Kc = Kc_save[89];
    k_r = k_f / Kc;
    q_r = phi_r * k_r;
    qdot = q_f - q_r;
    wdot[18] -= 1 * qdot;
    wdot[8] -= 1 * qdot;
    wdot[26] += 1 * qdot;
    wdot[4] += 1 * qdot;

    /*reaction 91: C2H4O + HO2 <=> CH3 + CO + H2O2 */
    phi_f = sc[26]*sc[8];
    k_f = k_f_save[90];
    q_f = phi_f * k_f;
    phi_r = sc[15]*sc[10]*sc[9];
    Kc = Kc_save[90];
    k_r = k_f / Kc;
    q_r = phi_r * k_r;
    qdot = q_f - q_r;
    wdot[26] -= 1 * qdot;
    wdot[8] -= 1 * qdot;
    wdot[15] += 1 * qdot;
    wdot[10] += 1 * qdot;
    wdot[9] += 1 * qdot;

    /*reaction 92: C2H4 + M <=> C2H3 + H + M */
    phi_f = sc[18];
    alpha = mixture;
    k_f = alpha * k_f_save[91];
    q_f = phi_f * k_f;
    phi_r = sc[24]*sc[2];
    Kc = Kc_save[91];
    k_r = k_f / Kc;
    q_r = phi_r * k_r;
    qdot = q_f - q_r;
    wdot[18] -= 1 * qdot;
    wdot[24] += 1 * qdot;
    wdot[2] += 1 * qdot;

    /*reaction 93: C2H4 + M <=> C2H2 + H2 + M */
    phi_f = sc[18];
    alpha = mixture;
    k_f = alpha * k_f_save[92];
    q_f = phi_f * k_f;
    phi_r = sc[23]*sc[6];
    Kc = Kc_save[92];
    k_r = k_f / Kc;
    q_r = phi_r * k_r;
    qdot = q_f - q_r;
    wdot[18] -= 1 * qdot;
    wdot[23] += 1 * qdot;
    wdot[6] += 1 * qdot;

    /*reaction 94: C2H3 + H <=> C2H2 + H2 */
    phi_f = sc[24]*sc[2];
    k_f = k_f_save[93];
    q_f = phi_f * k_f;
    phi_r = sc[23]*sc[6];
    Kc = Kc_save[93];
    k_r = k_f / Kc;
    q_r = phi_r * k_r;
    qdot = q_f - q_r;
    wdot[24] -= 1 * qdot;
    wdot[2] -= 1 * qdot;
    wdot[23] += 1 * qdot;
    wdot[6] += 1 * qdot;

    /*reaction 95: C2H3 (+M) <=> C2H2 + H (+M) */
    phi_f = sc[24];
    alpha = mixture;
    k_f = k_f_save[94];
    redP = 1e-6 * alpha / k_f * 1.51e+14*exp(0.1*tc[0]-16448.351289492704382*invT);
    F = redP / (1 + redP);
    logPred = log10(redP);
    logFcent = log10((0.7*exp(T/-1e+30))+ (0.3*exp(T/-1e-30)));
    troe_c = -.4 - .67 * logFcent;
    troe_n = .75 - 1.27 * logFcent;
    troe = (troe_c + logPred) / (troe_n - .14*(troe_c + logPred));
    F_troe = pow(10, logFcent / (1.0 + troe*troe));
    F *= F_troe;
    k_f *= F;
    q_f = phi_f * k_f;
    phi_r = sc[23]*sc[2];
    Kc = Kc_save[94];
    k_r = k_f / Kc;
    q_r = phi_r * k_r;
    qdot = q_f - q_r;
    wdot[24] -= 1 * qdot;
    wdot[23] += 1 * qdot;
    wdot[2] += 1 * qdot;

    /*reaction 96: C2H3 + O2 <=> CH2O + HCO */
    phi_f = sc[24]*sc[3];
    k_f = k_f_save[95];
    q_f = phi_f * k_f;
    phi_r = sc[13]*sc[12];
    Kc = Kc_save[95];
    k_r = k_f / Kc;
    q_r = phi_r * k_r;
    qdot = q_f - q_r;
    wdot[24] -= 1 * qdot;
    wdot[3] -= 1 * qdot;
    wdot[13] += 1 * qdot;
    wdot[12] += 1 * qdot;

    /*reaction 97: C2H3 + O2 <=> CH2CHO + O */
    phi_f = sc[24]*sc[3];
    k_f = k_f_save[96];
    q_f = phi_f * k_f;
    phi_r = sc[25]*sc[5];
    Kc = Kc_save[96];
    k_r = k_f / Kc;
    q_r = phi_r * k_r;
    qdot = q_f - q_r;
    wdot[24] -= 1 * qdot;
    wdot[3] -= 1 * qdot;
    wdot[25] += 1 * qdot;
    wdot[5] += 1 * qdot;

    /*reaction 98: C2H3 + O2 <=> C2H2 + HO2 */
    phi_f = sc[24]*sc[3];
    k_f = k_f_save[97];
    q_f = phi_f * k_f;
    phi_r = sc[23]*sc[8];
    Kc = Kc_save[97];
    k_r = k_f / Kc;
    q_r = phi_r * k_r;
    qdot = q_f - q_r;
    wdot[24] -= 1 * qdot;
    wdot[3] -= 1 * qdot;
    wdot[23] += 1 * qdot;
    wdot[8] += 1 * qdot;

    /*reaction 99: CH2CHO <=> CH2CO + H */
    phi_f = sc[25];
    k_f = k_f_save[98];
    q_f = phi_f * k_f;
    phi_r = sc[27]*sc[2];
    Kc = Kc_save[98];
    k_r = k_f / Kc;
    q_r = phi_r * k_r;
    qdot = q_f - q_r;
    wdot[25] -= 1 * qdot;
    wdot[27] += 1 * qdot;
    wdot[2] += 1 * qdot;

    /*reaction 100: C2H2 + O <=> HCCO + H */
    phi_f = sc[23]*sc[5];
    k_f = k_f_save[99];
    q_f = phi_f * k_f;
    phi_r = sc[28]*sc[2];
    Kc = Kc_save[99];
    k_r = k_f / Kc;
    q_r = phi_r * k_r;
    qdot = q_f - q_r;
    wdot[23] -= 1 * qdot;
    wdot[5] -= 1 * qdot;
    wdot[28] += 1 * qdot;
    wdot[2] += 1 * qdot;

    /*reaction 101: C2H2 + O <=> T-CH2 + CO */
    phi_f = sc[23]*sc[5];
    k_f = k_f_save[100];
    q_f = phi_f * k_f;
    phi_r = sc[16]*sc[10];
    Kc = Kc_save[100];
    k_r = k_f / Kc;
    q_r = phi_r * k_r;
    qdot = q_f - q_r;
    wdot[23] -= 1 * qdot;
    wdot[5] -= 1 * qdot;
    wdot[16] += 1 * qdot;
    wdot[10] += 1 * qdot;

    /*reaction 102: C2H2 + O2 <=> CH2O + CO */
    phi_f = sc[23]*sc[3];
    k_f = k_f_save[101];
    q_f = phi_f * k_f;
    phi_r = sc[13]*sc[10];
    Kc = Kc_save[101];
    k_r = k_f / Kc;
    q_r = phi_r * k_r;
    qdot = q_f - q_r;
    wdot[23] -= 1 * qdot;
    wdot[3] -= 1 * qdot;
    wdot[13] += 1 * qdot;
    wdot[10] += 1 * qdot;

    /*reaction 103: C2H2 + OH <=> CH2CO + H */
    phi_f = sc[23]*sc[4];
    k_f = k_f_save[102];
    q_f = phi_f * k_f;
    phi_r = sc[27]*sc[2];
    Kc = Kc_save[102];
    k_r = k_f / Kc;
    q_r = phi_r * k_r;
    qdot = q_f - q_r;
    wdot[23] -= 1 * qdot;
    wdot[4] -= 1 * qdot;
    wdot[27] += 1 * qdot;
    wdot[2] += 1 * qdot;

    /*reaction 104: C2H2 + OH <=> C2H + H2O */
    phi_f = sc[23]*sc[4];
    k_f = k_f_save[103];
    q_f = phi_f * k_f;
    phi_r = sc[29]*sc[7];
    Kc = Kc_save[103];
    k_r = k_f / Kc;
    q_r = phi_r * k_r;
    qdot = q_f - q_r;
    wdot[23] -= 1 * qdot;
    wdot[4] -= 1 * qdot;
    wdot[29] += 1 * qdot;
    wdot[7] += 1 * qdot;

    /*reaction 105: CH2CO + H <=> CH3 + CO */
    phi_f = sc[27]*sc[2];
    k_f = k_f_save[104];
    q_f = phi_f * k_f;
    phi_r = sc[15]*sc[10];
    Kc = Kc_save[104];
    k_r = k_f / Kc;
    q_r = phi_r * k_r;
    qdot = q_f - q_r;
    wdot[27] -= 1 * qdot;
    wdot[2] -= 1 * qdot;
    wdot[15] += 1 * qdot;
    wdot[10] += 1 * qdot;

    /*reaction 106: CH2CO + O <=> T-CH2 + CO2 */
    phi_f = sc[27]*sc[5];
    k_f = k_f_save[105];
    q_f = phi_f * k_f;
    phi_r = sc[16]*sc[11];
    Kc = Kc_save[105];
    k_r = k_f / Kc;
    q_r = phi_r * k_r;
    qdot = q_f - q_r;
    wdot[27] -= 1 * qdot;
    wdot[5] -= 1 * qdot;
    wdot[16] += 1 * qdot;
    wdot[11] += 1 * qdot;

    /*reaction 107: CH2CO + O <=> HCCO + OH */
    phi_f = sc[27]*sc[5];
    k_f = k_f_save[106];
    q_f = phi_f * k_f;
    phi_r = sc[28]*sc[4];
    Kc = Kc_save[106];
    k_r = k_f / Kc;
    q_r = phi_r * k_r;
    qdot = q_f - q_r;
    wdot[27] -= 1 * qdot;
    wdot[5] -= 1 * qdot;
    wdot[28] += 1 * qdot;
    wdot[4] += 1 * qdot;

    /*reaction 108: CH2CO + CH3 <=> C2H5 + CO */
    phi_f = sc[27]*sc[15];
    k_f = k_f_save[107];
    q_f = phi_f * k_f;
    phi_r = sc[20]*sc[10];
    Kc = Kc_save[107];
    k_r = k_f / Kc;
    q_r = phi_r * k_r;
    qdot = q_f - q_r;
    wdot[27] -= 1 * qdot;
    wdot[15] -= 1 * qdot;
    wdot[20] += 1 * qdot;
    wdot[10] += 1 * qdot;

    /*reaction 109: HCCO + H <=> S-CH2 + CO */
    phi_f = sc[28]*sc[2];
    k_f = k_f_save[108];
    q_f = phi_f * k_f;
    phi_r = sc[17]*sc[10];
    Kc = Kc_save[108];
    k_r = k_f / Kc;
    q_r = phi_r * k_r;
    qdot = q_f - q_r;
    wdot[28] -= 1 * qdot;
    wdot[2] -= 1 * qdot;
    wdot[17] += 1 * qdot;
    wdot[10] += 1 * qdot;

    /*reaction 110: HCCO + OH <=> HCO + CO + H */
    phi_f = sc[28]*sc[4];
    k_f = k_f_save[109];
    q_f = phi_f * k_f;
    phi_r = sc[12]*sc[10]*sc[2];
    Kc = Kc_save[109];
    k_r = k_f / Kc;
    q_r = phi_r * k_r;
    qdot = q_f - q_r;
    wdot[28] -= 1 * qdot;
    wdot[4] -= 1 * qdot;
    wdot[12] += 1 * qdot;
    wdot[10] += 1 * qdot;
    wdot[2] += 1 * qdot;

    /*reaction 111: HCCO + O <=> 2 CO + H */
    phi_f = sc[28]*sc[5];
    k_f = k_f_save[110];
    q_f = phi_f * k_f;
    phi_r = sc[10]*sc[10]*sc[2];
    Kc = Kc_save[110];
    k_r = k_f / Kc;
    q_r = phi_r * k_r;
    qdot = q_f - q_r;
    wdot[28] -= 1 * qdot;
    wdot[5] -= 1 * qdot;
    wdot[10] += 2 * qdot;
    wdot[2] += 1 * qdot;

    /*reaction 112: HCCO + O2 <=> 2 CO + OH */
    phi_f = sc[28]*sc[3];
    k_f = k_f_save[111];
    q_f = phi_f * k_f;
    phi_r = sc[10]*sc[10]*sc[4];
    Kc = Kc_save[111];
    k_r = k_f / Kc;
    q_r = phi_r * k_r;
    qdot = q_f - q_r;
    wdot[28] -= 1 * qdot;
    wdot[3] -= 1 * qdot;
    wdot[10] += 2 * qdot;
    wdot[4] += 1 * qdot;

    /*reaction 113: HCCO + O2 <=> CO2 + CO + H */
    phi_f = sc[28]*sc[3];
    k_f = k_f_save[112];
    q_f = phi_f * k_f;
    phi_r = sc[11]*sc[10]*sc[2];
    Kc = Kc_save[112];
    k_r = k_f / Kc;
    q_r = phi_r * k_r;
    qdot = q_f - q_r;
    wdot[28] -= 1 * qdot;
    wdot[3] -= 1 * qdot;
    wdot[11] += 1 * qdot;
    wdot[10] += 1 * qdot;
    wdot[2] += 1 * qdot;

    /*reaction 114: C2H + OH <=> HCCO + H */
    phi_f = sc[29]*sc[4];
    k_f = k_f_save[113];
    q_f = phi_f * k_f;
    phi_r = sc[28]*sc[2];
    Kc = Kc_save[113];
    k_r = k_f / Kc;
    q_r = phi_r * k_r;
    qdot = q_f - q_r;
    wdot[29] -= 1 * qdot;
    wdot[4] -= 1 * qdot;
    wdot[28] += 1 * qdot;
    wdot[2] += 1 * qdot;

    /*reaction 115: C2H + O <=> CO + CH */
    phi_f = sc[29]*sc[5];
    k_f = k_f_save[114];
    q_f = phi_f * k_f;
    phi_r = sc[10]*sc[22];
    Kc = Kc_save[114];
    k_r = k_f / Kc;
    q_r = phi_r * k_r;
    qdot = q_f - q_r;
    wdot[29] -= 1 * qdot;
    wdot[5] -= 1 * qdot;
    wdot[10] += 1 * qdot;
    wdot[22] += 1 * qdot;

    /*reaction 116: C2H + O2 <=> HCCO + O */
    phi_f = sc[29]*sc[3];
    k_f = k_f_save[115];
    q_f = phi_f * k_f;
    phi_r = sc[28]*sc[5];
    Kc = Kc_save[115];
    k_r = k_f / Kc;
    q_r = phi_r * k_r;
    qdot = q_f - q_r;
    wdot[29] -= 1 * qdot;
    wdot[3] -= 1 * qdot;
    wdot[28] += 1 * qdot;
    wdot[5] += 1 * qdot;

    /*reaction 117: C2H + O2 <=> CH + CO2 */
    phi_f = sc[29]*sc[3];
    k_f = k_f_save[116];
    q_f = phi_f * k_f;
    phi_r = sc[22]*sc[11];
    Kc = Kc_save[116];
    k_r = k_f / Kc;
    q_r = phi_r * k_r;
    qdot = q_f - q_r;
    wdot[29] -= 1 * qdot;
    wdot[3] -= 1 * qdot;
    wdot[22] += 1 * qdot;
    wdot[11] += 1 * qdot;

    /*reaction 118: C2H + O2 <=> HCO + CO */
    phi_f = sc[29]*sc[3];
    k_f = k_f_save[117];
    q_f = phi_f * k_f;
    phi_r = sc[12]*sc[10];
    Kc = Kc_save[117];
    k_r = k_f / Kc;
    q_r = phi_r * k_r;
    qdot = q_f - q_r;
    wdot[29] -= 1 * qdot;
    wdot[3] -= 1 * qdot;
    wdot[12] += 1 * qdot;
    wdot[10] += 1 * qdot;

    /*reaction 119: CH2OH + H <=> CH2O + H2 */
    phi_f = sc[30]*sc[2];
    k_f = k_f_save[118];
    q_f = phi_f * k_f;
    phi_r = sc[13]*sc[6];
    Kc = Kc_save[118];
    k_r = k_f / Kc;
    q_r = phi_r * k_r;
    qdot = q_f - q_r;
    wdot[30] -= 1 * qdot;
    wdot[2] -= 1 * qdot;
    wdot[13] += 1 * qdot;
    wdot[6] += 1 * qdot;

    /*reaction 120: CH2OH + H <=> CH3 + OH */
    phi_f = sc[30]*sc[2];
    k_f = k_f_save[119];
    q_f = phi_f * k_f;
    phi_r = sc[15]*sc[4];
    Kc = Kc_save[119];
    k_r = k_f / Kc;
    q_r = phi_r * k_r;
    qdot = q_f - q_r;
    wdot[30] -= 1 * qdot;
    wdot[2] -= 1 * qdot;
    wdot[15] += 1 * qdot;
    wdot[4] += 1 * qdot;

    /*reaction 121: CH2OH + OH <=> CH2O + H2O */
    phi_f = sc[30]*sc[4];
    k_f = k_f_save[120];
    q_f = phi_f * k_f;
    phi_r = sc[13]*sc[7];
    Kc = Kc_save[120];
    k_r = k_f / Kc;
    q_r = phi_r * k_r;
    qdot = q_f - q_r;
    wdot[30] -= 1 * qdot;
    wdot[4] -= 1 * qdot;
    wdot[13] += 1 * qdot;
    wdot[7] += 1 * qdot;

    /*reaction 122: CH2OH + O2 <=> CH2O + HO2 */
    phi_f = sc[30]*sc[3];
    k_f = k_f_save[121];
    q_f = phi_f * k_f;
    phi_r = sc[13]*sc[8];
    Kc = Kc_save[121];
    k_r = k_f / Kc;
    q_r = phi_r * k_r;
    qdot = q_f - q_r;
    wdot[30] -= 1 * qdot;
    wdot[3] -= 1 * qdot;
    wdot[13] += 1 * qdot;
    wdot[8] += 1 * qdot;

    /*reaction 123: CH2OH + M <=> CH2O + H + M */
    phi_f = sc[30];
    alpha = mixture + 1.4*sc[6] + 14.4*sc[7] + 0.8*sc[10] + 2.6*sc[11];
    k_f = alpha * k_f_save[122];
    q_f = phi_f * k_f;
    phi_r = sc[13]*sc[2];
    Kc = Kc_save[122];
    k_r = k_f / Kc;
    q_r = phi_r * k_r;
    qdot = q_f - q_r;
    wdot[30] -= 1 * qdot;
    wdot[13] += 1 * qdot;
    wdot[2] += 1 * qdot;

    /*reaction 124: CH3O + M <=> CH2OH + M */
    phi_f = sc[19];
    alpha = mixture + 1.5*sc[6] + 11*sc[7] + 0.9*sc[10] + 2.8*sc[11];
    k_f = alpha * k_f_save[123];
    q_f = phi_f * k_f;
    phi_r = sc[30];
    Kc = Kc_save[123];
    k_r = k_f / Kc;
    q_r = phi_r * k_r;
    qdot = q_f - q_r;
    wdot[19] -= 1 * qdot;
    wdot[30] += 1 * qdot;

    /*reaction 125: CH2CO + OH <=> CH2OH + CO */
    phi_f = sc[27]*sc[4];
    k_f = k_f_save[124];
    q_f = phi_f * k_f;
    phi_r = sc[30]*sc[10];
    Kc = Kc_save[124];
    k_r = k_f / Kc;
    q_r = phi_r * k_r;
    qdot = q_f - q_r;
    wdot[27] -= 1 * qdot;
    wdot[4] -= 1 * qdot;
    wdot[30] += 1 * qdot;
    wdot[10] += 1 * qdot;

    /*reaction 126: CH3OH + OH <=> CH2OH + H2O */
    phi_f = sc[31]*sc[4];
    k_f = k_f_save[125];
    q_f = phi_f * k_f;
    phi_r = sc[30]*sc[7];
    Kc = Kc_save[125];
    k_r = k_f / Kc;
    q_r = phi_r * k_r;
    qdot = q_f - q_r;
    wdot[31] -= 1 * qdot;
    wdot[4] -= 1 * qdot;
    wdot[30] += 1 * qdot;
    wdot[7] += 1 * qdot;

    /*reaction 127: CH3OH + OH <=> CH3O + H2O */
    phi_f = sc[31]*sc[4];
    k_f = k_f_save[126];
    q_f = phi_f * k_f;
    phi_r = sc[19]*sc[7];
    Kc = Kc_save[126];
    k_r = k_f / Kc;
    q_r = phi_r * k_r;
    qdot = q_f - q_r;
    wdot[31] -= 1 * qdot;
    wdot[4] -= 1 * qdot;
    wdot[19] += 1 * qdot;
    wdot[7] += 1 * qdot;

    /*reaction 128: CH3OH + H <=> CH2OH + H2 */
    phi_f = sc[31]*sc[2];
    k_f = k_f_save[127];
    q_f = phi_f * k_f;
    phi_r = sc[30]*sc[6];
    Kc = Kc_save[127];
    k_r = k_f / Kc;
    q_r = phi_r * k_r;
    qdot = q_f - q_r;
    wdot[31] -= 1 * qdot;
    wdot[2] -= 1 * qdot;
    wdot[30] += 1 * qdot;
    wdot[6] += 1 * qdot;

    /*reaction 129: CH3OH + H <=> CH3O + H2 */
    phi_f = sc[31]*sc[2];
    k_f = k_f_save[128];
    q_f = phi_f * k_f;
    phi_r = sc[19]*sc[6];
    Kc = Kc_save[128];
    k_r = k_f / Kc;
    q_r = phi_r * k_r;
    qdot = q_f - q_r;
    wdot[31] -= 1 * qdot;
    wdot[2] -= 1 * qdot;
    wdot[19] += 1 * qdot;
    wdot[6] += 1 * qdot;

    /*reaction 130: CH3OH + O <=> CH2OH + OH */
    phi_f = sc[31]*sc[5];
    k_f = k_f_save[129];
    q_f = phi_f * k_f;
    phi_r = sc[30]*sc[4];
    Kc = Kc_save[129];
    k_r = k_f / Kc;
    q_r = phi_r * k_r;
    qdot = q_f - q_r;
    wdot[31] -= 1 * qdot;
    wdot[5] -= 1 * qdot;
    wdot[30] += 1 * qdot;
    wdot[4] += 1 * qdot;

    /*reaction 131: CH3OH + HO2 <=> CH2OH + H2O2 */
    phi_f = sc[31]*sc[8];
    k_f = k_f_save[130];
    q_f = phi_f * k_f;
    phi_r = sc[30]*sc[9];
    Kc = Kc_save[130];
    k_r = k_f / Kc;
    q_r = phi_r * k_r;
    qdot = q_f - q_r;
    wdot[31] -= 1 * qdot;
    wdot[8] -= 1 * qdot;
    wdot[30] += 1 * qdot;
    wdot[9] += 1 * qdot;

    /*reaction 132: CH3OH + O2 <=> CH2OH + HO2 */
    phi_f = sc[31]*sc[3];
    k_f = k_f_save[131];
    q_f = phi_f * k_f;
    phi_r = sc[30]*sc[8];
    Kc = Kc_save[131];
    k_r = k_f / Kc;
    q_r = phi_r * k_r;
    qdot = q_f - q_r;
    wdot[31] -= 1 * qdot;
    wdot[3] -= 1 * qdot;
    wdot[30] += 1 * qdot;
    wdot[8] += 1 * qdot;

    /*reaction 133: C3H4 + O <=> C2H4 + CO */
    phi_f = sc[32]*sc[5];
    k_f = k_f_save[132];
    q_f = phi_f * k_f;
    phi_r = sc[18]*sc[10];
    Kc = Kc_save[132];
    k_r = k_f / Kc;
    q_r = phi_r * k_r;
    qdot = q_f - q_r;
    wdot[32] -= 1 * qdot;
    wdot[5] -= 1 * qdot;
    wdot[18] += 1 * qdot;
    wdot[10] += 1 * qdot;

    /*reaction 134: CH3 + C2H2 <=> C3H4 + H */
    phi_f = sc[15]*sc[23];
    k_f = k_f_save[133];
    q_f = phi_f * k_f;
    phi_r = sc[32]*sc[2];
    Kc = Kc_save[133];
    k_r = k_f / Kc;
    q_r = phi_r * k_r;
    qdot = q_f - q_r;
    wdot[15] -= 1 * qdot;
    wdot[23] -= 1 * qdot;
    wdot[32] += 1 * qdot;
    wdot[2] += 1 * qdot;

    /*reaction 135: C3H4 + O <=> HCCO + CH3 */
    phi_f = sc[32]*sc[5];
    k_f = k_f_save[134];
    q_f = phi_f * k_f;
    phi_r = sc[28]*sc[15];
    Kc = Kc_save[134];
    k_r = k_f / Kc;
    q_r = phi_r * k_r;
    qdot = q_f - q_r;
    wdot[32] -= 1 * qdot;
    wdot[5] -= 1 * qdot;
    wdot[28] += 1 * qdot;
    wdot[15] += 1 * qdot;

    /*reaction 136: C3H3 + H (+M) <=> C3H4 (+M) */
    phi_f = sc[33]*sc[2];
    alpha = mixture;
    k_f = k_f_save[135];
    redP = 1e-12 * alpha / k_f * 9e+15*exp(1*tc[0]);
    F = redP / (1 + redP);
    logPred = log10(redP);
    logFcent = log10((0.5*exp(T/-1e+30))+ (0.5*exp(T/-1e-30)));
    troe_c = -.4 - .67 * logFcent;
    troe_n = .75 - 1.27 * logFcent;
    troe = (troe_c + logPred) / (troe_n - .14*(troe_c + logPred));
    F_troe = pow(10, logFcent / (1.0 + troe*troe));
    F *= F_troe;
    k_f *= F;
    q_f = phi_f * k_f;
    phi_r = sc[32];
    Kc = Kc_save[135];
    k_r = k_f / Kc;
    q_r = phi_r * k_r;
    qdot = q_f - q_r;
    wdot[33] -= 1 * qdot;
    wdot[2] -= 1 * qdot;
    wdot[32] += 1 * qdot;

    /*reaction 137: C3H3 + HO2 <=> C3H4 + O2 */
    phi_f = sc[33]*sc[8];
    k_f = k_f_save[136];
    q_f = phi_f * k_f;
    phi_r = sc[32]*sc[3];
    Kc = Kc_save[136];
    k_r = k_f / Kc;
    q_r = phi_r * k_r;
    qdot = q_f - q_r;
    wdot[33] -= 1 * qdot;
    wdot[8] -= 1 * qdot;
    wdot[32] += 1 * qdot;
    wdot[3] += 1 * qdot;

    /*reaction 138: C3H4 + OH <=> C3H3 + H2O */
    phi_f = sc[32]*sc[4];
    k_f = k_f_save[137];
    q_f = phi_f * k_f;
    phi_r = sc[33]*sc[7];
    Kc = Kc_save[137];
    k_r = k_f / Kc;
    q_r = phi_r * k_r;
    qdot = q_f - q_r;
    wdot[32] -= 1 * qdot;
    wdot[4] -= 1 * qdot;
    wdot[33] += 1 * qdot;
    wdot[7] += 1 * qdot;

    /*reaction 139: C3H3 + O2 <=> CH2CO + HCO */
    phi_f = sc[33]*sc[3];
    k_f = k_f_save[138];
    q_f = phi_f * k_f;
    phi_r = sc[27]*sc[12];
    Kc = Kc_save[138];
    k_r = k_f / Kc;
    q_r = phi_r * k_r;
    qdot = q_f - q_r;
    wdot[33] -= 1 * qdot;
    wdot[3] -= 1 * qdot;
    wdot[27] += 1 * qdot;
    wdot[12] += 1 * qdot;

    /*reaction 140: C3H4 + H (+M) <=> C3H5 (+M) */
    phi_f = sc[32]*sc[2];
    alpha = mixture;
    k_f = k_f_save[139];
    redP = 1e-12 * alpha / k_f * 3e+24*exp(-2*tc[0]);
    F = redP / (1 + redP);
    logPred = log10(redP);
    logFcent = log10((0.2*exp(T/-1e+30))+ (0.8*exp(T/-1e-30)));
    troe_c = -.4 - .67 * logFcent;
    troe_n = .75 - 1.27 * logFcent;
    troe = (troe_c + logPred) / (troe_n - .14*(troe_c + logPred));
    F_troe = pow(10, logFcent / (1.0 + troe*troe));
    F *= F_troe;
    k_f *= F;
    q_f = phi_f * k_f;
    phi_r = sc[34];
    Kc = Kc_save[139];
    k_r = k_f / Kc;
    q_r = phi_r * k_r;
    qdot = q_f - q_r;
    wdot[32] -= 1 * qdot;
    wdot[2] -= 1 * qdot;
    wdot[34] += 1 * qdot;

    /*reaction 141: C3H5 + H <=> C3H4 + H2 */
    phi_f = sc[34]*sc[2];
    k_f = k_f_save[140];
    q_f = phi_f * k_f;
    phi_r = sc[32]*sc[6];
    Kc = Kc_save[140];
    k_r = k_f / Kc;
    q_r = phi_r * k_r;
    qdot = q_f - q_r;
    wdot[34] -= 1 * qdot;
    wdot[2] -= 1 * qdot;
    wdot[32] += 1 * qdot;
    wdot[6] += 1 * qdot;

    /*reaction 142: C3H5 + O2 <=> C3H4 + HO2 */
    phi_f = sc[34]*sc[3];
    k_f = k_f_save[141];
    q_f = phi_f * k_f;
    phi_r = sc[32]*sc[8];
    Kc = Kc_save[141];
    k_r = k_f / Kc;
    q_r = phi_r * k_r;
    qdot = q_f - q_r;
    wdot[34] -= 1 * qdot;
    wdot[3] -= 1 * qdot;
    wdot[32] += 1 * qdot;
    wdot[8] += 1 * qdot;

    /*reaction 143: C3H5 + CH3 <=> C3H4 + CH4 */
    phi_f = sc[34]*sc[15];
    k_f = k_f_save[142];
    q_f = phi_f * k_f;
    phi_r = sc[32]*sc[14];
    Kc = Kc_save[142];
    k_r = k_f / Kc;
    q_r = phi_r * k_r;
    qdot = q_f - q_r;
    wdot[34] -= 1 * qdot;
    wdot[15] -= 1 * qdot;
    wdot[32] += 1 * qdot;
    wdot[14] += 1 * qdot;

    /*reaction 144: C2H2 + CH3 (+M) <=> C3H5 (+M) */
    phi_f = sc[23]*sc[15];
    alpha = mixture;
    k_f = k_f_save[143];
    redP = 1e-12 * alpha / k_f * 2e+09*exp(1*tc[0]);
    F = redP / (1 + redP);
    logPred = log10(redP);
    logFcent = log10((0.5*exp(T/-1e+30))+ (0.5*exp(T/-1e-30)));
    troe_c = -.4 - .67 * logFcent;
    troe_n = .75 - 1.27 * logFcent;
    troe = (troe_c + logPred) / (troe_n - .14*(troe_c + logPred));
    F_troe = pow(10, logFcent / (1.0 + troe*troe));
    F *= F_troe;
    k_f *= F;
    q_f = phi_f * k_f;
    phi_r = sc[34];
    Kc = Kc_save[143];
    k_r = k_f / Kc;
    q_r = phi_r * k_r;
    qdot = q_f - q_r;
    wdot[23] -= 1 * qdot;
    wdot[15] -= 1 * qdot;
    wdot[34] += 1 * qdot;

    /*reaction 145: C3H5 + OH <=> C3H4 + H2O */
    phi_f = sc[34]*sc[4];
    k_f = k_f_save[144];
    q_f = phi_f * k_f;
    phi_r = sc[32]*sc[7];
    Kc = Kc_save[144];
    k_r = k_f / Kc;
    q_r = phi_r * k_r;
    qdot = q_f - q_r;
    wdot[34] -= 1 * qdot;
    wdot[4] -= 1 * qdot;
    wdot[32] += 1 * qdot;
    wdot[7] += 1 * qdot;

    /*reaction 146: C3H3 + HCO <=> C3H4 + CO */
    phi_f = sc[33]*sc[12];
    k_f = k_f_save[145];
    q_f = phi_f * k_f;
    phi_r = sc[32]*sc[10];
    Kc = Kc_save[145];
    k_r = k_f / Kc;
    q_r = phi_r * k_r;
    qdot = q_f - q_r;
    wdot[33] -= 1 * qdot;
    wdot[12] -= 1 * qdot;
    wdot[32] += 1 * qdot;
    wdot[10] += 1 * qdot;

    /*reaction 147: C3H3 + HO2 <=> OH + CO + C2H3 */
    phi_f = sc[33]*sc[8];
    k_f = k_f_save[146];
    q_f = phi_f * k_f;
    phi_r = sc[4]*sc[10]*sc[24];
    Kc = Kc_save[146];
    k_r = k_f / Kc;
    q_r = phi_r * k_r;
    qdot = q_f - q_r;
    wdot[33] -= 1 * qdot;
    wdot[8] -= 1 * qdot;
    wdot[4] += 1 * qdot;
    wdot[10] += 1 * qdot;
    wdot[24] += 1 * qdot;

    /*reaction 148: C3H4 + O2 <=> CH3 + HCO + CO */
    phi_f = sc[32]*sc[3];
    k_f = k_f_save[147];
    q_f = phi_f * k_f;
    phi_r = sc[15]*sc[12]*sc[10];
    Kc = Kc_save[147];
    k_r = k_f / Kc;
    q_r = phi_r * k_r;
    qdot = q_f - q_r;
    wdot[32] -= 1 * qdot;
    wdot[3] -= 1 * qdot;
    wdot[15] += 1 * qdot;
    wdot[12] += 1 * qdot;
    wdot[10] += 1 * qdot;

    /*reaction 149: C3H6 + O <=> C2H5 + HCO */
    phi_f = sc[35]*sc[5];
    k_f = k_f_save[148];
    q_f = phi_f * k_f;
    phi_r = sc[20]*sc[12];
    Kc = Kc_save[148];
    k_r = k_f / Kc;
    q_r = phi_r * k_r;
    qdot = q_f - q_r;
    wdot[35] -= 1 * qdot;
    wdot[5] -= 1 * qdot;
    wdot[20] += 1 * qdot;
    wdot[12] += 1 * qdot;

    /*reaction 150: C3H6 + OH <=> C3H5 + H2O */
    phi_f = sc[35]*sc[4];
    k_f = k_f_save[149];
    q_f = phi_f * k_f;
    phi_r = sc[34]*sc[7];
    Kc = Kc_save[149];
    k_r = k_f / Kc;
    q_r = phi_r * k_r;
    qdot = q_f - q_r;
    wdot[35] -= 1 * qdot;
    wdot[4] -= 1 * qdot;
    wdot[34] += 1 * qdot;
    wdot[7] += 1 * qdot;

    /*reaction 151: C3H6 + O <=> CH2CO + CH3 + H */
    phi_f = sc[35]*sc[5];
    k_f = k_f_save[150];
    q_f = phi_f * k_f;
    phi_r = sc[27]*sc[15]*sc[2];
    Kc = Kc_save[150];
    k_r = k_f / Kc;
    q_r = phi_r * k_r;
    qdot = q_f - q_r;
    wdot[35] -= 1 * qdot;
    wdot[5] -= 1 * qdot;
    wdot[27] += 1 * qdot;
    wdot[15] += 1 * qdot;
    wdot[2] += 1 * qdot;

    /*reaction 152: C3H6 + H <=> C3H5 + H2 */
    phi_f = sc[35]*sc[2];
    k_f = k_f_save[151];
    q_f = phi_f * k_f;
    phi_r = sc[34]*sc[6];
    Kc = Kc_save[151];
    k_r = k_f / Kc;
    q_r = phi_r * k_r;
    qdot = q_f - q_r;
    wdot[35] -= 1 * qdot;
    wdot[2] -= 1 * qdot;
    wdot[34] += 1 * qdot;
    wdot[6] += 1 * qdot;

    /*reaction 153: C3H5 + H (+M) <=> C3H6 (+M) */
    phi_f = sc[34]*sc[2];
    alpha = mixture + -0.3*sc[1] + sc[6] + 5*sc[7] + 0.5*sc[10] + sc[11] + sc[14] + 2*sc[21];
    k_f = k_f_save[152];
    redP = 1e-12 * alpha / k_f * 1.33e+60*exp(-12*tc[0]-3003.1819650225929763*invT);
    F = redP / (1 + redP);
    logPred = log10(redP);
    logFcent = log10((0.98*exp(T/-1097))+ (0.02*exp(T/-1097))+ (exp(-6860/T)));
    troe_c = -.4 - .67 * logFcent;
    troe_n = .75 - 1.27 * logFcent;
    troe = (troe_c + logPred) / (troe_n - .14*(troe_c + logPred));
    F_troe = pow(10, logFcent / (1.0 + troe*troe));
    F *= F_troe;
    k_f *= F;
    q_f = phi_f * k_f;
    phi_r = sc[35];
    Kc = Kc_save[152];
    k_r = k_f / Kc;
    q_r = phi_r * k_r;
    qdot = q_f - q_r;
    wdot[34] -= 1 * qdot;
    wdot[2] -= 1 * qdot;
    wdot[35] += 1 * qdot;

    /*reaction 154: C3H5 + HO2 <=> C3H6 + O2 */
    phi_f = sc[34]*sc[8];
    k_f = k_f_save[153];
    q_f = phi_f * k_f;
    phi_r = sc[35]*sc[3];
    Kc = Kc_save[153];
    k_r = k_f / Kc;
    q_r = phi_r * k_r;
    qdot = q_f - q_r;
    wdot[34] -= 1 * qdot;
    wdot[8] -= 1 * qdot;
    wdot[35] += 1 * qdot;
    wdot[3] += 1 * qdot;

    /*reaction 155: C3H5 + HO2 <=> OH + C2H3 + CH2O */
    phi_f = sc[34]*sc[8];
    k_f = k_f_save[154];
    q_f = phi_f * k_f;
    phi_r = sc[4]*sc[24]*sc[13];
    Kc = Kc_save[154];
    k_r = k_f / Kc;
    q_r = phi_r * k_r;
    qdot = q_f - q_r;
    wdot[34] -= 1 * qdot;
    wdot[8] -= 1 * qdot;
    wdot[4] += 1 * qdot;
    wdot[24] += 1 * qdot;
    wdot[13] += 1 * qdot;

    /*reaction 156: C2H3 + CH3 (+M) <=> C3H6 (+M) */
    phi_f = sc[24]*sc[15];
    alpha = mixture + -0.3*sc[1] + sc[6] + 5*sc[7] + 0.5*sc[10] + sc[11] + sc[14] + 2*sc[21];
    k_f = k_f_save[155];
    redP = 1e-12 * alpha / k_f * 4.27e+58*exp(-11.94*tc[0]-4916.7035940783034675*invT);
    F = redP / (1 + redP);
    logPred = log10(redP);
    logFcent = log10((0.825*exp(T/-1341))+ (0.175*exp(T/-60000))+ (exp(-10140/T)));
    troe_c = -.4 - .67 * logFcent;
    troe_n = .75 - 1.27 * logFcent;
    troe = (troe_c + logPred) / (troe_n - .14*(troe_c + logPred));
    F_troe = pow(10, logFcent / (1.0 + troe*troe));
    F *= F_troe;
    k_f *= F;
    q_f = phi_f * k_f;
    phi_r = sc[35];
    Kc = Kc_save[155];
    k_r = k_f / Kc;
    q_r = phi_r * k_r;
    qdot = q_f - q_r;
    wdot[24] -= 1 * qdot;
    wdot[15] -= 1 * qdot;
    wdot[35] += 1 * qdot;

    /*reaction 157: C3H6 + H <=> C2H4 + CH3 */
    phi_f = sc[35]*sc[2];
    k_f = k_f_save[156];
    q_f = phi_f * k_f;
    phi_r = sc[18]*sc[15];
    Kc = Kc_save[156];
    k_r = k_f / Kc;
    q_r = phi_r * k_r;
    qdot = q_f - q_r;
    wdot[35] -= 1 * qdot;
    wdot[2] -= 1 * qdot;
    wdot[18] += 1 * qdot;
    wdot[15] += 1 * qdot;

    /*reaction 158: CH3 + C2H3 <=> C3H5 + H */
    phi_f = sc[15]*sc[24];
    k_f = k_f_save[157];
    q_f = phi_f * k_f;
    phi_r = sc[34]*sc[2];
    Kc = Kc_save[157];
    k_r = k_f / Kc;
    q_r = phi_r * k_r;
    qdot = q_f - q_r;
    wdot[15] -= 1 * qdot;
    wdot[24] -= 1 * qdot;
    wdot[34] += 1 * qdot;
    wdot[2] += 1 * qdot;

    /*reaction 159: C3H8 (+M) <=> CH3 + C2H5 (+M) */
    phi_f = sc[36];
    alpha = mixture;
    k_f = k_f_save[158];
    redP = 1e-6 * alpha / k_f * 7.83e+18*exp(-32698.259086825320992*invT);
    F = redP / (1 + redP);
    logPred = log10(redP);
    logFcent = log10((0.24*exp(T/-1946))+ (0.76*exp(T/-38)));
    troe_c = -.4 - .67 * logFcent;
    troe_n = .75 - 1.27 * logFcent;
    troe = (troe_c + logPred) / (troe_n - .14*(troe_c + logPred));
    F_troe = pow(10, logFcent / (1.0 + troe*troe));
    F *= F_troe;
    k_f *= F;
    q_f = phi_f * k_f;
    phi_r = sc[15]*sc[20];
    Kc = Kc_save[158];
    k_r = k_f / Kc;
    q_r = phi_r * k_r;
    qdot = q_f - q_r;
    wdot[36] -= 1 * qdot;
    wdot[15] += 1 * qdot;
    wdot[20] += 1 * qdot;

    /*reaction 160: C3H8 + O2 <=> I-C3H7 + HO2 */
    phi_f = sc[36]*sc[3];
    k_f = k_f_save[159];
    q_f = phi_f * k_f;
    phi_r = sc[37]*sc[8];
    Kc = Kc_save[159];
    k_r = k_f / Kc;
    q_r = phi_r * k_r;
    qdot = q_f - q_r;
    wdot[36] -= 1 * qdot;
    wdot[3] -= 1 * qdot;
    wdot[37] += 1 * qdot;
    wdot[8] += 1 * qdot;

    /*reaction 161: C3H8 + O2 <=> N-C3H7 + HO2 */
    phi_f = sc[36]*sc[3];
    k_f = k_f_save[160];
    q_f = phi_f * k_f;
    phi_r = sc[38]*sc[8];
    Kc = Kc_save[160];
    k_r = k_f / Kc;
    q_r = phi_r * k_r;
    qdot = q_f - q_r;
    wdot[36] -= 1 * qdot;
    wdot[3] -= 1 * qdot;
    wdot[38] += 1 * qdot;
    wdot[8] += 1 * qdot;

    /*reaction 162: C3H8 + H <=> I-C3H7 + H2 */
    phi_f = sc[36]*sc[2];
    k_f = k_f_save[161];
    q_f = phi_f * k_f;
    phi_r = sc[37]*sc[6];
    Kc = Kc_save[161];
    k_r = k_f / Kc;
    q_r = phi_r * k_r;
    qdot = q_f - q_r;
    wdot[36] -= 1 * qdot;
    wdot[2] -= 1 * qdot;
    wdot[37] += 1 * qdot;
    wdot[6] += 1 * qdot;

    /*reaction 163: C3H8 + H <=> N-C3H7 + H2 */
    phi_f = sc[36]*sc[2];
    k_f = k_f_save[162];
    q_f = phi_f * k_f;
    phi_r = sc[38]*sc[6];
    Kc = Kc_save[162];
    k_r = k_f / Kc;
    q_r = phi_r * k_r;
    qdot = q_f - q_r;
    wdot[36] -= 1 * qdot;
    wdot[2] -= 1 * qdot;
    wdot[38] += 1 * qdot;
    wdot[6] += 1 * qdot;

    /*reaction 164: C3H8 + O <=> I-C3H7 + OH */
    phi_f = sc[36]*sc[5];
    k_f = k_f_save[163];
    q_f = phi_f * k_f;
    phi_r = sc[37]*sc[4];
    Kc = Kc_save[163];
    k_r = k_f / Kc;
    q_r = phi_r * k_r;
    qdot = q_f - q_r;
    wdot[36] -= 1 * qdot;
    wdot[5] -= 1 * qdot;
    wdot[37] += 1 * qdot;
    wdot[4] += 1 * qdot;

    /*reaction 165: C3H8 + O <=> N-C3H7 + OH */
    phi_f = sc[36]*sc[5];
    k_f = k_f_save[164];
    q_f = phi_f * k_f;
    phi_r = sc[38]*sc[4];
    Kc = Kc_save[164];
    k_r = k_f / Kc;
    q_r = phi_r * k_r;
    qdot = q_f - q_r;
    wdot[36] -= 1 * qdot;
    wdot[5] -= 1 * qdot;
    wdot[38] += 1 * qdot;
    wdot[4] += 1 * qdot;

    /*reaction 166: C3H8 + OH <=> N-C3H7 + H2O */
    phi_f = sc[36]*sc[4];
    k_f = k_f_save[165];
    q_f = phi_f * k_f;
    phi_r = sc[38]*sc[7];
    Kc = Kc_save[165];
    k_r = k_f / Kc;
    q_r = phi_r * k_r;
    qdot = q_f - q_r;
    wdot[36] -= 1 * qdot;
    wdot[4] -= 1 * qdot;
    wdot[38] += 1 * qdot;
    wdot[7] += 1 * qdot;

    /*reaction 167: C3H8 + OH <=> I-C3H7 + H2O */
    phi_f = sc[36]*sc[4];
    k_f = k_f_save[166];
    q_f = phi_f * k_f;
    phi_r = sc[37]*sc[7];
    Kc = Kc_save[166];
    k_r = k_f / Kc;
    q_r = phi_r * k_r;
    qdot = q_f - q_r;
    wdot[36] -= 1 * qdot;
    wdot[4] -= 1 * qdot;
    wdot[37] += 1 * qdot;
    wdot[7] += 1 * qdot;

    /*reaction 168: C3H8 + HO2 <=> I-C3H7 + H2O2 */
    phi_f = sc[36]*sc[8];
    k_f = k_f_save[167];
    q_f = phi_f * k_f;
    phi_r = sc[37]*sc[9];
    Kc = Kc_save[167];
    k_r = k_f / Kc;
    q_r = phi_r * k_r;
    qdot = q_f - q_r;
    wdot[36] -= 1 * qdot;
    wdot[8] -= 1 * qdot;
    wdot[37] += 1 * qdot;
    wdot[9] += 1 * qdot;

    /*reaction 169: C3H8 + HO2 <=> N-C3H7 + H2O2 */
    phi_f = sc[36]*sc[8];
    k_f = k_f_save[168];
    q_f = phi_f * k_f;
    phi_r = sc[38]*sc[9];
    Kc = Kc_save[168];
    k_r = k_f / Kc;
    q_r = phi_r * k_r;
    qdot = q_f - q_r;
    wdot[36] -= 1 * qdot;
    wdot[8] -= 1 * qdot;
    wdot[38] += 1 * qdot;
    wdot[9] += 1 * qdot;

    /*reaction 170: I-C3H7 + C3H8 <=> N-C3H7 + C3H8 */
    phi_f = sc[37]*sc[36];
    k_f = k_f_save[169];
    q_f = phi_f * k_f;
    phi_r = sc[38]*sc[36];
    Kc = Kc_save[169];
    k_r = k_f / Kc;
    q_r = phi_r * k_r;
    qdot = q_f - q_r;
    wdot[37] -= 1 * qdot;
    wdot[36] -= 1 * qdot;
    wdot[38] += 1 * qdot;
    wdot[36] += 1 * qdot;

    /*reaction 171: C3H6 + H (+M) <=> I-C3H7 (+M) */
    phi_f = sc[35]*sc[2];
    alpha = mixture + -0.3*sc[1] + sc[6] + 5*sc[7] + 0.5*sc[10] + sc[11] + sc[14] + 2*sc[21];
    k_f = k_f_save[170];
    redP = 1e-12 * alpha / k_f * 8.7e+42*exp(-7.5*tc[0]-2381.3772597543329539*invT);
    F = redP / (1 + redP);
    logPred = log10(redP);
    logFcent = log10((0*exp(T/-1000))+ (1*exp(T/-645.4))+ (exp(-6844.3/T)));
    troe_c = -.4 - .67 * logFcent;
    troe_n = .75 - 1.27 * logFcent;
    troe = (troe_c + logPred) / (troe_n - .14*(troe_c + logPred));
    F_troe = pow(10, logFcent / (1.0 + troe*troe));
    F *= F_troe;
    k_f *= F;
    q_f = phi_f * k_f;
    phi_r = sc[37];
    Kc = Kc_save[170];
    k_r = k_f / Kc;
    q_r = phi_r * k_r;
    qdot = q_f - q_r;
    wdot[35] -= 1 * qdot;
    wdot[2] -= 1 * qdot;
    wdot[37] += 1 * qdot;

    /*reaction 172: I-C3H7 + O2 <=> C3H6 + HO2 */
    phi_f = sc[37]*sc[3];
    k_f = k_f_save[171];
    q_f = phi_f * k_f;
    phi_r = sc[35]*sc[8];
    Kc = Kc_save[171];
    k_r = k_f / Kc;
    q_r = phi_r * k_r;
    qdot = q_f - q_r;
    wdot[37] -= 1 * qdot;
    wdot[3] -= 1 * qdot;
    wdot[35] += 1 * qdot;
    wdot[8] += 1 * qdot;

    /*reaction 173: N-C3H7 (+M) <=> CH3 + C2H4 (+M) */
    phi_f = sc[38];
    alpha = mixture;
    k_f = k_f_save[172];
    redP = 1e-6 * alpha / k_f * 5.49e+49*exp(-10*tc[0]-18004.669600493594771*invT);
    F = redP / (1 + redP);
    logPred = log10(redP);
    logFcent = log10((2.17*exp(T/-251))+ (exp(-1185/T)));
    troe_c = -.4 - .67 * logFcent;
    troe_n = .75 - 1.27 * logFcent;
    troe = (troe_c + logPred) / (troe_n - .14*(troe_c + logPred));
    F_troe = pow(10, logFcent / (1.0 + troe*troe));
    F *= F_troe;
    k_f *= F;
    q_f = phi_f * k_f;
    phi_r = sc[15]*sc[18];
    Kc = Kc_save[172];
    k_r = k_f / Kc;
    q_r = phi_r * k_r;
    qdot = q_f - q_r;
    wdot[38] -= 1 * qdot;
    wdot[15] += 1 * qdot;
    wdot[18] += 1 * qdot;

    /*reaction 174: H + C3H6 (+M) <=> N-C3H7 (+M) */
    phi_f = sc[2]*sc[35];
    alpha = mixture + -0.3*sc[1] + sc[6] + 5*sc[7] + 0.5*sc[10] + sc[11] + sc[14] + 2*sc[21];
    k_f = k_f_save[173];
    redP = 1e-12 * alpha / k_f * 6.26e+38*exp(-6.66*tc[0]-3522.7582046326238014*invT);
    F = redP / (1 + redP);
    logPred = log10(redP);
    logFcent = log10((0*exp(T/-1000))+ (1*exp(T/-1310))+ (exp(-48097/T)));
    troe_c = -.4 - .67 * logFcent;
    troe_n = .75 - 1.27 * logFcent;
    troe = (troe_c + logPred) / (troe_n - .14*(troe_c + logPred));
    F_troe = pow(10, logFcent / (1.0 + troe*troe));
    F *= F_troe;
    k_f *= F;
    q_f = phi_f * k_f;
    phi_r = sc[38];
    Kc = Kc_save[173];
    k_r = k_f / Kc;
    q_r = phi_r * k_r;
    qdot = q_f - q_r;
    wdot[2] -= 1 * qdot;
    wdot[35] -= 1 * qdot;
    wdot[38] += 1 * qdot;

    /*reaction 175: N-C3H7 + O2 <=> C3H6 + HO2 */
    phi_f = sc[38]*sc[3];
    k_f = k_f_save[174];
    q_f = phi_f * k_f;
    phi_r = sc[35]*sc[8];
    Kc = Kc_save[174];
    k_r = k_f / Kc;
    q_r = phi_r * k_r;
    qdot = q_f - q_r;
    wdot[38] -= 1 * qdot;
    wdot[3] -= 1 * qdot;
    wdot[35] += 1 * qdot;
    wdot[8] += 1 * qdot;

    return;
}


/*compute the progress rate for each reaction */
void progressRate(double * qdot, double * sc, double T)
{

    int id; /*loop counter */
    double mixture;                 /*mixture concentration */
    double g_RT[39];                /*Gibbs free energy */
    double Kc;                      /*equilibrium constant */
    double k_f;                     /*forward reaction rate */
    double k_r;                     /*reverse reaction rate */
    double q_f;                     /*forward progress rate */
    double q_r;                     /*reverse progress rate */
    double phi_f;                   /*forward phase space factor */
    double phi_r;                   /*reverse phase space factor */
    double alpha;                   /*enhancement */
    double redP;                    /*reduced pressure */
    double logPred;                 /*log of above */
    double F;                       /*fallof rate enhancement */

    double F_troe;                  /*TROE intermediate */
    double logFcent;                /*TROE intermediate */
    double troe;                    /*TROE intermediate */
    double troe_c;                  /*TROE intermediate */
    double troe_n;                  /*TROE intermediate */

    double X;                       /*SRI intermediate */
    double F_sri;                   /*SRI intermediate */
    double tc[] = { log(T), T, T*T, T*T*T, T*T*T*T }; /*temperature cache */

    double invT = 1.0 / tc[1];

    /*reference concentration: P_atm / (RT) in inverse mol/m^3 */
    double refC = 101325 / 8.31451 / T;

    /*compute the mixture concentration */
    mixture = 0.0;
    for (id = 0; id < 39; ++id) {
        mixture += sc[id];
    }

    /*compute the Gibbs free energy */
    gibbs(g_RT, tc);

    if (T != T_save)
    {
        T_save = T;

        k_f_save[0] = 1e-06 * 3.52e+16*exp(-0.7*tc[0]-8589.8028097867463657*invT);
        k_f_save[1] = 1e-06 * 50600*exp(2.67*tc[0]-3165.5498544111437695*invT);
        k_f_save[2] = 1e-06 * 1.17e+09*exp(1.3*tc[0]-1829.3334808665815672*invT);
        k_f_save[3] = 1e-06 * 7.6*exp(3.84*tc[0]-6430.9278309846276898*invT);
        k_f_save[4] = 1e-12 * 6.2e+16*exp(-0.6*tc[0]);
        k_f_save[5] = 1e-06 * 1.7e+13*exp(-24060.348763787642383*invT);
        k_f_save[6] = 1e-12 * 7.2e+17*exp(-1*tc[0]);
        k_f_save[7] = 1e-12 * 3.8e+22*exp(-2*tc[0]);
        k_f_save[8] = 1e-12 * 6.17e+15*exp(-0.5*tc[0]);
        k_f_save[9] = 1e-06 * 4.65e+12*exp(0.44*tc[0]);
        k_f_save[10] = 1e-12 * 1e+16;
        k_f_save[11] = 1e-06 * 7.08e+13*exp(-150.93983890812566528*invT);
        k_f_save[12] = 1e-06 * 4.28e+13*exp(-709.60091695120945587*invT);
        k_f_save[13] = 1e-06 * 3.1e+13*exp(-865.95536718339383242*invT);
        k_f_save[14] = 1e-06 * 2e+13;
        k_f_save[15] = 1e-06 * 2.89e+13*exp(+250.16410107150028352*invT);
        k_f_save[16] = 1e-06 * 7.4e+13*exp(-0.37*tc[0]);
        k_f_save[17] = 1e-06 * 3.02e+12*exp(-697.57403863847662251*invT);
        k_f_save[18] = 1e-06 * 4.79e+13*exp(-4005.0460893065260279*invT);
        k_f_save[19] = 1e-06 * 1e+13*exp(-1804.0770364098425489*invT);
        k_f_save[20] = 1e-06 * 7.08e+12*exp(-721.62779526394217555*invT);
        k_f_save[21] = 1e-06 * 9.63e+06*exp(2*tc[0]-2008.5389998929581452*invT);
        k_f_save[22] = 1e-06 * 4.4e+06*exp(1.5*tc[0]+372.84329202803286307*invT);
        k_f_save[23] = 1e-06 * 6.03e+13*exp(-11546.079949389681133*invT);
        k_f_save[24] = 1e-06 * 1.86e+17*exp(-1*tc[0]-8554.9248626798198529*invT);
        k_f_save[25] = 1e-06 * 1e+14;
        k_f_save[26] = 1e-06 * 3e+13;
        k_f_save[27] = 1e-06 * 3e+13;
        k_f_save[28] = 1e-06 * 5.02e+13;
        k_f_save[29] = 1e-06 * 3e+12;
        k_f_save[30] = 1e-06 * 6.26e+16*exp(-39208.564314673982153*invT);
        k_f_save[31] = 1e-06 * 1.26e+08*exp(1.62*tc[0]-1089.6603359668820303*invT);
        k_f_save[32] = 1e-06 * 3.5e+13*exp(-1767.9913693049861649*invT);
        k_f_save[33] = 1e-06 * 3.9e+10*exp(0.89*tc[0]-204.46196348311565316*invT);
        k_f_save[34] = 1e-06 * 13000*exp(3*tc[0]-4044.7347877385441279*invT);
        k_f_save[35] = 1e-06 * 1.6e+07*exp(1.83*tc[0]-1399.9638607687043077*invT);
        k_f_save[36] = 1e-06 * 1.9e+09*exp(1.44*tc[0]-4365.8625030218254324*invT);
        k_f_save[37] = 1e-06 * 3.98e+13*exp(-28628.267854630037618*invT);
        k_f_save[38] = 1e-06 * 9.03e+12*exp(-12400.00843826034361*invT);
        k_f_save[39] = 1e-06 * 1.8e+14*exp(-7601.1682516468199537*invT);
        k_f_save[40] = 1e-06 * 1.55e+14*exp(-6783.3203977143575685*invT);
        k_f_save[41] = 1e-06 * 1e+13*exp(-1259.2443523430724781*invT);
        k_f_save[42] = 1e-06 * 8.43e+13;
        k_f_save[43] = 1e-06 * 4.22e+13;
        k_f_save[44] = 1e-06 * 5e+12;
        k_f_save[45] = 1e-06 * 3.3e+11*exp(-4499.3608522931599509*invT);
        k_f_save[46] = 1e-06 * 1.33e+14*exp(-15803.69551543025409*invT);
        k_f_save[47] = 1e-06 * 1e+14*exp(-16104.377537581891374*invT);
        k_f_save[48] = 1e-06 * 3.16e+13*exp(-7396.7062881637039027*invT);
        k_f_save[49] = 1e-06 * 2.11e+14;
        k_f_save[50] = 1e-06 * 1.81e+13;
        k_f_save[51] = 1e-06 * 3e+13;
        k_f_save[52] = 1e-06 * 3.13e+13;
        k_f_save[53] = 1e-06 * 3e+12;
        k_f_save[54] = 1e-06 * 6e+12;
        k_f_save[55] = 1e-06 * 6.02e+12*exp(+899.63062645904562942*invT);
        k_f_save[56] = 1e-06 * 2.5e+13;
        k_f_save[57] = 1e-06 * 1.13e+07*exp(2*tc[0]-1509.4084534145727048*invT);
        k_f_save[58] = 1e-06 * 8e+13;
        k_f_save[59] = 1e-06 * 4e+13;
        k_f_save[60] = 1e-06 * 2.63e+12*exp(-750.49733538115901865*invT);
        k_f_save[61] = 1e-06 * 6.58e+12*exp(-750.49733538115901865*invT);
        k_f_save[62] = 1e-06 * 1e+14;
        k_f_save[63] = 1e-06 * 4e+13;
        k_f_save[64] = 1e-06 * 1.77e+11*exp(0.76*tc[0]+240.54259842131403957*invT);
        k_f_save[65] = 1e-06 * 1.17e+15*exp(-0.75*tc[0]);
        k_f_save[66] = 1e-06 * 48*exp(3.22*tc[0]+1623.6688295521923919*invT);
        k_f_save[67] = 1e-06 * 2e+13;
        k_f_save[68] = 1e-06 * 1.6e+13;
        k_f_save[69] = 1e-06 * 5e+12;
        k_f_save[70] = 1e-06 * 1e+13;
        k_f_save[71] = 1e-06 * 4.28e-13*exp(7.6*tc[0]+1780.0182476177189983*invT);
        k_f_save[72] = 1e-06 * 1e+13*exp(-6795.3472760270897197*invT);
        k_f_save[73] = 1e-06 * 540*exp(3.5*tc[0]-2621.9248903423049342*invT);
        k_f_save[74] = 1e-06 * 1.4*exp(4.3*tc[0]-1395.1531094436111289*invT);
        k_f_save[75] = 1e-06 * 2.2e+07*exp(1.9*tc[0]-565.27837719841579656*invT);
        k_f_save[76] = 1e-06 * 0.55*exp(4*tc[0]-4173.427417851442442*invT);
        k_f_save[77] = 1 * 8.85e+20*exp(-1.23*tc[0]-51440.191424389413442*invT);
        k_f_save[78] = 1e-06 * 3e+13;
        k_f_save[79] = 1e-06 * 3.06e+13;
        k_f_save[80] = 1e-06 * 4.24e+13;
        k_f_save[81] = 1e-06 * 2e+12*exp(-2513.6779533610520048*invT);
        k_f_save[82] = 1 * 1.11e+10*exp(1.037*tc[0]-18502.592426974046248*invT);
        k_f_save[83] = 1e-06 * 4.49e+07*exp(2.12*tc[0]-6723.1860061506931743*invT);
        k_f_save[84] = 1e-06 * 553000*exp(2.31*tc[0]-1491.3681359454735684*invT);
        k_f_save[85] = 1e-06 * 2.25e+06*exp(2.08*tc[0]);
        k_f_save[86] = 1e-06 * 1.21e+06*exp(2.08*tc[0]);
        k_f_save[87] = 1e-06 * 5.01e+14*exp(-32558.143438398656144*invT);
        k_f_save[88] = 1e-06 * 4.22e+13*exp(-28996.899223165284639*invT);
        k_f_save[89] = 1e-06 * 2.23e+12*exp(-8649.9372013504107599*invT);
        k_f_save[90] = 1e-06 * 4e+12*exp(-8558.5329261736405897*invT);
        k_f_save[91] = 1e-06 * 2.6e+17*exp(-48594.68736943006661*invT);
        k_f_save[92] = 1e-06 * 3.5e+16*exp(-35996.109634843189269*invT);
        k_f_save[93] = 1e-06 * 1.21e+13;
        k_f_save[94] = 1 * 6.38e+09*exp(1*tc[0]-18934.36742273447453*invT);
        k_f_save[95] = 1e-06 * 1.7e+29*exp(-5.312*tc[0]-3272.4733315613302693*invT);
        k_f_save[96] = 1e-06 * 7e+14*exp(-0.611*tc[0]-2648.1424786307311479*invT);
        k_f_save[97] = 1e-06 * 5.19e+15*exp(-1.26*tc[0]-1666.9655914780303192*invT);
        k_f_save[98] = 1 * 1.047e+37*exp(-7.189*tc[0]-22312.798055447645311*invT);
        k_f_save[99] = 1e-06 * 4e+14*exp(-5364.1185638119377472*invT);
        k_f_save[100] = 1e-06 * 1.6e+14*exp(-4979.2483934711726761*invT);
        k_f_save[101] = 1e-06 * 4.6e+15*exp(-0.54*tc[0]-22611.074701936737256*invT);
        k_f_save[102] = 1e-06 * 1.9e+07*exp(1.7*tc[0]-502.73357780554715646*invT);
        k_f_save[103] = 1e-06 * 3.37e+07*exp(2*tc[0]-7045.5164092652476029*invT);
        k_f_save[104] = 1e-06 * 1.5e+09*exp(1.43*tc[0]-1353.0540031823884419*invT);
        k_f_save[105] = 1e-06 * 2e+13*exp(-1154.6105110222970325*invT);
        k_f_save[106] = 1e-06 * 1e+13*exp(-1006.674875609025662*invT);
        k_f_save[107] = 1e-06 * 9e+10;
        k_f_save[108] = 1e-06 * 1.5e+14;
        k_f_save[109] = 1e-06 * 2e+12;
        k_f_save[110] = 1e-06 * 9.64e+13;
        k_f_save[111] = 1e-06 * 2.88e+07*exp(1.7*tc[0]-503.93626563682039432*invT);
        k_f_save[112] = 1e-06 * 1.4e+07*exp(1.7*tc[0]-503.93626563682039432*invT);
        k_f_save[113] = 1e-06 * 2e+13;
        k_f_save[114] = 1e-06 * 1.02e+13;
        k_f_save[115] = 1e-06 * 6.02e+11;
        k_f_save[116] = 1e-06 * 4.5e+15*exp(-12628.524158368922144*invT);
        k_f_save[117] = 1e-06 * 2.41e+12;
        k_f_save[118] = 1e-06 * 3e+13;
        k_f_save[119] = 1e-06 * 1.75e+14*exp(-1407.1799877563439622*invT);
        k_f_save[120] = 1e-06 * 2.4e+13;
        k_f_save[121] = 1e-06 * 5e+12;
        k_f_save[122] = 1e-06 * 5e+13*exp(-12640.551036681656115*invT);
        k_f_save[123] = 1e-06 * 1e+14*exp(-9621.7341298525097955*invT);
        k_f_save[124] = 1e-06 * 1.02e+13;
        k_f_save[125] = 1e-06 * 1.44e+06*exp(2*tc[0]+422.15349311023737755*invT);
        k_f_save[126] = 1e-06 * 6.3e+06*exp(2*tc[0]-757.7134623687986732*invT);
        k_f_save[127] = 1e-06 * 1.64e+07*exp(2*tc[0]-2273.135354939737681*invT);
        k_f_save[128] = 1e-06 * 3.83e+07*exp(2*tc[0]-2946.6556369527488641*invT);
        k_f_save[129] = 1e-06 * 1e+13*exp(-2357.3235031288677419*invT);
        k_f_save[130] = 1e-06 * 6.2e+12*exp(-9754.0348234592293011*invT);
        k_f_save[131] = 1e-06 * 2e+13*exp(-22611.074701936737256*invT);
        k_f_save[132] = 1e-06 * 2e+07*exp(1.8*tc[0]-503.21666580471963925*invT);
        k_f_save[133] = 1e-06 * 2.56e+09*exp(1.1*tc[0]-6865.82780223969894*invT);
        k_f_save[134] = 1e-06 * 7.3e+12*exp(-1132.2374980606193731*invT);
        k_f_save[135] = 1e-06 * 3e+13;
        k_f_save[136] = 1e-06 * 2.5e+12;
        k_f_save[137] = 1e-06 * 5.3e+06*exp(2*tc[0]-1006.4333316094392785*invT);
        k_f_save[138] = 1e-06 * 3e+10*exp(-1443.2606226945424623*invT);
        k_f_save[139] = 1e-06 * 4e+13;
        k_f_save[140] = 1e-06 * 1.8e+13;
        k_f_save[141] = 1e-06 * 4.99e+15*exp(-1.4*tc[0]-11286.173573668202152*invT);
        k_f_save[142] = 1e-06 * 3e+12*exp(-0.32*tc[0]+65.911318887102183339*invT);
        k_f_save[143] = 1e-06 * 6e+08;
        k_f_save[144] = 1e-06 * 6e+12;
        k_f_save[145] = 1e-06 * 2.5e+13;
        k_f_save[146] = 1e-06 * 8e+11;
        k_f_save[147] = 1e-06 * 4e+14*exp(-21047.540263948205393*invT);
        k_f_save[148] = 1e-06 * 3.5e+07*exp(1.65*tc[0]+489.50401166154108523*invT);
        k_f_save[149] = 1e-06 * 3.1e+06*exp(2*tc[0]+150.09946707623177531*invT);
        k_f_save[150] = 1e-06 * 1.2e+08*exp(1.65*tc[0]-164.77326505109741106*invT);
        k_f_save[151] = 1e-06 * 170000*exp(2.5*tc[0]-1254.4336010179792993*invT);
        k_f_save[152] = 1e-06 * 2e+14;
        k_f_save[153] = 1e-06 * 2.66e+12;
        k_f_save[154] = 1e-06 * 3e+12;
        k_f_save[155] = 1e-06 * 2.5e+13;
        k_f_save[156] = 1e-06 * 1.6e+22*exp(-2.39*tc[0]-5628.714918858717283*invT);
        k_f_save[157] = 1e-06 * 1.5e+24*exp(-2.83*tc[0]-9369.1646531184633204*invT);
        k_f_save[158] = 1 * 1.1e+17*exp(-42467.928852091099543*invT);
        k_f_save[159] = 1e-06 * 4e+13*exp(-23902.791625724184996*invT);
        k_f_save[160] = 1e-06 * 4e+13*exp(-25629.891608765879937*invT);
        k_f_save[161] = 1e-06 * 1.3e+06*exp(2.4*tc[0]-2249.9219701461661316*invT);
        k_f_save[162] = 1e-06 * 1.33e+06*exp(2.54*tc[0]-3402.4843893386382661*invT);
        k_f_save[163] = 1e-06 * 47600*exp(2.71*tc[0]-1060.4335120169437232*invT);
        k_f_save[164] = 1e-06 * 190000*exp(2.68*tc[0]-1871.1860109615599868*invT);
        k_f_save[165] = 1e-06 * 1400*exp(2.66*tc[0]-265.32098704553845891*invT);
        k_f_save[166] = 1e-06 * 27000*exp(2.39*tc[0]-197.84466432778359035*invT);
        k_f_save[167] = 1e-06 * 9640*exp(2.6*tc[0]-7003.4173030040255981*invT);
        k_f_save[168] = 1e-06 * 47600*exp(2.55*tc[0]-8298.7473224519562791*invT);
        k_f_save[169] = 1e-06 * 0.0084*exp(4.2*tc[0]-4365.8625030218254324*invT);
        k_f_save[170] = 1e-06 * 1.33e+13*exp(-785.3752824880841672*invT);
        k_f_save[171] = 1e-06 * 1.3e+11;
        k_f_save[172] = 1 * 1.23e+13*exp(-0.1*tc[0]-15202.341535460298473*invT);
        k_f_save[173] = 1e-06 * 1.33e+13*exp(-1640.5064591900184041*invT);
        k_f_save[174] = 1e-06 * 9e+10;

        Kc_save[0] = exp((g_RT[2] + g_RT[3]) - (g_RT[4] + g_RT[5]));
        Kc_save[1] = exp((g_RT[6] + g_RT[5]) - (g_RT[4] + g_RT[2]));
        Kc_save[2] = exp((g_RT[6] + g_RT[4]) - (g_RT[7] + g_RT[2]));
        Kc_save[3] = exp((g_RT[7] + g_RT[5]) - (2 * g_RT[4]));
        Kc_save[4] = 1.0 / (refC) * exp((g_RT[2] + g_RT[5]) - (g_RT[4]));
        Kc_save[5] = exp((g_RT[6] + g_RT[3]) - (2 * g_RT[4]));
        Kc_save[6] = 1.0 / (refC) * exp((2 * g_RT[2]) - (g_RT[6]));
        Kc_save[7] = 1.0 / (refC) * exp((g_RT[2] + g_RT[4]) - (g_RT[7]));
        Kc_save[8] = 1.0 / (refC) * exp((2 * g_RT[5]) - (g_RT[3]));
        Kc_save[9] = 1.0 / (refC) * exp((g_RT[2] + g_RT[3]) - (g_RT[8]));
        Kc_save[10] = 1.0 / (refC) * exp((g_RT[5] + g_RT[4]) - (g_RT[8]));
        Kc_save[11] = exp((g_RT[8] + g_RT[2]) - (2 * g_RT[4]));
        Kc_save[12] = exp((g_RT[8] + g_RT[2]) - (g_RT[6] + g_RT[3]));
        Kc_save[13] = exp((g_RT[8] + g_RT[2]) - (g_RT[7] + g_RT[5]));
        Kc_save[14] = exp((g_RT[8] + g_RT[5]) - (g_RT[4] + g_RT[3]));
        Kc_save[15] = exp((g_RT[8] + g_RT[4]) - (g_RT[7] + g_RT[3]));
        Kc_save[16] = 1.0 / (refC) * exp((2 * g_RT[4]) - (g_RT[9]));
        Kc_save[17] = exp((2 * g_RT[8]) - (g_RT[9] + g_RT[3]));
        Kc_save[18] = exp((g_RT[9] + g_RT[2]) - (g_RT[8] + g_RT[6]));
        Kc_save[19] = exp((g_RT[9] + g_RT[2]) - (g_RT[7] + g_RT[4]));
        Kc_save[20] = exp((g_RT[9] + g_RT[4]) - (g_RT[7] + g_RT[8]));
        Kc_save[21] = exp((g_RT[9] + g_RT[5]) - (g_RT[8] + g_RT[4]));
        Kc_save[22] = exp((g_RT[10] + g_RT[4]) - (g_RT[11] + g_RT[2]));
        Kc_save[23] = exp((g_RT[10] + g_RT[8]) - (g_RT[11] + g_RT[4]));
        Kc_save[24] = refC * exp((g_RT[12]) - (g_RT[10] + g_RT[2]));
        Kc_save[25] = exp((g_RT[12] + g_RT[2]) - (g_RT[10] + g_RT[6]));
        Kc_save[26] = exp((g_RT[12] + g_RT[5]) - (g_RT[10] + g_RT[4]));
        Kc_save[27] = exp((g_RT[12] + g_RT[5]) - (g_RT[11] + g_RT[2]));
        Kc_save[28] = exp((g_RT[12] + g_RT[4]) - (g_RT[10] + g_RT[7]));
        Kc_save[29] = exp((g_RT[12] + g_RT[3]) - (g_RT[10] + g_RT[8]));
        Kc_save[30] = refC * exp((g_RT[13]) - (g_RT[12] + g_RT[2]));
        Kc_save[31] = exp((g_RT[13] + g_RT[2]) - (g_RT[12] + g_RT[6]));
        Kc_save[32] = exp((g_RT[13] + g_RT[5]) - (g_RT[12] + g_RT[4]));
        Kc_save[33] = exp((g_RT[13] + g_RT[4]) - (g_RT[12] + g_RT[7]));
        Kc_save[34] = exp((g_RT[14] + g_RT[2]) - (g_RT[6] + g_RT[15]));
        Kc_save[35] = exp((g_RT[14] + g_RT[4]) - (g_RT[7] + g_RT[15]));
        Kc_save[36] = exp((g_RT[14] + g_RT[5]) - (g_RT[15] + g_RT[4]));
        Kc_save[37] = exp((g_RT[14] + g_RT[3]) - (g_RT[15] + g_RT[8]));
        Kc_save[38] = exp((g_RT[14] + g_RT[8]) - (g_RT[15] + g_RT[9]));
        Kc_save[39] = exp((g_RT[15] + g_RT[2]) - (g_RT[16] + g_RT[6]));
        Kc_save[40] = exp((g_RT[15] + g_RT[2]) - (g_RT[17] + g_RT[6]));
        Kc_save[41] = exp((g_RT[15] + g_RT[4]) - (g_RT[17] + g_RT[7]));
        Kc_save[42] = exp((g_RT[15] + g_RT[5]) - (g_RT[13] + g_RT[2]));
        Kc_save[43] = exp((g_RT[15] + g_RT[16]) - (g_RT[18] + g_RT[2]));
        Kc_save[44] = exp((g_RT[15] + g_RT[8]) - (g_RT[19] + g_RT[4]));
        Kc_save[45] = exp((g_RT[15] + g_RT[3]) - (g_RT[13] + g_RT[4]));
        Kc_save[46] = exp((g_RT[15] + g_RT[3]) - (g_RT[19] + g_RT[5]));
        Kc_save[47] = exp((2 * g_RT[15]) - (g_RT[18] + g_RT[6]));
        Kc_save[48] = exp((2 * g_RT[15]) - (g_RT[20] + g_RT[2]));
        Kc_save[49] = 1.0 / (refC) * exp((g_RT[15] + g_RT[2]) - (g_RT[14]));
        Kc_save[50] = 1.0 / (refC) * exp((2 * g_RT[15]) - (g_RT[21]));
        Kc_save[51] = exp((g_RT[17] + g_RT[4]) - (g_RT[13] + g_RT[2]));
        Kc_save[52] = refC * exp((g_RT[17] + g_RT[3]) - (g_RT[10] + g_RT[4] + g_RT[2]));
        Kc_save[53] = exp((g_RT[17] + g_RT[11]) - (g_RT[10] + g_RT[13]));
        Kc_save[54] = exp((g_RT[17]) - (g_RT[16]));
        Kc_save[55] = exp((g_RT[16] + g_RT[2]) - (g_RT[22] + g_RT[6]));
        Kc_save[56] = exp((g_RT[16] + g_RT[4]) - (g_RT[13] + g_RT[2]));
        Kc_save[57] = exp((g_RT[16] + g_RT[4]) - (g_RT[22] + g_RT[7]));
        Kc_save[58] = refC * exp((g_RT[16] + g_RT[5]) - (g_RT[10] + 2 * g_RT[2]));
        Kc_save[59] = exp((g_RT[16] + g_RT[5]) - (g_RT[10] + g_RT[6]));
        Kc_save[60] = exp((g_RT[16] + g_RT[3]) - (g_RT[11] + g_RT[6]));
        Kc_save[61] = refC * exp((g_RT[16] + g_RT[3]) - (g_RT[10] + g_RT[4] + g_RT[2]));
        Kc_save[62] = refC * exp((2 * g_RT[16]) - (g_RT[23] + 2 * g_RT[2]));
        Kc_save[63] = exp((g_RT[22] + g_RT[5]) - (g_RT[10] + g_RT[2]));
        Kc_save[64] = exp((g_RT[22] + g_RT[3]) - (g_RT[12] + g_RT[5]));
        Kc_save[65] = exp((g_RT[22] + g_RT[7]) - (g_RT[13] + g_RT[2]));
        Kc_save[66] = exp((g_RT[22] + g_RT[11]) - (g_RT[12] + g_RT[10]));
        Kc_save[67] = exp((g_RT[19] + g_RT[2]) - (g_RT[13] + g_RT[6]));
        Kc_save[68] = exp((g_RT[19] + g_RT[2]) - (g_RT[17] + g_RT[7]));
        Kc_save[69] = exp((g_RT[19] + g_RT[4]) - (g_RT[13] + g_RT[7]));
        Kc_save[70] = exp((g_RT[19] + g_RT[5]) - (g_RT[4] + g_RT[13]));
        Kc_save[71] = exp((g_RT[19] + g_RT[3]) - (g_RT[13] + g_RT[8]));
        Kc_save[72] = refC * exp((g_RT[19]) - (g_RT[13] + g_RT[2]));
        Kc_save[73] = exp((g_RT[21] + g_RT[2]) - (g_RT[20] + g_RT[6]));
        Kc_save[74] = exp((g_RT[21] + g_RT[5]) - (g_RT[20] + g_RT[4]));
        Kc_save[75] = exp((g_RT[21] + g_RT[4]) - (g_RT[20] + g_RT[7]));
        Kc_save[76] = exp((g_RT[21] + g_RT[15]) - (g_RT[20] + g_RT[14]));
        Kc_save[77] = refC * exp((g_RT[21]) - (g_RT[20] + g_RT[2]));
        Kc_save[78] = exp((g_RT[20] + g_RT[2]) - (g_RT[18] + g_RT[6]));
        Kc_save[79] = exp((g_RT[20] + g_RT[5]) - (g_RT[18] + g_RT[4]));
        Kc_save[80] = exp((g_RT[20] + g_RT[5]) - (g_RT[15] + g_RT[13]));
        Kc_save[81] = exp((g_RT[20] + g_RT[3]) - (g_RT[18] + g_RT[8]));
        Kc_save[82] = refC * exp((g_RT[20]) - (g_RT[18] + g_RT[2]));
        Kc_save[83] = exp((g_RT[18] + g_RT[2]) - (g_RT[24] + g_RT[6]));
        Kc_save[84] = exp((g_RT[18] + g_RT[4]) - (g_RT[24] + g_RT[7]));
        Kc_save[85] = exp((g_RT[18] + g_RT[5]) - (g_RT[15] + g_RT[12]));
        Kc_save[86] = exp((g_RT[18] + g_RT[5]) - (g_RT[25] + g_RT[2]));
        Kc_save[87] = exp((2 * g_RT[18]) - (g_RT[24] + g_RT[20]));
        Kc_save[88] = exp((g_RT[18] + g_RT[3]) - (g_RT[24] + g_RT[8]));
        Kc_save[89] = exp((g_RT[18] + g_RT[8]) - (g_RT[26] + g_RT[4]));
        Kc_save[90] = refC * exp((g_RT[26] + g_RT[8]) - (g_RT[15] + g_RT[10] + g_RT[9]));
        Kc_save[91] = refC * exp((g_RT[18]) - (g_RT[24] + g_RT[2]));
        Kc_save[92] = refC * exp((g_RT[18]) - (g_RT[23] + g_RT[6]));
        Kc_save[93] = exp((g_RT[24] + g_RT[2]) - (g_RT[23] + g_RT[6]));
        Kc_save[94] = refC * exp((g_RT[24]) - (g_RT[23] + g_RT[2]));
        Kc_save[95] = exp((g_RT[24] + g_RT[3]) - (g_RT[13] + g_RT[12]));
        Kc_save[96] = exp((g_RT[24] + g_RT[3]) - (g_RT[25] + g_RT[5]));
        Kc_save[97] = exp((g_RT[24] + g_RT[3]) - (g_RT[23] + g_RT[8]));
        Kc_save[98] = refC * exp((g_RT[25]) - (g_RT[27] + g_RT[2]));
        Kc_save[99] = exp((g_RT[23] + g_RT[5]) - (g_RT[28] + g_RT[2]));
        Kc_save[100] = exp((g_RT[23] + g_RT[5]) - (g_RT[16] + g_RT[10]));
        Kc_save[101] = exp((g_RT[23] + g_RT[3]) - (g_RT[13] + g_RT[10]));
        Kc_save[102] = exp((g_RT[23] + g_RT[4]) - (g_RT[27] + g_RT[2]));
        Kc_save[103] = exp((g_RT[23] + g_RT[4]) - (g_RT[29] + g_RT[7]));
        Kc_save[104] = exp((g_RT[27] + g_RT[2]) - (g_RT[15] + g_RT[10]));
        Kc_save[105] = exp((g_RT[27] + g_RT[5]) - (g_RT[16] + g_RT[11]));
        Kc_save[106] = exp((g_RT[27] + g_RT[5]) - (g_RT[28] + g_RT[4]));
        Kc_save[107] = exp((g_RT[27] + g_RT[15]) - (g_RT[20] + g_RT[10]));
        Kc_save[108] = exp((g_RT[28] + g_RT[2]) - (g_RT[17] + g_RT[10]));
        Kc_save[109] = refC * exp((g_RT[28] + g_RT[4]) - (g_RT[12] + g_RT[10] + g_RT[2]));
        Kc_save[110] = refC * exp((g_RT[28] + g_RT[5]) - (2 * g_RT[10] + g_RT[2]));
        Kc_save[111] = refC * exp((g_RT[28] + g_RT[3]) - (2 * g_RT[10] + g_RT[4]));
        Kc_save[112] = refC * exp((g_RT[28] + g_RT[3]) - (g_RT[11] + g_RT[10] + g_RT[2]));
        Kc_save[113] = exp((g_RT[29] + g_RT[4]) - (g_RT[28] + g_RT[2]));
        Kc_save[114] = exp((g_RT[29] + g_RT[5]) - (g_RT[10] + g_RT[22]));
        Kc_save[115] = exp((g_RT[29] + g_RT[3]) - (g_RT[28] + g_RT[5]));
        Kc_save[116] = exp((g_RT[29] + g_RT[3]) - (g_RT[22] + g_RT[11]));
        Kc_save[117] = exp((g_RT[29] + g_RT[3]) - (g_RT[12] + g_RT[10]));
        Kc_save[118] = exp((g_RT[30] + g_RT[2]) - (g_RT[13] + g_RT[6]));
        Kc_save[119] = exp((g_RT[30] + g_RT[2]) - (g_RT[15] + g_RT[4]));
        Kc_save[120] = exp((g_RT[30] + g_RT[4]) - (g_RT[13] + g_RT[7]));
        Kc_save[121] = exp((g_RT[30] + g_RT[3]) - (g_RT[13] + g_RT[8]));
        Kc_save[122] = refC * exp((g_RT[30]) - (g_RT[13] + g_RT[2]));
        Kc_save[123] = exp((g_RT[19]) - (g_RT[30]));
        Kc_save[124] = exp((g_RT[27] + g_RT[4]) - (g_RT[30] + g_RT[10]));
        Kc_save[125] = exp((g_RT[31] + g_RT[4]) - (g_RT[30] + g_RT[7]));
        Kc_save[126] = exp((g_RT[31] + g_RT[4]) - (g_RT[19] + g_RT[7]));
        Kc_save[127] = exp((g_RT[31] + g_RT[2]) - (g_RT[30] + g_RT[6]));
        Kc_save[128] = exp((g_RT[31] + g_RT[2]) - (g_RT[19] + g_RT[6]));
        Kc_save[129] = exp((g_RT[31] + g_RT[5]) - (g_RT[30] + g_RT[4]));
        Kc_save[130] = exp((g_RT[31] + g_RT[8]) - (g_RT[30] + g_RT[9]));
        Kc_save[131] = exp((g_RT[31] + g_RT[3]) - (g_RT[30] + g_RT[8]));
        Kc_save[132] = exp((g_RT[32] + g_RT[5]) - (g_RT[18] + g_RT[10]));
        Kc_save[133] = exp((g_RT[15] + g_RT[23]) - (g_RT[32] + g_RT[2]));
        Kc_save[134] = exp((g_RT[32] + g_RT[5]) - (g_RT[28] + g_RT[15]));
        Kc_save[135] = 1.0 / (refC) * exp((g_RT[33] + g_RT[2]) - (g_RT[32]));
        Kc_save[136] = exp((g_RT[33] + g_RT[8]) - (g_RT[32] + g_RT[3]));
        Kc_save[137] = exp((g_RT[32] + g_RT[4]) - (g_RT[33] + g_RT[7]));
        Kc_save[138] = exp((g_RT[33] + g_RT[3]) - (g_RT[27] + g_RT[12]));
        Kc_save[139] = 1.0 / (refC) * exp((g_RT[32] + g_RT[2]) - (g_RT[34]));
        Kc_save[140] = exp((g_RT[34] + g_RT[2]) - (g_RT[32] + g_RT[6]));
        Kc_save[141] = exp((g_RT[34] + g_RT[3]) - (g_RT[32] + g_RT[8]));
        Kc_save[142] = exp((g_RT[34] + g_RT[15]) - (g_RT[32] + g_RT[14]));
        Kc_save[143] = 1.0 / (refC) * exp((g_RT[23] + g_RT[15]) - (g_RT[34]));
        Kc_save[144] = exp((g_RT[34] + g_RT[4]) - (g_RT[32] + g_RT[7]));
        Kc_save[145] = exp((g_RT[33] + g_RT[12]) - (g_RT[32] + g_RT[10]));
        Kc_save[146] = refC * exp((g_RT[33] + g_RT[8]) - (g_RT[4] + g_RT[10] + g_RT[24]));
        Kc_save[147] = refC * exp((g_RT[32] + g_RT[3]) - (g_RT[15] + g_RT[12] + g_RT[10]));
        Kc_save[148] = exp((g_RT[35] + g_RT[5]) - (g_RT[20] + g_RT[12]));
        Kc_save[149] = exp((g_RT[35] + g_RT[4]) - (g_RT[34] + g_RT[7]));
        Kc_save[150] = refC * exp((g_RT[35] + g_RT[5]) - (g_RT[27] + g_RT[15] + g_RT[2]));
        Kc_save[151] = exp((g_RT[35] + g_RT[2]) - (g_RT[34] + g_RT[6]));
        Kc_save[152] = 1.0 / (refC) * exp((g_RT[34] + g_RT[2]) - (g_RT[35]));
        Kc_save[153] = exp((g_RT[34] + g_RT[8]) - (g_RT[35] + g_RT[3]));
        Kc_save[154] = refC * exp((g_RT[34] + g_RT[8]) - (g_RT[4] + g_RT[24] + g_RT[13]));
        Kc_save[155] = 1.0 / (refC) * exp((g_RT[24] + g_RT[15]) - (g_RT[35]));
        Kc_save[156] = exp((g_RT[35] + g_RT[2]) - (g_RT[18] + g_RT[15]));
        Kc_save[157] = exp((g_RT[15] + g_RT[24]) - (g_RT[34] + g_RT[2]));
        Kc_save[158] = refC * exp((g_RT[36]) - (g_RT[15] + g_RT[20]));
        Kc_save[159] = exp((g_RT[36] + g_RT[3]) - (g_RT[37] + g_RT[8]));
        Kc_save[160] = exp((g_RT[36] + g_RT[3]) - (g_RT[38] + g_RT[8]));
        Kc_save[161] = exp((g_RT[36] + g_RT[2]) - (g_RT[37] + g_RT[6]));
        Kc_save[162] = exp((g_RT[36] + g_RT[2]) - (g_RT[38] + g_RT[6]));
        Kc_save[163] = exp((g_RT[36] + g_RT[5]) - (g_RT[37] + g_RT[4]));
        Kc_save[164] = exp((g_RT[36] + g_RT[5]) - (g_RT[38] + g_RT[4]));
        Kc_save[165] = exp((g_RT[36] + g_RT[4]) - (g_RT[38] + g_RT[7]));
        Kc_save[166] = exp((g_RT[36] + g_RT[4]) - (g_RT[37] + g_RT[7]));
        Kc_save[167] = exp((g_RT[36] + g_RT[8]) - (g_RT[37] + g_RT[9]));
        Kc_save[168] = exp((g_RT[36] + g_RT[8]) - (g_RT[38] + g_RT[9]));
        Kc_save[169] = exp((g_RT[37] + g_RT[36]) - (g_RT[38] + g_RT[36]));
        Kc_save[170] = 1.0 / (refC) * exp((g_RT[35] + g_RT[2]) - (g_RT[37]));
        Kc_save[171] = exp((g_RT[37] + g_RT[3]) - (g_RT[35] + g_RT[8]));
        Kc_save[172] = refC * exp((g_RT[38]) - (g_RT[15] + g_RT[18]));
        Kc_save[173] = 1.0 / (refC) * exp((g_RT[2] + g_RT[35]) - (g_RT[38]));
        Kc_save[174] = exp((g_RT[38] + g_RT[3]) - (g_RT[35] + g_RT[8]));
    }

    /*reaction 1: H + O2 <=> OH + O */
    phi_f = sc[2]*sc[3];
    k_f = k_f_save[0];
    q_f = phi_f * k_f;
    phi_r = sc[4]*sc[5];
    Kc = Kc_save[0];
    k_r = k_f / Kc;
    q_r = phi_r * k_r;
    qdot[0] = q_f - q_r;

    /*reaction 2: H2 + O <=> OH + H */
    phi_f = sc[6]*sc[5];
    k_f = k_f_save[1];
    q_f = phi_f * k_f;
    phi_r = sc[4]*sc[2];
    Kc = Kc_save[1];
    k_r = k_f / Kc;
    q_r = phi_r * k_r;
    qdot[1] = q_f - q_r;

    /*reaction 3: H2 + OH <=> H2O + H */
    phi_f = sc[6]*sc[4];
    k_f = k_f_save[2];
    q_f = phi_f * k_f;
    phi_r = sc[7]*sc[2];
    Kc = Kc_save[2];
    k_r = k_f / Kc;
    q_r = phi_r * k_r;
    qdot[2] = q_f - q_r;

    /*reaction 4: H2O + O <=> 2 OH */
    phi_f = sc[7]*sc[5];
    k_f = k_f_save[3];
    q_f = phi_f * k_f;
    phi_r = sc[4]*sc[4];
    Kc = Kc_save[3];
    k_r = k_f / Kc;
    q_r = phi_r * k_r;
    qdot[3] = q_f - q_r;

    /*reaction 5: H + O + M <=> OH + M */
    phi_f = sc[2]*sc[5];
    alpha = mixture + 1.5*sc[6] + 11*sc[7] + 0.9*sc[10] + 2.8*sc[11];
    k_f = alpha * k_f_save[4];
    q_f = phi_f * k_f;
    phi_r = sc[4];
    Kc = Kc_save[4];
    k_r = k_f / Kc;
    q_r = phi_r * k_r;
    qdot[4] = q_f - q_r;

    /*reaction 6: H2 + O2 <=> 2 OH */
    phi_f = sc[6]*sc[3];
    k_f = k_f_save[5];
    q_f = phi_f * k_f;
    phi_r = sc[4]*sc[4];
    Kc = Kc_save[5];
    k_r = k_f / Kc;
    q_r = phi_r * k_r;
    qdot[5] = q_f - q_r;

    /*reaction 7: 2 H + M <=> H2 + M */
    phi_f = sc[2]*sc[2];
    alpha = mixture + 1.5*sc[6] + 15.3*sc[7] + 0.9*sc[10] + 2.8*sc[11];
    k_f = alpha * k_f_save[6];
    q_f = phi_f * k_f;
    phi_r = sc[6];
    Kc = Kc_save[6];
    k_r = k_f / Kc;
    q_r = phi_r * k_r;
    qdot[6] = q_f - q_r;

    /*reaction 8: H + OH + M <=> H2O + M */
    phi_f = sc[2]*sc[4];
    alpha = mixture + 1.5*sc[6] + 11*sc[7] + 0.9*sc[10] + 2.8*sc[11];
    k_f = alpha * k_f_save[7];
    q_f = phi_f * k_f;
    phi_r = sc[7];
    Kc = Kc_save[7];
    k_r = k_f / Kc;
    q_r = phi_r * k_r;
    qdot[7] = q_f - q_r;

    /*reaction 9: 2 O + M <=> O2 + M */
    phi_f = sc[5]*sc[5];
    alpha = mixture + 1.5*sc[6] + 11*sc[7] + 0.9*sc[10] + 2.8*sc[11];
    k_f = alpha * k_f_save[8];
    q_f = phi_f * k_f;
    phi_r = sc[3];
    Kc = Kc_save[8];
    k_r = k_f / Kc;
    q_r = phi_r * k_r;
    qdot[8] = q_f - q_r;

    /*reaction 10: H + O2 (+M) <=> HO2 (+M) */
    phi_f = sc[2]*sc[3];
    alpha = mixture + -0.5*sc[1] + -0.7*sc[3] + 6*sc[7] + -0.25*sc[10] + 0.5*sc[11] + 0.5*sc[21];
    k_f = k_f_save[9];
    redP = 1e-12 * alpha / k_f * 2.6e+19*exp(-1.2*tc[0]);
    F = redP / (1 + redP);
    logPred = log10(redP);
    logFcent = log10((1*exp(T/-345))+ (0*exp(T/-1))+ (exp(-345/T)));
    troe_c = -.4 - .67 * logFcent;
    troe_n = .75 - 1.27 * logFcent;
    troe = (troe_c + logPred) / (troe_n - .14*(troe_c + logPred));
    F_troe = pow(10, logFcent / (1.0 + troe*troe));
    F *= F_troe;
    k_f *= F;
    q_f = phi_f * k_f;
    phi_r = sc[8];
    Kc = Kc_save[9];
    k_r = k_f / Kc;
    q_r = phi_r * k_r;
    qdot[9] = q_f - q_r;

    /*reaction 11: O + OH + M <=> HO2 + M */
    phi_f = sc[5]*sc[4];
    alpha = mixture;
    k_f = alpha * k_f_save[10];
    q_f = phi_f * k_f;
    phi_r = sc[8];
    Kc = Kc_save[10];
    k_r = k_f / Kc;
    q_r = phi_r * k_r;
    qdot[10] = q_f - q_r;

    /*reaction 12: HO2 + H <=> 2 OH */
    phi_f = sc[8]*sc[2];
    k_f = k_f_save[11];
    q_f = phi_f * k_f;
    phi_r = sc[4]*sc[4];
    Kc = Kc_save[11];
    k_r = k_f / Kc;
    q_r = phi_r * k_r;
    qdot[11] = q_f - q_r;

    /*reaction 13: HO2 + H <=> H2 + O2 */
    phi_f = sc[8]*sc[2];
    k_f = k_f_save[12];
    q_f = phi_f * k_f;
    phi_r = sc[6]*sc[3];
    Kc = Kc_save[12];
    k_r = k_f / Kc;
    q_r = phi_r * k_r;
    qdot[12] = q_f - q_r;

    /*reaction 14: HO2 + H <=> H2O + O */
    phi_f = sc[8]*sc[2];
    k_f = k_f_save[13];
    q_f = phi_f * k_f;
    phi_r = sc[7]*sc[5];
    Kc = Kc_save[13];
    k_r = k_f / Kc;
    q_r = phi_r * k_r;
    qdot[13] = q_f - q_r;

    /*reaction 15: HO2 + O <=> OH + O2 */
    phi_f = sc[8]*sc[5];
    k_f = k_f_save[14];
    q_f = phi_f * k_f;
    phi_r = sc[4]*sc[3];
    Kc = Kc_save[14];
    k_r = k_f / Kc;
    q_r = phi_r * k_r;
    qdot[14] = q_f - q_r;

    /*reaction 16: HO2 + OH <=> H2O + O2 */
    phi_f = sc[8]*sc[4];
    k_f = k_f_save[15];
    q_f = phi_f * k_f;
    phi_r = sc[7]*sc[3];
    Kc = Kc_save[15];
    k_r = k_f / Kc;
    q_r = phi_r * k_r;
    qdot[15] = q_f - q_r;

    /*reaction 17: 2 OH (+M) <=> H2O2 (+M) */
    phi_f = sc[4]*sc[4];
    alpha = mixture + -0.3*sc[1] + sc[6] + 5*sc[7] + 0.5*sc[10] + sc[11] + sc[14] + 2*sc[21];
    k_f = k_f_save[16];
    redP = 1e-12 * alpha / k_f * 1.34e+17*exp(-0.584*tc[0]+1154.6105110222970325*invT);
    F = redP / (1 + redP);
    logPred = log10(redP);
    logFcent = log10((0.265*exp(T/-94))+ (0.735*exp(T/-1756))+ (exp(-5182/T)));
    troe_c = -.4 - .67 * logFcent;
    troe_n = .75 - 1.27 * logFcent;
    troe = (troe_c + logPred) / (troe_n - .14*(troe_c + logPred));
    F_troe = pow(10, logFcent / (1.0 + troe*troe));
    F *= F_troe;
    k_f *= F;
    q_f = phi_f * k_f;
    phi_r = sc[9];
    Kc = Kc_save[16];
    k_r = k_f / Kc;
    q_r = phi_r * k_r;
    qdot[16] = q_f - q_r;

    /*reaction 18: 2 HO2 <=> H2O2 + O2 */
    phi_f = sc[8]*sc[8];
    k_f = k_f_save[17];
    q_f = phi_f * k_f;
    phi_r = sc[9]*sc[3];
    Kc = Kc_save[17];
    k_r = k_f / Kc;
    q_r = phi_r * k_r;
    qdot[17] = q_f - q_r;

    /*reaction 19: H2O2 + H <=> HO2 + H2 */
    phi_f = sc[9]*sc[2];
    k_f = k_f_save[18];
    q_f = phi_f * k_f;
    phi_r = sc[8]*sc[6];
    Kc = Kc_save[18];
    k_r = k_f / Kc;
    q_r = phi_r * k_r;
    qdot[18] = q_f - q_r;

    /*reaction 20: H2O2 + H <=> H2O + OH */
    phi_f = sc[9]*sc[2];
    k_f = k_f_save[19];
    q_f = phi_f * k_f;
    phi_r = sc[7]*sc[4];
    Kc = Kc_save[19];
    k_r = k_f / Kc;
    q_r = phi_r * k_r;
    qdot[19] = q_f - q_r;

    /*reaction 21: H2O2 + OH <=> H2O + HO2 */
    phi_f = sc[9]*sc[4];
    k_f = k_f_save[20];
    q_f = phi_f * k_f;
    phi_r = sc[7]*sc[8];
    Kc = Kc_save[20];
    k_r = k_f / Kc;
    q_r = phi_r * k_r;
    qdot[20] = q_f - q_r;

    /*reaction 22: H2O2 + O <=> HO2 + OH */
    phi_f = sc[9]*sc[5];
    k_f = k_f_save[21];
    q_f = phi_f * k_f;
    phi_r = sc[8]*sc[4];
    Kc = Kc_save[21];
    k_r = k_f / Kc;
    q_r = phi_r * k_r;
    qdot[21] = q_f - q_r;

    /*reaction 23: CO + OH <=> CO2 + H */
    phi_f = sc[10]*sc[4];
    k_f = k_f_save[22];
    q_f = phi_f * k_f;
    phi_r = sc[11]*sc[2];
    Kc = Kc_save[22];
    k_r = k_f / Kc;
    q_r = phi_r * k_r;
    qdot[22] = q_f - q_r;

    /*reaction 24: CO + HO2 <=> CO2 + OH */
    phi_f = sc[10]*sc[8];
    k_f = k_f_save[23];
    q_f = phi_f * k_f;
    phi_r = sc[11]*sc[4];
    Kc = Kc_save[23];
    k_r = k_f / Kc;
    q_r = phi_r * k_r;
    qdot[23] = q_f - q_r;

    /*reaction 25: HCO + M <=> CO + H + M */
    phi_f = sc[12];
    alpha = mixture + 0.9*sc[6] + 11*sc[7] + 1.5*sc[10] + 1.5*sc[11];
    k_f = alpha * k_f_save[24];
    q_f = phi_f * k_f;
    phi_r = sc[10]*sc[2];
    Kc = Kc_save[24];
    k_r = k_f / Kc;
    q_r = phi_r * k_r;
    qdot[24] = q_f - q_r;

    /*reaction 26: HCO + H <=> CO + H2 */
    phi_f = sc[12]*sc[2];
    k_f = k_f_save[25];
    q_f = phi_f * k_f;
    phi_r = sc[10]*sc[6];
    Kc = Kc_save[25];
    k_r = k_f / Kc;
    q_r = phi_r * k_r;
    qdot[25] = q_f - q_r;

    /*reaction 27: HCO + O <=> CO + OH */
    phi_f = sc[12]*sc[5];
    k_f = k_f_save[26];
    q_f = phi_f * k_f;
    phi_r = sc[10]*sc[4];
    Kc = Kc_save[26];
    k_r = k_f / Kc;
    q_r = phi_r * k_r;
    qdot[26] = q_f - q_r;

    /*reaction 28: HCO + O <=> CO2 + H */
    phi_f = sc[12]*sc[5];
    k_f = k_f_save[27];
    q_f = phi_f * k_f;
    phi_r = sc[11]*sc[2];
    Kc = Kc_save[27];
    k_r = k_f / Kc;
    q_r = phi_r * k_r;
    qdot[27] = q_f - q_r;

    /*reaction 29: HCO + OH <=> CO + H2O */
    phi_f = sc[12]*sc[4];
    k_f = k_f_save[28];
    q_f = phi_f * k_f;
    phi_r = sc[10]*sc[7];
    Kc = Kc_save[28];
    k_r = k_f / Kc;
    q_r = phi_r * k_r;
    qdot[28] = q_f - q_r;

    /*reaction 30: HCO + O2 <=> CO + HO2 */
    phi_f = sc[12]*sc[3];
    k_f = k_f_save[29];
    q_f = phi_f * k_f;
    phi_r = sc[10]*sc[8];
    Kc = Kc_save[29];
    k_r = k_f / Kc;
    q_r = phi_r * k_r;
    qdot[29] = q_f - q_r;

    /*reaction 31: CH2O + M <=> HCO + H + M */
    phi_f = sc[13];
    alpha = mixture + 1.5*sc[6] + 15.3*sc[7] + 0.9*sc[10] + 2.8*sc[11];
    k_f = alpha * k_f_save[30];
    q_f = phi_f * k_f;
    phi_r = sc[12]*sc[2];
    Kc = Kc_save[30];
    k_r = k_f / Kc;
    q_r = phi_r * k_r;
    qdot[30] = q_f - q_r;

    /*reaction 32: CH2O + H <=> HCO + H2 */
    phi_f = sc[13]*sc[2];
    k_f = k_f_save[31];
    q_f = phi_f * k_f;
    phi_r = sc[12]*sc[6];
    Kc = Kc_save[31];
    k_r = k_f / Kc;
    q_r = phi_r * k_r;
    qdot[31] = q_f - q_r;

    /*reaction 33: CH2O + O <=> HCO + OH */
    phi_f = sc[13]*sc[5];
    k_f = k_f_save[32];
    q_f = phi_f * k_f;
    phi_r = sc[12]*sc[4];
    Kc = Kc_save[32];
    k_r = k_f / Kc;
    q_r = phi_r * k_r;
    qdot[32] = q_f - q_r;

    /*reaction 34: CH2O + OH <=> HCO + H2O */
    phi_f = sc[13]*sc[4];
    k_f = k_f_save[33];
    q_f = phi_f * k_f;
    phi_r = sc[12]*sc[7];
    Kc = Kc_save[33];
    k_r = k_f / Kc;
    q_r = phi_r * k_r;
    qdot[33] = q_f - q_r;

    /*reaction 35: CH4 + H <=> H2 + CH3 */
    phi_f = sc[14]*sc[2];
    k_f = k_f_save[34];
    q_f = phi_f * k_f;
    phi_r = sc[6]*sc[15];
    Kc = Kc_save[34];
    k_r = k_f / Kc;
    q_r = phi_r * k_r;
    qdot[34] = q_f - q_r;

    /*reaction 36: CH4 + OH <=> H2O + CH3 */
    phi_f = sc[14]*sc[4];
    k_f = k_f_save[35];
    q_f = phi_f * k_f;
    phi_r = sc[7]*sc[15];
    Kc = Kc_save[35];
    k_r = k_f / Kc;
    q_r = phi_r * k_r;
    qdot[35] = q_f - q_r;

    /*reaction 37: CH4 + O <=> CH3 + OH */
    phi_f = sc[14]*sc[5];
    k_f = k_f_save[36];
    q_f = phi_f * k_f;
    phi_r = sc[15]*sc[4];
    Kc = Kc_save[36];
    k_r = k_f / Kc;
    q_r = phi_r * k_r;
    qdot[36] = q_f - q_r;

    /*reaction 38: CH4 + O2 <=> CH3 + HO2 */
    phi_f = sc[14]*sc[3];
    k_f = k_f_save[37];
    q_f = phi_f * k_f;
    phi_r = sc[15]*sc[8];
    Kc = Kc_save[37];
    k_r = k_f / Kc;
    q_r = phi_r * k_r;
    qdot[37] = q_f - q_r;

    /*reaction 39: CH4 + HO2 <=> CH3 + H2O2 */
    phi_f = sc[14]*sc[8];
    k_f = k_f_save[38];
    q_f = phi_f * k_f;
    phi_r = sc[15]*sc[9];
    Kc = Kc_save[38];
    k_r = k_f / Kc;
    q_r = phi_r * k_r;
    qdot[38] = q_f - q_r;

    /*reaction 40: CH3 + H <=> T-CH2 + H2 */
    phi_f = sc[15]*sc[2];
    k_f = k_f_save[39];
    q_f = phi_f * k_f;
    phi_r = sc[16]*sc[6];
    Kc = Kc_save[39];
    k_r = k_f / Kc;
    q_r = phi_r * k_r;
    qdot[39] = q_f - q_r;

    /*reaction 41: CH3 + H <=> S-CH2 + H2 */
    phi_f = sc[15]*sc[2];
    k_f = k_f_save[40];
    q_f = phi_f * k_f;
    phi_r = sc[17]*sc[6];
    Kc = Kc_save[40];
    k_r = k_f / Kc;
    q_r = phi_r * k_r;
    qdot[40] = q_f - q_r;

    /*reaction 42: CH3 + OH <=> S-CH2 + H2O */
    phi_f = sc[15]*sc[4];
    k_f = k_f_save[41];
    q_f = phi_f * k_f;
    phi_r = sc[17]*sc[7];
    Kc = Kc_save[41];
    k_r = k_f / Kc;
    q_r = phi_r * k_r;
    qdot[41] = q_f - q_r;

    /*reaction 43: CH3 + O <=> CH2O + H */
    phi_f = sc[15]*sc[5];
    k_f = k_f_save[42];
    q_f = phi_f * k_f;
    phi_r = sc[13]*sc[2];
    Kc = Kc_save[42];
    k_r = k_f / Kc;
    q_r = phi_r * k_r;
    qdot[42] = q_f - q_r;

    /*reaction 44: CH3 + T-CH2 <=> C2H4 + H */
    phi_f = sc[15]*sc[16];
    k_f = k_f_save[43];
    q_f = phi_f * k_f;
    phi_r = sc[18]*sc[2];
    Kc = Kc_save[43];
    k_r = k_f / Kc;
    q_r = phi_r * k_r;
    qdot[43] = q_f - q_r;

    /*reaction 45: CH3 + HO2 <=> CH3O + OH */
    phi_f = sc[15]*sc[8];
    k_f = k_f_save[44];
    q_f = phi_f * k_f;
    phi_r = sc[19]*sc[4];
    Kc = Kc_save[44];
    k_r = k_f / Kc;
    q_r = phi_r * k_r;
    qdot[44] = q_f - q_r;

    /*reaction 46: CH3 + O2 <=> CH2O + OH */
    phi_f = sc[15]*sc[3];
    k_f = k_f_save[45];
    q_f = phi_f * k_f;
    phi_r = sc[13]*sc[4];
    Kc = Kc_save[45];
    k_r = k_f / Kc;
    q_r = phi_r * k_r;
    qdot[45] = q_f - q_r;

    /*reaction 47: CH3 + O2 <=> CH3O + O */
    phi_f = sc[15]*sc[3];
    k_f = k_f_save[46];
    q_f = phi_f * k_f;
    phi_r = sc[19]*sc[5];
    Kc = Kc_save[46];
    k_r = k_f / Kc;
    q_r = phi_r * k_r;
    qdot[46] = q_f - q_r;

    /*reaction 48: 2 CH3 <=> C2H4 + H2 */
    phi_f = sc[15]*sc[15];
    k_f = k_f_save[47];
    q_f = phi_f * k_f;
    phi_r = sc[18]*sc[6];
    Kc = Kc_save[47];
    k_r = k_f / Kc;
    q_r = phi_r * k_r;
    qdot[47] = q_f - q_r;

    /*reaction 49: 2 CH3 <=> C2H5 + H */
    phi_f = sc[15]*sc[15];
    k_f = k_f_save[48];
    q_f = phi_f * k_f;
    phi_r = sc[20]*sc[2];
    Kc = Kc_save[48];
    k_r = k_f / Kc;
    q_r = phi_r * k_r;
    qdot[48] = q_f - q_r;

    /*reaction 50: CH3 + H (+M) <=> CH4 (+M) */
    phi_f = sc[15]*sc[2];
    alpha = mixture;
    k_f = k_f_save[49];
    redP = 1e-12 * alpha / k_f * 6.26e+23*exp(-1.8*tc[0]);
    F = redP / (1 + redP);
    logPred = log10(redP);
    logFcent = log10((0.63*exp(T/-3315))+ (0.37*exp(T/-61)));
    troe_c = -.4 - .67 * logFcent;
    troe_n = .75 - 1.27 * logFcent;
    troe = (troe_c + logPred) / (troe_n - .14*(troe_c + logPred));
    F_troe = pow(10, logFcent / (1.0 + troe*troe));
    F *= F_troe;
    k_f *= F;
    q_f = phi_f * k_f;
    phi_r = sc[14];
    Kc = Kc_save[49];
    k_r = k_f / Kc;
    q_r = phi_r * k_r;
    qdot[49] = q_f - q_r;

    /*reaction 51: 2 CH3 (+M) <=> C2H6 (+M) */
    phi_f = sc[15]*sc[15];
    alpha = mixture;
    k_f = k_f_save[50];
    redP = 1e-12 * alpha / k_f * 1.27e+41*exp(-7*tc[0]-1390.3423581185179501*invT);
    F = redP / (1 + redP);
    logPred = log10(redP);
    logFcent = log10((0.38*exp(T/-73))+ (0.62*exp(T/-1180)));
    troe_c = -.4 - .67 * logFcent;
    troe_n = .75 - 1.27 * logFcent;
    troe = (troe_c + logPred) / (troe_n - .14*(troe_c + logPred));
    F_troe = pow(10, logFcent / (1.0 + troe*troe));
    F *= F_troe;
    k_f *= F;
    q_f = phi_f * k_f;
    phi_r = sc[21];
    Kc = Kc_save[50];
    k_r = k_f / Kc;
    q_r = phi_r * k_r;
    qdot[50] = q_f - q_r;

    /*reaction 52: S-CH2 + OH <=> CH2O + H */
    phi_f = sc[17]*sc[4];
    k_f = k_f_save[51];
    q_f = phi_f * k_f;
    phi_r = sc[13]*sc[2];
    Kc = Kc_save[51];
    k_r = k_f / Kc;
    q_r = phi_r * k_r;
    qdot[51] = q_f - q_r;

    /*reaction 53: S-CH2 + O2 <=> CO + OH + H */
    phi_f = sc[17]*sc[3];
    k_f = k_f_save[52];
    q_f = phi_f * k_f;
    phi_r = sc[10]*sc[4]*sc[2];
    Kc = Kc_save[52];
    k_r = k_f / Kc;
    q_r = phi_r * k_r;
    qdot[52] = q_f - q_r;

    /*reaction 54: S-CH2 + CO2 <=> CO + CH2O */
    phi_f = sc[17]*sc[11];
    k_f = k_f_save[53];
    q_f = phi_f * k_f;
    phi_r = sc[10]*sc[13];
    Kc = Kc_save[53];
    k_r = k_f / Kc;
    q_r = phi_r * k_r;
    qdot[53] = q_f - q_r;

    /*reaction 55: S-CH2 + M <=> T-CH2 + M */
    phi_f = sc[17];
    alpha = mixture + 1.4*sc[6] + 14.4*sc[7] + 0.8*sc[10] + 2.6*sc[11];
    k_f = alpha * k_f_save[54];
    q_f = phi_f * k_f;
    phi_r = sc[16];
    Kc = Kc_save[54];
    k_r = k_f / Kc;
    q_r = phi_r * k_r;
    qdot[54] = q_f - q_r;

    /*reaction 56: T-CH2 + H <=> CH + H2 */
    phi_f = sc[16]*sc[2];
    k_f = k_f_save[55];
    q_f = phi_f * k_f;
    phi_r = sc[22]*sc[6];
    Kc = Kc_save[55];
    k_r = k_f / Kc;
    q_r = phi_r * k_r;
    qdot[55] = q_f - q_r;

    /*reaction 57: T-CH2 + OH <=> CH2O + H */
    phi_f = sc[16]*sc[4];
    k_f = k_f_save[56];
    q_f = phi_f * k_f;
    phi_r = sc[13]*sc[2];
    Kc = Kc_save[56];
    k_r = k_f / Kc;
    q_r = phi_r * k_r;
    qdot[56] = q_f - q_r;

    /*reaction 58: T-CH2 + OH <=> CH + H2O */
    phi_f = sc[16]*sc[4];
    k_f = k_f_save[57];
    q_f = phi_f * k_f;
    phi_r = sc[22]*sc[7];
    Kc = Kc_save[57];
    k_r = k_f / Kc;
    q_r = phi_r * k_r;
    qdot[57] = q_f - q_r;

    /*reaction 59: T-CH2 + O <=> CO + 2 H */
    phi_f = sc[16]*sc[5];
    k_f = k_f_save[58];
    q_f = phi_f * k_f;
    phi_r = sc[10]*sc[2]*sc[2];
    Kc = Kc_save[58];
    k_r = k_f / Kc;
    q_r = phi_r * k_r;
    qdot[58] = q_f - q_r;

    /*reaction 60: T-CH2 + O <=> CO + H2 */
    phi_f = sc[16]*sc[5];
    k_f = k_f_save[59];
    q_f = phi_f * k_f;
    phi_r = sc[10]*sc[6];
    Kc = Kc_save[59];
    k_r = k_f / Kc;
    q_r = phi_r * k_r;
    qdot[59] = q_f - q_r;

    /*reaction 61: T-CH2 + O2 <=> CO2 + H2 */
    phi_f = sc[16]*sc[3];
    k_f = k_f_save[60];
    q_f = phi_f * k_f;
    phi_r = sc[11]*sc[6];
    Kc = Kc_save[60];
    k_r = k_f / Kc;
    q_r = phi_r * k_r;
    qdot[60] = q_f - q_r;

    /*reaction 62: T-CH2 + O2 <=> CO + OH + H */
    phi_f = sc[16]*sc[3];
    k_f = k_f_save[61];
    q_f = phi_f * k_f;
    phi_r = sc[10]*sc[4]*sc[2];
    Kc = Kc_save[61];
    k_r = k_f / Kc;
    q_r = phi_r * k_r;
    qdot[61] = q_f - q_r;

    /*reaction 63: 2 T-CH2 <=> C2H2 + 2 H */
    phi_f = sc[16]*sc[16];
    k_f = k_f_save[62];
    q_f = phi_f * k_f;
    phi_r = sc[23]*sc[2]*sc[2];
    Kc = Kc_save[62];
    k_r = k_f / Kc;
    q_r = phi_r * k_r;
    qdot[62] = q_f - q_r;

    /*reaction 64: CH + O <=> CO + H */
    phi_f = sc[22]*sc[5];
    k_f = k_f_save[63];
    q_f = phi_f * k_f;
    phi_r = sc[10]*sc[2];
    Kc = Kc_save[63];
    k_r = k_f / Kc;
    q_r = phi_r * k_r;
    qdot[63] = q_f - q_r;

    /*reaction 65: CH + O2 <=> HCO + O */
    phi_f = sc[22]*sc[3];
    k_f = k_f_save[64];
    q_f = phi_f * k_f;
    phi_r = sc[12]*sc[5];
    Kc = Kc_save[64];
    k_r = k_f / Kc;
    q_r = phi_r * k_r;
    qdot[64] = q_f - q_r;

    /*reaction 66: CH + H2O <=> CH2O + H */
    phi_f = sc[22]*sc[7];
    k_f = k_f_save[65];
    q_f = phi_f * k_f;
    phi_r = sc[13]*sc[2];
    Kc = Kc_save[65];
    k_r = k_f / Kc;
    q_r = phi_r * k_r;
    qdot[65] = q_f - q_r;

    /*reaction 67: CH + CO2 <=> HCO + CO */
    phi_f = sc[22]*sc[11];
    k_f = k_f_save[66];
    q_f = phi_f * k_f;
    phi_r = sc[12]*sc[10];
    Kc = Kc_save[66];
    k_r = k_f / Kc;
    q_r = phi_r * k_r;
    qdot[66] = q_f - q_r;

    /*reaction 68: CH3O + H <=> CH2O + H2 */
    phi_f = sc[19]*sc[2];
    k_f = k_f_save[67];
    q_f = phi_f * k_f;
    phi_r = sc[13]*sc[6];
    Kc = Kc_save[67];
    k_r = k_f / Kc;
    q_r = phi_r * k_r;
    qdot[67] = q_f - q_r;

    /*reaction 69: CH3O + H <=> S-CH2 + H2O */
    phi_f = sc[19]*sc[2];
    k_f = k_f_save[68];
    q_f = phi_f * k_f;
    phi_r = sc[17]*sc[7];
    Kc = Kc_save[68];
    k_r = k_f / Kc;
    q_r = phi_r * k_r;
    qdot[68] = q_f - q_r;

    /*reaction 70: CH3O + OH <=> CH2O + H2O */
    phi_f = sc[19]*sc[4];
    k_f = k_f_save[69];
    q_f = phi_f * k_f;
    phi_r = sc[13]*sc[7];
    Kc = Kc_save[69];
    k_r = k_f / Kc;
    q_r = phi_r * k_r;
    qdot[69] = q_f - q_r;

    /*reaction 71: CH3O + O <=> OH + CH2O */
    phi_f = sc[19]*sc[5];
    k_f = k_f_save[70];
    q_f = phi_f * k_f;
    phi_r = sc[4]*sc[13];
    Kc = Kc_save[70];
    k_r = k_f / Kc;
    q_r = phi_r * k_r;
    qdot[70] = q_f - q_r;

    /*reaction 72: CH3O + O2 <=> CH2O + HO2 */
    phi_f = sc[19]*sc[3];
    k_f = k_f_save[71];
    q_f = phi_f * k_f;
    phi_r = sc[13]*sc[8];
    Kc = Kc_save[71];
    k_r = k_f / Kc;
    q_r = phi_r * k_r;
    qdot[71] = q_f - q_r;

    /*reaction 73: CH3O + M <=> CH2O + H + M */
    phi_f = sc[19];
    alpha = mixture;
    k_f = alpha * k_f_save[72];
    q_f = phi_f * k_f;
    phi_r = sc[13]*sc[2];
    Kc = Kc_save[72];
    k_r = k_f / Kc;
    q_r = phi_r * k_r;
    qdot[72] = q_f - q_r;

    /*reaction 74: C2H6 + H <=> C2H5 + H2 */
    phi_f = sc[21]*sc[2];
    k_f = k_f_save[73];
    q_f = phi_f * k_f;
    phi_r = sc[20]*sc[6];
    Kc = Kc_save[73];
    k_r = k_f / Kc;
    q_r = phi_r * k_r;
    qdot[73] = q_f - q_r;

    /*reaction 75: C2H6 + O <=> C2H5 + OH */
    phi_f = sc[21]*sc[5];
    k_f = k_f_save[74];
    q_f = phi_f * k_f;
    phi_r = sc[20]*sc[4];
    Kc = Kc_save[74];
    k_r = k_f / Kc;
    q_r = phi_r * k_r;
    qdot[74] = q_f - q_r;

    /*reaction 76: C2H6 + OH <=> C2H5 + H2O */
    phi_f = sc[21]*sc[4];
    k_f = k_f_save[75];
    q_f = phi_f * k_f;
    phi_r = sc[20]*sc[7];
    Kc = Kc_save[75];
    k_r = k_f / Kc;
    q_r = phi_r * k_r;
    qdot[75] = q_f - q_r;

    /*reaction 77: C2H6 + CH3 <=> C2H5 + CH4 */
    phi_f = sc[21]*sc[15];
    k_f = k_f_save[76];
    q_f = phi_f * k_f;
    phi_r = sc[20]*sc[14];
    Kc = Kc_save[76];
    k_r = k_f / Kc;
    q_r = phi_r * k_r;
    qdot[76] = q_f - q_r;

    /*reaction 78: C2H6 (+M) <=> C2H5 + H (+M) */
    phi_f = sc[21];
    alpha = mixture;
    k_f = k_f_save[77];
    redP = 1e-6 * alpha / k_f * 4.9e+42*exp(-6.43*tc[0]-53929.815621124995232*invT);
    F = redP / (1 + redP);
    logPred = log10(redP);
    logFcent = log10((0.16*exp(T/-125))+ (0.84*exp(T/-2219))+ (exp(-6882/T)));
    troe_c = -.4 - .67 * logFcent;
    troe_n = .75 - 1.27 * logFcent;
    troe = (troe_c + logPred) / (troe_n - .14*(troe_c + logPred));
    F_troe = pow(10, logFcent / (1.0 + troe*troe));
    F *= F_troe;
    k_f *= F;
    q_f = phi_f * k_f;
    phi_r = sc[20]*sc[2];
    Kc = Kc_save[77];
    k_r = k_f / Kc;
    q_r = phi_r * k_r;
    qdot[77] = q_f - q_r;

    /*reaction 79: C2H5 + H <=> C2H4 + H2 */
    phi_f = sc[20]*sc[2];
    k_f = k_f_save[78];
    q_f = phi_f * k_f;
    phi_r = sc[18]*sc[6];
    Kc = Kc_save[78];
    k_r = k_f / Kc;
    q_r = phi_r * k_r;
    qdot[78] = q_f - q_r;

    /*reaction 80: C2H5 + O <=> C2H4 + OH */
    phi_f = sc[20]*sc[5];
    k_f = k_f_save[79];
    q_f = phi_f * k_f;
    phi_r = sc[18]*sc[4];
    Kc = Kc_save[79];
    k_r = k_f / Kc;
    q_r = phi_r * k_r;
    qdot[79] = q_f - q_r;

    /*reaction 81: C2H5 + O <=> CH3 + CH2O */
    phi_f = sc[20]*sc[5];
    k_f = k_f_save[80];
    q_f = phi_f * k_f;
    phi_r = sc[15]*sc[13];
    Kc = Kc_save[80];
    k_r = k_f / Kc;
    q_r = phi_r * k_r;
    qdot[80] = q_f - q_r;

    /*reaction 82: C2H5 + O2 <=> C2H4 + HO2 */
    phi_f = sc[20]*sc[3];
    k_f = k_f_save[81];
    q_f = phi_f * k_f;
    phi_r = sc[18]*sc[8];
    Kc = Kc_save[81];
    k_r = k_f / Kc;
    q_r = phi_r * k_r;
    qdot[81] = q_f - q_r;

    /*reaction 83: C2H5 (+M) <=> C2H4 + H (+M) */
    phi_f = sc[20];
    alpha = mixture;
    k_f = k_f_save[82];
    redP = 1e-6 * alpha / k_f * 3.99e+33*exp(-4.99*tc[0]-20128.666632188789663*invT);
    F = redP / (1 + redP);
    logPred = log10(redP);
    logFcent = log10((0.832*exp(T/-1203)));
    troe_c = -.4 - .67 * logFcent;
    troe_n = .75 - 1.27 * logFcent;
    troe = (troe_c + logPred) / (troe_n - .14*(troe_c + logPred));
    F_troe = pow(10, logFcent / (1.0 + troe*troe));
    F *= F_troe;
    k_f *= F;
    q_f = phi_f * k_f;
    phi_r = sc[18]*sc[2];
    Kc = Kc_save[82];
    k_r = k_f / Kc;
    q_r = phi_r * k_r;
    qdot[82] = q_f - q_r;

    /*reaction 84: C2H4 + H <=> C2H3 + H2 */
    phi_f = sc[18]*sc[2];
    k_f = k_f_save[83];
    q_f = phi_f * k_f;
    phi_r = sc[24]*sc[6];
    Kc = Kc_save[83];
    k_r = k_f / Kc;
    q_r = phi_r * k_r;
    qdot[83] = q_f - q_r;

    /*reaction 85: C2H4 + OH <=> C2H3 + H2O */
    phi_f = sc[18]*sc[4];
    k_f = k_f_save[84];
    q_f = phi_f * k_f;
    phi_r = sc[24]*sc[7];
    Kc = Kc_save[84];
    k_r = k_f / Kc;
    q_r = phi_r * k_r;
    qdot[84] = q_f - q_r;

    /*reaction 86: C2H4 + O <=> CH3 + HCO */
    phi_f = sc[18]*sc[5];
    k_f = k_f_save[85];
    q_f = phi_f * k_f;
    phi_r = sc[15]*sc[12];
    Kc = Kc_save[85];
    k_r = k_f / Kc;
    q_r = phi_r * k_r;
    qdot[85] = q_f - q_r;

    /*reaction 87: C2H4 + O <=> CH2CHO + H */
    phi_f = sc[18]*sc[5];
    k_f = k_f_save[86];
    q_f = phi_f * k_f;
    phi_r = sc[25]*sc[2];
    Kc = Kc_save[86];
    k_r = k_f / Kc;
    q_r = phi_r * k_r;
    qdot[86] = q_f - q_r;

    /*reaction 88: 2 C2H4 <=> C2H3 + C2H5 */
    phi_f = sc[18]*sc[18];
    k_f = k_f_save[87];
    q_f = phi_f * k_f;
    phi_r = sc[24]*sc[20];
    Kc = Kc_save[87];
    k_r = k_f / Kc;
    q_r = phi_r * k_r;
    qdot[87] = q_f - q_r;

    /*reaction 89: C2H4 + O2 <=> C2H3 + HO2 */
    phi_f = sc[18]*sc[3];
    k_f = k_f_save[88];
    q_f = phi_f * k_f;
    phi_r = sc[24]*sc[8];
    Kc = Kc_save[88];
    k_r = k_f / Kc;
    q_r = phi_r * k_r;
    qdot[88] = q_f - q_r;

    /*reaction 90: C2H4 + HO2 <=> C2H4O + OH */
    phi_f = sc[18]*sc[8];
    k_f = k_f_save[89];
    q_f = phi_f * k_f;
    phi_r = sc[26]*sc[4];
    Kc = Kc_save[89];
    k_r = k_f / Kc;
    q_r = phi_r * k_r;
    qdot[89] = q_f - q_r;

    /*reaction 91: C2H4O + HO2 <=> CH3 + CO + H2O2 */
    phi_f = sc[26]*sc[8];
    k_f = k_f_save[90];
    q_f = phi_f * k_f;
    phi_r = sc[15]*sc[10]*sc[9];
    Kc = Kc_save[90];
    k_r = k_f / Kc;
    q_r = phi_r * k_r;
    qdot[90] = q_f - q_r;

    /*reaction 92: C2H4 + M <=> C2H3 + H + M */
    phi_f = sc[18];
    alpha = mixture;
    k_f = alpha * k_f_save[91];
    q_f = phi_f * k_f;
    phi_r = sc[24]*sc[2];
    Kc = Kc_save[91];
    k_r = k_f / Kc;
    q_r = phi_r * k_r;
    qdot[91] = q_f - q_r;

    /*reaction 93: C2H4 + M <=> C2H2 + H2 + M */
    phi_f = sc[18];
    alpha = mixture;
    k_f = alpha * k_f_save[92];
    q_f = phi_f * k_f;
    phi_r = sc[23]*sc[6];
    Kc = Kc_save[92];
    k_r = k_f / Kc;
    q_r = phi_r * k_r;
    qdot[92] = q_f - q_r;

    /*reaction 94: C2H3 + H <=> C2H2 + H2 */
    phi_f = sc[24]*sc[2];
    k_f = k_f_save[93];
    q_f = phi_f * k_f;
    phi_r = sc[23]*sc[6];
    Kc = Kc_save[93];
    k_r = k_f / Kc;
    q_r = phi_r * k_r;
    qdot[93] = q_f - q_r;

    /*reaction 95: C2H3 (+M) <=> C2H2 + H (+M) */
    phi_f = sc[24];
    alpha = mixture;
    k_f = k_f_save[94];
    redP = 1e-6 * alpha / k_f * 1.51e+14*exp(0.1*tc[0]-16448.351289492704382*invT);
    F = redP / (1 + redP);
    logPred = log10(redP);
    logFcent = log10((0.7*exp(T/-1e+30))+ (0.3*exp(T/-1e-30)));
    troe_c = -.4 - .67 * logFcent;
    troe_n = .75 - 1.27 * logFcent;
    troe = (troe_c + logPred) / (troe_n - .14*(troe_c + logPred));
    F_troe = pow(10, logFcent / (1.0 + troe*troe));
    F *= F_troe;
    k_f *= F;
    q_f = phi_f * k_f;
    phi_r = sc[23]*sc[2];
    Kc = Kc_save[94];
    k_r = k_f / Kc;
    q_r = phi_r * k_r;
    qdot[94] = q_f - q_r;

    /*reaction 96: C2H3 + O2 <=> CH2O + HCO */
    phi_f = sc[24]*sc[3];
    k_f = k_f_save[95];
    q_f = phi_f * k_f;
    phi_r = sc[13]*sc[12];
    Kc = Kc_save[95];
    k_r = k_f / Kc;
    q_r = phi_r * k_r;
    qdot[95] = q_f - q_r;

    /*reaction 97: C2H3 + O2 <=> CH2CHO + O */
    phi_f = sc[24]*sc[3];
    k_f = k_f_save[96];
    q_f = phi_f * k_f;
    phi_r = sc[25]*sc[5];
    Kc = Kc_save[96];
    k_r = k_f / Kc;
    q_r = phi_r * k_r;
    qdot[96] = q_f - q_r;

    /*reaction 98: C2H3 + O2 <=> C2H2 + HO2 */
    phi_f = sc[24]*sc[3];
    k_f = k_f_save[97];
    q_f = phi_f * k_f;
    phi_r = sc[23]*sc[8];
    Kc = Kc_save[97];
    k_r = k_f / Kc;
    q_r = phi_r * k_r;
    qdot[97] = q_f - q_r;

    /*reaction 99: CH2CHO <=> CH2CO + H */
    phi_f = sc[25];
    k_f = k_f_save[98];
    q_f = phi_f * k_f;
    phi_r = sc[27]*sc[2];
    Kc = Kc_save[98];
    k_r = k_f / Kc;
    q_r = phi_r * k_r;
    qdot[98] = q_f - q_r;

    /*reaction 100: C2H2 + O <=> HCCO + H */
    phi_f = sc[23]*sc[5];
    k_f = k_f_save[99];
    q_f = phi_f * k_f;
    phi_r = sc[28]*sc[2];
    Kc = Kc_save[99];
    k_r = k_f / Kc;
    q_r = phi_r * k_r;
    qdot[99] = q_f - q_r;

    /*reaction 101: C2H2 + O <=> T-CH2 + CO */
    phi_f = sc[23]*sc[5];
    k_f = k_f_save[100];
    q_f = phi_f * k_f;
    phi_r = sc[16]*sc[10];
    Kc = Kc_save[100];
    k_r = k_f / Kc;
    q_r = phi_r * k_r;
    qdot[100] = q_f - q_r;

    /*reaction 102: C2H2 + O2 <=> CH2O + CO */
    phi_f = sc[23]*sc[3];
    k_f = k_f_save[101];
    q_f = phi_f * k_f;
    phi_r = sc[13]*sc[10];
    Kc = Kc_save[101];
    k_r = k_f / Kc;
    q_r = phi_r * k_r;
    qdot[101] = q_f - q_r;

    /*reaction 103: C2H2 + OH <=> CH2CO + H */
    phi_f = sc[23]*sc[4];
    k_f = k_f_save[102];
    q_f = phi_f * k_f;
    phi_r = sc[27]*sc[2];
    Kc = Kc_save[102];
    k_r = k_f / Kc;
    q_r = phi_r * k_r;
    qdot[102] = q_f - q_r;

    /*reaction 104: C2H2 + OH <=> C2H + H2O */
    phi_f = sc[23]*sc[4];
    k_f = k_f_save[103];
    q_f = phi_f * k_f;
    phi_r = sc[29]*sc[7];
    Kc = Kc_save[103];
    k_r = k_f / Kc;
    q_r = phi_r * k_r;
    qdot[103] = q_f - q_r;

    /*reaction 105: CH2CO + H <=> CH3 + CO */
    phi_f = sc[27]*sc[2];
    k_f = k_f_save[104];
    q_f = phi_f * k_f;
    phi_r = sc[15]*sc[10];
    Kc = Kc_save[104];
    k_r = k_f / Kc;
    q_r = phi_r * k_r;
    qdot[104] = q_f - q_r;

    /*reaction 106: CH2CO + O <=> T-CH2 + CO2 */
    phi_f = sc[27]*sc[5];
    k_f = k_f_save[105];
    q_f = phi_f * k_f;
    phi_r = sc[16]*sc[11];
    Kc = Kc_save[105];
    k_r = k_f / Kc;
    q_r = phi_r * k_r;
    qdot[105] = q_f - q_r;

    /*reaction 107: CH2CO + O <=> HCCO + OH */
    phi_f = sc[27]*sc[5];
    k_f = k_f_save[106];
    q_f = phi_f * k_f;
    phi_r = sc[28]*sc[4];
    Kc = Kc_save[106];
    k_r = k_f / Kc;
    q_r = phi_r * k_r;
    qdot[106] = q_f - q_r;

    /*reaction 108: CH2CO + CH3 <=> C2H5 + CO */
    phi_f = sc[27]*sc[15];
    k_f = k_f_save[107];
    q_f = phi_f * k_f;
    phi_r = sc[20]*sc[10];
    Kc = Kc_save[107];
    k_r = k_f / Kc;
    q_r = phi_r * k_r;
    qdot[107] = q_f - q_r;

    /*reaction 109: HCCO + H <=> S-CH2 + CO */
    phi_f = sc[28]*sc[2];
    k_f = k_f_save[108];
    q_f = phi_f * k_f;
    phi_r = sc[17]*sc[10];
    Kc = Kc_save[108];
    k_r = k_f / Kc;
    q_r = phi_r * k_r;
    qdot[108] = q_f - q_r;

    /*reaction 110: HCCO + OH <=> HCO + CO + H */
    phi_f = sc[28]*sc[4];
    k_f = k_f_save[109];
    q_f = phi_f * k_f;
    phi_r = sc[12]*sc[10]*sc[2];
    Kc = Kc_save[109];
    k_r = k_f / Kc;
    q_r = phi_r * k_r;
    qdot[109] = q_f - q_r;

    /*reaction 111: HCCO + O <=> 2 CO + H */
    phi_f = sc[28]*sc[5];
    k_f = k_f_save[110];
    q_f = phi_f * k_f;
    phi_r = sc[10]*sc[10]*sc[2];
    Kc = Kc_save[110];
    k_r = k_f / Kc;
    q_r = phi_r * k_r;
    qdot[110] = q_f - q_r;

    /*reaction 112: HCCO + O2 <=> 2 CO + OH */
    phi_f = sc[28]*sc[3];
    k_f = k_f_save[111];
    q_f = phi_f * k_f;
    phi_r = sc[10]*sc[10]*sc[4];
    Kc = Kc_save[111];
    k_r = k_f / Kc;
    q_r = phi_r * k_r;
    qdot[111] = q_f - q_r;

    /*reaction 113: HCCO + O2 <=> CO2 + CO + H */
    phi_f = sc[28]*sc[3];
    k_f = k_f_save[112];
    q_f = phi_f * k_f;
    phi_r = sc[11]*sc[10]*sc[2];
    Kc = Kc_save[112];
    k_r = k_f / Kc;
    q_r = phi_r * k_r;
    qdot[112] = q_f - q_r;

    /*reaction 114: C2H + OH <=> HCCO + H */
    phi_f = sc[29]*sc[4];
    k_f = k_f_save[113];
    q_f = phi_f * k_f;
    phi_r = sc[28]*sc[2];
    Kc = Kc_save[113];
    k_r = k_f / Kc;
    q_r = phi_r * k_r;
    qdot[113] = q_f - q_r;

    /*reaction 115: C2H + O <=> CO + CH */
    phi_f = sc[29]*sc[5];
    k_f = k_f_save[114];
    q_f = phi_f * k_f;
    phi_r = sc[10]*sc[22];
    Kc = Kc_save[114];
    k_r = k_f / Kc;
    q_r = phi_r * k_r;
    qdot[114] = q_f - q_r;

    /*reaction 116: C2H + O2 <=> HCCO + O */
    phi_f = sc[29]*sc[3];
    k_f = k_f_save[115];
    q_f = phi_f * k_f;
    phi_r = sc[28]*sc[5];
    Kc = Kc_save[115];
    k_r = k_f / Kc;
    q_r = phi_r * k_r;
    qdot[115] = q_f - q_r;

    /*reaction 117: C2H + O2 <=> CH + CO2 */
    phi_f = sc[29]*sc[3];
    k_f = k_f_save[116];
    q_f = phi_f * k_f;
    phi_r = sc[22]*sc[11];
    Kc = Kc_save[116];
    k_r = k_f / Kc;
    q_r = phi_r * k_r;
    qdot[116] = q_f - q_r;

    /*reaction 118: C2H + O2 <=> HCO + CO */
    phi_f = sc[29]*sc[3];
    k_f = k_f_save[117];
    q_f = phi_f * k_f;
    phi_r = sc[12]*sc[10];
    Kc = Kc_save[117];
    k_r = k_f / Kc;
    q_r = phi_r * k_r;
    qdot[117] = q_f - q_r;

    /*reaction 119: CH2OH + H <=> CH2O + H2 */
    phi_f = sc[30]*sc[2];
    k_f = k_f_save[118];
    q_f = phi_f * k_f;
    phi_r = sc[13]*sc[6];
    Kc = Kc_save[118];
    k_r = k_f / Kc;
    q_r = phi_r * k_r;
    qdot[118] = q_f - q_r;

    /*reaction 120: CH2OH + H <=> CH3 + OH */
    phi_f = sc[30]*sc[2];
    k_f = k_f_save[119];
    q_f = phi_f * k_f;
    phi_r = sc[15]*sc[4];
    Kc = Kc_save[119];
    k_r = k_f / Kc;
    q_r = phi_r * k_r;
    qdot[119] = q_f - q_r;

    /*reaction 121: CH2OH + OH <=> CH2O + H2O */
    phi_f = sc[30]*sc[4];
    k_f = k_f_save[120];
    q_f = phi_f * k_f;
    phi_r = sc[13]*sc[7];
    Kc = Kc_save[120];
    k_r = k_f / Kc;
    q_r = phi_r * k_r;
    qdot[120] = q_f - q_r;

    /*reaction 122: CH2OH + O2 <=> CH2O + HO2 */
    phi_f = sc[30]*sc[3];
    k_f = k_f_save[121];
    q_f = phi_f * k_f;
    phi_r = sc[13]*sc[8];
    Kc = Kc_save[121];
    k_r = k_f / Kc;
    q_r = phi_r * k_r;
    qdot[121] = q_f - q_r;

    /*reaction 123: CH2OH + M <=> CH2O + H + M */
    phi_f = sc[30];
    alpha = mixture + 1.4*sc[6] + 14.4*sc[7] + 0.8*sc[10] + 2.6*sc[11];
    k_f = alpha * k_f_save[122];
    q_f = phi_f * k_f;
    phi_r = sc[13]*sc[2];
    Kc = Kc_save[122];
    k_r = k_f / Kc;
    q_r = phi_r * k_r;
    qdot[122] = q_f - q_r;

    /*reaction 124: CH3O + M <=> CH2OH + M */
    phi_f = sc[19];
    alpha = mixture + 1.5*sc[6] + 11*sc[7] + 0.9*sc[10] + 2.8*sc[11];
    k_f = alpha * k_f_save[123];
    q_f = phi_f * k_f;
    phi_r = sc[30];
    Kc = Kc_save[123];
    k_r = k_f / Kc;
    q_r = phi_r * k_r;
    qdot[123] = q_f - q_r;

    /*reaction 125: CH2CO + OH <=> CH2OH + CO */
    phi_f = sc[27]*sc[4];
    k_f = k_f_save[124];
    q_f = phi_f * k_f;
    phi_r = sc[30]*sc[10];
    Kc = Kc_save[124];
    k_r = k_f / Kc;
    q_r = phi_r * k_r;
    qdot[124] = q_f - q_r;

    /*reaction 126: CH3OH + OH <=> CH2OH + H2O */
    phi_f = sc[31]*sc[4];
    k_f = k_f_save[125];
    q_f = phi_f * k_f;
    phi_r = sc[30]*sc[7];
    Kc = Kc_save[125];
    k_r = k_f / Kc;
    q_r = phi_r * k_r;
    qdot[125] = q_f - q_r;

    /*reaction 127: CH3OH + OH <=> CH3O + H2O */
    phi_f = sc[31]*sc[4];
    k_f = k_f_save[126];
    q_f = phi_f * k_f;
    phi_r = sc[19]*sc[7];
    Kc = Kc_save[126];
    k_r = k_f / Kc;
    q_r = phi_r * k_r;
    qdot[126] = q_f - q_r;

    /*reaction 128: CH3OH + H <=> CH2OH + H2 */
    phi_f = sc[31]*sc[2];
    k_f = k_f_save[127];
    q_f = phi_f * k_f;
    phi_r = sc[30]*sc[6];
    Kc = Kc_save[127];
    k_r = k_f / Kc;
    q_r = phi_r * k_r;
    qdot[127] = q_f - q_r;

    /*reaction 129: CH3OH + H <=> CH3O + H2 */
    phi_f = sc[31]*sc[2];
    k_f = k_f_save[128];
    q_f = phi_f * k_f;
    phi_r = sc[19]*sc[6];
    Kc = Kc_save[128];
    k_r = k_f / Kc;
    q_r = phi_r * k_r;
    qdot[128] = q_f - q_r;

    /*reaction 130: CH3OH + O <=> CH2OH + OH */
    phi_f = sc[31]*sc[5];
    k_f = k_f_save[129];
    q_f = phi_f * k_f;
    phi_r = sc[30]*sc[4];
    Kc = Kc_save[129];
    k_r = k_f / Kc;
    q_r = phi_r * k_r;
    qdot[129] = q_f - q_r;

    /*reaction 131: CH3OH + HO2 <=> CH2OH + H2O2 */
    phi_f = sc[31]*sc[8];
    k_f = k_f_save[130];
    q_f = phi_f * k_f;
    phi_r = sc[30]*sc[9];
    Kc = Kc_save[130];
    k_r = k_f / Kc;
    q_r = phi_r * k_r;
    qdot[130] = q_f - q_r;

    /*reaction 132: CH3OH + O2 <=> CH2OH + HO2 */
    phi_f = sc[31]*sc[3];
    k_f = k_f_save[131];
    q_f = phi_f * k_f;
    phi_r = sc[30]*sc[8];
    Kc = Kc_save[131];
    k_r = k_f / Kc;
    q_r = phi_r * k_r;
    qdot[131] = q_f - q_r;

    /*reaction 133: C3H4 + O <=> C2H4 + CO */
    phi_f = sc[32]*sc[5];
    k_f = k_f_save[132];
    q_f = phi_f * k_f;
    phi_r = sc[18]*sc[10];
    Kc = Kc_save[132];
    k_r = k_f / Kc;
    q_r = phi_r * k_r;
    qdot[132] = q_f - q_r;

    /*reaction 134: CH3 + C2H2 <=> C3H4 + H */
    phi_f = sc[15]*sc[23];
    k_f = k_f_save[133];
    q_f = phi_f * k_f;
    phi_r = sc[32]*sc[2];
    Kc = Kc_save[133];
    k_r = k_f / Kc;
    q_r = phi_r * k_r;
    qdot[133] = q_f - q_r;

    /*reaction 135: C3H4 + O <=> HCCO + CH3 */
    phi_f = sc[32]*sc[5];
    k_f = k_f_save[134];
    q_f = phi_f * k_f;
    phi_r = sc[28]*sc[15];
    Kc = Kc_save[134];
    k_r = k_f / Kc;
    q_r = phi_r * k_r;
    qdot[134] = q_f - q_r;

    /*reaction 136: C3H3 + H (+M) <=> C3H4 (+M) */
    phi_f = sc[33]*sc[2];
    alpha = mixture;
    k_f = k_f_save[135];
    redP = 1e-12 * alpha / k_f * 9e+15*exp(1*tc[0]);
    F = redP / (1 + redP);
    logPred = log10(redP);
    logFcent = log10((0.5*exp(T/-1e+30))+ (0.5*exp(T/-1e-30)));
    troe_c = -.4 - .67 * logFcent;
    troe_n = .75 - 1.27 * logFcent;
    troe = (troe_c + logPred) / (troe_n - .14*(troe_c + logPred));
    F_troe = pow(10, logFcent / (1.0 + troe*troe));
    F *= F_troe;
    k_f *= F;
    q_f = phi_f * k_f;
    phi_r = sc[32];
    Kc = Kc_save[135];
    k_r = k_f / Kc;
    q_r = phi_r * k_r;
    qdot[135] = q_f - q_r;

    /*reaction 137: C3H3 + HO2 <=> C3H4 + O2 */
    phi_f = sc[33]*sc[8];
    k_f = k_f_save[136];
    q_f = phi_f * k_f;
    phi_r = sc[32]*sc[3];
    Kc = Kc_save[136];
    k_r = k_f / Kc;
    q_r = phi_r * k_r;
    qdot[136] = q_f - q_r;

    /*reaction 138: C3H4 + OH <=> C3H3 + H2O */
    phi_f = sc[32]*sc[4];
    k_f = k_f_save[137];
    q_f = phi_f * k_f;
    phi_r = sc[33]*sc[7];
    Kc = Kc_save[137];
    k_r = k_f / Kc;
    q_r = phi_r * k_r;
    qdot[137] = q_f - q_r;

    /*reaction 139: C3H3 + O2 <=> CH2CO + HCO */
    phi_f = sc[33]*sc[3];
    k_f = k_f_save[138];
    q_f = phi_f * k_f;
    phi_r = sc[27]*sc[12];
    Kc = Kc_save[138];
    k_r = k_f / Kc;
    q_r = phi_r * k_r;
    qdot[138] = q_f - q_r;

    /*reaction 140: C3H4 + H (+M) <=> C3H5 (+M) */
    phi_f = sc[32]*sc[2];
    alpha = mixture;
    k_f = k_f_save[139];
    redP = 1e-12 * alpha / k_f * 3e+24*exp(-2*tc[0]);
    F = redP / (1 + redP);
    logPred = log10(redP);
    logFcent = log10((0.2*exp(T/-1e+30))+ (0.8*exp(T/-1e-30)));
    troe_c = -.4 - .67 * logFcent;
    troe_n = .75 - 1.27 * logFcent;
    troe = (troe_c + logPred) / (troe_n - .14*(troe_c + logPred));
    F_troe = pow(10, logFcent / (1.0 + troe*troe));
    F *= F_troe;
    k_f *= F;
    q_f = phi_f * k_f;
    phi_r = sc[34];
    Kc = Kc_save[139];
    k_r = k_f / Kc;
    q_r = phi_r * k_r;
    qdot[139] = q_f - q_r;

    /*reaction 141: C3H5 + H <=> C3H4 + H2 */
    phi_f = sc[34]*sc[2];
    k_f = k_f_save[140];
    q_f = phi_f * k_f;
    phi_r = sc[32]*sc[6];
    Kc = Kc_save[140];
    k_r = k_f / Kc;
    q_r = phi_r * k_r;
    qdot[140] = q_f - q_r;

    /*reaction 142: C3H5 + O2 <=> C3H4 + HO2 */
    phi_f = sc[34]*sc[3];
    k_f = k_f_save[141];
    q_f = phi_f * k_f;
    phi_r = sc[32]*sc[8];
    Kc = Kc_save[141];
    k_r = k_f / Kc;
    q_r = phi_r * k_r;
    qdot[141] = q_f - q_r;

    /*reaction 143: C3H5 + CH3 <=> C3H4 + CH4 */
    phi_f = sc[34]*sc[15];
    k_f = k_f_save[142];
    q_f = phi_f * k_f;
    phi_r = sc[32]*sc[14];
    Kc = Kc_save[142];
    k_r = k_f / Kc;
    q_r = phi_r * k_r;
    qdot[142] = q_f - q_r;

    /*reaction 144: C2H2 + CH3 (+M) <=> C3H5 (+M) */
    phi_f = sc[23]*sc[15];
    alpha = mixture;
    k_f = k_f_save[143];
    redP = 1e-12 * alpha / k_f * 2e+09*exp(1*tc[0]);
    F = redP / (1 + redP);
    logPred = log10(redP);
    logFcent = log10((0.5*exp(T/-1e+30))+ (0.5*exp(T/-1e-30)));
    troe_c = -.4 - .67 * logFcent;
    troe_n = .75 - 1.27 * logFcent;
    troe = (troe_c + logPred) / (troe_n - .14*(troe_c + logPred));
    F_troe = pow(10, logFcent / (1.0 + troe*troe));
    F *= F_troe;
    k_f *= F;
    q_f = phi_f * k_f;
    phi_r = sc[34];
    Kc = Kc_save[143];
    k_r = k_f / Kc;
    q_r = phi_r * k_r;
    qdot[143] = q_f - q_r;

    /*reaction 145: C3H5 + OH <=> C3H4 + H2O */
    phi_f = sc[34]*sc[4];
    k_f = k_f_save[144];
    q_f = phi_f * k_f;
    phi_r = sc[32]*sc[7];
    Kc = Kc_save[144];
    k_r = k_f / Kc;
    q_r = phi_r * k_r;
    qdot[144] = q_f - q_r;

    /*reaction 146: C3H3 + HCO <=> C3H4 + CO */
    phi_f = sc[33]*sc[12];
    k_f = k_f_save[145];
    q_f = phi_f * k_f;
    phi_r = sc[32]*sc[10];
    Kc = Kc_save[145];
    k_r = k_f / Kc;
    q_r = phi_r * k_r;
    qdot[145] = q_f - q_r;

    /*reaction 147: C3H3 + HO2 <=> OH + CO + C2H3 */
    phi_f = sc[33]*sc[8];
    k_f = k_f_save[146];
    q_f = phi_f * k_f;
    phi_r = sc[4]*sc[10]*sc[24];
    Kc = Kc_save[146];
    k_r = k_f / Kc;
    q_r = phi_r * k_r;
    qdot[146] = q_f - q_r;

    /*reaction 148: C3H4 + O2 <=> CH3 + HCO + CO */
    phi_f = sc[32]*sc[3];
    k_f = k_f_save[147];
    q_f = phi_f * k_f;
    phi_r = sc[15]*sc[12]*sc[10];
    Kc = Kc_save[147];
    k_r = k_f / Kc;
    q_r = phi_r * k_r;
    qdot[147] = q_f - q_r;

    /*reaction 149: C3H6 + O <=> C2H5 + HCO */
    phi_f = sc[35]*sc[5];
    k_f = k_f_save[148];
    q_f = phi_f * k_f;
    phi_r = sc[20]*sc[12];
    Kc = Kc_save[148];
    k_r = k_f / Kc;
    q_r = phi_r * k_r;
    qdot[148] = q_f - q_r;

    /*reaction 150: C3H6 + OH <=> C3H5 + H2O */
    phi_f = sc[35]*sc[4];
    k_f = k_f_save[149];
    q_f = phi_f * k_f;
    phi_r = sc[34]*sc[7];
    Kc = Kc_save[149];
    k_r = k_f / Kc;
    q_r = phi_r * k_r;
    qdot[149] = q_f - q_r;

    /*reaction 151: C3H6 + O <=> CH2CO + CH3 + H */
    phi_f = sc[35]*sc[5];
    k_f = k_f_save[150];
    q_f = phi_f * k_f;
    phi_r = sc[27]*sc[15]*sc[2];
    Kc = Kc_save[150];
    k_r = k_f / Kc;
    q_r = phi_r * k_r;
    qdot[150] = q_f - q_r;

    /*reaction 152: C3H6 + H <=> C3H5 + H2 */
    phi_f = sc[35]*sc[2];
    k_f = k_f_save[151];
    q_f = phi_f * k_f;
    phi_r = sc[34]*sc[6];
    Kc = Kc_save[151];
    k_r = k_f / Kc;
    q_r = phi_r * k_r;
    qdot[151] = q_f - q_r;

    /*reaction 153: C3H5 + H (+M) <=> C3H6 (+M) */
    phi_f = sc[34]*sc[2];
    alpha = mixture + -0.3*sc[1] + sc[6] + 5*sc[7] + 0.5*sc[10] + sc[11] + sc[14] + 2*sc[21];
    k_f = k_f_save[152];
    redP = 1e-12 * alpha / k_f * 1.33e+60*exp(-12*tc[0]-3003.1819650225929763*invT);
    F = redP / (1 + redP);
    logPred = log10(redP);
    logFcent = log10((0.98*exp(T/-1097))+ (0.02*exp(T/-1097))+ (exp(-6860/T)));
    troe_c = -.4 - .67 * logFcent;
    troe_n = .75 - 1.27 * logFcent;
    troe = (troe_c + logPred) / (troe_n - .14*(troe_c + logPred));
    F_troe = pow(10, logFcent / (1.0 + troe*troe));
    F *= F_troe;
    k_f *= F;
    q_f = phi_f * k_f;
    phi_r = sc[35];
    Kc = Kc_save[152];
    k_r = k_f / Kc;
    q_r = phi_r * k_r;
    qdot[152] = q_f - q_r;

    /*reaction 154: C3H5 + HO2 <=> C3H6 + O2 */
    phi_f = sc[34]*sc[8];
    k_f = k_f_save[153];
    q_f = phi_f * k_f;
    phi_r = sc[35]*sc[3];
    Kc = Kc_save[153];
    k_r = k_f / Kc;
    q_r = phi_r * k_r;
    qdot[153] = q_f - q_r;

    /*reaction 155: C3H5 + HO2 <=> OH + C2H3 + CH2O */
    phi_f = sc[34]*sc[8];
    k_f = k_f_save[154];
    q_f = phi_f * k_f;
    phi_r = sc[4]*sc[24]*sc[13];
    Kc = Kc_save[154];
    k_r = k_f / Kc;
    q_r = phi_r * k_r;
    qdot[154] = q_f - q_r;

    /*reaction 156: C2H3 + CH3 (+M) <=> C3H6 (+M) */
    phi_f = sc[24]*sc[15];
    alpha = mixture + -0.3*sc[1] + sc[6] + 5*sc[7] + 0.5*sc[10] + sc[11] + sc[14] + 2*sc[21];
    k_f = k_f_save[155];
    redP = 1e-12 * alpha / k_f * 4.27e+58*exp(-11.94*tc[0]-4916.7035940783034675*invT);
    F = redP / (1 + redP);
    logPred = log10(redP);
    logFcent = log10((0.825*exp(T/-1341))+ (0.175*exp(T/-60000))+ (exp(-10140/T)));
    troe_c = -.4 - .67 * logFcent;
    troe_n = .75 - 1.27 * logFcent;
    troe = (troe_c + logPred) / (troe_n - .14*(troe_c + logPred));
    F_troe = pow(10, logFcent / (1.0 + troe*troe));
    F *= F_troe;
    k_f *= F;
    q_f = phi_f * k_f;
    phi_r = sc[35];
    Kc = Kc_save[155];
    k_r = k_f / Kc;
    q_r = phi_r * k_r;
    qdot[155] = q_f - q_r;

    /*reaction 157: C3H6 + H <=> C2H4 + CH3 */
    phi_f = sc[35]*sc[2];
    k_f = k_f_save[156];
    q_f = phi_f * k_f;
    phi_r = sc[18]*sc[15];
    Kc = Kc_save[156];
    k_r = k_f / Kc;
    q_r = phi_r * k_r;
    qdot[156] = q_f - q_r;

    /*reaction 158: CH3 + C2H3 <=> C3H5 + H */
    phi_f = sc[15]*sc[24];
    k_f = k_f_save[157];
    q_f = phi_f * k_f;
    phi_r = sc[34]*sc[2];
    Kc = Kc_save[157];
    k_r = k_f / Kc;
    q_r = phi_r * k_r;
    qdot[157] = q_f - q_r;

    /*reaction 159: C3H8 (+M) <=> CH3 + C2H5 (+M) */
    phi_f = sc[36];
    alpha = mixture;
    k_f = k_f_save[158];
    redP = 1e-6 * alpha / k_f * 7.83e+18*exp(-32698.259086825320992*invT);
    F = redP / (1 + redP);
    logPred = log10(redP);
    logFcent = log10((0.24*exp(T/-1946))+ (0.76*exp(T/-38)));
    troe_c = -.4 - .67 * logFcent;
    troe_n = .75 - 1.27 * logFcent;
    troe = (troe_c + logPred) / (troe_n - .14*(troe_c + logPred));
    F_troe = pow(10, logFcent / (1.0 + troe*troe));
    F *= F_troe;
    k_f *= F;
    q_f = phi_f * k_f;
    phi_r = sc[15]*sc[20];
    Kc = Kc_save[158];
    k_r = k_f / Kc;
    q_r = phi_r * k_r;
    qdot[158] = q_f - q_r;

    /*reaction 160: C3H8 + O2 <=> I-C3H7 + HO2 */
    phi_f = sc[36]*sc[3];
    k_f = k_f_save[159];
    q_f = phi_f * k_f;
    phi_r = sc[37]*sc[8];
    Kc = Kc_save[159];
    k_r = k_f / Kc;
    q_r = phi_r * k_r;
    qdot[159] = q_f - q_r;

    /*reaction 161: C3H8 + O2 <=> N-C3H7 + HO2 */
    phi_f = sc[36]*sc[3];
    k_f = k_f_save[160];
    q_f = phi_f * k_f;
    phi_r = sc[38]*sc[8];
    Kc = Kc_save[160];
    k_r = k_f / Kc;
    q_r = phi_r * k_r;
    qdot[160] = q_f - q_r;

    /*reaction 162: C3H8 + H <=> I-C3H7 + H2 */
    phi_f = sc[36]*sc[2];
    k_f = k_f_save[161];
    q_f = phi_f * k_f;
    phi_r = sc[37]*sc[6];
    Kc = Kc_save[161];
    k_r = k_f / Kc;
    q_r = phi_r * k_r;
    qdot[161] = q_f - q_r;

    /*reaction 163: C3H8 + H <=> N-C3H7 + H2 */
    phi_f = sc[36]*sc[2];
    k_f = k_f_save[162];
    q_f = phi_f * k_f;
    phi_r = sc[38]*sc[6];
    Kc = Kc_save[162];
    k_r = k_f / Kc;
    q_r = phi_r * k_r;
    qdot[162] = q_f - q_r;

    /*reaction 164: C3H8 + O <=> I-C3H7 + OH */
    phi_f = sc[36]*sc[5];
    k_f = k_f_save[163];
    q_f = phi_f * k_f;
    phi_r = sc[37]*sc[4];
    Kc = Kc_save[163];
    k_r = k_f / Kc;
    q_r = phi_r * k_r;
    qdot[163] = q_f - q_r;

    /*reaction 165: C3H8 + O <=> N-C3H7 + OH */
    phi_f = sc[36]*sc[5];
    k_f = k_f_save[164];
    q_f = phi_f * k_f;
    phi_r = sc[38]*sc[4];
    Kc = Kc_save[164];
    k_r = k_f / Kc;
    q_r = phi_r * k_r;
    qdot[164] = q_f - q_r;

    /*reaction 166: C3H8 + OH <=> N-C3H7 + H2O */
    phi_f = sc[36]*sc[4];
    k_f = k_f_save[165];
    q_f = phi_f * k_f;
    phi_r = sc[38]*sc[7];
    Kc = Kc_save[165];
    k_r = k_f / Kc;
    q_r = phi_r * k_r;
    qdot[165] = q_f - q_r;

    /*reaction 167: C3H8 + OH <=> I-C3H7 + H2O */
    phi_f = sc[36]*sc[4];
    k_f = k_f_save[166];
    q_f = phi_f * k_f;
    phi_r = sc[37]*sc[7];
    Kc = Kc_save[166];
    k_r = k_f / Kc;
    q_r = phi_r * k_r;
    qdot[166] = q_f - q_r;

    /*reaction 168: C3H8 + HO2 <=> I-C3H7 + H2O2 */
    phi_f = sc[36]*sc[8];
    k_f = k_f_save[167];
    q_f = phi_f * k_f;
    phi_r = sc[37]*sc[9];
    Kc = Kc_save[167];
    k_r = k_f / Kc;
    q_r = phi_r * k_r;
    qdot[167] = q_f - q_r;

    /*reaction 169: C3H8 + HO2 <=> N-C3H7 + H2O2 */
    phi_f = sc[36]*sc[8];
    k_f = k_f_save[168];
    q_f = phi_f * k_f;
    phi_r = sc[38]*sc[9];
    Kc = Kc_save[168];
    k_r = k_f / Kc;
    q_r = phi_r * k_r;
    qdot[168] = q_f - q_r;

    /*reaction 170: I-C3H7 + C3H8 <=> N-C3H7 + C3H8 */
    phi_f = sc[37]*sc[36];
    k_f = k_f_save[169];
    q_f = phi_f * k_f;
    phi_r = sc[38]*sc[36];
    Kc = Kc_save[169];
    k_r = k_f / Kc;
    q_r = phi_r * k_r;
    qdot[169] = q_f - q_r;

    /*reaction 171: C3H6 + H (+M) <=> I-C3H7 (+M) */
    phi_f = sc[35]*sc[2];
    alpha = mixture + -0.3*sc[1] + sc[6] + 5*sc[7] + 0.5*sc[10] + sc[11] + sc[14] + 2*sc[21];
    k_f = k_f_save[170];
    redP = 1e-12 * alpha / k_f * 8.7e+42*exp(-7.5*tc[0]-2381.3772597543329539*invT);
    F = redP / (1 + redP);
    logPred = log10(redP);
    logFcent = log10((0*exp(T/-1000))+ (1*exp(T/-645.4))+ (exp(-6844.3/T)));
    troe_c = -.4 - .67 * logFcent;
    troe_n = .75 - 1.27 * logFcent;
    troe = (troe_c + logPred) / (troe_n - .14*(troe_c + logPred));
    F_troe = pow(10, logFcent / (1.0 + troe*troe));
    F *= F_troe;
    k_f *= F;
    q_f = phi_f * k_f;
    phi_r = sc[37];
    Kc = Kc_save[170];
    k_r = k_f / Kc;
    q_r = phi_r * k_r;
    qdot[170] = q_f - q_r;

    /*reaction 172: I-C3H7 + O2 <=> C3H6 + HO2 */
    phi_f = sc[37]*sc[3];
    k_f = k_f_save[171];
    q_f = phi_f * k_f;
    phi_r = sc[35]*sc[8];
    Kc = Kc_save[171];
    k_r = k_f / Kc;
    q_r = phi_r * k_r;
    qdot[171] = q_f - q_r;

    /*reaction 173: N-C3H7 (+M) <=> CH3 + C2H4 (+M) */
    phi_f = sc[38];
    alpha = mixture;
    k_f = k_f_save[172];
    redP = 1e-6 * alpha / k_f * 5.49e+49*exp(-10*tc[0]-18004.669600493594771*invT);
    F = redP / (1 + redP);
    logPred = log10(redP);
    logFcent = log10((2.17*exp(T/-251))+ (exp(-1185/T)));
    troe_c = -.4 - .67 * logFcent;
    troe_n = .75 - 1.27 * logFcent;
    troe = (troe_c + logPred) / (troe_n - .14*(troe_c + logPred));
    F_troe = pow(10, logFcent / (1.0 + troe*troe));
    F *= F_troe;
    k_f *= F;
    q_f = phi_f * k_f;
    phi_r = sc[15]*sc[18];
    Kc = Kc_save[172];
    k_r = k_f / Kc;
    q_r = phi_r * k_r;
    qdot[172] = q_f - q_r;

    /*reaction 174: H + C3H6 (+M) <=> N-C3H7 (+M) */
    phi_f = sc[2]*sc[35];
    alpha = mixture + -0.3*sc[1] + sc[6] + 5*sc[7] + 0.5*sc[10] + sc[11] + sc[14] + 2*sc[21];
    k_f = k_f_save[173];
    redP = 1e-12 * alpha / k_f * 6.26e+38*exp(-6.66*tc[0]-3522.7582046326238014*invT);
    F = redP / (1 + redP);
    logPred = log10(redP);
    logFcent = log10((0*exp(T/-1000))+ (1*exp(T/-1310))+ (exp(-48097/T)));
    troe_c = -.4 - .67 * logFcent;
    troe_n = .75 - 1.27 * logFcent;
    troe = (troe_c + logPred) / (troe_n - .14*(troe_c + logPred));
    F_troe = pow(10, logFcent / (1.0 + troe*troe));
    F *= F_troe;
    k_f *= F;
    q_f = phi_f * k_f;
    phi_r = sc[38];
    Kc = Kc_save[173];
    k_r = k_f / Kc;
    q_r = phi_r * k_r;
    qdot[173] = q_f - q_r;

    /*reaction 175: N-C3H7 + O2 <=> C3H6 + HO2 */
    phi_f = sc[38]*sc[3];
    k_f = k_f_save[174];
    q_f = phi_f * k_f;
    phi_r = sc[35]*sc[8];
    Kc = Kc_save[174];
    k_r = k_f / Kc;
    q_r = phi_r * k_r;
    qdot[174] = q_f - q_r;

    return;
}


/*compute the progress rate for each reaction */
void progressRateFR(double * q_f, double * q_r, double * sc, double T)
{

    int id; /*loop counter */
    double mixture;                 /*mixture concentration */
    double g_RT[39];                /*Gibbs free energy */
    double Kc;                      /*equilibrium constant */
    double k_f;                     /*forward reaction rate */
    double k_r;                     /*reverse reaction rate */
    double phi_f;                   /*forward phase space factor */
    double phi_r;                   /*reverse phase space factor */
    double alpha;                   /*enhancement */
    double redP;                    /*reduced pressure */
    double logPred;                 /*log of above */
    double F;                       /*fallof rate enhancement */

    double F_troe;                  /*TROE intermediate */
    double logFcent;                /*TROE intermediate */
    double troe;                    /*TROE intermediate */
    double troe_c;                  /*TROE intermediate */
    double troe_n;                  /*TROE intermediate */

    double X;                       /*SRI intermediate */
    double F_sri;                   /*SRI intermediate */
    double tc[] = { log(T), T, T*T, T*T*T, T*T*T*T }; /*temperature cache */

    double invT = 1.0 / tc[1];

    /*reference concentration: P_atm / (RT) in inverse mol/m^3 */
    double refC = 101325 / 8.31451 / T;

    /*compute the mixture concentration */
    mixture = 0.0;
    for (id = 0; id < 39; ++id) {
        mixture += sc[id];
    }

    /*compute the Gibbs free energy */
    gibbs(g_RT, tc);

    if (T != T_save)
    {
        T_save = T;

        k_f_save[0] = 1e-06 * 3.52e+16*exp(-0.7*tc[0]-8589.8028097867463657*invT);
        k_f_save[1] = 1e-06 * 50600*exp(2.67*tc[0]-3165.5498544111437695*invT);
        k_f_save[2] = 1e-06 * 1.17e+09*exp(1.3*tc[0]-1829.3334808665815672*invT);
        k_f_save[3] = 1e-06 * 7.6*exp(3.84*tc[0]-6430.9278309846276898*invT);
        k_f_save[4] = 1e-12 * 6.2e+16*exp(-0.6*tc[0]);
        k_f_save[5] = 1e-06 * 1.7e+13*exp(-24060.348763787642383*invT);
        k_f_save[6] = 1e-12 * 7.2e+17*exp(-1*tc[0]);
        k_f_save[7] = 1e-12 * 3.8e+22*exp(-2*tc[0]);
        k_f_save[8] = 1e-12 * 6.17e+15*exp(-0.5*tc[0]);
        k_f_save[9] = 1e-06 * 4.65e+12*exp(0.44*tc[0]);
        k_f_save[10] = 1e-12 * 1e+16;
        k_f_save[11] = 1e-06 * 7.08e+13*exp(-150.93983890812566528*invT);
        k_f_save[12] = 1e-06 * 4.28e+13*exp(-709.60091695120945587*invT);
        k_f_save[13] = 1e-06 * 3.1e+13*exp(-865.95536718339383242*invT);
        k_f_save[14] = 1e-06 * 2e+13;
        k_f_save[15] = 1e-06 * 2.89e+13*exp(+250.16410107150028352*invT);
        k_f_save[16] = 1e-06 * 7.4e+13*exp(-0.37*tc[0]);
        k_f_save[17] = 1e-06 * 3.02e+12*exp(-697.57403863847662251*invT);
        k_f_save[18] = 1e-06 * 4.79e+13*exp(-4005.0460893065260279*invT);
        k_f_save[19] = 1e-06 * 1e+13*exp(-1804.0770364098425489*invT);
        k_f_save[20] = 1e-06 * 7.08e+12*exp(-721.62779526394217555*invT);
        k_f_save[21] = 1e-06 * 9.63e+06*exp(2*tc[0]-2008.5389998929581452*invT);
        k_f_save[22] = 1e-06 * 4.4e+06*exp(1.5*tc[0]+372.84329202803286307*invT);
        k_f_save[23] = 1e-06 * 6.03e+13*exp(-11546.079949389681133*invT);
        k_f_save[24] = 1e-06 * 1.86e+17*exp(-1*tc[0]-8554.9248626798198529*invT);
        k_f_save[25] = 1e-06 * 1e+14;
        k_f_save[26] = 1e-06 * 3e+13;
        k_f_save[27] = 1e-06 * 3e+13;
        k_f_save[28] = 1e-06 * 5.02e+13;
        k_f_save[29] = 1e-06 * 3e+12;
        k_f_save[30] = 1e-06 * 6.26e+16*exp(-39208.564314673982153*invT);
        k_f_save[31] = 1e-06 * 1.26e+08*exp(1.62*tc[0]-1089.6603359668820303*invT);
        k_f_save[32] = 1e-06 * 3.5e+13*exp(-1767.9913693049861649*invT);
        k_f_save[33] = 1e-06 * 3.9e+10*exp(0.89*tc[0]-204.46196348311565316*invT);
        k_f_save[34] = 1e-06 * 13000*exp(3*tc[0]-4044.7347877385441279*invT);
        k_f_save[35] = 1e-06 * 1.6e+07*exp(1.83*tc[0]-1399.9638607687043077*invT);
        k_f_save[36] = 1e-06 * 1.9e+09*exp(1.44*tc[0]-4365.8625030218254324*invT);
        k_f_save[37] = 1e-06 * 3.98e+13*exp(-28628.267854630037618*invT);
        k_f_save[38] = 1e-06 * 9.03e+12*exp(-12400.00843826034361*invT);
        k_f_save[39] = 1e-06 * 1.8e+14*exp(-7601.1682516468199537*invT);
        k_f_save[40] = 1e-06 * 1.55e+14*exp(-6783.3203977143575685*invT);
        k_f_save[41] = 1e-06 * 1e+13*exp(-1259.2443523430724781*invT);
        k_f_save[42] = 1e-06 * 8.43e+13;
        k_f_save[43] = 1e-06 * 4.22e+13;
        k_f_save[44] = 1e-06 * 5e+12;
        k_f_save[45] = 1e-06 * 3.3e+11*exp(-4499.3608522931599509*invT);
        k_f_save[46] = 1e-06 * 1.33e+14*exp(-15803.69551543025409*invT);
        k_f_save[47] = 1e-06 * 1e+14*exp(-16104.377537581891374*invT);
        k_f_save[48] = 1e-06 * 3.16e+13*exp(-7396.7062881637039027*invT);
        k_f_save[49] = 1e-06 * 2.11e+14;
        k_f_save[50] = 1e-06 * 1.81e+13;
        k_f_save[51] = 1e-06 * 3e+13;
        k_f_save[52] = 1e-06 * 3.13e+13;
        k_f_save[53] = 1e-06 * 3e+12;
        k_f_save[54] = 1e-06 * 6e+12;
        k_f_save[55] = 1e-06 * 6.02e+12*exp(+899.63062645904562942*invT);
        k_f_save[56] = 1e-06 * 2.5e+13;
        k_f_save[57] = 1e-06 * 1.13e+07*exp(2*tc[0]-1509.4084534145727048*invT);
        k_f_save[58] = 1e-06 * 8e+13;
        k_f_save[59] = 1e-06 * 4e+13;
        k_f_save[60] = 1e-06 * 2.63e+12*exp(-750.49733538115901865*invT);
        k_f_save[61] = 1e-06 * 6.58e+12*exp(-750.49733538115901865*invT);
        k_f_save[62] = 1e-06 * 1e+14;
        k_f_save[63] = 1e-06 * 4e+13;
        k_f_save[64] = 1e-06 * 1.77e+11*exp(0.76*tc[0]+240.54259842131403957*invT);
        k_f_save[65] = 1e-06 * 1.17e+15*exp(-0.75*tc[0]);
        k_f_save[66] = 1e-06 * 48*exp(3.22*tc[0]+1623.6688295521923919*invT);
        k_f_save[67] = 1e-06 * 2e+13;
        k_f_save[68] = 1e-06 * 1.6e+13;
        k_f_save[69] = 1e-06 * 5e+12;
        k_f_save[70] = 1e-06 * 1e+13;
        k_f_save[71] = 1e-06 * 4.28e-13*exp(7.6*tc[0]+1780.0182476177189983*invT);
        k_f_save[72] = 1e-06 * 1e+13*exp(-6795.3472760270897197*invT);
        k_f_save[73] = 1e-06 * 540*exp(3.5*tc[0]-2621.9248903423049342*invT);
        k_f_save[74] = 1e-06 * 1.4*exp(4.3*tc[0]-1395.1531094436111289*invT);
        k_f_save[75] = 1e-06 * 2.2e+07*exp(1.9*tc[0]-565.27837719841579656*invT);
        k_f_save[76] = 1e-06 * 0.55*exp(4*tc[0]-4173.427417851442442*invT);
        k_f_save[77] = 1 * 8.85e+20*exp(-1.23*tc[0]-51440.191424389413442*invT);
        k_f_save[78] = 1e-06 * 3e+13;
        k_f_save[79] = 1e-06 * 3.06e+13;
        k_f_save[80] = 1e-06 * 4.24e+13;
        k_f_save[81] = 1e-06 * 2e+12*exp(-2513.6779533610520048*invT);
        k_f_save[82] = 1 * 1.11e+10*exp(1.037*tc[0]-18502.592426974046248*invT);
        k_f_save[83] = 1e-06 * 4.49e+07*exp(2.12*tc[0]-6723.1860061506931743*invT);
        k_f_save[84] = 1e-06 * 553000*exp(2.31*tc[0]-1491.3681359454735684*invT);
        k_f_save[85] = 1e-06 * 2.25e+06*exp(2.08*tc[0]);
        k_f_save[86] = 1e-06 * 1.21e+06*exp(2.08*tc[0]);
        k_f_save[87] = 1e-06 * 5.01e+14*exp(-32558.143438398656144*invT);
        k_f_save[88] = 1e-06 * 4.22e+13*exp(-28996.899223165284639*invT);
        k_f_save[89] = 1e-06 * 2.23e+12*exp(-8649.9372013504107599*invT);
        k_f_save[90] = 1e-06 * 4e+12*exp(-8558.5329261736405897*invT);
        k_f_save[91] = 1e-06 * 2.6e+17*exp(-48594.68736943006661*invT);
        k_f_save[92] = 1e-06 * 3.5e+16*exp(-35996.109634843189269*invT);
        k_f_save[93] = 1e-06 * 1.21e+13;
        k_f_save[94] = 1 * 6.38e+09*exp(1*tc[0]-18934.36742273447453*invT);
        k_f_save[95] = 1e-06 * 1.7e+29*exp(-5.312*tc[0]-3272.4733315613302693*invT);
        k_f_save[96] = 1e-06 * 7e+14*exp(-0.611*tc[0]-2648.1424786307311479*invT);
        k_f_save[97] = 1e-06 * 5.19e+15*exp(-1.26*tc[0]-1666.9655914780303192*invT);
        k_f_save[98] = 1 * 1.047e+37*exp(-7.189*tc[0]-22312.798055447645311*invT);
        k_f_save[99] = 1e-06 * 4e+14*exp(-5364.1185638119377472*invT);
        k_f_save[100] = 1e-06 * 1.6e+14*exp(-4979.2483934711726761*invT);
        k_f_save[101] = 1e-06 * 4.6e+15*exp(-0.54*tc[0]-22611.074701936737256*invT);
        k_f_save[102] = 1e-06 * 1.9e+07*exp(1.7*tc[0]-502.73357780554715646*invT);
        k_f_save[103] = 1e-06 * 3.37e+07*exp(2*tc[0]-7045.5164092652476029*invT);
        k_f_save[104] = 1e-06 * 1.5e+09*exp(1.43*tc[0]-1353.0540031823884419*invT);
        k_f_save[105] = 1e-06 * 2e+13*exp(-1154.6105110222970325*invT);
        k_f_save[106] = 1e-06 * 1e+13*exp(-1006.674875609025662*invT);
        k_f_save[107] = 1e-06 * 9e+10;
        k_f_save[108] = 1e-06 * 1.5e+14;
        k_f_save[109] = 1e-06 * 2e+12;
        k_f_save[110] = 1e-06 * 9.64e+13;
        k_f_save[111] = 1e-06 * 2.88e+07*exp(1.7*tc[0]-503.93626563682039432*invT);
        k_f_save[112] = 1e-06 * 1.4e+07*exp(1.7*tc[0]-503.93626563682039432*invT);
        k_f_save[113] = 1e-06 * 2e+13;
        k_f_save[114] = 1e-06 * 1.02e+13;
        k_f_save[115] = 1e-06 * 6.02e+11;
        k_f_save[116] = 1e-06 * 4.5e+15*exp(-12628.524158368922144*invT);
        k_f_save[117] = 1e-06 * 2.41e+12;
        k_f_save[118] = 1e-06 * 3e+13;
        k_f_save[119] = 1e-06 * 1.75e+14*exp(-1407.1799877563439622*invT);
        k_f_save[120] = 1e-06 * 2.4e+13;
        k_f_save[121] = 1e-06 * 5e+12;
        k_f_save[122] = 1e-06 * 5e+13*exp(-12640.551036681656115*invT);
        k_f_save[123] = 1e-06 * 1e+14*exp(-9621.7341298525097955*invT);
        k_f_save[124] = 1e-06 * 1.02e+13;
        k_f_save[125] = 1e-06 * 1.44e+06*exp(2*tc[0]+422.15349311023737755*invT);
        k_f_save[126] = 1e-06 * 6.3e+06*exp(2*tc[0]-757.7134623687986732*invT);
        k_f_save[127] = 1e-06 * 1.64e+07*exp(2*tc[0]-2273.135354939737681*invT);
        k_f_save[128] = 1e-06 * 3.83e+07*exp(2*tc[0]-2946.6556369527488641*invT);
        k_f_save[129] = 1e-06 * 1e+13*exp(-2357.3235031288677419*invT);
        k_f_save[130] = 1e-06 * 6.2e+12*exp(-9754.0348234592293011*invT);
        k_f_save[131] = 1e-06 * 2e+13*exp(-22611.074701936737256*invT);
        k_f_save[132] = 1e-06 * 2e+07*exp(1.8*tc[0]-503.21666580471963925*invT);
        k_f_save[133] = 1e-06 * 2.56e+09*exp(1.1*tc[0]-6865.82780223969894*invT);
        k_f_save[134] = 1e-06 * 7.3e+12*exp(-1132.2374980606193731*invT);
        k_f_save[135] = 1e-06 * 3e+13;
        k_f_save[136] = 1e-06 * 2.5e+12;
        k_f_save[137] = 1e-06 * 5.3e+06*exp(2*tc[0]-1006.4333316094392785*invT);
        k_f_save[138] = 1e-06 * 3e+10*exp(-1443.2606226945424623*invT);
        k_f_save[139] = 1e-06 * 4e+13;
        k_f_save[140] = 1e-06 * 1.8e+13;
        k_f_save[141] = 1e-06 * 4.99e+15*exp(-1.4*tc[0]-11286.173573668202152*invT);
        k_f_save[142] = 1e-06 * 3e+12*exp(-0.32*tc[0]+65.911318887102183339*invT);
        k_f_save[143] = 1e-06 * 6e+08;
        k_f_save[144] = 1e-06 * 6e+12;
        k_f_save[145] = 1e-06 * 2.5e+13;
        k_f_save[146] = 1e-06 * 8e+11;
        k_f_save[147] = 1e-06 * 4e+14*exp(-21047.540263948205393*invT);
        k_f_save[148] = 1e-06 * 3.5e+07*exp(1.65*tc[0]+489.50401166154108523*invT);
        k_f_save[149] = 1e-06 * 3.1e+06*exp(2*tc[0]+150.09946707623177531*invT);
        k_f_save[150] = 1e-06 * 1.2e+08*exp(1.65*tc[0]-164.77326505109741106*invT);
        k_f_save[151] = 1e-06 * 170000*exp(2.5*tc[0]-1254.4336010179792993*invT);
        k_f_save[152] = 1e-06 * 2e+14;
        k_f_save[153] = 1e-06 * 2.66e+12;
        k_f_save[154] = 1e-06 * 3e+12;
        k_f_save[155] = 1e-06 * 2.5e+13;
        k_f_save[156] = 1e-06 * 1.6e+22*exp(-2.39*tc[0]-5628.714918858717283*invT);
        k_f_save[157] = 1e-06 * 1.5e+24*exp(-2.83*tc[0]-9369.1646531184633204*invT);
        k_f_save[158] = 1 * 1.1e+17*exp(-42467.928852091099543*invT);
        k_f_save[159] = 1e-06 * 4e+13*exp(-23902.791625724184996*invT);
        k_f_save[160] = 1e-06 * 4e+13*exp(-25629.891608765879937*invT);
        k_f_save[161] = 1e-06 * 1.3e+06*exp(2.4*tc[0]-2249.9219701461661316*invT);
        k_f_save[162] = 1e-06 * 1.33e+06*exp(2.54*tc[0]-3402.4843893386382661*invT);
        k_f_save[163] = 1e-06 * 47600*exp(2.71*tc[0]-1060.4335120169437232*invT);
        k_f_save[164] = 1e-06 * 190000*exp(2.68*tc[0]-1871.1860109615599868*invT);
        k_f_save[165] = 1e-06 * 1400*exp(2.66*tc[0]-265.32098704553845891*invT);
        k_f_save[166] = 1e-06 * 27000*exp(2.39*tc[0]-197.84466432778359035*invT);
        k_f_save[167] = 1e-06 * 9640*exp(2.6*tc[0]-7003.4173030040255981*invT);
        k_f_save[168] = 1e-06 * 47600*exp(2.55*tc[0]-8298.7473224519562791*invT);
        k_f_save[169] = 1e-06 * 0.0084*exp(4.2*tc[0]-4365.8625030218254324*invT);
        k_f_save[170] = 1e-06 * 1.33e+13*exp(-785.3752824880841672*invT);
        k_f_save[171] = 1e-06 * 1.3e+11;
        k_f_save[172] = 1 * 1.23e+13*exp(-0.1*tc[0]-15202.341535460298473*invT);
        k_f_save[173] = 1e-06 * 1.33e+13*exp(-1640.5064591900184041*invT);
        k_f_save[174] = 1e-06 * 9e+10;

        Kc_save[0] = exp((g_RT[2] + g_RT[3]) - (g_RT[4] + g_RT[5]));
        Kc_save[1] = exp((g_RT[6] + g_RT[5]) - (g_RT[4] + g_RT[2]));
        Kc_save[2] = exp((g_RT[6] + g_RT[4]) - (g_RT[7] + g_RT[2]));
        Kc_save[3] = exp((g_RT[7] + g_RT[5]) - (2 * g_RT[4]));
        Kc_save[4] = 1.0 / (refC) * exp((g_RT[2] + g_RT[5]) - (g_RT[4]));
        Kc_save[5] = exp((g_RT[6] + g_RT[3]) - (2 * g_RT[4]));
        Kc_save[6] = 1.0 / (refC) * exp((2 * g_RT[2]) - (g_RT[6]));
        Kc_save[7] = 1.0 / (refC) * exp((g_RT[2] + g_RT[4]) - (g_RT[7]));
        Kc_save[8] = 1.0 / (refC) * exp((2 * g_RT[5]) - (g_RT[3]));
        Kc_save[9] = 1.0 / (refC) * exp((g_RT[2] + g_RT[3]) - (g_RT[8]));
        Kc_save[10] = 1.0 / (refC) * exp((g_RT[5] + g_RT[4]) - (g_RT[8]));
        Kc_save[11] = exp((g_RT[8] + g_RT[2]) - (2 * g_RT[4]));
        Kc_save[12] = exp((g_RT[8] + g_RT[2]) - (g_RT[6] + g_RT[3]));
        Kc_save[13] = exp((g_RT[8] + g_RT[2]) - (g_RT[7] + g_RT[5]));
        Kc_save[14] = exp((g_RT[8] + g_RT[5]) - (g_RT[4] + g_RT[3]));
        Kc_save[15] = exp((g_RT[8] + g_RT[4]) - (g_RT[7] + g_RT[3]));
        Kc_save[16] = 1.0 / (refC) * exp((2 * g_RT[4]) - (g_RT[9]));
        Kc_save[17] = exp((2 * g_RT[8]) - (g_RT[9] + g_RT[3]));
        Kc_save[18] = exp((g_RT[9] + g_RT[2]) - (g_RT[8] + g_RT[6]));
        Kc_save[19] = exp((g_RT[9] + g_RT[2]) - (g_RT[7] + g_RT[4]));
        Kc_save[20] = exp((g_RT[9] + g_RT[4]) - (g_RT[7] + g_RT[8]));
        Kc_save[21] = exp((g_RT[9] + g_RT[5]) - (g_RT[8] + g_RT[4]));
        Kc_save[22] = exp((g_RT[10] + g_RT[4]) - (g_RT[11] + g_RT[2]));
        Kc_save[23] = exp((g_RT[10] + g_RT[8]) - (g_RT[11] + g_RT[4]));
        Kc_save[24] = refC * exp((g_RT[12]) - (g_RT[10] + g_RT[2]));
        Kc_save[25] = exp((g_RT[12] + g_RT[2]) - (g_RT[10] + g_RT[6]));
        Kc_save[26] = exp((g_RT[12] + g_RT[5]) - (g_RT[10] + g_RT[4]));
        Kc_save[27] = exp((g_RT[12] + g_RT[5]) - (g_RT[11] + g_RT[2]));
        Kc_save[28] = exp((g_RT[12] + g_RT[4]) - (g_RT[10] + g_RT[7]));
        Kc_save[29] = exp((g_RT[12] + g_RT[3]) - (g_RT[10] + g_RT[8]));
        Kc_save[30] = refC * exp((g_RT[13]) - (g_RT[12] + g_RT[2]));
        Kc_save[31] = exp((g_RT[13] + g_RT[2]) - (g_RT[12] + g_RT[6]));
        Kc_save[32] = exp((g_RT[13] + g_RT[5]) - (g_RT[12] + g_RT[4]));
        Kc_save[33] = exp((g_RT[13] + g_RT[4]) - (g_RT[12] + g_RT[7]));
        Kc_save[34] = exp((g_RT[14] + g_RT[2]) - (g_RT[6] + g_RT[15]));
        Kc_save[35] = exp((g_RT[14] + g_RT[4]) - (g_RT[7] + g_RT[15]));
        Kc_save[36] = exp((g_RT[14] + g_RT[5]) - (g_RT[15] + g_RT[4]));
        Kc_save[37] = exp((g_RT[14] + g_RT[3]) - (g_RT[15] + g_RT[8]));
        Kc_save[38] = exp((g_RT[14] + g_RT[8]) - (g_RT[15] + g_RT[9]));
        Kc_save[39] = exp((g_RT[15] + g_RT[2]) - (g_RT[16] + g_RT[6]));
        Kc_save[40] = exp((g_RT[15] + g_RT[2]) - (g_RT[17] + g_RT[6]));
        Kc_save[41] = exp((g_RT[15] + g_RT[4]) - (g_RT[17] + g_RT[7]));
        Kc_save[42] = exp((g_RT[15] + g_RT[5]) - (g_RT[13] + g_RT[2]));
        Kc_save[43] = exp((g_RT[15] + g_RT[16]) - (g_RT[18] + g_RT[2]));
        Kc_save[44] = exp((g_RT[15] + g_RT[8]) - (g_RT[19] + g_RT[4]));
        Kc_save[45] = exp((g_RT[15] + g_RT[3]) - (g_RT[13] + g_RT[4]));
        Kc_save[46] = exp((g_RT[15] + g_RT[3]) - (g_RT[19] + g_RT[5]));
        Kc_save[47] = exp((2 * g_RT[15]) - (g_RT[18] + g_RT[6]));
        Kc_save[48] = exp((2 * g_RT[15]) - (g_RT[20] + g_RT[2]));
        Kc_save[49] = 1.0 / (refC) * exp((g_RT[15] + g_RT[2]) - (g_RT[14]));
        Kc_save[50] = 1.0 / (refC) * exp((2 * g_RT[15]) - (g_RT[21]));
        Kc_save[51] = exp((g_RT[17] + g_RT[4]) - (g_RT[13] + g_RT[2]));
        Kc_save[52] = refC * exp((g_RT[17] + g_RT[3]) - (g_RT[10] + g_RT[4] + g_RT[2]));
        Kc_save[53] = exp((g_RT[17] + g_RT[11]) - (g_RT[10] + g_RT[13]));
        Kc_save[54] = exp((g_RT[17]) - (g_RT[16]));
        Kc_save[55] = exp((g_RT[16] + g_RT[2]) - (g_RT[22] + g_RT[6]));
        Kc_save[56] = exp((g_RT[16] + g_RT[4]) - (g_RT[13] + g_RT[2]));
        Kc_save[57] = exp((g_RT[16] + g_RT[4]) - (g_RT[22] + g_RT[7]));
        Kc_save[58] = refC * exp((g_RT[16] + g_RT[5]) - (g_RT[10] + 2 * g_RT[2]));
        Kc_save[59] = exp((g_RT[16] + g_RT[5]) - (g_RT[10] + g_RT[6]));
        Kc_save[60] = exp((g_RT[16] + g_RT[3]) - (g_RT[11] + g_RT[6]));
        Kc_save[61] = refC * exp((g_RT[16] + g_RT[3]) - (g_RT[10] + g_RT[4] + g_RT[2]));
        Kc_save[62] = refC * exp((2 * g_RT[16]) - (g_RT[23] + 2 * g_RT[2]));
        Kc_save[63] = exp((g_RT[22] + g_RT[5]) - (g_RT[10] + g_RT[2]));
        Kc_save[64] = exp((g_RT[22] + g_RT[3]) - (g_RT[12] + g_RT[5]));
        Kc_save[65] = exp((g_RT[22] + g_RT[7]) - (g_RT[13] + g_RT[2]));
        Kc_save[66] = exp((g_RT[22] + g_RT[11]) - (g_RT[12] + g_RT[10]));
        Kc_save[67] = exp((g_RT[19] + g_RT[2]) - (g_RT[13] + g_RT[6]));
        Kc_save[68] = exp((g_RT[19] + g_RT[2]) - (g_RT[17] + g_RT[7]));
        Kc_save[69] = exp((g_RT[19] + g_RT[4]) - (g_RT[13] + g_RT[7]));
        Kc_save[70] = exp((g_RT[19] + g_RT[5]) - (g_RT[4] + g_RT[13]));
        Kc_save[71] = exp((g_RT[19] + g_RT[3]) - (g_RT[13] + g_RT[8]));
        Kc_save[72] = refC * exp((g_RT[19]) - (g_RT[13] + g_RT[2]));
        Kc_save[73] = exp((g_RT[21] + g_RT[2]) - (g_RT[20] + g_RT[6]));
        Kc_save[74] = exp((g_RT[21] + g_RT[5]) - (g_RT[20] + g_RT[4]));
        Kc_save[75] = exp((g_RT[21] + g_RT[4]) - (g_RT[20] + g_RT[7]));
        Kc_save[76] = exp((g_RT[21] + g_RT[15]) - (g_RT[20] + g_RT[14]));
        Kc_save[77] = refC * exp((g_RT[21]) - (g_RT[20] + g_RT[2]));
        Kc_save[78] = exp((g_RT[20] + g_RT[2]) - (g_RT[18] + g_RT[6]));
        Kc_save[79] = exp((g_RT[20] + g_RT[5]) - (g_RT[18] + g_RT[4]));
        Kc_save[80] = exp((g_RT[20] + g_RT[5]) - (g_RT[15] + g_RT[13]));
        Kc_save[81] = exp((g_RT[20] + g_RT[3]) - (g_RT[18] + g_RT[8]));
        Kc_save[82] = refC * exp((g_RT[20]) - (g_RT[18] + g_RT[2]));
        Kc_save[83] = exp((g_RT[18] + g_RT[2]) - (g_RT[24] + g_RT[6]));
        Kc_save[84] = exp((g_RT[18] + g_RT[4]) - (g_RT[24] + g_RT[7]));
        Kc_save[85] = exp((g_RT[18] + g_RT[5]) - (g_RT[15] + g_RT[12]));
        Kc_save[86] = exp((g_RT[18] + g_RT[5]) - (g_RT[25] + g_RT[2]));
        Kc_save[87] = exp((2 * g_RT[18]) - (g_RT[24] + g_RT[20]));
        Kc_save[88] = exp((g_RT[18] + g_RT[3]) - (g_RT[24] + g_RT[8]));
        Kc_save[89] = exp((g_RT[18] + g_RT[8]) - (g_RT[26] + g_RT[4]));
        Kc_save[90] = refC * exp((g_RT[26] + g_RT[8]) - (g_RT[15] + g_RT[10] + g_RT[9]));
        Kc_save[91] = refC * exp((g_RT[18]) - (g_RT[24] + g_RT[2]));
        Kc_save[92] = refC * exp((g_RT[18]) - (g_RT[23] + g_RT[6]));
        Kc_save[93] = exp((g_RT[24] + g_RT[2]) - (g_RT[23] + g_RT[6]));
        Kc_save[94] = refC * exp((g_RT[24]) - (g_RT[23] + g_RT[2]));
        Kc_save[95] = exp((g_RT[24] + g_RT[3]) - (g_RT[13] + g_RT[12]));
        Kc_save[96] = exp((g_RT[24] + g_RT[3]) - (g_RT[25] + g_RT[5]));
        Kc_save[97] = exp((g_RT[24] + g_RT[3]) - (g_RT[23] + g_RT[8]));
        Kc_save[98] = refC * exp((g_RT[25]) - (g_RT[27] + g_RT[2]));
        Kc_save[99] = exp((g_RT[23] + g_RT[5]) - (g_RT[28] + g_RT[2]));
        Kc_save[100] = exp((g_RT[23] + g_RT[5]) - (g_RT[16] + g_RT[10]));
        Kc_save[101] = exp((g_RT[23] + g_RT[3]) - (g_RT[13] + g_RT[10]));
        Kc_save[102] = exp((g_RT[23] + g_RT[4]) - (g_RT[27] + g_RT[2]));
        Kc_save[103] = exp((g_RT[23] + g_RT[4]) - (g_RT[29] + g_RT[7]));
        Kc_save[104] = exp((g_RT[27] + g_RT[2]) - (g_RT[15] + g_RT[10]));
        Kc_save[105] = exp((g_RT[27] + g_RT[5]) - (g_RT[16] + g_RT[11]));
        Kc_save[106] = exp((g_RT[27] + g_RT[5]) - (g_RT[28] + g_RT[4]));
        Kc_save[107] = exp((g_RT[27] + g_RT[15]) - (g_RT[20] + g_RT[10]));
        Kc_save[108] = exp((g_RT[28] + g_RT[2]) - (g_RT[17] + g_RT[10]));
        Kc_save[109] = refC * exp((g_RT[28] + g_RT[4]) - (g_RT[12] + g_RT[10] + g_RT[2]));
        Kc_save[110] = refC * exp((g_RT[28] + g_RT[5]) - (2 * g_RT[10] + g_RT[2]));
        Kc_save[111] = refC * exp((g_RT[28] + g_RT[3]) - (2 * g_RT[10] + g_RT[4]));
        Kc_save[112] = refC * exp((g_RT[28] + g_RT[3]) - (g_RT[11] + g_RT[10] + g_RT[2]));
        Kc_save[113] = exp((g_RT[29] + g_RT[4]) - (g_RT[28] + g_RT[2]));
        Kc_save[114] = exp((g_RT[29] + g_RT[5]) - (g_RT[10] + g_RT[22]));
        Kc_save[115] = exp((g_RT[29] + g_RT[3]) - (g_RT[28] + g_RT[5]));
        Kc_save[116] = exp((g_RT[29] + g_RT[3]) - (g_RT[22] + g_RT[11]));
        Kc_save[117] = exp((g_RT[29] + g_RT[3]) - (g_RT[12] + g_RT[10]));
        Kc_save[118] = exp((g_RT[30] + g_RT[2]) - (g_RT[13] + g_RT[6]));
        Kc_save[119] = exp((g_RT[30] + g_RT[2]) - (g_RT[15] + g_RT[4]));
        Kc_save[120] = exp((g_RT[30] + g_RT[4]) - (g_RT[13] + g_RT[7]));
        Kc_save[121] = exp((g_RT[30] + g_RT[3]) - (g_RT[13] + g_RT[8]));
        Kc_save[122] = refC * exp((g_RT[30]) - (g_RT[13] + g_RT[2]));
        Kc_save[123] = exp((g_RT[19]) - (g_RT[30]));
        Kc_save[124] = exp((g_RT[27] + g_RT[4]) - (g_RT[30] + g_RT[10]));
        Kc_save[125] = exp((g_RT[31] + g_RT[4]) - (g_RT[30] + g_RT[7]));
        Kc_save[126] = exp((g_RT[31] + g_RT[4]) - (g_RT[19] + g_RT[7]));
        Kc_save[127] = exp((g_RT[31] + g_RT[2]) - (g_RT[30] + g_RT[6]));
        Kc_save[128] = exp((g_RT[31] + g_RT[2]) - (g_RT[19] + g_RT[6]));
        Kc_save[129] = exp((g_RT[31] + g_RT[5]) - (g_RT[30] + g_RT[4]));
        Kc_save[130] = exp((g_RT[31] + g_RT[8]) - (g_RT[30] + g_RT[9]));
        Kc_save[131] = exp((g_RT[31] + g_RT[3]) - (g_RT[30] + g_RT[8]));
        Kc_save[132] = exp((g_RT[32] + g_RT[5]) - (g_RT[18] + g_RT[10]));
        Kc_save[133] = exp((g_RT[15] + g_RT[23]) - (g_RT[32] + g_RT[2]));
        Kc_save[134] = exp((g_RT[32] + g_RT[5]) - (g_RT[28] + g_RT[15]));
        Kc_save[135] = 1.0 / (refC) * exp((g_RT[33] + g_RT[2]) - (g_RT[32]));
        Kc_save[136] = exp((g_RT[33] + g_RT[8]) - (g_RT[32] + g_RT[3]));
        Kc_save[137] = exp((g_RT[32] + g_RT[4]) - (g_RT[33] + g_RT[7]));
        Kc_save[138] = exp((g_RT[33] + g_RT[3]) - (g_RT[27] + g_RT[12]));
        Kc_save[139] = 1.0 / (refC) * exp((g_RT[32] + g_RT[2]) - (g_RT[34]));
        Kc_save[140] = exp((g_RT[34] + g_RT[2]) - (g_RT[32] + g_RT[6]));
        Kc_save[141] = exp((g_RT[34] + g_RT[3]) - (g_RT[32] + g_RT[8]));
        Kc_save[142] = exp((g_RT[34] + g_RT[15]) - (g_RT[32] + g_RT[14]));
        Kc_save[143] = 1.0 / (refC) * exp((g_RT[23] + g_RT[15]) - (g_RT[34]));
        Kc_save[144] = exp((g_RT[34] + g_RT[4]) - (g_RT[32] + g_RT[7]));
        Kc_save[145] = exp((g_RT[33] + g_RT[12]) - (g_RT[32] + g_RT[10]));
        Kc_save[146] = refC * exp((g_RT[33] + g_RT[8]) - (g_RT[4] + g_RT[10] + g_RT[24]));
        Kc_save[147] = refC * exp((g_RT[32] + g_RT[3]) - (g_RT[15] + g_RT[12] + g_RT[10]));
        Kc_save[148] = exp((g_RT[35] + g_RT[5]) - (g_RT[20] + g_RT[12]));
        Kc_save[149] = exp((g_RT[35] + g_RT[4]) - (g_RT[34] + g_RT[7]));
        Kc_save[150] = refC * exp((g_RT[35] + g_RT[5]) - (g_RT[27] + g_RT[15] + g_RT[2]));
        Kc_save[151] = exp((g_RT[35] + g_RT[2]) - (g_RT[34] + g_RT[6]));
        Kc_save[152] = 1.0 / (refC) * exp((g_RT[34] + g_RT[2]) - (g_RT[35]));
        Kc_save[153] = exp((g_RT[34] + g_RT[8]) - (g_RT[35] + g_RT[3]));
        Kc_save[154] = refC * exp((g_RT[34] + g_RT[8]) - (g_RT[4] + g_RT[24] + g_RT[13]));
        Kc_save[155] = 1.0 / (refC) * exp((g_RT[24] + g_RT[15]) - (g_RT[35]));
        Kc_save[156] = exp((g_RT[35] + g_RT[2]) - (g_RT[18] + g_RT[15]));
        Kc_save[157] = exp((g_RT[15] + g_RT[24]) - (g_RT[34] + g_RT[2]));
        Kc_save[158] = refC * exp((g_RT[36]) - (g_RT[15] + g_RT[20]));
        Kc_save[159] = exp((g_RT[36] + g_RT[3]) - (g_RT[37] + g_RT[8]));
        Kc_save[160] = exp((g_RT[36] + g_RT[3]) - (g_RT[38] + g_RT[8]));
        Kc_save[161] = exp((g_RT[36] + g_RT[2]) - (g_RT[37] + g_RT[6]));
        Kc_save[162] = exp((g_RT[36] + g_RT[2]) - (g_RT[38] + g_RT[6]));
        Kc_save[163] = exp((g_RT[36] + g_RT[5]) - (g_RT[37] + g_RT[4]));
        Kc_save[164] = exp((g_RT[36] + g_RT[5]) - (g_RT[38] + g_RT[4]));
        Kc_save[165] = exp((g_RT[36] + g_RT[4]) - (g_RT[38] + g_RT[7]));
        Kc_save[166] = exp((g_RT[36] + g_RT[4]) - (g_RT[37] + g_RT[7]));
        Kc_save[167] = exp((g_RT[36] + g_RT[8]) - (g_RT[37] + g_RT[9]));
        Kc_save[168] = exp((g_RT[36] + g_RT[8]) - (g_RT[38] + g_RT[9]));
        Kc_save[169] = exp((g_RT[37] + g_RT[36]) - (g_RT[38] + g_RT[36]));
        Kc_save[170] = 1.0 / (refC) * exp((g_RT[35] + g_RT[2]) - (g_RT[37]));
        Kc_save[171] = exp((g_RT[37] + g_RT[3]) - (g_RT[35] + g_RT[8]));
        Kc_save[172] = refC * exp((g_RT[38]) - (g_RT[15] + g_RT[18]));
        Kc_save[173] = 1.0 / (refC) * exp((g_RT[2] + g_RT[35]) - (g_RT[38]));
        Kc_save[174] = exp((g_RT[38] + g_RT[3]) - (g_RT[35] + g_RT[8]));
    }

    /*reaction 1: H + O2 <=> OH + O */
    phi_f = sc[2]*sc[3];
    k_f = k_f_save[0];
    q_f[0] = phi_f * k_f;
    phi_r = sc[4]*sc[5];
    Kc = Kc_save[0];
    k_r = k_f / Kc;
    q_r[0] = phi_r * k_r;

    /*reaction 2: H2 + O <=> OH + H */
    phi_f = sc[6]*sc[5];
    k_f = k_f_save[1];
    q_f[1] = phi_f * k_f;
    phi_r = sc[4]*sc[2];
    Kc = Kc_save[1];
    k_r = k_f / Kc;
    q_r[1] = phi_r * k_r;

    /*reaction 3: H2 + OH <=> H2O + H */
    phi_f = sc[6]*sc[4];
    k_f = k_f_save[2];
    q_f[2] = phi_f * k_f;
    phi_r = sc[7]*sc[2];
    Kc = Kc_save[2];
    k_r = k_f / Kc;
    q_r[2] = phi_r * k_r;

    /*reaction 4: H2O + O <=> 2 OH */
    phi_f = sc[7]*sc[5];
    k_f = k_f_save[3];
    q_f[3] = phi_f * k_f;
    phi_r = sc[4]*sc[4];
    Kc = Kc_save[3];
    k_r = k_f / Kc;
    q_r[3] = phi_r * k_r;

    /*reaction 5: H + O + M <=> OH + M */
    phi_f = sc[2]*sc[5];
    alpha = mixture + 1.5*sc[6] + 11*sc[7] + 0.9*sc[10] + 2.8*sc[11];
    k_f = alpha * k_f_save[4];
    q_f[4] = phi_f * k_f;
    phi_r = sc[4];
    Kc = Kc_save[4];
    k_r = k_f / Kc;
    q_r[4] = phi_r * k_r;

    /*reaction 6: H2 + O2 <=> 2 OH */
    phi_f = sc[6]*sc[3];
    k_f = k_f_save[5];
    q_f[5] = phi_f * k_f;
    phi_r = sc[4]*sc[4];
    Kc = Kc_save[5];
    k_r = k_f / Kc;
    q_r[5] = phi_r * k_r;

    /*reaction 7: 2 H + M <=> H2 + M */
    phi_f = sc[2]*sc[2];
    alpha = mixture + 1.5*sc[6] + 15.3*sc[7] + 0.9*sc[10] + 2.8*sc[11];
    k_f = alpha * k_f_save[6];
    q_f[6] = phi_f * k_f;
    phi_r = sc[6];
    Kc = Kc_save[6];
    k_r = k_f / Kc;
    q_r[6] = phi_r * k_r;

    /*reaction 8: H + OH + M <=> H2O + M */
    phi_f = sc[2]*sc[4];
    alpha = mixture + 1.5*sc[6] + 11*sc[7] + 0.9*sc[10] + 2.8*sc[11];
    k_f = alpha * k_f_save[7];
    q_f[7] = phi_f * k_f;
    phi_r = sc[7];
    Kc = Kc_save[7];
    k_r = k_f / Kc;
    q_r[7] = phi_r * k_r;

    /*reaction 9: 2 O + M <=> O2 + M */
    phi_f = sc[5]*sc[5];
    alpha = mixture + 1.5*sc[6] + 11*sc[7] + 0.9*sc[10] + 2.8*sc[11];
    k_f = alpha * k_f_save[8];
    q_f[8] = phi_f * k_f;
    phi_r = sc[3];
    Kc = Kc_save[8];
    k_r = k_f / Kc;
    q_r[8] = phi_r * k_r;

    /*reaction 10: H + O2 (+M) <=> HO2 (+M) */
    phi_f = sc[2]*sc[3];
    alpha = mixture + -0.5*sc[1] + -0.7*sc[3] + 6*sc[7] + -0.25*sc[10] + 0.5*sc[11] + 0.5*sc[21];
    k_f = k_f_save[9];
    redP = 1e-12 * alpha / k_f * 2.6e+19*exp(-1.2*tc[0]);
    F = redP / (1 + redP);
    logPred = log10(redP);
    logFcent = log10((1*exp(T/-345))+ (0*exp(T/-1))+ (exp(-345/T)));
    troe_c = -.4 - .67 * logFcent;
    troe_n = .75 - 1.27 * logFcent;
    troe = (troe_c + logPred) / (troe_n - .14*(troe_c + logPred));
    F_troe = pow(10, logFcent / (1.0 + troe*troe));
    F *= F_troe;
    k_f *= F;
    q_f[9] = phi_f * k_f;
    phi_r = sc[8];
    Kc = Kc_save[9];
    k_r = k_f / Kc;
    q_r[9] = phi_r * k_r;

    /*reaction 11: O + OH + M <=> HO2 + M */
    phi_f = sc[5]*sc[4];
    alpha = mixture;
    k_f = alpha * k_f_save[10];
    q_f[10] = phi_f * k_f;
    phi_r = sc[8];
    Kc = Kc_save[10];
    k_r = k_f / Kc;
    q_r[10] = phi_r * k_r;

    /*reaction 12: HO2 + H <=> 2 OH */
    phi_f = sc[8]*sc[2];
    k_f = k_f_save[11];
    q_f[11] = phi_f * k_f;
    phi_r = sc[4]*sc[4];
    Kc = Kc_save[11];
    k_r = k_f / Kc;
    q_r[11] = phi_r * k_r;

    /*reaction 13: HO2 + H <=> H2 + O2 */
    phi_f = sc[8]*sc[2];
    k_f = k_f_save[12];
    q_f[12] = phi_f * k_f;
    phi_r = sc[6]*sc[3];
    Kc = Kc_save[12];
    k_r = k_f / Kc;
    q_r[12] = phi_r * k_r;

    /*reaction 14: HO2 + H <=> H2O + O */
    phi_f = sc[8]*sc[2];
    k_f = k_f_save[13];
    q_f[13] = phi_f * k_f;
    phi_r = sc[7]*sc[5];
    Kc = Kc_save[13];
    k_r = k_f / Kc;
    q_r[13] = phi_r * k_r;

    /*reaction 15: HO2 + O <=> OH + O2 */
    phi_f = sc[8]*sc[5];
    k_f = k_f_save[14];
    q_f[14] = phi_f * k_f;
    phi_r = sc[4]*sc[3];
    Kc = Kc_save[14];
    k_r = k_f / Kc;
    q_r[14] = phi_r * k_r;

    /*reaction 16: HO2 + OH <=> H2O + O2 */
    phi_f = sc[8]*sc[4];
    k_f = k_f_save[15];
    q_f[15] = phi_f * k_f;
    phi_r = sc[7]*sc[3];
    Kc = Kc_save[15];
    k_r = k_f / Kc;
    q_r[15] = phi_r * k_r;

    /*reaction 17: 2 OH (+M) <=> H2O2 (+M) */
    phi_f = sc[4]*sc[4];
    alpha = mixture + -0.3*sc[1] + sc[6] + 5*sc[7] + 0.5*sc[10] + sc[11] + sc[14] + 2*sc[21];
    k_f = k_f_save[16];
    redP = 1e-12 * alpha / k_f * 1.34e+17*exp(-0.584*tc[0]+1154.6105110222970325*invT);
    F = redP / (1 + redP);
    logPred = log10(redP);
    logFcent = log10((0.265*exp(T/-94))+ (0.735*exp(T/-1756))+ (exp(-5182/T)));
    troe_c = -.4 - .67 * logFcent;
    troe_n = .75 - 1.27 * logFcent;
    troe = (troe_c + logPred) / (troe_n - .14*(troe_c + logPred));
    F_troe = pow(10, logFcent / (1.0 + troe*troe));
    F *= F_troe;
    k_f *= F;
    q_f[16] = phi_f * k_f;
    phi_r = sc[9];
    Kc = Kc_save[16];
    k_r = k_f / Kc;
    q_r[16] = phi_r * k_r;

    /*reaction 18: 2 HO2 <=> H2O2 + O2 */
    phi_f = sc[8]*sc[8];
    k_f = k_f_save[17];
    q_f[17] = phi_f * k_f;
    phi_r = sc[9]*sc[3];
    Kc = Kc_save[17];
    k_r = k_f / Kc;
    q_r[17] = phi_r * k_r;

    /*reaction 19: H2O2 + H <=> HO2 + H2 */
    phi_f = sc[9]*sc[2];
    k_f = k_f_save[18];
    q_f[18] = phi_f * k_f;
    phi_r = sc[8]*sc[6];
    Kc = Kc_save[18];
    k_r = k_f / Kc;
    q_r[18] = phi_r * k_r;

    /*reaction 20: H2O2 + H <=> H2O + OH */
    phi_f = sc[9]*sc[2];
    k_f = k_f_save[19];
    q_f[19] = phi_f * k_f;
    phi_r = sc[7]*sc[4];
    Kc = Kc_save[19];
    k_r = k_f / Kc;
    q_r[19] = phi_r * k_r;

    /*reaction 21: H2O2 + OH <=> H2O + HO2 */
    phi_f = sc[9]*sc[4];
    k_f = k_f_save[20];
    q_f[20] = phi_f * k_f;
    phi_r = sc[7]*sc[8];
    Kc = Kc_save[20];
    k_r = k_f / Kc;
    q_r[20] = phi_r * k_r;

    /*reaction 22: H2O2 + O <=> HO2 + OH */
    phi_f = sc[9]*sc[5];
    k_f = k_f_save[21];
    q_f[21] = phi_f * k_f;
    phi_r = sc[8]*sc[4];
    Kc = Kc_save[21];
    k_r = k_f / Kc;
    q_r[21] = phi_r * k_r;

    /*reaction 23: CO + OH <=> CO2 + H */
    phi_f = sc[10]*sc[4];
    k_f = k_f_save[22];
    q_f[22] = phi_f * k_f;
    phi_r = sc[11]*sc[2];
    Kc = Kc_save[22];
    k_r = k_f / Kc;
    q_r[22] = phi_r * k_r;

    /*reaction 24: CO + HO2 <=> CO2 + OH */
    phi_f = sc[10]*sc[8];
    k_f = k_f_save[23];
    q_f[23] = phi_f * k_f;
    phi_r = sc[11]*sc[4];
    Kc = Kc_save[23];
    k_r = k_f / Kc;
    q_r[23] = phi_r * k_r;

    /*reaction 25: HCO + M <=> CO + H + M */
    phi_f = sc[12];
    alpha = mixture + 0.9*sc[6] + 11*sc[7] + 1.5*sc[10] + 1.5*sc[11];
    k_f = alpha * k_f_save[24];
    q_f[24] = phi_f * k_f;
    phi_r = sc[10]*sc[2];
    Kc = Kc_save[24];
    k_r = k_f / Kc;
    q_r[24] = phi_r * k_r;

    /*reaction 26: HCO + H <=> CO + H2 */
    phi_f = sc[12]*sc[2];
    k_f = k_f_save[25];
    q_f[25] = phi_f * k_f;
    phi_r = sc[10]*sc[6];
    Kc = Kc_save[25];
    k_r = k_f / Kc;
    q_r[25] = phi_r * k_r;

    /*reaction 27: HCO + O <=> CO + OH */
    phi_f = sc[12]*sc[5];
    k_f = k_f_save[26];
    q_f[26] = phi_f * k_f;
    phi_r = sc[10]*sc[4];
    Kc = Kc_save[26];
    k_r = k_f / Kc;
    q_r[26] = phi_r * k_r;

    /*reaction 28: HCO + O <=> CO2 + H */
    phi_f = sc[12]*sc[5];
    k_f = k_f_save[27];
    q_f[27] = phi_f * k_f;
    phi_r = sc[11]*sc[2];
    Kc = Kc_save[27];
    k_r = k_f / Kc;
    q_r[27] = phi_r * k_r;

    /*reaction 29: HCO + OH <=> CO + H2O */
    phi_f = sc[12]*sc[4];
    k_f = k_f_save[28];
    q_f[28] = phi_f * k_f;
    phi_r = sc[10]*sc[7];
    Kc = Kc_save[28];
    k_r = k_f / Kc;
    q_r[28] = phi_r * k_r;

    /*reaction 30: HCO + O2 <=> CO + HO2 */
    phi_f = sc[12]*sc[3];
    k_f = k_f_save[29];
    q_f[29] = phi_f * k_f;
    phi_r = sc[10]*sc[8];
    Kc = Kc_save[29];
    k_r = k_f / Kc;
    q_r[29] = phi_r * k_r;

    /*reaction 31: CH2O + M <=> HCO + H + M */
    phi_f = sc[13];
    alpha = mixture + 1.5*sc[6] + 15.3*sc[7] + 0.9*sc[10] + 2.8*sc[11];
    k_f = alpha * k_f_save[30];
    q_f[30] = phi_f * k_f;
    phi_r = sc[12]*sc[2];
    Kc = Kc_save[30];
    k_r = k_f / Kc;
    q_r[30] = phi_r * k_r;

    /*reaction 32: CH2O + H <=> HCO + H2 */
    phi_f = sc[13]*sc[2];
    k_f = k_f_save[31];
    q_f[31] = phi_f * k_f;
    phi_r = sc[12]*sc[6];
    Kc = Kc_save[31];
    k_r = k_f / Kc;
    q_r[31] = phi_r * k_r;

    /*reaction 33: CH2O + O <=> HCO + OH */
    phi_f = sc[13]*sc[5];
    k_f = k_f_save[32];
    q_f[32] = phi_f * k_f;
    phi_r = sc[12]*sc[4];
    Kc = Kc_save[32];
    k_r = k_f / Kc;
    q_r[32] = phi_r * k_r;

    /*reaction 34: CH2O + OH <=> HCO + H2O */
    phi_f = sc[13]*sc[4];
    k_f = k_f_save[33];
    q_f[33] = phi_f * k_f;
    phi_r = sc[12]*sc[7];
    Kc = Kc_save[33];
    k_r = k_f / Kc;
    q_r[33] = phi_r * k_r;

    /*reaction 35: CH4 + H <=> H2 + CH3 */
    phi_f = sc[14]*sc[2];
    k_f = k_f_save[34];
    q_f[34] = phi_f * k_f;
    phi_r = sc[6]*sc[15];
    Kc = Kc_save[34];
    k_r = k_f / Kc;
    q_r[34] = phi_r * k_r;

    /*reaction 36: CH4 + OH <=> H2O + CH3 */
    phi_f = sc[14]*sc[4];
    k_f = k_f_save[35];
    q_f[35] = phi_f * k_f;
    phi_r = sc[7]*sc[15];
    Kc = Kc_save[35];
    k_r = k_f / Kc;
    q_r[35] = phi_r * k_r;

    /*reaction 37: CH4 + O <=> CH3 + OH */
    phi_f = sc[14]*sc[5];
    k_f = k_f_save[36];
    q_f[36] = phi_f * k_f;
    phi_r = sc[15]*sc[4];
    Kc = Kc_save[36];
    k_r = k_f / Kc;
    q_r[36] = phi_r * k_r;

    /*reaction 38: CH4 + O2 <=> CH3 + HO2 */
    phi_f = sc[14]*sc[3];
    k_f = k_f_save[37];
    q_f[37] = phi_f * k_f;
    phi_r = sc[15]*sc[8];
    Kc = Kc_save[37];
    k_r = k_f / Kc;
    q_r[37] = phi_r * k_r;

    /*reaction 39: CH4 + HO2 <=> CH3 + H2O2 */
    phi_f = sc[14]*sc[8];
    k_f = k_f_save[38];
    q_f[38] = phi_f * k_f;
    phi_r = sc[15]*sc[9];
    Kc = Kc_save[38];
    k_r = k_f / Kc;
    q_r[38] = phi_r * k_r;

    /*reaction 40: CH3 + H <=> T-CH2 + H2 */
    phi_f = sc[15]*sc[2];
    k_f = k_f_save[39];
    q_f[39] = phi_f * k_f;
    phi_r = sc[16]*sc[6];
    Kc = Kc_save[39];
    k_r = k_f / Kc;
    q_r[39] = phi_r * k_r;

    /*reaction 41: CH3 + H <=> S-CH2 + H2 */
    phi_f = sc[15]*sc[2];
    k_f = k_f_save[40];
    q_f[40] = phi_f * k_f;
    phi_r = sc[17]*sc[6];
    Kc = Kc_save[40];
    k_r = k_f / Kc;
    q_r[40] = phi_r * k_r;

    /*reaction 42: CH3 + OH <=> S-CH2 + H2O */
    phi_f = sc[15]*sc[4];
    k_f = k_f_save[41];
    q_f[41] = phi_f * k_f;
    phi_r = sc[17]*sc[7];
    Kc = Kc_save[41];
    k_r = k_f / Kc;
    q_r[41] = phi_r * k_r;

    /*reaction 43: CH3 + O <=> CH2O + H */
    phi_f = sc[15]*sc[5];
    k_f = k_f_save[42];
    q_f[42] = phi_f * k_f;
    phi_r = sc[13]*sc[2];
    Kc = Kc_save[42];
    k_r = k_f / Kc;
    q_r[42] = phi_r * k_r;

    /*reaction 44: CH3 + T-CH2 <=> C2H4 + H */
    phi_f = sc[15]*sc[16];
    k_f = k_f_save[43];
    q_f[43] = phi_f * k_f;
    phi_r = sc[18]*sc[2];
    Kc = Kc_save[43];
    k_r = k_f / Kc;
    q_r[43] = phi_r * k_r;

    /*reaction 45: CH3 + HO2 <=> CH3O + OH */
    phi_f = sc[15]*sc[8];
    k_f = k_f_save[44];
    q_f[44] = phi_f * k_f;
    phi_r = sc[19]*sc[4];
    Kc = Kc_save[44];
    k_r = k_f / Kc;
    q_r[44] = phi_r * k_r;

    /*reaction 46: CH3 + O2 <=> CH2O + OH */
    phi_f = sc[15]*sc[3];
    k_f = k_f_save[45];
    q_f[45] = phi_f * k_f;
    phi_r = sc[13]*sc[4];
    Kc = Kc_save[45];
    k_r = k_f / Kc;
    q_r[45] = phi_r * k_r;

    /*reaction 47: CH3 + O2 <=> CH3O + O */
    phi_f = sc[15]*sc[3];
    k_f = k_f_save[46];
    q_f[46] = phi_f * k_f;
    phi_r = sc[19]*sc[5];
    Kc = Kc_save[46];
    k_r = k_f / Kc;
    q_r[46] = phi_r * k_r;

    /*reaction 48: 2 CH3 <=> C2H4 + H2 */
    phi_f = sc[15]*sc[15];
    k_f = k_f_save[47];
    q_f[47] = phi_f * k_f;
    phi_r = sc[18]*sc[6];
    Kc = Kc_save[47];
    k_r = k_f / Kc;
    q_r[47] = phi_r * k_r;

    /*reaction 49: 2 CH3 <=> C2H5 + H */
    phi_f = sc[15]*sc[15];
    k_f = k_f_save[48];
    q_f[48] = phi_f * k_f;
    phi_r = sc[20]*sc[2];
    Kc = Kc_save[48];
    k_r = k_f / Kc;
    q_r[48] = phi_r * k_r;

    /*reaction 50: CH3 + H (+M) <=> CH4 (+M) */
    phi_f = sc[15]*sc[2];
    alpha = mixture;
    k_f = k_f_save[49];
    redP = 1e-12 * alpha / k_f * 6.26e+23*exp(-1.8*tc[0]);
    F = redP / (1 + redP);
    logPred = log10(redP);
    logFcent = log10((0.63*exp(T/-3315))+ (0.37*exp(T/-61)));
    troe_c = -.4 - .67 * logFcent;
    troe_n = .75 - 1.27 * logFcent;
    troe = (troe_c + logPred) / (troe_n - .14*(troe_c + logPred));
    F_troe = pow(10, logFcent / (1.0 + troe*troe));
    F *= F_troe;
    k_f *= F;
    q_f[49] = phi_f * k_f;
    phi_r = sc[14];
    Kc = Kc_save[49];
    k_r = k_f / Kc;
    q_r[49] = phi_r * k_r;

    /*reaction 51: 2 CH3 (+M) <=> C2H6 (+M) */
    phi_f = sc[15]*sc[15];
    alpha = mixture;
    k_f = k_f_save[50];
    redP = 1e-12 * alpha / k_f * 1.27e+41*exp(-7*tc[0]-1390.3423581185179501*invT);
    F = redP / (1 + redP);
    logPred = log10(redP);
    logFcent = log10((0.38*exp(T/-73))+ (0.62*exp(T/-1180)));
    troe_c = -.4 - .67 * logFcent;
    troe_n = .75 - 1.27 * logFcent;
    troe = (troe_c + logPred) / (troe_n - .14*(troe_c + logPred));
    F_troe = pow(10, logFcent / (1.0 + troe*troe));
    F *= F_troe;
    k_f *= F;
    q_f[50] = phi_f * k_f;
    phi_r = sc[21];
    Kc = Kc_save[50];
    k_r = k_f / Kc;
    q_r[50] = phi_r * k_r;

    /*reaction 52: S-CH2 + OH <=> CH2O + H */
    phi_f = sc[17]*sc[4];
    k_f = k_f_save[51];
    q_f[51] = phi_f * k_f;
    phi_r = sc[13]*sc[2];
    Kc = Kc_save[51];
    k_r = k_f / Kc;
    q_r[51] = phi_r * k_r;

    /*reaction 53: S-CH2 + O2 <=> CO + OH + H */
    phi_f = sc[17]*sc[3];
    k_f = k_f_save[52];
    q_f[52] = phi_f * k_f;
    phi_r = sc[10]*sc[4]*sc[2];
    Kc = Kc_save[52];
    k_r = k_f / Kc;
    q_r[52] = phi_r * k_r;

    /*reaction 54: S-CH2 + CO2 <=> CO + CH2O */
    phi_f = sc[17]*sc[11];
    k_f = k_f_save[53];
    q_f[53] = phi_f * k_f;
    phi_r = sc[10]*sc[13];
    Kc = Kc_save[53];
    k_r = k_f / Kc;
    q_r[53] = phi_r * k_r;

    /*reaction 55: S-CH2 + M <=> T-CH2 + M */
    phi_f = sc[17];
    alpha = mixture + 1.4*sc[6] + 14.4*sc[7] + 0.8*sc[10] + 2.6*sc[11];
    k_f = alpha * k_f_save[54];
    q_f[54] = phi_f * k_f;
    phi_r = sc[16];
    Kc = Kc_save[54];
    k_r = k_f / Kc;
    q_r[54] = phi_r * k_r;

    /*reaction 56: T-CH2 + H <=> CH + H2 */
    phi_f = sc[16]*sc[2];
    k_f = k_f_save[55];
    q_f[55] = phi_f * k_f;
    phi_r = sc[22]*sc[6];
    Kc = Kc_save[55];
    k_r = k_f / Kc;
    q_r[55] = phi_r * k_r;

    /*reaction 57: T-CH2 + OH <=> CH2O + H */
    phi_f = sc[16]*sc[4];
    k_f = k_f_save[56];
    q_f[56] = phi_f * k_f;
    phi_r = sc[13]*sc[2];
    Kc = Kc_save[56];
    k_r = k_f / Kc;
    q_r[56] = phi_r * k_r;

    /*reaction 58: T-CH2 + OH <=> CH + H2O */
    phi_f = sc[16]*sc[4];
    k_f = k_f_save[57];
    q_f[57] = phi_f * k_f;
    phi_r = sc[22]*sc[7];
    Kc = Kc_save[57];
    k_r = k_f / Kc;
    q_r[57] = phi_r * k_r;

    /*reaction 59: T-CH2 + O <=> CO + 2 H */
    phi_f = sc[16]*sc[5];
    k_f = k_f_save[58];
    q_f[58] = phi_f * k_f;
    phi_r = sc[10]*sc[2]*sc[2];
    Kc = Kc_save[58];
    k_r = k_f / Kc;
    q_r[58] = phi_r * k_r;

    /*reaction 60: T-CH2 + O <=> CO + H2 */
    phi_f = sc[16]*sc[5];
    k_f = k_f_save[59];
    q_f[59] = phi_f * k_f;
    phi_r = sc[10]*sc[6];
    Kc = Kc_save[59];
    k_r = k_f / Kc;
    q_r[59] = phi_r * k_r;

    /*reaction 61: T-CH2 + O2 <=> CO2 + H2 */
    phi_f = sc[16]*sc[3];
    k_f = k_f_save[60];
    q_f[60] = phi_f * k_f;
    phi_r = sc[11]*sc[6];
    Kc = Kc_save[60];
    k_r = k_f / Kc;
    q_r[60] = phi_r * k_r;

    /*reaction 62: T-CH2 + O2 <=> CO + OH + H */
    phi_f = sc[16]*sc[3];
    k_f = k_f_save[61];
    q_f[61] = phi_f * k_f;
    phi_r = sc[10]*sc[4]*sc[2];
    Kc = Kc_save[61];
    k_r = k_f / Kc;
    q_r[61] = phi_r * k_r;

    /*reaction 63: 2 T-CH2 <=> C2H2 + 2 H */
    phi_f = sc[16]*sc[16];
    k_f = k_f_save[62];
    q_f[62] = phi_f * k_f;
    phi_r = sc[23]*sc[2]*sc[2];
    Kc = Kc_save[62];
    k_r = k_f / Kc;
    q_r[62] = phi_r * k_r;

    /*reaction 64: CH + O <=> CO + H */
    phi_f = sc[22]*sc[5];
    k_f = k_f_save[63];
    q_f[63] = phi_f * k_f;
    phi_r = sc[10]*sc[2];
    Kc = Kc_save[63];
    k_r = k_f / Kc;
    q_r[63] = phi_r * k_r;

    /*reaction 65: CH + O2 <=> HCO + O */
    phi_f = sc[22]*sc[3];
    k_f = k_f_save[64];
    q_f[64] = phi_f * k_f;
    phi_r = sc[12]*sc[5];
    Kc = Kc_save[64];
    k_r = k_f / Kc;
    q_r[64] = phi_r * k_r;

    /*reaction 66: CH + H2O <=> CH2O + H */
    phi_f = sc[22]*sc[7];
    k_f = k_f_save[65];
    q_f[65] = phi_f * k_f;
    phi_r = sc[13]*sc[2];
    Kc = Kc_save[65];
    k_r = k_f / Kc;
    q_r[65] = phi_r * k_r;

    /*reaction 67: CH + CO2 <=> HCO + CO */
    phi_f = sc[22]*sc[11];
    k_f = k_f_save[66];
    q_f[66] = phi_f * k_f;
    phi_r = sc[12]*sc[10];
    Kc = Kc_save[66];
    k_r = k_f / Kc;
    q_r[66] = phi_r * k_r;

    /*reaction 68: CH3O + H <=> CH2O + H2 */
    phi_f = sc[19]*sc[2];
    k_f = k_f_save[67];
    q_f[67] = phi_f * k_f;
    phi_r = sc[13]*sc[6];
    Kc = Kc_save[67];
    k_r = k_f / Kc;
    q_r[67] = phi_r * k_r;

    /*reaction 69: CH3O + H <=> S-CH2 + H2O */
    phi_f = sc[19]*sc[2];
    k_f = k_f_save[68];
    q_f[68] = phi_f * k_f;
    phi_r = sc[17]*sc[7];
    Kc = Kc_save[68];
    k_r = k_f / Kc;
    q_r[68] = phi_r * k_r;

    /*reaction 70: CH3O + OH <=> CH2O + H2O */
    phi_f = sc[19]*sc[4];
    k_f = k_f_save[69];
    q_f[69] = phi_f * k_f;
    phi_r = sc[13]*sc[7];
    Kc = Kc_save[69];
    k_r = k_f / Kc;
    q_r[69] = phi_r * k_r;

    /*reaction 71: CH3O + O <=> OH + CH2O */
    phi_f = sc[19]*sc[5];
    k_f = k_f_save[70];
    q_f[70] = phi_f * k_f;
    phi_r = sc[4]*sc[13];
    Kc = Kc_save[70];
    k_r = k_f / Kc;
    q_r[70] = phi_r * k_r;

    /*reaction 72: CH3O + O2 <=> CH2O + HO2 */
    phi_f = sc[19]*sc[3];
    k_f = k_f_save[71];
    q_f[71] = phi_f * k_f;
    phi_r = sc[13]*sc[8];
    Kc = Kc_save[71];
    k_r = k_f / Kc;
    q_r[71] = phi_r * k_r;

    /*reaction 73: CH3O + M <=> CH2O + H + M */
    phi_f = sc[19];
    alpha = mixture;
    k_f = alpha * k_f_save[72];
    q_f[72] = phi_f * k_f;
    phi_r = sc[13]*sc[2];
    Kc = Kc_save[72];
    k_r = k_f / Kc;
    q_r[72] = phi_r * k_r;

    /*reaction 74: C2H6 + H <=> C2H5 + H2 */
    phi_f = sc[21]*sc[2];
    k_f = k_f_save[73];
    q_f[73] = phi_f * k_f;
    phi_r = sc[20]*sc[6];
    Kc = Kc_save[73];
    k_r = k_f / Kc;
    q_r[73] = phi_r * k_r;

    /*reaction 75: C2H6 + O <=> C2H5 + OH */
    phi_f = sc[21]*sc[5];
    k_f = k_f_save[74];
    q_f[74] = phi_f * k_f;
    phi_r = sc[20]*sc[4];
    Kc = Kc_save[74];
    k_r = k_f / Kc;
    q_r[74] = phi_r * k_r;

    /*reaction 76: C2H6 + OH <=> C2H5 + H2O */
    phi_f = sc[21]*sc[4];
    k_f = k_f_save[75];
    q_f[75] = phi_f * k_f;
    phi_r = sc[20]*sc[7];
    Kc = Kc_save[75];
    k_r = k_f / Kc;
    q_r[75] = phi_r * k_r;

    /*reaction 77: C2H6 + CH3 <=> C2H5 + CH4 */
    phi_f = sc[21]*sc[15];
    k_f = k_f_save[76];
    q_f[76] = phi_f * k_f;
    phi_r = sc[20]*sc[14];
    Kc = Kc_save[76];
    k_r = k_f / Kc;
    q_r[76] = phi_r * k_r;

    /*reaction 78: C2H6 (+M) <=> C2H5 + H (+M) */
    phi_f = sc[21];
    alpha = mixture;
    k_f = k_f_save[77];
    redP = 1e-6 * alpha / k_f * 4.9e+42*exp(-6.43*tc[0]-53929.815621124995232*invT);
    F = redP / (1 + redP);
    logPred = log10(redP);
    logFcent = log10((0.16*exp(T/-125))+ (0.84*exp(T/-2219))+ (exp(-6882/T)));
    troe_c = -.4 - .67 * logFcent;
    troe_n = .75 - 1.27 * logFcent;
    troe = (troe_c + logPred) / (troe_n - .14*(troe_c + logPred));
    F_troe = pow(10, logFcent / (1.0 + troe*troe));
    F *= F_troe;
    k_f *= F;
    q_f[77] = phi_f * k_f;
    phi_r = sc[20]*sc[2];
    Kc = Kc_save[77];
    k_r = k_f / Kc;
    q_r[77] = phi_r * k_r;

    /*reaction 79: C2H5 + H <=> C2H4 + H2 */
    phi_f = sc[20]*sc[2];
    k_f = k_f_save[78];
    q_f[78] = phi_f * k_f;
    phi_r = sc[18]*sc[6];
    Kc = Kc_save[78];
    k_r = k_f / Kc;
    q_r[78] = phi_r * k_r;

    /*reaction 80: C2H5 + O <=> C2H4 + OH */
    phi_f = sc[20]*sc[5];
    k_f = k_f_save[79];
    q_f[79] = phi_f * k_f;
    phi_r = sc[18]*sc[4];
    Kc = Kc_save[79];
    k_r = k_f / Kc;
    q_r[79] = phi_r * k_r;

    /*reaction 81: C2H5 + O <=> CH3 + CH2O */
    phi_f = sc[20]*sc[5];
    k_f = k_f_save[80];
    q_f[80] = phi_f * k_f;
    phi_r = sc[15]*sc[13];
    Kc = Kc_save[80];
    k_r = k_f / Kc;
    q_r[80] = phi_r * k_r;

    /*reaction 82: C2H5 + O2 <=> C2H4 + HO2 */
    phi_f = sc[20]*sc[3];
    k_f = k_f_save[81];
    q_f[81] = phi_f * k_f;
    phi_r = sc[18]*sc[8];
    Kc = Kc_save[81];
    k_r = k_f / Kc;
    q_r[81] = phi_r * k_r;

    /*reaction 83: C2H5 (+M) <=> C2H4 + H (+M) */
    phi_f = sc[20];
    alpha = mixture;
    k_f = k_f_save[82];
    redP = 1e-6 * alpha / k_f * 3.99e+33*exp(-4.99*tc[0]-20128.666632188789663*invT);
    F = redP / (1 + redP);
    logPred = log10(redP);
    logFcent = log10((0.832*exp(T/-1203)));
    troe_c = -.4 - .67 * logFcent;
    troe_n = .75 - 1.27 * logFcent;
    troe = (troe_c + logPred) / (troe_n - .14*(troe_c + logPred));
    F_troe = pow(10, logFcent / (1.0 + troe*troe));
    F *= F_troe;
    k_f *= F;
    q_f[82] = phi_f * k_f;
    phi_r = sc[18]*sc[2];
    Kc = Kc_save[82];
    k_r = k_f / Kc;
    q_r[82] = phi_r * k_r;

    /*reaction 84: C2H4 + H <=> C2H3 + H2 */
    phi_f = sc[18]*sc[2];
    k_f = k_f_save[83];
    q_f[83] = phi_f * k_f;
    phi_r = sc[24]*sc[6];
    Kc = Kc_save[83];
    k_r = k_f / Kc;
    q_r[83] = phi_r * k_r;

    /*reaction 85: C2H4 + OH <=> C2H3 + H2O */
    phi_f = sc[18]*sc[4];
    k_f = k_f_save[84];
    q_f[84] = phi_f * k_f;
    phi_r = sc[24]*sc[7];
    Kc = Kc_save[84];
    k_r = k_f / Kc;
    q_r[84] = phi_r * k_r;

    /*reaction 86: C2H4 + O <=> CH3 + HCO */
    phi_f = sc[18]*sc[5];
    k_f = k_f_save[85];
    q_f[85] = phi_f * k_f;
    phi_r = sc[15]*sc[12];
    Kc = Kc_save[85];
    k_r = k_f / Kc;
    q_r[85] = phi_r * k_r;

    /*reaction 87: C2H4 + O <=> CH2CHO + H */
    phi_f = sc[18]*sc[5];
    k_f = k_f_save[86];
    q_f[86] = phi_f * k_f;
    phi_r = sc[25]*sc[2];
    Kc = Kc_save[86];
    k_r = k_f / Kc;
    q_r[86] = phi_r * k_r;

    /*reaction 88: 2 C2H4 <=> C2H3 + C2H5 */
    phi_f = sc[18]*sc[18];
    k_f = k_f_save[87];
    q_f[87] = phi_f * k_f;
    phi_r = sc[24]*sc[20];
    Kc = Kc_save[87];
    k_r = k_f / Kc;
    q_r[87] = phi_r * k_r;

    /*reaction 89: C2H4 + O2 <=> C2H3 + HO2 */
    phi_f = sc[18]*sc[3];
    k_f = k_f_save[88];
    q_f[88] = phi_f * k_f;
    phi_r = sc[24]*sc[8];
    Kc = Kc_save[88];
    k_r = k_f / Kc;
    q_r[88] = phi_r * k_r;

    /*reaction 90: C2H4 + HO2 <=> C2H4O + OH */
    phi_f = sc[18]*sc[8];
    k_f = k_f_save[89];
    q_f[89] = phi_f * k_f;
    phi_r = sc[26]*sc[4];
    Kc = Kc_save[89];
    k_r = k_f / Kc;
    q_r[89] = phi_r * k_r;

    /*reaction 91: C2H4O + HO2 <=> CH3 + CO + H2O2 */
    phi_f = sc[26]*sc[8];
    k_f = k_f_save[90];
    q_f[90] = phi_f * k_f;
    phi_r = sc[15]*sc[10]*sc[9];
    Kc = Kc_save[90];
    k_r = k_f / Kc;
    q_r[90] = phi_r * k_r;

    /*reaction 92: C2H4 + M <=> C2H3 + H + M */
    phi_f = sc[18];
    alpha = mixture;
    k_f = alpha * k_f_save[91];
    q_f[91] = phi_f * k_f;
    phi_r = sc[24]*sc[2];
    Kc = Kc_save[91];
    k_r = k_f / Kc;
    q_r[91] = phi_r * k_r;

    /*reaction 93: C2H4 + M <=> C2H2 + H2 + M */
    phi_f = sc[18];
    alpha = mixture;
    k_f = alpha * k_f_save[92];
    q_f[92] = phi_f * k_f;
    phi_r = sc[23]*sc[6];
    Kc = Kc_save[92];
    k_r = k_f / Kc;
    q_r[92] = phi_r * k_r;

    /*reaction 94: C2H3 + H <=> C2H2 + H2 */
    phi_f = sc[24]*sc[2];
    k_f = k_f_save[93];
    q_f[93] = phi_f * k_f;
    phi_r = sc[23]*sc[6];
    Kc = Kc_save[93];
    k_r = k_f / Kc;
    q_r[93] = phi_r * k_r;

    /*reaction 95: C2H3 (+M) <=> C2H2 + H (+M) */
    phi_f = sc[24];
    alpha = mixture;
    k_f = k_f_save[94];
    redP = 1e-6 * alpha / k_f * 1.51e+14*exp(0.1*tc[0]-16448.351289492704382*invT);
    F = redP / (1 + redP);
    logPred = log10(redP);
    logFcent = log10((0.7*exp(T/-1e+30))+ (0.3*exp(T/-1e-30)));
    troe_c = -.4 - .67 * logFcent;
    troe_n = .75 - 1.27 * logFcent;
    troe = (troe_c + logPred) / (troe_n - .14*(troe_c + logPred));
    F_troe = pow(10, logFcent / (1.0 + troe*troe));
    F *= F_troe;
    k_f *= F;
    q_f[94] = phi_f * k_f;
    phi_r = sc[23]*sc[2];
    Kc = Kc_save[94];
    k_r = k_f / Kc;
    q_r[94] = phi_r * k_r;

    /*reaction 96: C2H3 + O2 <=> CH2O + HCO */
    phi_f = sc[24]*sc[3];
    k_f = k_f_save[95];
    q_f[95] = phi_f * k_f;
    phi_r = sc[13]*sc[12];
    Kc = Kc_save[95];
    k_r = k_f / Kc;
    q_r[95] = phi_r * k_r;

    /*reaction 97: C2H3 + O2 <=> CH2CHO + O */
    phi_f = sc[24]*sc[3];
    k_f = k_f_save[96];
    q_f[96] = phi_f * k_f;
    phi_r = sc[25]*sc[5];
    Kc = Kc_save[96];
    k_r = k_f / Kc;
    q_r[96] = phi_r * k_r;

    /*reaction 98: C2H3 + O2 <=> C2H2 + HO2 */
    phi_f = sc[24]*sc[3];
    k_f = k_f_save[97];
    q_f[97] = phi_f * k_f;
    phi_r = sc[23]*sc[8];
    Kc = Kc_save[97];
    k_r = k_f / Kc;
    q_r[97] = phi_r * k_r;

    /*reaction 99: CH2CHO <=> CH2CO + H */
    phi_f = sc[25];
    k_f = k_f_save[98];
    q_f[98] = phi_f * k_f;
    phi_r = sc[27]*sc[2];
    Kc = Kc_save[98];
    k_r = k_f / Kc;
    q_r[98] = phi_r * k_r;

    /*reaction 100: C2H2 + O <=> HCCO + H */
    phi_f = sc[23]*sc[5];
    k_f = k_f_save[99];
    q_f[99] = phi_f * k_f;
    phi_r = sc[28]*sc[2];
    Kc = Kc_save[99];
    k_r = k_f / Kc;
    q_r[99] = phi_r * k_r;

    /*reaction 101: C2H2 + O <=> T-CH2 + CO */
    phi_f = sc[23]*sc[5];
    k_f = k_f_save[100];
    q_f[100] = phi_f * k_f;
    phi_r = sc[16]*sc[10];
    Kc = Kc_save[100];
    k_r = k_f / Kc;
    q_r[100] = phi_r * k_r;

    /*reaction 102: C2H2 + O2 <=> CH2O + CO */
    phi_f = sc[23]*sc[3];
    k_f = k_f_save[101];
    q_f[101] = phi_f * k_f;
    phi_r = sc[13]*sc[10];
    Kc = Kc_save[101];
    k_r = k_f / Kc;
    q_r[101] = phi_r * k_r;

    /*reaction 103: C2H2 + OH <=> CH2CO + H */
    phi_f = sc[23]*sc[4];
    k_f = k_f_save[102];
    q_f[102] = phi_f * k_f;
    phi_r = sc[27]*sc[2];
    Kc = Kc_save[102];
    k_r = k_f / Kc;
    q_r[102] = phi_r * k_r;

    /*reaction 104: C2H2 + OH <=> C2H + H2O */
    phi_f = sc[23]*sc[4];
    k_f = k_f_save[103];
    q_f[103] = phi_f * k_f;
    phi_r = sc[29]*sc[7];
    Kc = Kc_save[103];
    k_r = k_f / Kc;
    q_r[103] = phi_r * k_r;

    /*reaction 105: CH2CO + H <=> CH3 + CO */
    phi_f = sc[27]*sc[2];
    k_f = k_f_save[104];
    q_f[104] = phi_f * k_f;
    phi_r = sc[15]*sc[10];
    Kc = Kc_save[104];
    k_r = k_f / Kc;
    q_r[104] = phi_r * k_r;

    /*reaction 106: CH2CO + O <=> T-CH2 + CO2 */
    phi_f = sc[27]*sc[5];
    k_f = k_f_save[105];
    q_f[105] = phi_f * k_f;
    phi_r = sc[16]*sc[11];
    Kc = Kc_save[105];
    k_r = k_f / Kc;
    q_r[105] = phi_r * k_r;

    /*reaction 107: CH2CO + O <=> HCCO + OH */
    phi_f = sc[27]*sc[5];
    k_f = k_f_save[106];
    q_f[106] = phi_f * k_f;
    phi_r = sc[28]*sc[4];
    Kc = Kc_save[106];
    k_r = k_f / Kc;
    q_r[106] = phi_r * k_r;

    /*reaction 108: CH2CO + CH3 <=> C2H5 + CO */
    phi_f = sc[27]*sc[15];
    k_f = k_f_save[107];
    q_f[107] = phi_f * k_f;
    phi_r = sc[20]*sc[10];
    Kc = Kc_save[107];
    k_r = k_f / Kc;
    q_r[107] = phi_r * k_r;

    /*reaction 109: HCCO + H <=> S-CH2 + CO */
    phi_f = sc[28]*sc[2];
    k_f = k_f_save[108];
    q_f[108] = phi_f * k_f;
    phi_r = sc[17]*sc[10];
    Kc = Kc_save[108];
    k_r = k_f / Kc;
    q_r[108] = phi_r * k_r;

    /*reaction 110: HCCO + OH <=> HCO + CO + H */
    phi_f = sc[28]*sc[4];
    k_f = k_f_save[109];
    q_f[109] = phi_f * k_f;
    phi_r = sc[12]*sc[10]*sc[2];
    Kc = Kc_save[109];
    k_r = k_f / Kc;
    q_r[109] = phi_r * k_r;

    /*reaction 111: HCCO + O <=> 2 CO + H */
    phi_f = sc[28]*sc[5];
    k_f = k_f_save[110];
    q_f[110] = phi_f * k_f;
    phi_r = sc[10]*sc[10]*sc[2];
    Kc = Kc_save[110];
    k_r = k_f / Kc;
    q_r[110] = phi_r * k_r;

    /*reaction 112: HCCO + O2 <=> 2 CO + OH */
    phi_f = sc[28]*sc[3];
    k_f = k_f_save[111];
    q_f[111] = phi_f * k_f;
    phi_r = sc[10]*sc[10]*sc[4];
    Kc = Kc_save[111];
    k_r = k_f / Kc;
    q_r[111] = phi_r * k_r;

    /*reaction 113: HCCO + O2 <=> CO2 + CO + H */
    phi_f = sc[28]*sc[3];
    k_f = k_f_save[112];
    q_f[112] = phi_f * k_f;
    phi_r = sc[11]*sc[10]*sc[2];
    Kc = Kc_save[112];
    k_r = k_f / Kc;
    q_r[112] = phi_r * k_r;

    /*reaction 114: C2H + OH <=> HCCO + H */
    phi_f = sc[29]*sc[4];
    k_f = k_f_save[113];
    q_f[113] = phi_f * k_f;
    phi_r = sc[28]*sc[2];
    Kc = Kc_save[113];
    k_r = k_f / Kc;
    q_r[113] = phi_r * k_r;

    /*reaction 115: C2H + O <=> CO + CH */
    phi_f = sc[29]*sc[5];
    k_f = k_f_save[114];
    q_f[114] = phi_f * k_f;
    phi_r = sc[10]*sc[22];
    Kc = Kc_save[114];
    k_r = k_f / Kc;
    q_r[114] = phi_r * k_r;

    /*reaction 116: C2H + O2 <=> HCCO + O */
    phi_f = sc[29]*sc[3];
    k_f = k_f_save[115];
    q_f[115] = phi_f * k_f;
    phi_r = sc[28]*sc[5];
    Kc = Kc_save[115];
    k_r = k_f / Kc;
    q_r[115] = phi_r * k_r;

    /*reaction 117: C2H + O2 <=> CH + CO2 */
    phi_f = sc[29]*sc[3];
    k_f = k_f_save[116];
    q_f[116] = phi_f * k_f;
    phi_r = sc[22]*sc[11];
    Kc = Kc_save[116];
    k_r = k_f / Kc;
    q_r[116] = phi_r * k_r;

    /*reaction 118: C2H + O2 <=> HCO + CO */
    phi_f = sc[29]*sc[3];
    k_f = k_f_save[117];
    q_f[117] = phi_f * k_f;
    phi_r = sc[12]*sc[10];
    Kc = Kc_save[117];
    k_r = k_f / Kc;
    q_r[117] = phi_r * k_r;

    /*reaction 119: CH2OH + H <=> CH2O + H2 */
    phi_f = sc[30]*sc[2];
    k_f = k_f_save[118];
    q_f[118] = phi_f * k_f;
    phi_r = sc[13]*sc[6];
    Kc = Kc_save[118];
    k_r = k_f / Kc;
    q_r[118] = phi_r * k_r;

    /*reaction 120: CH2OH + H <=> CH3 + OH */
    phi_f = sc[30]*sc[2];
    k_f = k_f_save[119];
    q_f[119] = phi_f * k_f;
    phi_r = sc[15]*sc[4];
    Kc = Kc_save[119];
    k_r = k_f / Kc;
    q_r[119] = phi_r * k_r;

    /*reaction 121: CH2OH + OH <=> CH2O + H2O */
    phi_f = sc[30]*sc[4];
    k_f = k_f_save[120];
    q_f[120] = phi_f * k_f;
    phi_r = sc[13]*sc[7];
    Kc = Kc_save[120];
    k_r = k_f / Kc;
    q_r[120] = phi_r * k_r;

    /*reaction 122: CH2OH + O2 <=> CH2O + HO2 */
    phi_f = sc[30]*sc[3];
    k_f = k_f_save[121];
    q_f[121] = phi_f * k_f;
    phi_r = sc[13]*sc[8];
    Kc = Kc_save[121];
    k_r = k_f / Kc;
    q_r[121] = phi_r * k_r;

    /*reaction 123: CH2OH + M <=> CH2O + H + M */
    phi_f = sc[30];
    alpha = mixture + 1.4*sc[6] + 14.4*sc[7] + 0.8*sc[10] + 2.6*sc[11];
    k_f = alpha * k_f_save[122];
    q_f[122] = phi_f * k_f;
    phi_r = sc[13]*sc[2];
    Kc = Kc_save[122];
    k_r = k_f / Kc;
    q_r[122] = phi_r * k_r;

    /*reaction 124: CH3O + M <=> CH2OH + M */
    phi_f = sc[19];
    alpha = mixture + 1.5*sc[6] + 11*sc[7] + 0.9*sc[10] + 2.8*sc[11];
    k_f = alpha * k_f_save[123];
    q_f[123] = phi_f * k_f;
    phi_r = sc[30];
    Kc = Kc_save[123];
    k_r = k_f / Kc;
    q_r[123] = phi_r * k_r;

    /*reaction 125: CH2CO + OH <=> CH2OH + CO */
    phi_f = sc[27]*sc[4];
    k_f = k_f_save[124];
    q_f[124] = phi_f * k_f;
    phi_r = sc[30]*sc[10];
    Kc = Kc_save[124];
    k_r = k_f / Kc;
    q_r[124] = phi_r * k_r;

    /*reaction 126: CH3OH + OH <=> CH2OH + H2O */
    phi_f = sc[31]*sc[4];
    k_f = k_f_save[125];
    q_f[125] = phi_f * k_f;
    phi_r = sc[30]*sc[7];
    Kc = Kc_save[125];
    k_r = k_f / Kc;
    q_r[125] = phi_r * k_r;

    /*reaction 127: CH3OH + OH <=> CH3O + H2O */
    phi_f = sc[31]*sc[4];
    k_f = k_f_save[126];
    q_f[126] = phi_f * k_f;
    phi_r = sc[19]*sc[7];
    Kc = Kc_save[126];
    k_r = k_f / Kc;
    q_r[126] = phi_r * k_r;

    /*reaction 128: CH3OH + H <=> CH2OH + H2 */
    phi_f = sc[31]*sc[2];
    k_f = k_f_save[127];
    q_f[127] = phi_f * k_f;
    phi_r = sc[30]*sc[6];
    Kc = Kc_save[127];
    k_r = k_f / Kc;
    q_r[127] = phi_r * k_r;

    /*reaction 129: CH3OH + H <=> CH3O + H2 */
    phi_f = sc[31]*sc[2];
    k_f = k_f_save[128];
    q_f[128] = phi_f * k_f;
    phi_r = sc[19]*sc[6];
    Kc = Kc_save[128];
    k_r = k_f / Kc;
    q_r[128] = phi_r * k_r;

    /*reaction 130: CH3OH + O <=> CH2OH + OH */
    phi_f = sc[31]*sc[5];
    k_f = k_f_save[129];
    q_f[129] = phi_f * k_f;
    phi_r = sc[30]*sc[4];
    Kc = Kc_save[129];
    k_r = k_f / Kc;
    q_r[129] = phi_r * k_r;

    /*reaction 131: CH3OH + HO2 <=> CH2OH + H2O2 */
    phi_f = sc[31]*sc[8];
    k_f = k_f_save[130];
    q_f[130] = phi_f * k_f;
    phi_r = sc[30]*sc[9];
    Kc = Kc_save[130];
    k_r = k_f / Kc;
    q_r[130] = phi_r * k_r;

    /*reaction 132: CH3OH + O2 <=> CH2OH + HO2 */
    phi_f = sc[31]*sc[3];
    k_f = k_f_save[131];
    q_f[131] = phi_f * k_f;
    phi_r = sc[30]*sc[8];
    Kc = Kc_save[131];
    k_r = k_f / Kc;
    q_r[131] = phi_r * k_r;

    /*reaction 133: C3H4 + O <=> C2H4 + CO */
    phi_f = sc[32]*sc[5];
    k_f = k_f_save[132];
    q_f[132] = phi_f * k_f;
    phi_r = sc[18]*sc[10];
    Kc = Kc_save[132];
    k_r = k_f / Kc;
    q_r[132] = phi_r * k_r;

    /*reaction 134: CH3 + C2H2 <=> C3H4 + H */
    phi_f = sc[15]*sc[23];
    k_f = k_f_save[133];
    q_f[133] = phi_f * k_f;
    phi_r = sc[32]*sc[2];
    Kc = Kc_save[133];
    k_r = k_f / Kc;
    q_r[133] = phi_r * k_r;

    /*reaction 135: C3H4 + O <=> HCCO + CH3 */
    phi_f = sc[32]*sc[5];
    k_f = k_f_save[134];
    q_f[134] = phi_f * k_f;
    phi_r = sc[28]*sc[15];
    Kc = Kc_save[134];
    k_r = k_f / Kc;
    q_r[134] = phi_r * k_r;

    /*reaction 136: C3H3 + H (+M) <=> C3H4 (+M) */
    phi_f = sc[33]*sc[2];
    alpha = mixture;
    k_f = k_f_save[135];
    redP = 1e-12 * alpha / k_f * 9e+15*exp(1*tc[0]);
    F = redP / (1 + redP);
    logPred = log10(redP);
    logFcent = log10((0.5*exp(T/-1e+30))+ (0.5*exp(T/-1e-30)));
    troe_c = -.4 - .67 * logFcent;
    troe_n = .75 - 1.27 * logFcent;
    troe = (troe_c + logPred) / (troe_n - .14*(troe_c + logPred));
    F_troe = pow(10, logFcent / (1.0 + troe*troe));
    F *= F_troe;
    k_f *= F;
    q_f[135] = phi_f * k_f;
    phi_r = sc[32];
    Kc = Kc_save[135];
    k_r = k_f / Kc;
    q_r[135] = phi_r * k_r;

    /*reaction 137: C3H3 + HO2 <=> C3H4 + O2 */
    phi_f = sc[33]*sc[8];
    k_f = k_f_save[136];
    q_f[136] = phi_f * k_f;
    phi_r = sc[32]*sc[3];
    Kc = Kc_save[136];
    k_r = k_f / Kc;
    q_r[136] = phi_r * k_r;

    /*reaction 138: C3H4 + OH <=> C3H3 + H2O */
    phi_f = sc[32]*sc[4];
    k_f = k_f_save[137];
    q_f[137] = phi_f * k_f;
    phi_r = sc[33]*sc[7];
    Kc = Kc_save[137];
    k_r = k_f / Kc;
    q_r[137] = phi_r * k_r;

    /*reaction 139: C3H3 + O2 <=> CH2CO + HCO */
    phi_f = sc[33]*sc[3];
    k_f = k_f_save[138];
    q_f[138] = phi_f * k_f;
    phi_r = sc[27]*sc[12];
    Kc = Kc_save[138];
    k_r = k_f / Kc;
    q_r[138] = phi_r * k_r;

    /*reaction 140: C3H4 + H (+M) <=> C3H5 (+M) */
    phi_f = sc[32]*sc[2];
    alpha = mixture;
    k_f = k_f_save[139];
    redP = 1e-12 * alpha / k_f * 3e+24*exp(-2*tc[0]);
    F = redP / (1 + redP);
    logPred = log10(redP);
    logFcent = log10((0.2*exp(T/-1e+30))+ (0.8*exp(T/-1e-30)));
    troe_c = -.4 - .67 * logFcent;
    troe_n = .75 - 1.27 * logFcent;
    troe = (troe_c + logPred) / (troe_n - .14*(troe_c + logPred));
    F_troe = pow(10, logFcent / (1.0 + troe*troe));
    F *= F_troe;
    k_f *= F;
    q_f[139] = phi_f * k_f;
    phi_r = sc[34];
    Kc = Kc_save[139];
    k_r = k_f / Kc;
    q_r[139] = phi_r * k_r;

    /*reaction 141: C3H5 + H <=> C3H4 + H2 */
    phi_f = sc[34]*sc[2];
    k_f = k_f_save[140];
    q_f[140] = phi_f * k_f;
    phi_r = sc[32]*sc[6];
    Kc = Kc_save[140];
    k_r = k_f / Kc;
    q_r[140] = phi_r * k_r;

    /*reaction 142: C3H5 + O2 <=> C3H4 + HO2 */
    phi_f = sc[34]*sc[3];
    k_f = k_f_save[141];
    q_f[141] = phi_f * k_f;
    phi_r = sc[32]*sc[8];
    Kc = Kc_save[141];
    k_r = k_f / Kc;
    q_r[141] = phi_r * k_r;

    /*reaction 143: C3H5 + CH3 <=> C3H4 + CH4 */
    phi_f = sc[34]*sc[15];
    k_f = k_f_save[142];
    q_f[142] = phi_f * k_f;
    phi_r = sc[32]*sc[14];
    Kc = Kc_save[142];
    k_r = k_f / Kc;
    q_r[142] = phi_r * k_r;

    /*reaction 144: C2H2 + CH3 (+M) <=> C3H5 (+M) */
    phi_f = sc[23]*sc[15];
    alpha = mixture;
    k_f = k_f_save[143];
    redP = 1e-12 * alpha / k_f * 2e+09*exp(1*tc[0]);
    F = redP / (1 + redP);
    logPred = log10(redP);
    logFcent = log10((0.5*exp(T/-1e+30))+ (0.5*exp(T/-1e-30)));
    troe_c = -.4 - .67 * logFcent;
    troe_n = .75 - 1.27 * logFcent;
    troe = (troe_c + logPred) / (troe_n - .14*(troe_c + logPred));
    F_troe = pow(10, logFcent / (1.0 + troe*troe));
    F *= F_troe;
    k_f *= F;
    q_f[143] = phi_f * k_f;
    phi_r = sc[34];
    Kc = Kc_save[143];
    k_r = k_f / Kc;
    q_r[143] = phi_r * k_r;

    /*reaction 145: C3H5 + OH <=> C3H4 + H2O */
    phi_f = sc[34]*sc[4];
    k_f = k_f_save[144];
    q_f[144] = phi_f * k_f;
    phi_r = sc[32]*sc[7];
    Kc = Kc_save[144];
    k_r = k_f / Kc;
    q_r[144] = phi_r * k_r;

    /*reaction 146: C3H3 + HCO <=> C3H4 + CO */
    phi_f = sc[33]*sc[12];
    k_f = k_f_save[145];
    q_f[145] = phi_f * k_f;
    phi_r = sc[32]*sc[10];
    Kc = Kc_save[145];
    k_r = k_f / Kc;
    q_r[145] = phi_r * k_r;

    /*reaction 147: C3H3 + HO2 <=> OH + CO + C2H3 */
    phi_f = sc[33]*sc[8];
    k_f = k_f_save[146];
    q_f[146] = phi_f * k_f;
    phi_r = sc[4]*sc[10]*sc[24];
    Kc = Kc_save[146];
    k_r = k_f / Kc;
    q_r[146] = phi_r * k_r;

    /*reaction 148: C3H4 + O2 <=> CH3 + HCO + CO */
    phi_f = sc[32]*sc[3];
    k_f = k_f_save[147];
    q_f[147] = phi_f * k_f;
    phi_r = sc[15]*sc[12]*sc[10];
    Kc = Kc_save[147];
    k_r = k_f / Kc;
    q_r[147] = phi_r * k_r;

    /*reaction 149: C3H6 + O <=> C2H5 + HCO */
    phi_f = sc[35]*sc[5];
    k_f = k_f_save[148];
    q_f[148] = phi_f * k_f;
    phi_r = sc[20]*sc[12];
    Kc = Kc_save[148];
    k_r = k_f / Kc;
    q_r[148] = phi_r * k_r;

    /*reaction 150: C3H6 + OH <=> C3H5 + H2O */
    phi_f = sc[35]*sc[4];
    k_f = k_f_save[149];
    q_f[149] = phi_f * k_f;
    phi_r = sc[34]*sc[7];
    Kc = Kc_save[149];
    k_r = k_f / Kc;
    q_r[149] = phi_r * k_r;

    /*reaction 151: C3H6 + O <=> CH2CO + CH3 + H */
    phi_f = sc[35]*sc[5];
    k_f = k_f_save[150];
    q_f[150] = phi_f * k_f;
    phi_r = sc[27]*sc[15]*sc[2];
    Kc = Kc_save[150];
    k_r = k_f / Kc;
    q_r[150] = phi_r * k_r;

    /*reaction 152: C3H6 + H <=> C3H5 + H2 */
    phi_f = sc[35]*sc[2];
    k_f = k_f_save[151];
    q_f[151] = phi_f * k_f;
    phi_r = sc[34]*sc[6];
    Kc = Kc_save[151];
    k_r = k_f / Kc;
    q_r[151] = phi_r * k_r;

    /*reaction 153: C3H5 + H (+M) <=> C3H6 (+M) */
    phi_f = sc[34]*sc[2];
    alpha = mixture + -0.3*sc[1] + sc[6] + 5*sc[7] + 0.5*sc[10] + sc[11] + sc[14] + 2*sc[21];
    k_f = k_f_save[152];
    redP = 1e-12 * alpha / k_f * 1.33e+60*exp(-12*tc[0]-3003.1819650225929763*invT);
    F = redP / (1 + redP);
    logPred = log10(redP);
    logFcent = log10((0.98*exp(T/-1097))+ (0.02*exp(T/-1097))+ (exp(-6860/T)));
    troe_c = -.4 - .67 * logFcent;
    troe_n = .75 - 1.27 * logFcent;
    troe = (troe_c + logPred) / (troe_n - .14*(troe_c + logPred));
    F_troe = pow(10, logFcent / (1.0 + troe*troe));
    F *= F_troe;
    k_f *= F;
    q_f[152] = phi_f * k_f;
    phi_r = sc[35];
    Kc = Kc_save[152];
    k_r = k_f / Kc;
    q_r[152] = phi_r * k_r;

    /*reaction 154: C3H5 + HO2 <=> C3H6 + O2 */
    phi_f = sc[34]*sc[8];
    k_f = k_f_save[153];
    q_f[153] = phi_f * k_f;
    phi_r = sc[35]*sc[3];
    Kc = Kc_save[153];
    k_r = k_f / Kc;
    q_r[153] = phi_r * k_r;

    /*reaction 155: C3H5 + HO2 <=> OH + C2H3 + CH2O */
    phi_f = sc[34]*sc[8];
    k_f = k_f_save[154];
    q_f[154] = phi_f * k_f;
    phi_r = sc[4]*sc[24]*sc[13];
    Kc = Kc_save[154];
    k_r = k_f / Kc;
    q_r[154] = phi_r * k_r;

    /*reaction 156: C2H3 + CH3 (+M) <=> C3H6 (+M) */
    phi_f = sc[24]*sc[15];
    alpha = mixture + -0.3*sc[1] + sc[6] + 5*sc[7] + 0.5*sc[10] + sc[11] + sc[14] + 2*sc[21];
    k_f = k_f_save[155];
    redP = 1e-12 * alpha / k_f * 4.27e+58*exp(-11.94*tc[0]-4916.7035940783034675*invT);
    F = redP / (1 + redP);
    logPred = log10(redP);
    logFcent = log10((0.825*exp(T/-1341))+ (0.175*exp(T/-60000))+ (exp(-10140/T)));
    troe_c = -.4 - .67 * logFcent;
    troe_n = .75 - 1.27 * logFcent;
    troe = (troe_c + logPred) / (troe_n - .14*(troe_c + logPred));
    F_troe = pow(10, logFcent / (1.0 + troe*troe));
    F *= F_troe;
    k_f *= F;
    q_f[155] = phi_f * k_f;
    phi_r = sc[35];
    Kc = Kc_save[155];
    k_r = k_f / Kc;
    q_r[155] = phi_r * k_r;

    /*reaction 157: C3H6 + H <=> C2H4 + CH3 */
    phi_f = sc[35]*sc[2];
    k_f = k_f_save[156];
    q_f[156] = phi_f * k_f;
    phi_r = sc[18]*sc[15];
    Kc = Kc_save[156];
    k_r = k_f / Kc;
    q_r[156] = phi_r * k_r;

    /*reaction 158: CH3 + C2H3 <=> C3H5 + H */
    phi_f = sc[15]*sc[24];
    k_f = k_f_save[157];
    q_f[157] = phi_f * k_f;
    phi_r = sc[34]*sc[2];
    Kc = Kc_save[157];
    k_r = k_f / Kc;
    q_r[157] = phi_r * k_r;

    /*reaction 159: C3H8 (+M) <=> CH3 + C2H5 (+M) */
    phi_f = sc[36];
    alpha = mixture;
    k_f = k_f_save[158];
    redP = 1e-6 * alpha / k_f * 7.83e+18*exp(-32698.259086825320992*invT);
    F = redP / (1 + redP);
    logPred = log10(redP);
    logFcent = log10((0.24*exp(T/-1946))+ (0.76*exp(T/-38)));
    troe_c = -.4 - .67 * logFcent;
    troe_n = .75 - 1.27 * logFcent;
    troe = (troe_c + logPred) / (troe_n - .14*(troe_c + logPred));
    F_troe = pow(10, logFcent / (1.0 + troe*troe));
    F *= F_troe;
    k_f *= F;
    q_f[158] = phi_f * k_f;
    phi_r = sc[15]*sc[20];
    Kc = Kc_save[158];
    k_r = k_f / Kc;
    q_r[158] = phi_r * k_r;

    /*reaction 160: C3H8 + O2 <=> I-C3H7 + HO2 */
    phi_f = sc[36]*sc[3];
    k_f = k_f_save[159];
    q_f[159] = phi_f * k_f;
    phi_r = sc[37]*sc[8];
    Kc = Kc_save[159];
    k_r = k_f / Kc;
    q_r[159] = phi_r * k_r;

    /*reaction 161: C3H8 + O2 <=> N-C3H7 + HO2 */
    phi_f = sc[36]*sc[3];
    k_f = k_f_save[160];
    q_f[160] = phi_f * k_f;
    phi_r = sc[38]*sc[8];
    Kc = Kc_save[160];
    k_r = k_f / Kc;
    q_r[160] = phi_r * k_r;

    /*reaction 162: C3H8 + H <=> I-C3H7 + H2 */
    phi_f = sc[36]*sc[2];
    k_f = k_f_save[161];
    q_f[161] = phi_f * k_f;
    phi_r = sc[37]*sc[6];
    Kc = Kc_save[161];
    k_r = k_f / Kc;
    q_r[161] = phi_r * k_r;

    /*reaction 163: C3H8 + H <=> N-C3H7 + H2 */
    phi_f = sc[36]*sc[2];
    k_f = k_f_save[162];
    q_f[162] = phi_f * k_f;
    phi_r = sc[38]*sc[6];
    Kc = Kc_save[162];
    k_r = k_f / Kc;
    q_r[162] = phi_r * k_r;

    /*reaction 164: C3H8 + O <=> I-C3H7 + OH */
    phi_f = sc[36]*sc[5];
    k_f = k_f_save[163];
    q_f[163] = phi_f * k_f;
    phi_r = sc[37]*sc[4];
    Kc = Kc_save[163];
    k_r = k_f / Kc;
    q_r[163] = phi_r * k_r;

    /*reaction 165: C3H8 + O <=> N-C3H7 + OH */
    phi_f = sc[36]*sc[5];
    k_f = k_f_save[164];
    q_f[164] = phi_f * k_f;
    phi_r = sc[38]*sc[4];
    Kc = Kc_save[164];
    k_r = k_f / Kc;
    q_r[164] = phi_r * k_r;

    /*reaction 166: C3H8 + OH <=> N-C3H7 + H2O */
    phi_f = sc[36]*sc[4];
    k_f = k_f_save[165];
    q_f[165] = phi_f * k_f;
    phi_r = sc[38]*sc[7];
    Kc = Kc_save[165];
    k_r = k_f / Kc;
    q_r[165] = phi_r * k_r;

    /*reaction 167: C3H8 + OH <=> I-C3H7 + H2O */
    phi_f = sc[36]*sc[4];
    k_f = k_f_save[166];
    q_f[166] = phi_f * k_f;
    phi_r = sc[37]*sc[7];
    Kc = Kc_save[166];
    k_r = k_f / Kc;
    q_r[166] = phi_r * k_r;

    /*reaction 168: C3H8 + HO2 <=> I-C3H7 + H2O2 */
    phi_f = sc[36]*sc[8];
    k_f = k_f_save[167];
    q_f[167] = phi_f * k_f;
    phi_r = sc[37]*sc[9];
    Kc = Kc_save[167];
    k_r = k_f / Kc;
    q_r[167] = phi_r * k_r;

    /*reaction 169: C3H8 + HO2 <=> N-C3H7 + H2O2 */
    phi_f = sc[36]*sc[8];
    k_f = k_f_save[168];
    q_f[168] = phi_f * k_f;
    phi_r = sc[38]*sc[9];
    Kc = Kc_save[168];
    k_r = k_f / Kc;
    q_r[168] = phi_r * k_r;

    /*reaction 170: I-C3H7 + C3H8 <=> N-C3H7 + C3H8 */
    phi_f = sc[37]*sc[36];
    k_f = k_f_save[169];
    q_f[169] = phi_f * k_f;
    phi_r = sc[38]*sc[36];
    Kc = Kc_save[169];
    k_r = k_f / Kc;
    q_r[169] = phi_r * k_r;

    /*reaction 171: C3H6 + H (+M) <=> I-C3H7 (+M) */
    phi_f = sc[35]*sc[2];
    alpha = mixture + -0.3*sc[1] + sc[6] + 5*sc[7] + 0.5*sc[10] + sc[11] + sc[14] + 2*sc[21];
    k_f = k_f_save[170];
    redP = 1e-12 * alpha / k_f * 8.7e+42*exp(-7.5*tc[0]-2381.3772597543329539*invT);
    F = redP / (1 + redP);
    logPred = log10(redP);
    logFcent = log10((0*exp(T/-1000))+ (1*exp(T/-645.4))+ (exp(-6844.3/T)));
    troe_c = -.4 - .67 * logFcent;
    troe_n = .75 - 1.27 * logFcent;
    troe = (troe_c + logPred) / (troe_n - .14*(troe_c + logPred));
    F_troe = pow(10, logFcent / (1.0 + troe*troe));
    F *= F_troe;
    k_f *= F;
    q_f[170] = phi_f * k_f;
    phi_r = sc[37];
    Kc = Kc_save[170];
    k_r = k_f / Kc;
    q_r[170] = phi_r * k_r;

    /*reaction 172: I-C3H7 + O2 <=> C3H6 + HO2 */
    phi_f = sc[37]*sc[3];
    k_f = k_f_save[171];
    q_f[171] = phi_f * k_f;
    phi_r = sc[35]*sc[8];
    Kc = Kc_save[171];
    k_r = k_f / Kc;
    q_r[171] = phi_r * k_r;

    /*reaction 173: N-C3H7 (+M) <=> CH3 + C2H4 (+M) */
    phi_f = sc[38];
    alpha = mixture;
    k_f = k_f_save[172];
    redP = 1e-6 * alpha / k_f * 5.49e+49*exp(-10*tc[0]-18004.669600493594771*invT);
    F = redP / (1 + redP);
    logPred = log10(redP);
    logFcent = log10((2.17*exp(T/-251))+ (exp(-1185/T)));
    troe_c = -.4 - .67 * logFcent;
    troe_n = .75 - 1.27 * logFcent;
    troe = (troe_c + logPred) / (troe_n - .14*(troe_c + logPred));
    F_troe = pow(10, logFcent / (1.0 + troe*troe));
    F *= F_troe;
    k_f *= F;
    q_f[172] = phi_f * k_f;
    phi_r = sc[15]*sc[18];
    Kc = Kc_save[172];
    k_r = k_f / Kc;
    q_r[172] = phi_r * k_r;

    /*reaction 174: H + C3H6 (+M) <=> N-C3H7 (+M) */
    phi_f = sc[2]*sc[35];
    alpha = mixture + -0.3*sc[1] + sc[6] + 5*sc[7] + 0.5*sc[10] + sc[11] + sc[14] + 2*sc[21];
    k_f = k_f_save[173];
    redP = 1e-12 * alpha / k_f * 6.26e+38*exp(-6.66*tc[0]-3522.7582046326238014*invT);
    F = redP / (1 + redP);
    logPred = log10(redP);
    logFcent = log10((0*exp(T/-1000))+ (1*exp(T/-1310))+ (exp(-48097/T)));
    troe_c = -.4 - .67 * logFcent;
    troe_n = .75 - 1.27 * logFcent;
    troe = (troe_c + logPred) / (troe_n - .14*(troe_c + logPred));
    F_troe = pow(10, logFcent / (1.0 + troe*troe));
    F *= F_troe;
    k_f *= F;
    q_f[173] = phi_f * k_f;
    phi_r = sc[38];
    Kc = Kc_save[173];
    k_r = k_f / Kc;
    q_r[173] = phi_r * k_r;

    /*reaction 175: N-C3H7 + O2 <=> C3H6 + HO2 */
    phi_f = sc[38]*sc[3];
    k_f = k_f_save[174];
    q_f[174] = phi_f * k_f;
    phi_r = sc[35]*sc[8];
    Kc = Kc_save[174];
    k_r = k_f / Kc;
    q_r[174] = phi_r * k_r;

    return;
}


/*compute the equilibrium constants for each reaction */
void equilibriumConstants(double *kc, double * g_RT, double T)
{
    /*reference concentration: P_atm / (RT) in inverse mol/m^3 */
    double refC = 101325 / 8.31451 / T;

    /*reaction 1: H + O2 <=> OH + O */
    kc[0] = exp((g_RT[2] + g_RT[3]) - (g_RT[4] + g_RT[5]));

    /*reaction 2: H2 + O <=> OH + H */
    kc[1] = exp((g_RT[6] + g_RT[5]) - (g_RT[4] + g_RT[2]));

    /*reaction 3: H2 + OH <=> H2O + H */
    kc[2] = exp((g_RT[6] + g_RT[4]) - (g_RT[7] + g_RT[2]));

    /*reaction 4: H2O + O <=> 2 OH */
    kc[3] = exp((g_RT[7] + g_RT[5]) - (2 * g_RT[4]));

    /*reaction 5: H + O + M <=> OH + M */
    kc[4] = 1.0 / (refC) * exp((g_RT[2] + g_RT[5]) - (g_RT[4]));

    /*reaction 6: H2 + O2 <=> 2 OH */
    kc[5] = exp((g_RT[6] + g_RT[3]) - (2 * g_RT[4]));

    /*reaction 7: 2 H + M <=> H2 + M */
    kc[6] = 1.0 / (refC) * exp((2 * g_RT[2]) - (g_RT[6]));

    /*reaction 8: H + OH + M <=> H2O + M */
    kc[7] = 1.0 / (refC) * exp((g_RT[2] + g_RT[4]) - (g_RT[7]));

    /*reaction 9: 2 O + M <=> O2 + M */
    kc[8] = 1.0 / (refC) * exp((2 * g_RT[5]) - (g_RT[3]));

    /*reaction 10: H + O2 (+M) <=> HO2 (+M) */
    kc[9] = 1.0 / (refC) * exp((g_RT[2] + g_RT[3]) - (g_RT[8]));

    /*reaction 11: O + OH + M <=> HO2 + M */
    kc[10] = 1.0 / (refC) * exp((g_RT[5] + g_RT[4]) - (g_RT[8]));

    /*reaction 12: HO2 + H <=> 2 OH */
    kc[11] = exp((g_RT[8] + g_RT[2]) - (2 * g_RT[4]));

    /*reaction 13: HO2 + H <=> H2 + O2 */
    kc[12] = exp((g_RT[8] + g_RT[2]) - (g_RT[6] + g_RT[3]));

    /*reaction 14: HO2 + H <=> H2O + O */
    kc[13] = exp((g_RT[8] + g_RT[2]) - (g_RT[7] + g_RT[5]));

    /*reaction 15: HO2 + O <=> OH + O2 */
    kc[14] = exp((g_RT[8] + g_RT[5]) - (g_RT[4] + g_RT[3]));

    /*reaction 16: HO2 + OH <=> H2O + O2 */
    kc[15] = exp((g_RT[8] + g_RT[4]) - (g_RT[7] + g_RT[3]));

    /*reaction 17: 2 OH (+M) <=> H2O2 (+M) */
    kc[16] = 1.0 / (refC) * exp((2 * g_RT[4]) - (g_RT[9]));

    /*reaction 18: 2 HO2 <=> H2O2 + O2 */
    kc[17] = exp((2 * g_RT[8]) - (g_RT[9] + g_RT[3]));

    /*reaction 19: H2O2 + H <=> HO2 + H2 */
    kc[18] = exp((g_RT[9] + g_RT[2]) - (g_RT[8] + g_RT[6]));

    /*reaction 20: H2O2 + H <=> H2O + OH */
    kc[19] = exp((g_RT[9] + g_RT[2]) - (g_RT[7] + g_RT[4]));

    /*reaction 21: H2O2 + OH <=> H2O + HO2 */
    kc[20] = exp((g_RT[9] + g_RT[4]) - (g_RT[7] + g_RT[8]));

    /*reaction 22: H2O2 + O <=> HO2 + OH */
    kc[21] = exp((g_RT[9] + g_RT[5]) - (g_RT[8] + g_RT[4]));

    /*reaction 23: CO + OH <=> CO2 + H */
    kc[22] = exp((g_RT[10] + g_RT[4]) - (g_RT[11] + g_RT[2]));

    /*reaction 24: CO + HO2 <=> CO2 + OH */
    kc[23] = exp((g_RT[10] + g_RT[8]) - (g_RT[11] + g_RT[4]));

    /*reaction 25: HCO + M <=> CO + H + M */
    kc[24] = refC * exp((g_RT[12]) - (g_RT[10] + g_RT[2]));

    /*reaction 26: HCO + H <=> CO + H2 */
    kc[25] = exp((g_RT[12] + g_RT[2]) - (g_RT[10] + g_RT[6]));

    /*reaction 27: HCO + O <=> CO + OH */
    kc[26] = exp((g_RT[12] + g_RT[5]) - (g_RT[10] + g_RT[4]));

    /*reaction 28: HCO + O <=> CO2 + H */
    kc[27] = exp((g_RT[12] + g_RT[5]) - (g_RT[11] + g_RT[2]));

    /*reaction 29: HCO + OH <=> CO + H2O */
    kc[28] = exp((g_RT[12] + g_RT[4]) - (g_RT[10] + g_RT[7]));

    /*reaction 30: HCO + O2 <=> CO + HO2 */
    kc[29] = exp((g_RT[12] + g_RT[3]) - (g_RT[10] + g_RT[8]));

    /*reaction 31: CH2O + M <=> HCO + H + M */
    kc[30] = refC * exp((g_RT[13]) - (g_RT[12] + g_RT[2]));

    /*reaction 32: CH2O + H <=> HCO + H2 */
    kc[31] = exp((g_RT[13] + g_RT[2]) - (g_RT[12] + g_RT[6]));

    /*reaction 33: CH2O + O <=> HCO + OH */
    kc[32] = exp((g_RT[13] + g_RT[5]) - (g_RT[12] + g_RT[4]));

    /*reaction 34: CH2O + OH <=> HCO + H2O */
    kc[33] = exp((g_RT[13] + g_RT[4]) - (g_RT[12] + g_RT[7]));

    /*reaction 35: CH4 + H <=> H2 + CH3 */
    kc[34] = exp((g_RT[14] + g_RT[2]) - (g_RT[6] + g_RT[15]));

    /*reaction 36: CH4 + OH <=> H2O + CH3 */
    kc[35] = exp((g_RT[14] + g_RT[4]) - (g_RT[7] + g_RT[15]));

    /*reaction 37: CH4 + O <=> CH3 + OH */
    kc[36] = exp((g_RT[14] + g_RT[5]) - (g_RT[15] + g_RT[4]));

    /*reaction 38: CH4 + O2 <=> CH3 + HO2 */
    kc[37] = exp((g_RT[14] + g_RT[3]) - (g_RT[15] + g_RT[8]));

    /*reaction 39: CH4 + HO2 <=> CH3 + H2O2 */
    kc[38] = exp((g_RT[14] + g_RT[8]) - (g_RT[15] + g_RT[9]));

    /*reaction 40: CH3 + H <=> T-CH2 + H2 */
    kc[39] = exp((g_RT[15] + g_RT[2]) - (g_RT[16] + g_RT[6]));

    /*reaction 41: CH3 + H <=> S-CH2 + H2 */
    kc[40] = exp((g_RT[15] + g_RT[2]) - (g_RT[17] + g_RT[6]));

    /*reaction 42: CH3 + OH <=> S-CH2 + H2O */
    kc[41] = exp((g_RT[15] + g_RT[4]) - (g_RT[17] + g_RT[7]));

    /*reaction 43: CH3 + O <=> CH2O + H */
    kc[42] = exp((g_RT[15] + g_RT[5]) - (g_RT[13] + g_RT[2]));

    /*reaction 44: CH3 + T-CH2 <=> C2H4 + H */
    kc[43] = exp((g_RT[15] + g_RT[16]) - (g_RT[18] + g_RT[2]));

    /*reaction 45: CH3 + HO2 <=> CH3O + OH */
    kc[44] = exp((g_RT[15] + g_RT[8]) - (g_RT[19] + g_RT[4]));

    /*reaction 46: CH3 + O2 <=> CH2O + OH */
    kc[45] = exp((g_RT[15] + g_RT[3]) - (g_RT[13] + g_RT[4]));

    /*reaction 47: CH3 + O2 <=> CH3O + O */
    kc[46] = exp((g_RT[15] + g_RT[3]) - (g_RT[19] + g_RT[5]));

    /*reaction 48: 2 CH3 <=> C2H4 + H2 */
    kc[47] = exp((2 * g_RT[15]) - (g_RT[18] + g_RT[6]));

    /*reaction 49: 2 CH3 <=> C2H5 + H */
    kc[48] = exp((2 * g_RT[15]) - (g_RT[20] + g_RT[2]));

    /*reaction 50: CH3 + H (+M) <=> CH4 (+M) */
    kc[49] = 1.0 / (refC) * exp((g_RT[15] + g_RT[2]) - (g_RT[14]));

    /*reaction 51: 2 CH3 (+M) <=> C2H6 (+M) */
    kc[50] = 1.0 / (refC) * exp((2 * g_RT[15]) - (g_RT[21]));

    /*reaction 52: S-CH2 + OH <=> CH2O + H */
    kc[51] = exp((g_RT[17] + g_RT[4]) - (g_RT[13] + g_RT[2]));

    /*reaction 53: S-CH2 + O2 <=> CO + OH + H */
    kc[52] = refC * exp((g_RT[17] + g_RT[3]) - (g_RT[10] + g_RT[4] + g_RT[2]));

    /*reaction 54: S-CH2 + CO2 <=> CO + CH2O */
    kc[53] = exp((g_RT[17] + g_RT[11]) - (g_RT[10] + g_RT[13]));

    /*reaction 55: S-CH2 + M <=> T-CH2 + M */
    kc[54] = exp((g_RT[17]) - (g_RT[16]));

    /*reaction 56: T-CH2 + H <=> CH + H2 */
    kc[55] = exp((g_RT[16] + g_RT[2]) - (g_RT[22] + g_RT[6]));

    /*reaction 57: T-CH2 + OH <=> CH2O + H */
    kc[56] = exp((g_RT[16] + g_RT[4]) - (g_RT[13] + g_RT[2]));

    /*reaction 58: T-CH2 + OH <=> CH + H2O */
    kc[57] = exp((g_RT[16] + g_RT[4]) - (g_RT[22] + g_RT[7]));

    /*reaction 59: T-CH2 + O <=> CO + 2 H */
    kc[58] = refC * exp((g_RT[16] + g_RT[5]) - (g_RT[10] + 2 * g_RT[2]));

    /*reaction 60: T-CH2 + O <=> CO + H2 */
    kc[59] = exp((g_RT[16] + g_RT[5]) - (g_RT[10] + g_RT[6]));

    /*reaction 61: T-CH2 + O2 <=> CO2 + H2 */
    kc[60] = exp((g_RT[16] + g_RT[3]) - (g_RT[11] + g_RT[6]));

    /*reaction 62: T-CH2 + O2 <=> CO + OH + H */
    kc[61] = refC * exp((g_RT[16] + g_RT[3]) - (g_RT[10] + g_RT[4] + g_RT[2]));

    /*reaction 63: 2 T-CH2 <=> C2H2 + 2 H */
    kc[62] = refC * exp((2 * g_RT[16]) - (g_RT[23] + 2 * g_RT[2]));

    /*reaction 64: CH + O <=> CO + H */
    kc[63] = exp((g_RT[22] + g_RT[5]) - (g_RT[10] + g_RT[2]));

    /*reaction 65: CH + O2 <=> HCO + O */
    kc[64] = exp((g_RT[22] + g_RT[3]) - (g_RT[12] + g_RT[5]));

    /*reaction 66: CH + H2O <=> CH2O + H */
    kc[65] = exp((g_RT[22] + g_RT[7]) - (g_RT[13] + g_RT[2]));

    /*reaction 67: CH + CO2 <=> HCO + CO */
    kc[66] = exp((g_RT[22] + g_RT[11]) - (g_RT[12] + g_RT[10]));

    /*reaction 68: CH3O + H <=> CH2O + H2 */
    kc[67] = exp((g_RT[19] + g_RT[2]) - (g_RT[13] + g_RT[6]));

    /*reaction 69: CH3O + H <=> S-CH2 + H2O */
    kc[68] = exp((g_RT[19] + g_RT[2]) - (g_RT[17] + g_RT[7]));

    /*reaction 70: CH3O + OH <=> CH2O + H2O */
    kc[69] = exp((g_RT[19] + g_RT[4]) - (g_RT[13] + g_RT[7]));

    /*reaction 71: CH3O + O <=> OH + CH2O */
    kc[70] = exp((g_RT[19] + g_RT[5]) - (g_RT[4] + g_RT[13]));

    /*reaction 72: CH3O + O2 <=> CH2O + HO2 */
    kc[71] = exp((g_RT[19] + g_RT[3]) - (g_RT[13] + g_RT[8]));

    /*reaction 73: CH3O + M <=> CH2O + H + M */
    kc[72] = refC * exp((g_RT[19]) - (g_RT[13] + g_RT[2]));

    /*reaction 74: C2H6 + H <=> C2H5 + H2 */
    kc[73] = exp((g_RT[21] + g_RT[2]) - (g_RT[20] + g_RT[6]));

    /*reaction 75: C2H6 + O <=> C2H5 + OH */
    kc[74] = exp((g_RT[21] + g_RT[5]) - (g_RT[20] + g_RT[4]));

    /*reaction 76: C2H6 + OH <=> C2H5 + H2O */
    kc[75] = exp((g_RT[21] + g_RT[4]) - (g_RT[20] + g_RT[7]));

    /*reaction 77: C2H6 + CH3 <=> C2H5 + CH4 */
    kc[76] = exp((g_RT[21] + g_RT[15]) - (g_RT[20] + g_RT[14]));

    /*reaction 78: C2H6 (+M) <=> C2H5 + H (+M) */
    kc[77] = refC * exp((g_RT[21]) - (g_RT[20] + g_RT[2]));

    /*reaction 79: C2H5 + H <=> C2H4 + H2 */
    kc[78] = exp((g_RT[20] + g_RT[2]) - (g_RT[18] + g_RT[6]));

    /*reaction 80: C2H5 + O <=> C2H4 + OH */
    kc[79] = exp((g_RT[20] + g_RT[5]) - (g_RT[18] + g_RT[4]));

    /*reaction 81: C2H5 + O <=> CH3 + CH2O */
    kc[80] = exp((g_RT[20] + g_RT[5]) - (g_RT[15] + g_RT[13]));

    /*reaction 82: C2H5 + O2 <=> C2H4 + HO2 */
    kc[81] = exp((g_RT[20] + g_RT[3]) - (g_RT[18] + g_RT[8]));

    /*reaction 83: C2H5 (+M) <=> C2H4 + H (+M) */
    kc[82] = refC * exp((g_RT[20]) - (g_RT[18] + g_RT[2]));

    /*reaction 84: C2H4 + H <=> C2H3 + H2 */
    kc[83] = exp((g_RT[18] + g_RT[2]) - (g_RT[24] + g_RT[6]));

    /*reaction 85: C2H4 + OH <=> C2H3 + H2O */
    kc[84] = exp((g_RT[18] + g_RT[4]) - (g_RT[24] + g_RT[7]));

    /*reaction 86: C2H4 + O <=> CH3 + HCO */
    kc[85] = exp((g_RT[18] + g_RT[5]) - (g_RT[15] + g_RT[12]));

    /*reaction 87: C2H4 + O <=> CH2CHO + H */
    kc[86] = exp((g_RT[18] + g_RT[5]) - (g_RT[25] + g_RT[2]));

    /*reaction 88: 2 C2H4 <=> C2H3 + C2H5 */
    kc[87] = exp((2 * g_RT[18]) - (g_RT[24] + g_RT[20]));

    /*reaction 89: C2H4 + O2 <=> C2H3 + HO2 */
    kc[88] = exp((g_RT[18] + g_RT[3]) - (g_RT[24] + g_RT[8]));

    /*reaction 90: C2H4 + HO2 <=> C2H4O + OH */
    kc[89] = exp((g_RT[18] + g_RT[8]) - (g_RT[26] + g_RT[4]));

    /*reaction 91: C2H4O + HO2 <=> CH3 + CO + H2O2 */
    kc[90] = refC * exp((g_RT[26] + g_RT[8]) - (g_RT[15] + g_RT[10] + g_RT[9]));

    /*reaction 92: C2H4 + M <=> C2H3 + H + M */
    kc[91] = refC * exp((g_RT[18]) - (g_RT[24] + g_RT[2]));

    /*reaction 93: C2H4 + M <=> C2H2 + H2 + M */
    kc[92] = refC * exp((g_RT[18]) - (g_RT[23] + g_RT[6]));

    /*reaction 94: C2H3 + H <=> C2H2 + H2 */
    kc[93] = exp((g_RT[24] + g_RT[2]) - (g_RT[23] + g_RT[6]));

    /*reaction 95: C2H3 (+M) <=> C2H2 + H (+M) */
    kc[94] = refC * exp((g_RT[24]) - (g_RT[23] + g_RT[2]));

    /*reaction 96: C2H3 + O2 <=> CH2O + HCO */
    kc[95] = exp((g_RT[24] + g_RT[3]) - (g_RT[13] + g_RT[12]));

    /*reaction 97: C2H3 + O2 <=> CH2CHO + O */
    kc[96] = exp((g_RT[24] + g_RT[3]) - (g_RT[25] + g_RT[5]));

    /*reaction 98: C2H3 + O2 <=> C2H2 + HO2 */
    kc[97] = exp((g_RT[24] + g_RT[3]) - (g_RT[23] + g_RT[8]));

    /*reaction 99: CH2CHO <=> CH2CO + H */
    kc[98] = refC * exp((g_RT[25]) - (g_RT[27] + g_RT[2]));

    /*reaction 100: C2H2 + O <=> HCCO + H */
    kc[99] = exp((g_RT[23] + g_RT[5]) - (g_RT[28] + g_RT[2]));

    /*reaction 101: C2H2 + O <=> T-CH2 + CO */
    kc[100] = exp((g_RT[23] + g_RT[5]) - (g_RT[16] + g_RT[10]));

    /*reaction 102: C2H2 + O2 <=> CH2O + CO */
    kc[101] = exp((g_RT[23] + g_RT[3]) - (g_RT[13] + g_RT[10]));

    /*reaction 103: C2H2 + OH <=> CH2CO + H */
    kc[102] = exp((g_RT[23] + g_RT[4]) - (g_RT[27] + g_RT[2]));

    /*reaction 104: C2H2 + OH <=> C2H + H2O */
    kc[103] = exp((g_RT[23] + g_RT[4]) - (g_RT[29] + g_RT[7]));

    /*reaction 105: CH2CO + H <=> CH3 + CO */
    kc[104] = exp((g_RT[27] + g_RT[2]) - (g_RT[15] + g_RT[10]));

    /*reaction 106: CH2CO + O <=> T-CH2 + CO2 */
    kc[105] = exp((g_RT[27] + g_RT[5]) - (g_RT[16] + g_RT[11]));

    /*reaction 107: CH2CO + O <=> HCCO + OH */
    kc[106] = exp((g_RT[27] + g_RT[5]) - (g_RT[28] + g_RT[4]));

    /*reaction 108: CH2CO + CH3 <=> C2H5 + CO */
    kc[107] = exp((g_RT[27] + g_RT[15]) - (g_RT[20] + g_RT[10]));

    /*reaction 109: HCCO + H <=> S-CH2 + CO */
    kc[108] = exp((g_RT[28] + g_RT[2]) - (g_RT[17] + g_RT[10]));

    /*reaction 110: HCCO + OH <=> HCO + CO + H */
    kc[109] = refC * exp((g_RT[28] + g_RT[4]) - (g_RT[12] + g_RT[10] + g_RT[2]));

    /*reaction 111: HCCO + O <=> 2 CO + H */
    kc[110] = refC * exp((g_RT[28] + g_RT[5]) - (2 * g_RT[10] + g_RT[2]));

    /*reaction 112: HCCO + O2 <=> 2 CO + OH */
    kc[111] = refC * exp((g_RT[28] + g_RT[3]) - (2 * g_RT[10] + g_RT[4]));

    /*reaction 113: HCCO + O2 <=> CO2 + CO + H */
    kc[112] = refC * exp((g_RT[28] + g_RT[3]) - (g_RT[11] + g_RT[10] + g_RT[2]));

    /*reaction 114: C2H + OH <=> HCCO + H */
    kc[113] = exp((g_RT[29] + g_RT[4]) - (g_RT[28] + g_RT[2]));

    /*reaction 115: C2H + O <=> CO + CH */
    kc[114] = exp((g_RT[29] + g_RT[5]) - (g_RT[10] + g_RT[22]));

    /*reaction 116: C2H + O2 <=> HCCO + O */
    kc[115] = exp((g_RT[29] + g_RT[3]) - (g_RT[28] + g_RT[5]));

    /*reaction 117: C2H + O2 <=> CH + CO2 */
    kc[116] = exp((g_RT[29] + g_RT[3]) - (g_RT[22] + g_RT[11]));

    /*reaction 118: C2H + O2 <=> HCO + CO */
    kc[117] = exp((g_RT[29] + g_RT[3]) - (g_RT[12] + g_RT[10]));

    /*reaction 119: CH2OH + H <=> CH2O + H2 */
    kc[118] = exp((g_RT[30] + g_RT[2]) - (g_RT[13] + g_RT[6]));

    /*reaction 120: CH2OH + H <=> CH3 + OH */
    kc[119] = exp((g_RT[30] + g_RT[2]) - (g_RT[15] + g_RT[4]));

    /*reaction 121: CH2OH + OH <=> CH2O + H2O */
    kc[120] = exp((g_RT[30] + g_RT[4]) - (g_RT[13] + g_RT[7]));

    /*reaction 122: CH2OH + O2 <=> CH2O + HO2 */
    kc[121] = exp((g_RT[30] + g_RT[3]) - (g_RT[13] + g_RT[8]));

    /*reaction 123: CH2OH + M <=> CH2O + H + M */
    kc[122] = refC * exp((g_RT[30]) - (g_RT[13] + g_RT[2]));

    /*reaction 124: CH3O + M <=> CH2OH + M */
    kc[123] = exp((g_RT[19]) - (g_RT[30]));

    /*reaction 125: CH2CO + OH <=> CH2OH + CO */
    kc[124] = exp((g_RT[27] + g_RT[4]) - (g_RT[30] + g_RT[10]));

    /*reaction 126: CH3OH + OH <=> CH2OH + H2O */
    kc[125] = exp((g_RT[31] + g_RT[4]) - (g_RT[30] + g_RT[7]));

    /*reaction 127: CH3OH + OH <=> CH3O + H2O */
    kc[126] = exp((g_RT[31] + g_RT[4]) - (g_RT[19] + g_RT[7]));

    /*reaction 128: CH3OH + H <=> CH2OH + H2 */
    kc[127] = exp((g_RT[31] + g_RT[2]) - (g_RT[30] + g_RT[6]));

    /*reaction 129: CH3OH + H <=> CH3O + H2 */
    kc[128] = exp((g_RT[31] + g_RT[2]) - (g_RT[19] + g_RT[6]));

    /*reaction 130: CH3OH + O <=> CH2OH + OH */
    kc[129] = exp((g_RT[31] + g_RT[5]) - (g_RT[30] + g_RT[4]));

    /*reaction 131: CH3OH + HO2 <=> CH2OH + H2O2 */
    kc[130] = exp((g_RT[31] + g_RT[8]) - (g_RT[30] + g_RT[9]));

    /*reaction 132: CH3OH + O2 <=> CH2OH + HO2 */
    kc[131] = exp((g_RT[31] + g_RT[3]) - (g_RT[30] + g_RT[8]));

    /*reaction 133: C3H4 + O <=> C2H4 + CO */
    kc[132] = exp((g_RT[32] + g_RT[5]) - (g_RT[18] + g_RT[10]));

    /*reaction 134: CH3 + C2H2 <=> C3H4 + H */
    kc[133] = exp((g_RT[15] + g_RT[23]) - (g_RT[32] + g_RT[2]));

    /*reaction 135: C3H4 + O <=> HCCO + CH3 */
    kc[134] = exp((g_RT[32] + g_RT[5]) - (g_RT[28] + g_RT[15]));

    /*reaction 136: C3H3 + H (+M) <=> C3H4 (+M) */
    kc[135] = 1.0 / (refC) * exp((g_RT[33] + g_RT[2]) - (g_RT[32]));

    /*reaction 137: C3H3 + HO2 <=> C3H4 + O2 */
    kc[136] = exp((g_RT[33] + g_RT[8]) - (g_RT[32] + g_RT[3]));

    /*reaction 138: C3H4 + OH <=> C3H3 + H2O */
    kc[137] = exp((g_RT[32] + g_RT[4]) - (g_RT[33] + g_RT[7]));

    /*reaction 139: C3H3 + O2 <=> CH2CO + HCO */
    kc[138] = exp((g_RT[33] + g_RT[3]) - (g_RT[27] + g_RT[12]));

    /*reaction 140: C3H4 + H (+M) <=> C3H5 (+M) */
    kc[139] = 1.0 / (refC) * exp((g_RT[32] + g_RT[2]) - (g_RT[34]));

    /*reaction 141: C3H5 + H <=> C3H4 + H2 */
    kc[140] = exp((g_RT[34] + g_RT[2]) - (g_RT[32] + g_RT[6]));

    /*reaction 142: C3H5 + O2 <=> C3H4 + HO2 */
    kc[141] = exp((g_RT[34] + g_RT[3]) - (g_RT[32] + g_RT[8]));

    /*reaction 143: C3H5 + CH3 <=> C3H4 + CH4 */
    kc[142] = exp((g_RT[34] + g_RT[15]) - (g_RT[32] + g_RT[14]));

    /*reaction 144: C2H2 + CH3 (+M) <=> C3H5 (+M) */
    kc[143] = 1.0 / (refC) * exp((g_RT[23] + g_RT[15]) - (g_RT[34]));

    /*reaction 145: C3H5 + OH <=> C3H4 + H2O */
    kc[144] = exp((g_RT[34] + g_RT[4]) - (g_RT[32] + g_RT[7]));

    /*reaction 146: C3H3 + HCO <=> C3H4 + CO */
    kc[145] = exp((g_RT[33] + g_RT[12]) - (g_RT[32] + g_RT[10]));

    /*reaction 147: C3H3 + HO2 <=> OH + CO + C2H3 */
    kc[146] = refC * exp((g_RT[33] + g_RT[8]) - (g_RT[4] + g_RT[10] + g_RT[24]));

    /*reaction 148: C3H4 + O2 <=> CH3 + HCO + CO */
    kc[147] = refC * exp((g_RT[32] + g_RT[3]) - (g_RT[15] + g_RT[12] + g_RT[10]));

    /*reaction 149: C3H6 + O <=> C2H5 + HCO */
    kc[148] = exp((g_RT[35] + g_RT[5]) - (g_RT[20] + g_RT[12]));

    /*reaction 150: C3H6 + OH <=> C3H5 + H2O */
    kc[149] = exp((g_RT[35] + g_RT[4]) - (g_RT[34] + g_RT[7]));

    /*reaction 151: C3H6 + O <=> CH2CO + CH3 + H */
    kc[150] = refC * exp((g_RT[35] + g_RT[5]) - (g_RT[27] + g_RT[15] + g_RT[2]));

    /*reaction 152: C3H6 + H <=> C3H5 + H2 */
    kc[151] = exp((g_RT[35] + g_RT[2]) - (g_RT[34] + g_RT[6]));

    /*reaction 153: C3H5 + H (+M) <=> C3H6 (+M) */
    kc[152] = 1.0 / (refC) * exp((g_RT[34] + g_RT[2]) - (g_RT[35]));

    /*reaction 154: C3H5 + HO2 <=> C3H6 + O2 */
    kc[153] = exp((g_RT[34] + g_RT[8]) - (g_RT[35] + g_RT[3]));

    /*reaction 155: C3H5 + HO2 <=> OH + C2H3 + CH2O */
    kc[154] = refC * exp((g_RT[34] + g_RT[8]) - (g_RT[4] + g_RT[24] + g_RT[13]));

    /*reaction 156: C2H3 + CH3 (+M) <=> C3H6 (+M) */
    kc[155] = 1.0 / (refC) * exp((g_RT[24] + g_RT[15]) - (g_RT[35]));

    /*reaction 157: C3H6 + H <=> C2H4 + CH3 */
    kc[156] = exp((g_RT[35] + g_RT[2]) - (g_RT[18] + g_RT[15]));

    /*reaction 158: CH3 + C2H3 <=> C3H5 + H */
    kc[157] = exp((g_RT[15] + g_RT[24]) - (g_RT[34] + g_RT[2]));

    /*reaction 159: C3H8 (+M) <=> CH3 + C2H5 (+M) */
    kc[158] = refC * exp((g_RT[36]) - (g_RT[15] + g_RT[20]));

    /*reaction 160: C3H8 + O2 <=> I-C3H7 + HO2 */
    kc[159] = exp((g_RT[36] + g_RT[3]) - (g_RT[37] + g_RT[8]));

    /*reaction 161: C3H8 + O2 <=> N-C3H7 + HO2 */
    kc[160] = exp((g_RT[36] + g_RT[3]) - (g_RT[38] + g_RT[8]));

    /*reaction 162: C3H8 + H <=> I-C3H7 + H2 */
    kc[161] = exp((g_RT[36] + g_RT[2]) - (g_RT[37] + g_RT[6]));

    /*reaction 163: C3H8 + H <=> N-C3H7 + H2 */
    kc[162] = exp((g_RT[36] + g_RT[2]) - (g_RT[38] + g_RT[6]));

    /*reaction 164: C3H8 + O <=> I-C3H7 + OH */
    kc[163] = exp((g_RT[36] + g_RT[5]) - (g_RT[37] + g_RT[4]));

    /*reaction 165: C3H8 + O <=> N-C3H7 + OH */
    kc[164] = exp((g_RT[36] + g_RT[5]) - (g_RT[38] + g_RT[4]));

    /*reaction 166: C3H8 + OH <=> N-C3H7 + H2O */
    kc[165] = exp((g_RT[36] + g_RT[4]) - (g_RT[38] + g_RT[7]));

    /*reaction 167: C3H8 + OH <=> I-C3H7 + H2O */
    kc[166] = exp((g_RT[36] + g_RT[4]) - (g_RT[37] + g_RT[7]));

    /*reaction 168: C3H8 + HO2 <=> I-C3H7 + H2O2 */
    kc[167] = exp((g_RT[36] + g_RT[8]) - (g_RT[37] + g_RT[9]));

    /*reaction 169: C3H8 + HO2 <=> N-C3H7 + H2O2 */
    kc[168] = exp((g_RT[36] + g_RT[8]) - (g_RT[38] + g_RT[9]));

    /*reaction 170: I-C3H7 + C3H8 <=> N-C3H7 + C3H8 */
    kc[169] = exp((g_RT[37] + g_RT[36]) - (g_RT[38] + g_RT[36]));

    /*reaction 171: C3H6 + H (+M) <=> I-C3H7 (+M) */
    kc[170] = 1.0 / (refC) * exp((g_RT[35] + g_RT[2]) - (g_RT[37]));

    /*reaction 172: I-C3H7 + O2 <=> C3H6 + HO2 */
    kc[171] = exp((g_RT[37] + g_RT[3]) - (g_RT[35] + g_RT[8]));

    /*reaction 173: N-C3H7 (+M) <=> CH3 + C2H4 (+M) */
    kc[172] = refC * exp((g_RT[38]) - (g_RT[15] + g_RT[18]));

    /*reaction 174: H + C3H6 (+M) <=> N-C3H7 (+M) */
    kc[173] = 1.0 / (refC) * exp((g_RT[2] + g_RT[35]) - (g_RT[38]));

    /*reaction 175: N-C3H7 + O2 <=> C3H6 + HO2 */
    kc[174] = exp((g_RT[38] + g_RT[3]) - (g_RT[35] + g_RT[8]));

    return;
}


/*compute the g/(RT) at the given temperature */
/*tc contains precomputed powers of T, tc[0] = log(T) */
void gibbs(double * species, double * tc)
{

    /*temperature */
    double T = tc[1], invT = 1.0 / T;

    /*species with midpoint at T=1000 kelvin */
    if (T < 1000) {
        /*species 0: N2 */
        species[0] =
            -1.020899900000000e+03 * invT
            -6.516950000000001e-01
            -3.298677000000000e+00 * tc[0]
            -7.041202000000000e-04 * tc[1]
            +6.605369999999999e-07 * tc[2]
            -4.701262500000001e-10 * tc[3]
            +1.222427000000000e-13 * tc[4];
        /*species 1: AR */
        species[1] =
            -7.453750000000000e+02 * invT
            -1.866000000000000e+00
            -2.500000000000000e+00 * tc[0]
            -0.000000000000000e+00 * tc[1]
            -0.000000000000000e+00 * tc[2]
            -0.000000000000000e+00 * tc[3]
            -0.000000000000000e+00 * tc[4];
        /*species 2: H */
        species[2] =
            +2.547365990000000e+04 * invT
            +2.946682853000000e+00
            -2.500000000000000e+00 * tc[0]
            -3.526664095000000e-13 * tc[1]
            +3.326532733333333e-16 * tc[2]
            -1.917346933333333e-19 * tc[3]
            +4.638661660000000e-23 * tc[4];
        /*species 3: O2 */
        species[3] =
            -1.063943560000000e+03 * invT
            +1.247806300000001e-01
            -3.782456360000000e+00 * tc[0]
            +1.498367080000000e-03 * tc[1]
            -1.641217001666667e-06 * tc[2]
            +8.067745908333334e-10 * tc[3]
            -1.621864185000000e-13 * tc[4];
        /*species 4: OH */
        species[4] =
            +3.381538120000000e+03 * invT
            +4.815738570000000e+00
            -4.125305610000000e+00 * tc[0]
            +1.612724695000000e-03 * tc[1]
            -1.087941151666667e-06 * tc[2]
            +4.832113691666666e-10 * tc[3]
            -1.031186895000000e-13 * tc[4];
        /*species 5: O */
        species[5] =
            +2.912225920000000e+04 * invT
            +1.116333640000000e+00
            -3.168267100000000e+00 * tc[0]
            +1.639659420000000e-03 * tc[1]
            -1.107177326666667e-06 * tc[2]
            +5.106721866666666e-10 * tc[3]
            -1.056329855000000e-13 * tc[4];
        /*species 6: H2 */
        species[6] =
            -9.179351730000000e+02 * invT
            +1.661320882000000e+00
            -2.344331120000000e+00 * tc[0]
            -3.990260375000000e-03 * tc[1]
            +3.246358500000000e-06 * tc[2]
            -1.679767450000000e-09 * tc[3]
            +3.688058805000000e-13 * tc[4];
        /*species 7: H2O */
        species[7] =
            -3.029372670000000e+04 * invT
            +5.047672768000000e+00
            -4.198640560000000e+00 * tc[0]
            +1.018217050000000e-03 * tc[1]
            -1.086733685000000e-06 * tc[2]
            +4.573308850000000e-10 * tc[3]
            -8.859890850000000e-14 * tc[4];
        /*species 8: HO2 */
        species[8] =
            +2.948080400000000e+02 * invT
            +5.851355599999999e-01
            -4.301798010000000e+00 * tc[0]
            +2.374560255000000e-03 * tc[1]
            -3.526381516666666e-06 * tc[2]
            +2.023032450000000e-09 * tc[3]
            -4.646125620000001e-13 * tc[4];
        /*species 9: H2O2 */
        species[9] =
            -1.770258210000000e+04 * invT
            +8.410619499999998e-01
            -4.276112690000000e+00 * tc[0]
            +2.714112085000000e-04 * tc[1]
            -2.788928350000000e-06 * tc[2]
            +1.798090108333333e-09 * tc[3]
            -4.312271815000000e-13 * tc[4];
        /*species 10: CO */
        species[10] =
            -1.434408600000000e+04 * invT
            +7.112418999999992e-02
            -3.579533470000000e+00 * tc[0]
            +3.051768400000000e-04 * tc[1]
            -1.694690550000000e-07 * tc[2]
            -7.558382366666667e-11 * tc[3]
            +4.522122495000000e-14 * tc[4];
        /*species 11: CO2 */
        species[11] =
            -4.837196970000000e+04 * invT
            -7.544278700000000e+00
            -2.356773520000000e+00 * tc[0]
            -4.492298385000000e-03 * tc[1]
            +1.187260448333333e-06 * tc[2]
            -2.049325183333333e-10 * tc[3]
            +7.184977399999999e-15 * tc[4];
        /*species 12: HCO */
        species[12] =
            +3.839564960000000e+03 * invT
            +8.268134100000002e-01
            -4.221185840000000e+00 * tc[0]
            +1.621962660000000e-03 * tc[1]
            -2.296657433333333e-06 * tc[2]
            +1.109534108333333e-09 * tc[3]
            -2.168844325000000e-13 * tc[4];
        /*species 13: CH2O */
        species[13] =
            -1.430895670000000e+04 * invT
            +4.190910250000000e+00
            -4.793723150000000e+00 * tc[0]
            +4.954166845000000e-03 * tc[1]
            -6.220333466666666e-06 * tc[2]
            +3.160710508333333e-09 * tc[3]
            -6.588632600000000e-13 * tc[4];
        /*species 14: CH4 */
        species[14] =
            -1.024664760000000e+04 * invT
            +9.791179889999999e+00
            -5.149876130000000e+00 * tc[0]
            +6.835489400000000e-03 * tc[1]
            -8.196676650000000e-06 * tc[2]
            +4.039525216666667e-09 * tc[3]
            -8.334697800000000e-13 * tc[4];
        /*species 15: CH3 */
        species[15] =
            +1.644499880000000e+04 * invT
            +2.069026070000000e+00
            -3.673590400000000e+00 * tc[0]
            -1.005475875000000e-03 * tc[1]
            -9.550364266666668e-07 * tc[2]
            +5.725978541666666e-10 * tc[3]
            -1.271928670000000e-13 * tc[4];
        /*species 16: T-CH2 */
        species[16] =
            +4.600404010000000e+04 * invT
            +2.200146820000000e+00
            -3.762678670000000e+00 * tc[0]
            -4.844360715000000e-04 * tc[1]
            -4.658164016666667e-07 * tc[2]
            +3.209092941666667e-10 * tc[3]
            -8.437085950000000e-14 * tc[4];
        /*species 17: S-CH2 */
        species[17] =
            +5.049681630000000e+04 * invT
            +4.967723077000000e+00
            -4.198604110000000e+00 * tc[0]
            +1.183307095000000e-03 * tc[1]
            -1.372160366666667e-06 * tc[2]
            +5.573466508333334e-10 * tc[3]
            -9.715736850000000e-14 * tc[4];
        /*species 18: C2H4 */
        species[18] =
            +5.089775930000000e+03 * invT
            -1.381294799999999e-01
            -3.959201480000000e+00 * tc[0]
            +3.785261235000000e-03 * tc[1]
            -9.516504866666667e-06 * tc[2]
            +5.763239608333333e-09 * tc[3]
            -1.349421865000000e-12 * tc[4];
        /*species 19: CH3O */
        species[19] =
            +1.307724840000000e+03 * invT
            -2.860603620000000e+00
            -3.711805020000000e+00 * tc[0]
            +1.402316530000000e-03 * tc[1]
            -6.275849516666667e-06 * tc[2]
            +3.942267408333333e-09 * tc[3]
            -9.329421000000001e-13 * tc[4];
        /*species 20: C2H5 */
        species[20] =
            +1.284162650000000e+04 * invT
            -4.007435600000004e-01
            -4.306465680000000e+00 * tc[0]
            +2.093294460000000e-03 * tc[1]
            -8.285713450000000e-06 * tc[2]
            +4.992721716666666e-09 * tc[3]
            -1.152545020000000e-12 * tc[4];
        /*species 21: C2H6 */
        species[21] =
            -1.152220550000000e+04 * invT
            +1.624601760000000e+00
            -4.291424920000000e+00 * tc[0]
            +2.750771350000000e-03 * tc[1]
            -9.990638133333334e-06 * tc[2]
            +5.903885708333334e-09 * tc[3]
            -1.343428855000000e-12 * tc[4];
        /*species 22: CH */
        species[22] =
            +7.079729340000000e+04 * invT
            +1.405805570000000e+00
            -3.489816650000000e+00 * tc[0]
            -1.619177705000000e-04 * tc[1]
            +2.814984416666667e-07 * tc[2]
            -2.635144391666666e-10 * tc[3]
            +7.030453350000001e-14 * tc[4];
        /*species 23: C2H2 */
        species[23] =
            +2.642898070000000e+04 * invT
            -1.313102400600000e+01
            -8.086810940000000e-01 * tc[0]
            -1.168078145000000e-02 * tc[1]
            +5.919530250000000e-06 * tc[2]
            -2.334603641666667e-09 * tc[3]
            +4.250364870000000e-13 * tc[4];
        /*species 24: C2H3 */
        species[24] =
            +3.485984680000000e+04 * invT
            -5.298073800000000e+00
            -3.212466450000000e+00 * tc[0]
            -7.573958100000000e-04 * tc[1]
            -4.320156866666666e-06 * tc[2]
            +2.980482058333333e-09 * tc[3]
            -7.357543650000000e-13 * tc[4];
        /*species 25: CH2CHO */
        species[25] =
            +3.804285300000000e+02 * invT
            -1.834315190000000e+01
            -1.013400100000000e+00 * tc[0]
            -1.134073350000000e-02 * tc[1]
            +2.622324000000000e-06 * tc[2]
            -3.374291916666667e-10 * tc[3]
            -1.479950600000000e-14 * tc[4];
        /*species 26: C2H4O */
        species[26] =
            -2.157287800000000e+04 * invT
            +6.264436000000000e-01
            -4.729459500000000e+00 * tc[0]
            +1.596642900000000e-03 * tc[1]
            -7.922486833333334e-06 * tc[2]
            +4.788217583333333e-09 * tc[3]
            -1.096555600000000e-12 * tc[4];
        /*species 27: CH2CO */
        species[27] =
            -7.042918040000000e+03 * invT
            -1.007981170000000e+01
            -2.135836300000000e+00 * tc[0]
            -9.059436050000000e-03 * tc[1]
            +2.899124566666666e-06 * tc[2]
            -7.786646400000000e-10 * tc[3]
            +1.007288075000000e-13 * tc[4];
        /*species 28: HCCO */
        species[28] =
            +2.005944900000000e+04 * invT
            -1.023869560000000e+01
            -2.251721400000000e+00 * tc[0]
            -8.827510500000000e-03 * tc[1]
            +3.954850166666666e-06 * tc[2]
            -1.439646583333334e-09 * tc[3]
            +2.533240550000000e-13 * tc[4];
        /*species 29: C2H */
        species[29] =
            +6.683939320000001e+04 * invT
            -3.333307050000000e+00
            -2.889657330000000e+00 * tc[0]
            -6.704980550000000e-03 * tc[1]
            +4.746158350000000e-06 * tc[2]
            -2.456592041666667e-09 * tc[3]
            +5.466575550000000e-13 * tc[4];
        /*species 30: CH2OH */
        species[30] =
            -3.524767280000000e+03 * invT
            +1.169203330000000e+00
            -4.478323170000000e+00 * tc[0]
            +6.753484350000000e-04 * tc[1]
            -4.641395116666666e-06 * tc[2]
            +3.040561641666667e-09 * tc[3]
            -7.395338750000001e-13 * tc[4];
        /*species 31: CH3OH */
        species[31] =
            -2.564276560000000e+04 * invT
            +7.219494050000001e+00
            -5.715395820000000e+00 * tc[0]
            +7.615456450000000e-03 * tc[1]
            -1.087401925000000e-05 * tc[2]
            +5.923390741666667e-09 * tc[3]
            -1.306763490000000e-12 * tc[4];
        /*species 32: C3H4 */
        species[32] =
            +2.154156700000000e+04 * invT
            -7.613094500000000e+00
            -2.613044500000000e+00 * tc[0]
            -6.061287500000000e-03 * tc[1]
            -3.089980000000000e-06 * tc[2]
            +2.877095750000000e-09 * tc[3]
            -7.667539500000001e-13 * tc[4];
        /*species 33: C3H3 */
        species[33] =
            +4.010577830000000e+04 * invT
            -1.385478313000000e+01
            -1.351109270000000e+00 * tc[0]
            -1.637056115000000e-02 * tc[1]
            +7.897118916666667e-06 * tc[2]
            -3.135915066666667e-09 * tc[3]
            +5.927046150000000e-13 * tc[4];
        /*species 34: C3H5 */
        species[34] =
            +1.924562900000000e+04 * invT
            -1.581003050000000e+01
            -1.363183500000000e+00 * tc[0]
            -9.906910499999999e-03 * tc[1]
            -2.082843333333333e-06 * tc[2]
            +2.779629583333333e-09 * tc[3]
            -7.923285500000000e-13 * tc[4];
        /*species 35: C3H6 */
        species[35] =
            +1.074826000000000e+03 * invT
            -1.465203300000000e+01
            -1.493307000000000e+00 * tc[0]
            -1.046259000000000e-02 * tc[1]
            -7.477990000000000e-07 * tc[2]
            +1.390760000000000e-09 * tc[3]
            -3.579073000000000e-13 * tc[4];
        /*species 36: C3H8 */
        species[36] =
            -1.405790700000000e+04 * invT
            -1.829702707000000e+01
            -9.285109300000000e-01 * tc[0]
            -1.323028300000000e-02 * tc[1]
            -1.005540766666667e-06 * tc[2]
            +1.826246083333333e-09 * tc[3]
            -4.748077199999999e-13 * tc[4];
        /*species 37: I-C3H7 */
        species[37] =
            +9.422372400000000e+03 * invT
            -1.867139710000000e+01
            -1.444919900000000e+00 * tc[0]
            -1.049955600000000e-02 * tc[1]
            -1.283937033333333e-06 * tc[2]
            +1.539687750000000e-09 * tc[3]
            -3.564148100000000e-13 * tc[4];
        /*species 38: N-C3H7 */
        species[38] =
            +1.031234600000000e+04 * invT
            -2.008691670000000e+01
            -1.049117300000000e+00 * tc[0]
            -1.300448650000000e-02 * tc[1]
            -3.923752666666667e-07 * tc[2]
            +1.632927666666667e-09 * tc[3]
            -4.686010350000000e-13 * tc[4];
    } else {
        /*species 0: N2 */
        species[0] =
            -9.227977000000000e+02 * invT
            -3.053888000000000e+00
            -2.926640000000000e+00 * tc[0]
            -7.439884000000000e-04 * tc[1]
            +9.474600000000001e-08 * tc[2]
            -8.414198333333333e-12 * tc[3]
            +3.376675500000000e-16 * tc[4];
        /*species 1: AR */
        species[1] =
            -7.453750000000000e+02 * invT
            -1.866000000000000e+00
            -2.500000000000000e+00 * tc[0]
            -0.000000000000000e+00 * tc[1]
            -0.000000000000000e+00 * tc[2]
            -0.000000000000000e+00 * tc[3]
            -0.000000000000000e+00 * tc[4];
        /*species 2: H */
        species[2] =
            +2.547365990000000e+04 * invT
            +2.946682924000000e+00
            -2.500000010000000e+00 * tc[0]
            +1.154214865000000e-11 * tc[1]
            -2.692699133333334e-15 * tc[2]
            +3.945960291666667e-19 * tc[3]
            -2.490986785000000e-23 * tc[4];
        /*species 3: O2 */
        species[3] =
            -1.088457720000000e+03 * invT
            -2.170693450000000e+00
            -3.282537840000000e+00 * tc[0]
            -7.415437700000000e-04 * tc[1]
            +1.263277781666667e-07 * tc[2]
            -1.745587958333333e-11 * tc[3]
            +1.083588970000000e-15 * tc[4];
        /*species 4: OH */
        species[4] =
            +3.718857740000000e+03 * invT
            -2.836911870000000e+00
            -2.864728860000000e+00 * tc[0]
            -5.282522400000000e-04 * tc[1]
            +4.318045966666667e-08 * tc[2]
            -2.543488950000000e-12 * tc[3]
            +6.659793800000000e-17 * tc[4];
        /*species 5: O */
        species[5] =
            +2.921757910000000e+04 * invT
            -2.214917859999999e+00
            -2.569420780000000e+00 * tc[0]
            +4.298705685000000e-05 * tc[1]
            -6.991409816666667e-09 * tc[2]
            +8.348149916666666e-13 * tc[3]
            -6.141684549999999e-17 * tc[4];
        /*species 6: H2 */
        species[6] =
            -9.501589220000000e+02 * invT
            +6.542302510000000e+00
            -3.337279200000000e+00 * tc[0]
            +2.470123655000000e-05 * tc[1]
            -8.324279633333333e-08 * tc[2]
            +1.496386616666667e-11 * tc[3]
            -1.001276880000000e-15 * tc[4];
        /*species 7: H2O */
        species[7] =
            -3.000429710000000e+04 * invT
            -1.932777610000000e+00
            -3.033992490000000e+00 * tc[0]
            -1.088459020000000e-03 * tc[1]
            +2.734541966666666e-08 * tc[2]
            +8.086832250000000e-12 * tc[3]
            -8.410049600000000e-16 * tc[4];
        /*species 8: HO2 */
        species[8] =
            +1.118567130000000e+02 * invT
            +2.321087500000001e-01
            -4.017210900000000e+00 * tc[0]
            -1.119910065000000e-03 * tc[1]
            +1.056096916666667e-07 * tc[2]
            -9.520530833333334e-12 * tc[3]
            +5.395426750000000e-16 * tc[4];
        /*species 9: H2O2 */
        species[9] =
            -1.786178770000000e+04 * invT
            +1.248846229999999e+00
            -4.165002850000000e+00 * tc[0]
            -2.454158470000000e-03 * tc[1]
            +3.168987083333333e-07 * tc[2]
            -3.093216550000000e-11 * tc[3]
            +1.439541525000000e-15 * tc[4];
        /*species 10: CO */
        species[10] =
            -1.415187240000000e+04 * invT
            -5.103502110000000e+00
            -2.715185610000000e+00 * tc[0]
            -1.031263715000000e-03 * tc[1]
            +1.664709618333334e-07 * tc[2]
            -1.917108400000000e-11 * tc[3]
            +1.018238580000000e-15 * tc[4];
        /*species 11: CO2 */
        species[11] =
            -4.875916600000000e+04 * invT
            +1.585822230000000e+00
            -3.857460290000000e+00 * tc[0]
            -2.207185130000000e-03 * tc[1]
            +3.691356733333334e-07 * tc[2]
            -4.362418233333334e-11 * tc[3]
            +2.360420820000000e-15 * tc[4];
        /*species 12: HCO */
        species[12] =
            +4.011918150000000e+03 * invT
            -7.026170540000000e+00
            -2.772174380000000e+00 * tc[0]
            -2.478477630000000e-03 * tc[1]
            +4.140760216666667e-07 * tc[2]
            -4.909681483333334e-11 * tc[3]
            +2.667543555000000e-15 * tc[4];
        /*species 13: CH2O */
        species[13] =
            -1.399583230000000e+04 * invT
            -1.189563292000000e+01
            -1.760690080000000e+00 * tc[0]
            -4.600000410000000e-03 * tc[1]
            +7.370980216666666e-07 * tc[2]
            -8.386767666666666e-11 * tc[3]
            +4.419278200000001e-15 * tc[4];
        /*species 14: CH4 */
        species[14] =
            -9.468344590000001e+03 * invT
            -1.836246650500000e+01
            -7.485149500000000e-02 * tc[0]
            -6.695473350000000e-03 * tc[1]
            +9.554763483333333e-07 * tc[2]
            -1.019104458333333e-10 * tc[3]
            +5.090761500000000e-15 * tc[4];
        /*species 15: CH3 */
        species[15] =
            +1.677558430000000e+04 * invT
            -6.194354070000000e+00
            -2.285717720000000e+00 * tc[0]
            -3.619950185000000e-03 * tc[1]
            +4.978572466666667e-07 * tc[2]
            -4.964038700000000e-11 * tc[3]
            +2.335771970000000e-15 * tc[4];
        /*species 16: T-CH2 */
        species[16] =
            +4.626360400000000e+04 * invT
            -3.297092110000000e+00
            -2.874101130000000e+00 * tc[0]
            -1.828196460000000e-03 * tc[1]
            +2.348243283333333e-07 * tc[2]
            -2.168162908333333e-11 * tc[3]
            +9.386378350000000e-16 * tc[4];
        /*species 17: S-CH2 */
        species[17] =
            +5.092599970000000e+04 * invT
            -6.334463270000000e+00
            -2.292038420000000e+00 * tc[0]
            -2.327943185000000e-03 * tc[1]
            +3.353199116666667e-07 * tc[2]
            -3.482550000000000e-11 * tc[3]
            +1.698581825000000e-15 * tc[4];
        /*species 18: C2H4 */
        species[18] =
            +4.939886140000000e+03 * invT
            -8.269258140000002e+00
            -2.036111160000000e+00 * tc[0]
            -7.322707550000000e-03 * tc[1]
            +1.118463191666667e-06 * tc[2]
            -1.226857691666667e-10 * tc[3]
            +6.285303050000000e-15 * tc[4];
        /*species 19: CH3O */
        species[19] =
            +3.901391640000000e+02 * invT
            +6.724592660000000e+00
            -4.757792380000000e+00 * tc[0]
            -3.720712370000000e-03 * tc[1]
            +4.495086266666666e-07 * tc[2]
            -3.650754200000000e-11 * tc[3]
            +1.317685490000000e-15 * tc[4];
        /*species 20: C2H5 */
        species[20] =
            +1.285752000000000e+04 * invT
            -1.150777788000000e+01
            -1.954656420000000e+00 * tc[0]
            -8.698636100000001e-03 * tc[1]
            +1.330344446666667e-06 * tc[2]
            -1.460147408333333e-10 * tc[3]
            +7.482078800000000e-15 * tc[4];
        /*species 21: C2H6 */
        species[21] =
            -1.142639320000000e+04 * invT
            -1.404372920000000e+01
            -1.071881500000000e+00 * tc[0]
            -1.084263385000000e-02 * tc[1]
            +1.670934450000000e-06 * tc[2]
            -1.845100008333333e-10 * tc[3]
            +9.500144500000000e-15 * tc[4];
        /*species 22: CH */
        species[22] =
            +7.101243640000001e+04 * invT
            -2.606515260000000e+00
            -2.878464730000000e+00 * tc[0]
            -4.854568405000000e-04 * tc[1]
            -2.407427583333333e-08 * tc[2]
            +1.089065408333333e-11 * tc[3]
            -8.803969149999999e-16 * tc[4];
        /*species 23: C2H2 */
        species[23] =
            +2.593599920000000e+04 * invT
            +5.377850850000001e+00
            -4.147569640000000e+00 * tc[0]
            -2.980833320000000e-03 * tc[1]
            +3.954914200000000e-07 * tc[2]
            -3.895101425000000e-11 * tc[3]
            +1.806176065000000e-15 * tc[4];
        /*species 24: C2H3 */
        species[24] =
            +3.461287390000000e+04 * invT
            -4.770599780000000e+00
            -3.016724000000000e+00 * tc[0]
            -5.165114600000000e-03 * tc[1]
            +7.801372483333333e-07 * tc[2]
            -8.480274000000000e-11 * tc[3]
            +4.313035205000000e-15 * tc[4];
        /*species 25: CH2CHO */
        species[25] =
            -7.319934700000000e+02 * invT
            +7.129536700000000e+00
            -5.166200600000000e+00 * tc[0]
            -5.423913000000000e-03 * tc[1]
            +7.443061333333333e-07 * tc[2]
            -6.719045666666667e-11 * tc[3]
            +2.420509650000000e-15 * tc[4];
        /*species 26: C2H4O */
        species[26] =
            -2.259312200000000e+04 * invT
            +8.884902499999999e+00
            -5.404110800000000e+00 * tc[0]
            -5.861529500000000e-03 * tc[1]
            +7.043856166666666e-07 * tc[2]
            -5.697704250000000e-11 * tc[3]
            +2.049243150000000e-15 * tc[4];
        /*species 27: CH2CO */
        species[27] =
            -7.551053110000000e+03 * invT
            +3.879050115000000e+00
            -4.511297320000000e+00 * tc[0]
            -4.501798725000000e-03 * tc[1]
            +6.948993916666666e-07 * tc[2]
            -7.694549016666667e-11 * tc[3]
            +3.974191005000000e-15 * tc[4];
        /*species 28: HCCO */
        species[28] =
            +1.932721500000000e+04 * invT
            +9.558465300000000e+00
            -5.628205800000000e+00 * tc[0]
            -2.042670050000000e-03 * tc[1]
            +2.655757833333333e-07 * tc[2]
            -2.385504333333333e-11 * tc[3]
            +9.703915999999999e-16 * tc[4];
        /*species 29: C2H */
        species[29] =
            +6.712106500000000e+04 * invT
            -3.468088230000000e+00
            -3.167806520000000e+00 * tc[0]
            -2.376109510000000e-03 * tc[1]
            +3.063117950000000e-07 * tc[2]
            -2.534918766666666e-11 * tc[3]
            +8.861638500000000e-16 * tc[4];
        /*species 30: CH2OH */
        species[30] =
            -4.058132280000000e+03 * invT
            +6.940026500000000e+00
            -5.093120370000000e+00 * tc[0]
            -2.973792750000000e-03 * tc[1]
            +3.441608733333333e-07 * tc[2]
            -2.691722525000000e-11 * tc[3]
            +9.406252600000001e-16 * tc[4];
        /*species 31: CH3OH */
        species[31] =
            -2.537487470000000e+04 * invT
            -1.271265439000000e+01
            -1.789707910000000e+00 * tc[0]
            -7.046914600000000e-03 * tc[1]
            +1.060834725000000e-06 * tc[2]
            -1.151425708333333e-10 * tc[3]
            +5.853011000000000e-15 * tc[4];
        /*species 32: C3H4 */
        species[32] =
            +2.011749500000000e+04 * invT
            +1.731263820000000e+01
            -6.316872200000000e+00 * tc[0]
            -5.566864000000000e-03 * tc[1]
            +6.604896333333332e-07 * tc[2]
            -5.297019833333334e-11 * tc[3]
            +1.893777000000000e-15 * tc[4];
        /*species 33: C3H3 */
        species[33] =
            +3.890874270000000e+04 * invT
            +1.972706240000000e+01
            -7.142218800000000e+00 * tc[0]
            -3.809510025000000e-03 * tc[1]
            +4.457665833333333e-07 * tc[2]
            -3.540956675000000e-11 * tc[3]
            +1.257377075000000e-15 * tc[4];
        /*species 34: C3H5 */
        species[34] =
            +1.748244900000000e+04 * invT
            +1.774383770000000e+01
            -6.500787700000000e+00 * tc[0]
            -7.162365500000000e-03 * tc[1]
            +9.463605333333332e-07 * tc[2]
            -9.234000833333333e-11 * tc[3]
            +4.518194349999999e-15 * tc[4];
        /*species 35: C3H6 */
        species[35] =
            -9.235703000000000e+02 * invT
            +2.004560700000000e+01
            -6.732257000000000e+00 * tc[0]
            -7.454170000000000e-03 * tc[1]
            +8.249831666666666e-07 * tc[2]
            -6.010018333333334e-11 * tc[3]
            +1.883102000000000e-15 * tc[4];
        /*species 36: C3H8 */
        species[36] =
            -1.656439400000000e+04 * invT
            +2.536279020000000e+01
            -7.524415200000000e+00 * tc[0]
            -9.449140999999999e-03 * tc[1]
            +1.048684016666667e-06 * tc[2]
            -7.680121416666667e-11 * tc[3]
            +2.434223900000000e-15 * tc[4];
        /*species 37: I-C3H7 */
        species[37] =
            +7.322719300000000e+03 * invT
            +1.560229560000000e+01
            -6.519274100000000e+00 * tc[0]
            -8.610052000000000e-03 * tc[1]
            +9.560702833333334e-07 * tc[2]
            -7.010894333333333e-11 * tc[3]
            +2.228295650000000e-15 * tc[4];
        /*species 38: N-C3H7 */
        species[38] =
            +7.976223600000000e+03 * invT
            +2.322504490000000e+01
            -7.709747900000000e+00 * tc[0]
            -8.015742500000001e-03 * tc[1]
            +8.786706333333332e-07 * tc[2]
            -6.324029333333334e-11 * tc[3]
            +1.943135950000000e-15 * tc[4];
    }
    return;
}


/*compute the a/(RT) at the given temperature */
/*tc contains precomputed powers of T, tc[0] = log(T) */
void helmholtz(double * species, double * tc)
{

    /*temperature */
    double T = tc[1], invT = 1.0 / T;

    /*species with midpoint at T=1000 kelvin */
    if (T < 1000) {
        /*species 0: N2 */
        species[0] =
            -1.02089990e+03 * invT
            -1.65169500e+00
            -3.29867700e+00 * tc[0]
            -7.04120200e-04 * tc[1]
            +6.60537000e-07 * tc[2]
            -4.70126250e-10 * tc[3]
            +1.22242700e-13 * tc[4];
        /*species 1: AR */
        species[1] =
            -7.45375000e+02 * invT
            -2.86600000e+00
            -2.50000000e+00 * tc[0]
            -0.00000000e+00 * tc[1]
            -0.00000000e+00 * tc[2]
            -0.00000000e+00 * tc[3]
            -0.00000000e+00 * tc[4];
        /*species 2: H */
        species[2] =
            +2.54736599e+04 * invT
            +1.94668285e+00
            -2.50000000e+00 * tc[0]
            -3.52666409e-13 * tc[1]
            +3.32653273e-16 * tc[2]
            -1.91734693e-19 * tc[3]
            +4.63866166e-23 * tc[4];
        /*species 3: O2 */
        species[3] =
            -1.06394356e+03 * invT
            -8.75219370e-01
            -3.78245636e+00 * tc[0]
            +1.49836708e-03 * tc[1]
            -1.64121700e-06 * tc[2]
            +8.06774591e-10 * tc[3]
            -1.62186418e-13 * tc[4];
        /*species 4: OH */
        species[4] =
            +3.38153812e+03 * invT
            +3.81573857e+00
            -4.12530561e+00 * tc[0]
            +1.61272470e-03 * tc[1]
            -1.08794115e-06 * tc[2]
            +4.83211369e-10 * tc[3]
            -1.03118689e-13 * tc[4];
        /*species 5: O */
        species[5] =
            +2.91222592e+04 * invT
            +1.16333640e-01
            -3.16826710e+00 * tc[0]
            +1.63965942e-03 * tc[1]
            -1.10717733e-06 * tc[2]
            +5.10672187e-10 * tc[3]
            -1.05632985e-13 * tc[4];
        /*species 6: H2 */
        species[6] =
            -9.17935173e+02 * invT
            +6.61320882e-01
            -2.34433112e+00 * tc[0]
            -3.99026037e-03 * tc[1]
            +3.24635850e-06 * tc[2]
            -1.67976745e-09 * tc[3]
            +3.68805881e-13 * tc[4];
        /*species 7: H2O */
        species[7] =
            -3.02937267e+04 * invT
            +4.04767277e+00
            -4.19864056e+00 * tc[0]
            +1.01821705e-03 * tc[1]
            -1.08673369e-06 * tc[2]
            +4.57330885e-10 * tc[3]
            -8.85989085e-14 * tc[4];
        /*species 8: HO2 */
        species[8] =
            +2.94808040e+02 * invT
            -4.14864440e-01
            -4.30179801e+00 * tc[0]
            +2.37456025e-03 * tc[1]
            -3.52638152e-06 * tc[2]
            +2.02303245e-09 * tc[3]
            -4.64612562e-13 * tc[4];
        /*species 9: H2O2 */
        species[9] =
            -1.77025821e+04 * invT
            -1.58938050e-01
            -4.27611269e+00 * tc[0]
            +2.71411208e-04 * tc[1]
            -2.78892835e-06 * tc[2]
            +1.79809011e-09 * tc[3]
            -4.31227182e-13 * tc[4];
        /*species 10: CO */
        species[10] =
            -1.43440860e+04 * invT
            -9.28875810e-01
            -3.57953347e+00 * tc[0]
            +3.05176840e-04 * tc[1]
            -1.69469055e-07 * tc[2]
            -7.55838237e-11 * tc[3]
            +4.52212249e-14 * tc[4];
        /*species 11: CO2 */
        species[11] =
            -4.83719697e+04 * invT
            -8.54427870e+00
            -2.35677352e+00 * tc[0]
            -4.49229839e-03 * tc[1]
            +1.18726045e-06 * tc[2]
            -2.04932518e-10 * tc[3]
            +7.18497740e-15 * tc[4];
        /*species 12: HCO */
        species[12] =
            +3.83956496e+03 * invT
            -1.73186590e-01
            -4.22118584e+00 * tc[0]
            +1.62196266e-03 * tc[1]
            -2.29665743e-06 * tc[2]
            +1.10953411e-09 * tc[3]
            -2.16884432e-13 * tc[4];
        /*species 13: CH2O */
        species[13] =
            -1.43089567e+04 * invT
            +3.19091025e+00
            -4.79372315e+00 * tc[0]
            +4.95416684e-03 * tc[1]
            -6.22033347e-06 * tc[2]
            +3.16071051e-09 * tc[3]
            -6.58863260e-13 * tc[4];
        /*species 14: CH4 */
        species[14] =
            -1.02466476e+04 * invT
            +8.79117989e+00
            -5.14987613e+00 * tc[0]
            +6.83548940e-03 * tc[1]
            -8.19667665e-06 * tc[2]
            +4.03952522e-09 * tc[3]
            -8.33469780e-13 * tc[4];
        /*species 15: CH3 */
        species[15] =
            +1.64449988e+04 * invT
            +1.06902607e+00
            -3.67359040e+00 * tc[0]
            -1.00547588e-03 * tc[1]
            -9.55036427e-07 * tc[2]
            +5.72597854e-10 * tc[3]
            -1.27192867e-13 * tc[4];
        /*species 16: T-CH2 */
        species[16] =
            +4.60040401e+04 * invT
            +1.20014682e+00
            -3.76267867e+00 * tc[0]
            -4.84436072e-04 * tc[1]
            -4.65816402e-07 * tc[2]
            +3.20909294e-10 * tc[3]
            -8.43708595e-14 * tc[4];
        /*species 17: S-CH2 */
        species[17] =
            +5.04968163e+04 * invT
            +3.96772308e+00
            -4.19860411e+00 * tc[0]
            +1.18330710e-03 * tc[1]
            -1.37216037e-06 * tc[2]
            +5.57346651e-10 * tc[3]
            -9.71573685e-14 * tc[4];
        /*species 18: C2H4 */
        species[18] =
            +5.08977593e+03 * invT
            -1.13812948e+00
            -3.95920148e+00 * tc[0]
            +3.78526124e-03 * tc[1]
            -9.51650487e-06 * tc[2]
            +5.76323961e-09 * tc[3]
            -1.34942187e-12 * tc[4];
        /*species 19: CH3O */
        species[19] =
            +1.30772484e+03 * invT
            -3.86060362e+00
            -3.71180502e+00 * tc[0]
            +1.40231653e-03 * tc[1]
            -6.27584952e-06 * tc[2]
            +3.94226741e-09 * tc[3]
            -9.32942100e-13 * tc[4];
        /*species 20: C2H5 */
        species[20] =
            +1.28416265e+04 * invT
            -1.40074356e+00
            -4.30646568e+00 * tc[0]
            +2.09329446e-03 * tc[1]
            -8.28571345e-06 * tc[2]
            +4.99272172e-09 * tc[3]
            -1.15254502e-12 * tc[4];
        /*species 21: C2H6 */
        species[21] =
            -1.15222055e+04 * invT
            +6.24601760e-01
            -4.29142492e+00 * tc[0]
            +2.75077135e-03 * tc[1]
            -9.99063813e-06 * tc[2]
            +5.90388571e-09 * tc[3]
            -1.34342886e-12 * tc[4];
        /*species 22: CH */
        species[22] =
            +7.07972934e+04 * invT
            +4.05805570e-01
            -3.48981665e+00 * tc[0]
            -1.61917771e-04 * tc[1]
            +2.81498442e-07 * tc[2]
            -2.63514439e-10 * tc[3]
            +7.03045335e-14 * tc[4];
        /*species 23: C2H2 */
        species[23] =
            +2.64289807e+04 * invT
            -1.41310240e+01
            -8.08681094e-01 * tc[0]
            -1.16807815e-02 * tc[1]
            +5.91953025e-06 * tc[2]
            -2.33460364e-09 * tc[3]
            +4.25036487e-13 * tc[4];
        /*species 24: C2H3 */
        species[24] =
            +3.48598468e+04 * invT
            -6.29807380e+00
            -3.21246645e+00 * tc[0]
            -7.57395810e-04 * tc[1]
            -4.32015687e-06 * tc[2]
            +2.98048206e-09 * tc[3]
            -7.35754365e-13 * tc[4];
        /*species 25: CH2CHO */
        species[25] =
            +3.80428530e+02 * invT
            -1.93431519e+01
            -1.01340010e+00 * tc[0]
            -1.13407335e-02 * tc[1]
            +2.62232400e-06 * tc[2]
            -3.37429192e-10 * tc[3]
            -1.47995060e-14 * tc[4];
        /*species 26: C2H4O */
        species[26] =
            -2.15728780e+04 * invT
            -3.73556400e-01
            -4.72945950e+00 * tc[0]
            +1.59664290e-03 * tc[1]
            -7.92248683e-06 * tc[2]
            +4.78821758e-09 * tc[3]
            -1.09655560e-12 * tc[4];
        /*species 27: CH2CO */
        species[27] =
            -7.04291804e+03 * invT
            -1.10798117e+01
            -2.13583630e+00 * tc[0]
            -9.05943605e-03 * tc[1]
            +2.89912457e-06 * tc[2]
            -7.78664640e-10 * tc[3]
            +1.00728807e-13 * tc[4];
        /*species 28: HCCO */
        species[28] =
            +2.00594490e+04 * invT
            -1.12386956e+01
            -2.25172140e+00 * tc[0]
            -8.82751050e-03 * tc[1]
            +3.95485017e-06 * tc[2]
            -1.43964658e-09 * tc[3]
            +2.53324055e-13 * tc[4];
        /*species 29: C2H */
        species[29] =
            +6.68393932e+04 * invT
            -4.33330705e+00
            -2.88965733e+00 * tc[0]
            -6.70498055e-03 * tc[1]
            +4.74615835e-06 * tc[2]
            -2.45659204e-09 * tc[3]
            +5.46657555e-13 * tc[4];
        /*species 30: CH2OH */
        species[30] =
            -3.52476728e+03 * invT
            +1.69203330e-01
            -4.47832317e+00 * tc[0]
            +6.75348435e-04 * tc[1]
            -4.64139512e-06 * tc[2]
            +3.04056164e-09 * tc[3]
            -7.39533875e-13 * tc[4];
        /*species 31: CH3OH */
        species[31] =
            -2.56427656e+04 * invT
            +6.21949405e+00
            -5.71539582e+00 * tc[0]
            +7.61545645e-03 * tc[1]
            -1.08740193e-05 * tc[2]
            +5.92339074e-09 * tc[3]
            -1.30676349e-12 * tc[4];
        /*species 32: C3H4 */
        species[32] =
            +2.15415670e+04 * invT
            -8.61309450e+00
            -2.61304450e+00 * tc[0]
            -6.06128750e-03 * tc[1]
            -3.08998000e-06 * tc[2]
            +2.87709575e-09 * tc[3]
            -7.66753950e-13 * tc[4];
        /*species 33: C3H3 */
        species[33] =
            +4.01057783e+04 * invT
            -1.48547831e+01
            -1.35110927e+00 * tc[0]
            -1.63705612e-02 * tc[1]
            +7.89711892e-06 * tc[2]
            -3.13591507e-09 * tc[3]
            +5.92704615e-13 * tc[4];
        /*species 34: C3H5 */
        species[34] =
            +1.92456290e+04 * invT
            -1.68100305e+01
            -1.36318350e+00 * tc[0]
            -9.90691050e-03 * tc[1]
            -2.08284333e-06 * tc[2]
            +2.77962958e-09 * tc[3]
            -7.92328550e-13 * tc[4];
        /*species 35: C3H6 */
        species[35] =
            +1.07482600e+03 * invT
            -1.56520330e+01
            -1.49330700e+00 * tc[0]
            -1.04625900e-02 * tc[1]
            -7.47799000e-07 * tc[2]
            +1.39076000e-09 * tc[3]
            -3.57907300e-13 * tc[4];
        /*species 36: C3H8 */
        species[36] =
            -1.40579070e+04 * invT
            -1.92970271e+01
            -9.28510930e-01 * tc[0]
            -1.32302830e-02 * tc[1]
            -1.00554077e-06 * tc[2]
            +1.82624608e-09 * tc[3]
            -4.74807720e-13 * tc[4];
        /*species 37: I-C3H7 */
        species[37] =
            +9.42237240e+03 * invT
            -1.96713971e+01
            -1.44491990e+00 * tc[0]
            -1.04995560e-02 * tc[1]
            -1.28393703e-06 * tc[2]
            +1.53968775e-09 * tc[3]
            -3.56414810e-13 * tc[4];
        /*species 38: N-C3H7 */
        species[38] =
            +1.03123460e+04 * invT
            -2.10869167e+01
            -1.04911730e+00 * tc[0]
            -1.30044865e-02 * tc[1]
            -3.92375267e-07 * tc[2]
            +1.63292767e-09 * tc[3]
            -4.68601035e-13 * tc[4];
    } else {
        /*species 0: N2 */
        species[0] =
            -9.22797700e+02 * invT
            -4.05388800e+00
            -2.92664000e+00 * tc[0]
            -7.43988400e-04 * tc[1]
            +9.47460000e-08 * tc[2]
            -8.41419833e-12 * tc[3]
            +3.37667550e-16 * tc[4];
        /*species 1: AR */
        species[1] =
            -7.45375000e+02 * invT
            -2.86600000e+00
            -2.50000000e+00 * tc[0]
            -0.00000000e+00 * tc[1]
            -0.00000000e+00 * tc[2]
            -0.00000000e+00 * tc[3]
            -0.00000000e+00 * tc[4];
        /*species 2: H */
        species[2] =
            +2.54736599e+04 * invT
            +1.94668292e+00
            -2.50000001e+00 * tc[0]
            +1.15421486e-11 * tc[1]
            -2.69269913e-15 * tc[2]
            +3.94596029e-19 * tc[3]
            -2.49098679e-23 * tc[4];
        /*species 3: O2 */
        species[3] =
            -1.08845772e+03 * invT
            -3.17069345e+00
            -3.28253784e+00 * tc[0]
            -7.41543770e-04 * tc[1]
            +1.26327778e-07 * tc[2]
            -1.74558796e-11 * tc[3]
            +1.08358897e-15 * tc[4];
        /*species 4: OH */
        species[4] =
            +3.71885774e+03 * invT
            -3.83691187e+00
            -2.86472886e+00 * tc[0]
            -5.28252240e-04 * tc[1]
            +4.31804597e-08 * tc[2]
            -2.54348895e-12 * tc[3]
            +6.65979380e-17 * tc[4];
        /*species 5: O */
        species[5] =
            +2.92175791e+04 * invT
            -3.21491786e+00
            -2.56942078e+00 * tc[0]
            +4.29870569e-05 * tc[1]
            -6.99140982e-09 * tc[2]
            +8.34814992e-13 * tc[3]
            -6.14168455e-17 * tc[4];
        /*species 6: H2 */
        species[6] =
            -9.50158922e+02 * invT
            +5.54230251e+00
            -3.33727920e+00 * tc[0]
            +2.47012365e-05 * tc[1]
            -8.32427963e-08 * tc[2]
            +1.49638662e-11 * tc[3]
            -1.00127688e-15 * tc[4];
        /*species 7: H2O */
        species[7] =
            -3.00042971e+04 * invT
            -2.93277761e+00
            -3.03399249e+00 * tc[0]
            -1.08845902e-03 * tc[1]
            +2.73454197e-08 * tc[2]
            +8.08683225e-12 * tc[3]
            -8.41004960e-16 * tc[4];
        /*species 8: HO2 */
        species[8] =
            +1.11856713e+02 * invT
            -7.67891250e-01
            -4.01721090e+00 * tc[0]
            -1.11991006e-03 * tc[1]
            +1.05609692e-07 * tc[2]
            -9.52053083e-12 * tc[3]
            +5.39542675e-16 * tc[4];
        /*species 9: H2O2 */
        species[9] =
            -1.78617877e+04 * invT
            +2.48846230e-01
            -4.16500285e+00 * tc[0]
            -2.45415847e-03 * tc[1]
            +3.16898708e-07 * tc[2]
            -3.09321655e-11 * tc[3]
            +1.43954153e-15 * tc[4];
        /*species 10: CO */
        species[10] =
            -1.41518724e+04 * invT
            -6.10350211e+00
            -2.71518561e+00 * tc[0]
            -1.03126372e-03 * tc[1]
            +1.66470962e-07 * tc[2]
            -1.91710840e-11 * tc[3]
            +1.01823858e-15 * tc[4];
        /*species 11: CO2 */
        species[11] =
            -4.87591660e+04 * invT
            +5.85822230e-01
            -3.85746029e+00 * tc[0]
            -2.20718513e-03 * tc[1]
            +3.69135673e-07 * tc[2]
            -4.36241823e-11 * tc[3]
            +2.36042082e-15 * tc[4];
        /*species 12: HCO */
        species[12] =
            +4.01191815e+03 * invT
            -8.02617054e+00
            -2.77217438e+00 * tc[0]
            -2.47847763e-03 * tc[1]
            +4.14076022e-07 * tc[2]
            -4.90968148e-11 * tc[3]
            +2.66754356e-15 * tc[4];
        /*species 13: CH2O */
        species[13] =
            -1.39958323e+04 * invT
            -1.28956329e+01
            -1.76069008e+00 * tc[0]
            -4.60000041e-03 * tc[1]
            +7.37098022e-07 * tc[2]
            -8.38676767e-11 * tc[3]
            +4.41927820e-15 * tc[4];
        /*species 14: CH4 */
        species[14] =
            -9.46834459e+03 * invT
            -1.93624665e+01
            -7.48514950e-02 * tc[0]
            -6.69547335e-03 * tc[1]
            +9.55476348e-07 * tc[2]
            -1.01910446e-10 * tc[3]
            +5.09076150e-15 * tc[4];
        /*species 15: CH3 */
        species[15] =
            +1.67755843e+04 * invT
            -7.19435407e+00
            -2.28571772e+00 * tc[0]
            -3.61995018e-03 * tc[1]
            +4.97857247e-07 * tc[2]
            -4.96403870e-11 * tc[3]
            +2.33577197e-15 * tc[4];
        /*species 16: T-CH2 */
        species[16] =
            +4.62636040e+04 * invT
            -4.29709211e+00
            -2.87410113e+00 * tc[0]
            -1.82819646e-03 * tc[1]
            +2.34824328e-07 * tc[2]
            -2.16816291e-11 * tc[3]
            +9.38637835e-16 * tc[4];
        /*species 17: S-CH2 */
        species[17] =
            +5.09259997e+04 * invT
            -7.33446327e+00
            -2.29203842e+00 * tc[0]
            -2.32794318e-03 * tc[1]
            +3.35319912e-07 * tc[2]
            -3.48255000e-11 * tc[3]
            +1.69858182e-15 * tc[4];
        /*species 18: C2H4 */
        species[18] =
            +4.93988614e+03 * invT
            -9.26925814e+00
            -2.03611116e+00 * tc[0]
            -7.32270755e-03 * tc[1]
            +1.11846319e-06 * tc[2]
            -1.22685769e-10 * tc[3]
            +6.28530305e-15 * tc[4];
        /*species 19: CH3O */
        species[19] =
            +3.90139164e+02 * invT
            +5.72459266e+00
            -4.75779238e+00 * tc[0]
            -3.72071237e-03 * tc[1]
            +4.49508627e-07 * tc[2]
            -3.65075420e-11 * tc[3]
            +1.31768549e-15 * tc[4];
        /*species 20: C2H5 */
        species[20] =
            +1.28575200e+04 * invT
            -1.25077779e+01
            -1.95465642e+00 * tc[0]
            -8.69863610e-03 * tc[1]
            +1.33034445e-06 * tc[2]
            -1.46014741e-10 * tc[3]
            +7.48207880e-15 * tc[4];
        /*species 21: C2H6 */
        species[21] =
            -1.14263932e+04 * invT
            -1.50437292e+01
            -1.07188150e+00 * tc[0]
            -1.08426339e-02 * tc[1]
            +1.67093445e-06 * tc[2]
            -1.84510001e-10 * tc[3]
            +9.50014450e-15 * tc[4];
        /*species 22: CH */
        species[22] =
            +7.10124364e+04 * invT
            -3.60651526e+00
            -2.87846473e+00 * tc[0]
            -4.85456840e-04 * tc[1]
            -2.40742758e-08 * tc[2]
            +1.08906541e-11 * tc[3]
            -8.80396915e-16 * tc[4];
        /*species 23: C2H2 */
        species[23] =
            +2.59359992e+04 * invT
            +4.37785085e+00
            -4.14756964e+00 * tc[0]
            -2.98083332e-03 * tc[1]
            +3.95491420e-07 * tc[2]
            -3.89510143e-11 * tc[3]
            +1.80617607e-15 * tc[4];
        /*species 24: C2H3 */
        species[24] =
            +3.46128739e+04 * invT
            -5.77059978e+00
            -3.01672400e+00 * tc[0]
            -5.16511460e-03 * tc[1]
            +7.80137248e-07 * tc[2]
            -8.48027400e-11 * tc[3]
            +4.31303520e-15 * tc[4];
        /*species 25: CH2CHO */
        species[25] =
            -7.31993470e+02 * invT
            +6.12953670e+00
            -5.16620060e+00 * tc[0]
            -5.42391300e-03 * tc[1]
            +7.44306133e-07 * tc[2]
            -6.71904567e-11 * tc[3]
            +2.42050965e-15 * tc[4];
        /*species 26: C2H4O */
        species[26] =
            -2.25931220e+04 * invT
            +7.88490250e+00
            -5.40411080e+00 * tc[0]
            -5.86152950e-03 * tc[1]
            +7.04385617e-07 * tc[2]
            -5.69770425e-11 * tc[3]
            +2.04924315e-15 * tc[4];
        /*species 27: CH2CO */
        species[27] =
            -7.55105311e+03 * invT
            +2.87905011e+00
            -4.51129732e+00 * tc[0]
            -4.50179872e-03 * tc[1]
            +6.94899392e-07 * tc[2]
            -7.69454902e-11 * tc[3]
            +3.97419100e-15 * tc[4];
        /*species 28: HCCO */
        species[28] =
            +1.93272150e+04 * invT
            +8.55846530e+00
            -5.62820580e+00 * tc[0]
            -2.04267005e-03 * tc[1]
            +2.65575783e-07 * tc[2]
            -2.38550433e-11 * tc[3]
            +9.70391600e-16 * tc[4];
        /*species 29: C2H */
        species[29] =
            +6.71210650e+04 * invT
            -4.46808823e+00
            -3.16780652e+00 * tc[0]
            -2.37610951e-03 * tc[1]
            +3.06311795e-07 * tc[2]
            -2.53491877e-11 * tc[3]
            +8.86163850e-16 * tc[4];
        /*species 30: CH2OH */
        species[30] =
            -4.05813228e+03 * invT
            +5.94002650e+00
            -5.09312037e+00 * tc[0]
            -2.97379275e-03 * tc[1]
            +3.44160873e-07 * tc[2]
            -2.69172253e-11 * tc[3]
            +9.40625260e-16 * tc[4];
        /*species 31: CH3OH */
        species[31] =
            -2.53748747e+04 * invT
            -1.37126544e+01
            -1.78970791e+00 * tc[0]
            -7.04691460e-03 * tc[1]
            +1.06083472e-06 * tc[2]
            -1.15142571e-10 * tc[3]
            +5.85301100e-15 * tc[4];
        /*species 32: C3H4 */
        species[32] =
            +2.01174950e+04 * invT
            +1.63126382e+01
            -6.31687220e+00 * tc[0]
            -5.56686400e-03 * tc[1]
            +6.60489633e-07 * tc[2]
            -5.29701983e-11 * tc[3]
            +1.89377700e-15 * tc[4];
        /*species 33: C3H3 */
        species[33] =
            +3.89087427e+04 * invT
            +1.87270624e+01
            -7.14221880e+00 * tc[0]
            -3.80951002e-03 * tc[1]
            +4.45766583e-07 * tc[2]
            -3.54095668e-11 * tc[3]
            +1.25737708e-15 * tc[4];
        /*species 34: C3H5 */
        species[34] =
            +1.74824490e+04 * invT
            +1.67438377e+01
            -6.50078770e+00 * tc[0]
            -7.16236550e-03 * tc[1]
            +9.46360533e-07 * tc[2]
            -9.23400083e-11 * tc[3]
            +4.51819435e-15 * tc[4];
        /*species 35: C3H6 */
        species[35] =
            -9.23570300e+02 * invT
            +1.90456070e+01
            -6.73225700e+00 * tc[0]
            -7.45417000e-03 * tc[1]
            +8.24983167e-07 * tc[2]
            -6.01001833e-11 * tc[3]
            +1.88310200e-15 * tc[4];
        /*species 36: C3H8 */
        species[36] =
            -1.65643940e+04 * invT
            +2.43627902e+01
            -7.52441520e+00 * tc[0]
            -9.44914100e-03 * tc[1]
            +1.04868402e-06 * tc[2]
            -7.68012142e-11 * tc[3]
            +2.43422390e-15 * tc[4];
        /*species 37: I-C3H7 */
        species[37] =
            +7.32271930e+03 * invT
            +1.46022956e+01
            -6.51927410e+00 * tc[0]
            -8.61005200e-03 * tc[1]
            +9.56070283e-07 * tc[2]
            -7.01089433e-11 * tc[3]
            +2.22829565e-15 * tc[4];
        /*species 38: N-C3H7 */
        species[38] =
            +7.97622360e+03 * invT
            +2.22250449e+01
            -7.70974790e+00 * tc[0]
            -8.01574250e-03 * tc[1]
            +8.78670633e-07 * tc[2]
            -6.32402933e-11 * tc[3]
            +1.94313595e-15 * tc[4];
    }
    return;
}


/*compute Cv/R at the given temperature */
/*tc contains precomputed powers of T, tc[0] = log(T) */
void cv_R(double * species, double * tc)
{

    /*temperature */
    double T = tc[1], invT = 1.0 / T;

    /*species with midpoint at T=1000 kelvin */
    if (T < 1000) {
        /*species 0: N2 */
        species[0] =
            +2.29867700e+00
            +1.40824040e-03 * tc[1]
            -3.96322200e-06 * tc[2]
            +5.64151500e-09 * tc[3]
            -2.44485400e-12 * tc[4];
        /*species 1: AR */
        species[1] =
            +1.50000000e+00
            +0.00000000e+00 * tc[1]
            +0.00000000e+00 * tc[2]
            +0.00000000e+00 * tc[3]
            +0.00000000e+00 * tc[4];
        /*species 2: H */
        species[2] =
            +1.50000000e+00
            +7.05332819e-13 * tc[1]
            -1.99591964e-15 * tc[2]
            +2.30081632e-18 * tc[3]
            -9.27732332e-22 * tc[4];
        /*species 3: O2 */
        species[3] =
            +2.78245636e+00
            -2.99673416e-03 * tc[1]
            +9.84730201e-06 * tc[2]
            -9.68129509e-09 * tc[3]
            +3.24372837e-12 * tc[4];
        /*species 4: OH */
        species[4] =
            +3.12530561e+00
            -3.22544939e-03 * tc[1]
            +6.52764691e-06 * tc[2]
            -5.79853643e-09 * tc[3]
            +2.06237379e-12 * tc[4];
        /*species 5: O */
        species[5] =
            +2.16826710e+00
            -3.27931884e-03 * tc[1]
            +6.64306396e-06 * tc[2]
            -6.12806624e-09 * tc[3]
            +2.11265971e-12 * tc[4];
        /*species 6: H2 */
        species[6] =
            +1.34433112e+00
            +7.98052075e-03 * tc[1]
            -1.94781510e-05 * tc[2]
            +2.01572094e-08 * tc[3]
            -7.37611761e-12 * tc[4];
        /*species 7: H2O */
        species[7] =
            +3.19864056e+00
            -2.03643410e-03 * tc[1]
            +6.52040211e-06 * tc[2]
            -5.48797062e-09 * tc[3]
            +1.77197817e-12 * tc[4];
        /*species 8: HO2 */
        species[8] =
            +3.30179801e+00
            -4.74912051e-03 * tc[1]
            +2.11582891e-05 * tc[2]
            -2.42763894e-08 * tc[3]
            +9.29225124e-12 * tc[4];
        /*species 9: H2O2 */
        species[9] =
            +3.27611269e+00
            -5.42822417e-04 * tc[1]
            +1.67335701e-05 * tc[2]
            -2.15770813e-08 * tc[3]
            +8.62454363e-12 * tc[4];
        /*species 10: CO */
        species[10] =
            +2.57953347e+00
            -6.10353680e-04 * tc[1]
            +1.01681433e-06 * tc[2]
            +9.07005884e-10 * tc[3]
            -9.04424499e-13 * tc[4];
        /*species 11: CO2 */
        species[11] =
            +1.35677352e+00
            +8.98459677e-03 * tc[1]
            -7.12356269e-06 * tc[2]
            +2.45919022e-09 * tc[3]
            -1.43699548e-13 * tc[4];
        /*species 12: HCO */
        species[12] =
            +3.22118584e+00
            -3.24392532e-03 * tc[1]
            +1.37799446e-05 * tc[2]
            -1.33144093e-08 * tc[3]
            +4.33768865e-12 * tc[4];
        /*species 13: CH2O */
        species[13] =
            +3.79372315e+00
            -9.90833369e-03 * tc[1]
            +3.73220008e-05 * tc[2]
            -3.79285261e-08 * tc[3]
            +1.31772652e-11 * tc[4];
        /*species 14: CH4 */
        species[14] =
            +4.14987613e+00
            -1.36709788e-02 * tc[1]
            +4.91800599e-05 * tc[2]
            -4.84743026e-08 * tc[3]
            +1.66693956e-11 * tc[4];
        /*species 15: CH3 */
        species[15] =
            +2.67359040e+00
            +2.01095175e-03 * tc[1]
            +5.73021856e-06 * tc[2]
            -6.87117425e-09 * tc[3]
            +2.54385734e-12 * tc[4];
        /*species 16: T-CH2 */
        species[16] =
            +2.76267867e+00
            +9.68872143e-04 * tc[1]
            +2.79489841e-06 * tc[2]
            -3.85091153e-09 * tc[3]
            +1.68741719e-12 * tc[4];
        /*species 17: S-CH2 */
        species[17] =
            +3.19860411e+00
            -2.36661419e-03 * tc[1]
            +8.23296220e-06 * tc[2]
            -6.68815981e-09 * tc[3]
            +1.94314737e-12 * tc[4];
        /*species 18: C2H4 */
        species[18] =
            +2.95920148e+00
            -7.57052247e-03 * tc[1]
            +5.70990292e-05 * tc[2]
            -6.91588753e-08 * tc[3]
            +2.69884373e-11 * tc[4];
        /*species 19: CH3O */
        species[19] =
            +2.71180502e+00
            -2.80463306e-03 * tc[1]
            +3.76550971e-05 * tc[2]
            -4.73072089e-08 * tc[3]
            +1.86588420e-11 * tc[4];
        /*species 20: C2H5 */
        species[20] =
            +3.30646568e+00
            -4.18658892e-03 * tc[1]
            +4.97142807e-05 * tc[2]
            -5.99126606e-08 * tc[3]
            +2.30509004e-11 * tc[4];
        /*species 21: C2H6 */
        species[21] =
            +3.29142492e+00
            -5.50154270e-03 * tc[1]
            +5.99438288e-05 * tc[2]
            -7.08466285e-08 * tc[3]
            +2.68685771e-11 * tc[4];
        /*species 22: CH */
        species[22] =
            +2.48981665e+00
            +3.23835541e-04 * tc[1]
            -1.68899065e-06 * tc[2]
            +3.16217327e-09 * tc[3]
            -1.40609067e-12 * tc[4];
        /*species 23: C2H2 */
        species[23] =
            -1.91318906e-01
            +2.33615629e-02 * tc[1]
            -3.55171815e-05 * tc[2]
            +2.80152437e-08 * tc[3]
            -8.50072974e-12 * tc[4];
        /*species 24: C2H3 */
        species[24] =
            +2.21246645e+00
            +1.51479162e-03 * tc[1]
            +2.59209412e-05 * tc[2]
            -3.57657847e-08 * tc[3]
            +1.47150873e-11 * tc[4];
        /*species 25: CH2CHO */
        species[25] =
            +1.34001000e-02
            +2.26814670e-02 * tc[1]
            -1.57339440e-05 * tc[2]
            +4.04915030e-09 * tc[3]
            +2.95990120e-13 * tc[4];
        /*species 26: C2H4O */
        species[26] =
            +3.72945950e+00
            -3.19328580e-03 * tc[1]
            +4.75349210e-05 * tc[2]
            -5.74586110e-08 * tc[3]
            +2.19311120e-11 * tc[4];
        /*species 27: CH2CO */
        species[27] =
            +1.13583630e+00
            +1.81188721e-02 * tc[1]
            -1.73947474e-05 * tc[2]
            +9.34397568e-09 * tc[3]
            -2.01457615e-12 * tc[4];
        /*species 28: HCCO */
        species[28] =
            +1.25172140e+00
            +1.76550210e-02 * tc[1]
            -2.37291010e-05 * tc[2]
            +1.72757590e-08 * tc[3]
            -5.06648110e-12 * tc[4];
        /*species 29: C2H */
        species[29] =
            +1.88965733e+00
            +1.34099611e-02 * tc[1]
            -2.84769501e-05 * tc[2]
            +2.94791045e-08 * tc[3]
            -1.09331511e-11 * tc[4];
        /*species 30: CH2OH */
        species[30] =
            +3.47832317e+00
            -1.35069687e-03 * tc[1]
            +2.78483707e-05 * tc[2]
            -3.64867397e-08 * tc[3]
            +1.47906775e-11 * tc[4];
        /*species 31: CH3OH */
        species[31] =
            +4.71539582e+00
            -1.52309129e-02 * tc[1]
            +6.52441155e-05 * tc[2]
            -7.10806889e-08 * tc[3]
            +2.61352698e-11 * tc[4];
        /*species 32: C3H4 */
        species[32] =
            +1.61304450e+00
            +1.21225750e-02 * tc[1]
            +1.85398800e-05 * tc[2]
            -3.45251490e-08 * tc[3]
            +1.53350790e-11 * tc[4];
        /*species 33: C3H3 */
        species[33] =
            +3.51109270e-01
            +3.27411223e-02 * tc[1]
            -4.73827135e-05 * tc[2]
            +3.76309808e-08 * tc[3]
            -1.18540923e-11 * tc[4];
        /*species 34: C3H5 */
        species[34] =
            +3.63183500e-01
            +1.98138210e-02 * tc[1]
            +1.24970600e-05 * tc[2]
            -3.33555550e-08 * tc[3]
            +1.58465710e-11 * tc[4];
        /*species 35: C3H6 */
        species[35] =
            +4.93307000e-01
            +2.09251800e-02 * tc[1]
            +4.48679400e-06 * tc[2]
            -1.66891200e-08 * tc[3]
            +7.15814600e-12 * tc[4];
        /*species 36: C3H8 */
        species[36] =
            -7.14890700e-02
            +2.64605660e-02 * tc[1]
            +6.03324460e-06 * tc[2]
            -2.19149530e-08 * tc[3]
            +9.49615440e-12 * tc[4];
        /*species 37: I-C3H7 */
        species[37] =
            +4.44919900e-01
            +2.09991120e-02 * tc[1]
            +7.70362220e-06 * tc[2]
            -1.84762530e-08 * tc[3]
            +7.12829620e-12 * tc[4];
        /*species 38: N-C3H7 */
        species[38] =
            +4.91173000e-02
            +2.60089730e-02 * tc[1]
            +2.35425160e-06 * tc[2]
            -1.95951320e-08 * tc[3]
            +9.37202070e-12 * tc[4];
    } else {
        /*species 0: N2 */
        species[0] =
            +1.92664000e+00
            +1.48797680e-03 * tc[1]
            -5.68476000e-07 * tc[2]
            +1.00970380e-10 * tc[3]
            -6.75335100e-15 * tc[4];
        /*species 1: AR */
        species[1] =
            +1.50000000e+00
            +0.00000000e+00 * tc[1]
            +0.00000000e+00 * tc[2]
            +0.00000000e+00 * tc[3]
            +0.00000000e+00 * tc[4];
        /*species 2: H */
        species[2] =
            +1.50000001e+00
            -2.30842973e-11 * tc[1]
            +1.61561948e-14 * tc[2]
            -4.73515235e-18 * tc[3]
            +4.98197357e-22 * tc[4];
        /*species 3: O2 */
        species[3] =
            +2.28253784e+00
            +1.48308754e-03 * tc[1]
            -7.57966669e-07 * tc[2]
            +2.09470555e-10 * tc[3]
            -2.16717794e-14 * tc[4];
        /*species 4: OH */
        species[4] =
            +1.86472886e+00
            +1.05650448e-03 * tc[1]
            -2.59082758e-07 * tc[2]
            +3.05218674e-11 * tc[3]
            -1.33195876e-15 * tc[4];
        /*species 5: O */
        species[5] =
            +1.56942078e+00
            -8.59741137e-05 * tc[1]
            +4.19484589e-08 * tc[2]
            -1.00177799e-11 * tc[3]
            +1.22833691e-15 * tc[4];
        /*species 6: H2 */
        species[6] =
            +2.33727920e+00
            -4.94024731e-05 * tc[1]
            +4.99456778e-07 * tc[2]
            -1.79566394e-10 * tc[3]
            +2.00255376e-14 * tc[4];
        /*species 7: H2O */
        species[7] =
            +2.03399249e+00
            +2.17691804e-03 * tc[1]
            -1.64072518e-07 * tc[2]
            -9.70419870e-11 * tc[3]
            +1.68200992e-14 * tc[4];
        /*species 8: HO2 */
        species[8] =
            +3.01721090e+00
            +2.23982013e-03 * tc[1]
            -6.33658150e-07 * tc[2]
            +1.14246370e-10 * tc[3]
            -1.07908535e-14 * tc[4];
        /*species 9: H2O2 */
        species[9] =
            +3.16500285e+00
            +4.90831694e-03 * tc[1]
            -1.90139225e-06 * tc[2]
            +3.71185986e-10 * tc[3]
            -2.87908305e-14 * tc[4];
        /*species 10: CO */
        species[10] =
            +1.71518561e+00
            +2.06252743e-03 * tc[1]
            -9.98825771e-07 * tc[2]
            +2.30053008e-10 * tc[3]
            -2.03647716e-14 * tc[4];
        /*species 11: CO2 */
        species[11] =
            +2.85746029e+00
            +4.41437026e-03 * tc[1]
            -2.21481404e-06 * tc[2]
            +5.23490188e-10 * tc[3]
            -4.72084164e-14 * tc[4];
        /*species 12: HCO */
        species[12] =
            +1.77217438e+00
            +4.95695526e-03 * tc[1]
            -2.48445613e-06 * tc[2]
            +5.89161778e-10 * tc[3]
            -5.33508711e-14 * tc[4];
        /*species 13: CH2O */
        species[13] =
            +7.60690080e-01
            +9.20000082e-03 * tc[1]
            -4.42258813e-06 * tc[2]
            +1.00641212e-09 * tc[3]
            -8.83855640e-14 * tc[4];
        /*species 14: CH4 */
        species[14] =
            -9.25148505e-01
            +1.33909467e-02 * tc[1]
            -5.73285809e-06 * tc[2]
            +1.22292535e-09 * tc[3]
            -1.01815230e-13 * tc[4];
        /*species 15: CH3 */
        species[15] =
            +1.28571772e+00
            +7.23990037e-03 * tc[1]
            -2.98714348e-06 * tc[2]
            +5.95684644e-10 * tc[3]
            -4.67154394e-14 * tc[4];
        /*species 16: T-CH2 */
        species[16] =
            +1.87410113e+00
            +3.65639292e-03 * tc[1]
            -1.40894597e-06 * tc[2]
            +2.60179549e-10 * tc[3]
            -1.87727567e-14 * tc[4];
        /*species 17: S-CH2 */
        species[17] =
            +1.29203842e+00
            +4.65588637e-03 * tc[1]
            -2.01191947e-06 * tc[2]
            +4.17906000e-10 * tc[3]
            -3.39716365e-14 * tc[4];
        /*species 18: C2H4 */
        species[18] =
            +1.03611116e+00
            +1.46454151e-02 * tc[1]
            -6.71077915e-06 * tc[2]
            +1.47222923e-09 * tc[3]
            -1.25706061e-13 * tc[4];
        /*species 19: CH3O */
        species[19] =
            +3.75779238e+00
            +7.44142474e-03 * tc[1]
            -2.69705176e-06 * tc[2]
            +4.38090504e-10 * tc[3]
            -2.63537098e-14 * tc[4];
        /*species 20: C2H5 */
        species[20] =
            +9.54656420e-01
            +1.73972722e-02 * tc[1]
            -7.98206668e-06 * tc[2]
            +1.75217689e-09 * tc[3]
            -1.49641576e-13 * tc[4];
        /*species 21: C2H6 */
        species[21] =
            +7.18815000e-02
            +2.16852677e-02 * tc[1]
            -1.00256067e-05 * tc[2]
            +2.21412001e-09 * tc[3]
            -1.90002890e-13 * tc[4];
        /*species 22: CH */
        species[22] =
            +1.87846473e+00
            +9.70913681e-04 * tc[1]
            +1.44445655e-07 * tc[2]
            -1.30687849e-10 * tc[3]
            +1.76079383e-14 * tc[4];
        /*species 23: C2H2 */
        species[23] =
            +3.14756964e+00
            +5.96166664e-03 * tc[1]
            -2.37294852e-06 * tc[2]
            +4.67412171e-10 * tc[3]
            -3.61235213e-14 * tc[4];
        /*species 24: C2H3 */
        species[24] =
            +2.01672400e+00
            +1.03302292e-02 * tc[1]
            -4.68082349e-06 * tc[2]
            +1.01763288e-09 * tc[3]
            -8.62607041e-14 * tc[4];
        /*species 25: CH2CHO */
        species[25] =
            +4.16620060e+00
            +1.08478260e-02 * tc[1]
            -4.46583680e-06 * tc[2]
            +8.06285480e-10 * tc[3]
            -4.84101930e-14 * tc[4];
        /*species 26: C2H4O */
        species[26] =
            +4.40411080e+00
            +1.17230590e-02 * tc[1]
            -4.22631370e-06 * tc[2]
            +6.83724510e-10 * tc[3]
            -4.09848630e-14 * tc[4];
        /*species 27: CH2CO */
        species[27] =
            +3.51129732e+00
            +9.00359745e-03 * tc[1]
            -4.16939635e-06 * tc[2]
            +9.23345882e-10 * tc[3]
            -7.94838201e-14 * tc[4];
        /*species 28: HCCO */
        species[28] =
            +4.62820580e+00
            +4.08534010e-03 * tc[1]
            -1.59345470e-06 * tc[2]
            +2.86260520e-10 * tc[3]
            -1.94078320e-14 * tc[4];
        /*species 29: C2H */
        species[29] =
            +2.16780652e+00
            +4.75221902e-03 * tc[1]
            -1.83787077e-06 * tc[2]
            +3.04190252e-10 * tc[3]
            -1.77232770e-14 * tc[4];
        /*species 30: CH2OH */
        species[30] =
            +4.09312037e+00
            +5.94758550e-03 * tc[1]
            -2.06496524e-06 * tc[2]
            +3.23006703e-10 * tc[3]
            -1.88125052e-14 * tc[4];
        /*species 31: CH3OH */
        species[31] =
            +7.89707910e-01
            +1.40938292e-02 * tc[1]
            -6.36500835e-06 * tc[2]
            +1.38171085e-09 * tc[3]
            -1.17060220e-13 * tc[4];
        /*species 32: C3H4 */
        species[32] =
            +5.31687220e+00
            +1.11337280e-02 * tc[1]
            -3.96293780e-06 * tc[2]
            +6.35642380e-10 * tc[3]
            -3.78755400e-14 * tc[4];
        /*species 33: C3H3 */
        species[33] =
            +6.14221880e+00
            +7.61902005e-03 * tc[1]
            -2.67459950e-06 * tc[2]
            +4.24914801e-10 * tc[3]
            -2.51475415e-14 * tc[4];
        /*species 34: C3H5 */
        species[34] =
            +5.50078770e+00
            +1.43247310e-02 * tc[1]
            -5.67816320e-06 * tc[2]
            +1.10808010e-09 * tc[3]
            -9.03638870e-14 * tc[4];
        /*species 35: C3H6 */
        species[35] =
            +5.73225700e+00
            +1.49083400e-02 * tc[1]
            -4.94989900e-06 * tc[2]
            +7.21202200e-10 * tc[3]
            -3.76620400e-14 * tc[4];
        /*species 36: C3H8 */
        species[36] =
            +6.52441520e+00
            +1.88982820e-02 * tc[1]
            -6.29210410e-06 * tc[2]
            +9.21614570e-10 * tc[3]
            -4.86844780e-14 * tc[4];
        /*species 37: I-C3H7 */
        species[37] =
            +5.51927410e+00
            +1.72201040e-02 * tc[1]
            -5.73642170e-06 * tc[2]
            +8.41307320e-10 * tc[3]
            -4.45659130e-14 * tc[4];
        /*species 38: N-C3H7 */
        species[38] =
            +6.70974790e+00
            +1.60314850e-02 * tc[1]
            -5.27202380e-06 * tc[2]
            +7.58883520e-10 * tc[3]
            -3.88627190e-14 * tc[4];
    }
    return;
}


/*compute Cp/R at the given temperature */
/*tc contains precomputed powers of T, tc[0] = log(T) */
void cp_R(double * species, double * tc)
{

    /*temperature */
    double T = tc[1], invT = 1.0 / T;

    /*species with midpoint at T=1000 kelvin */
    if (T < 1000) {
        /*species 0: N2 */
        species[0] =
            +3.29867700e+00
            +1.40824040e-03 * tc[1]
            -3.96322200e-06 * tc[2]
            +5.64151500e-09 * tc[3]
            -2.44485400e-12 * tc[4];
        /*species 1: AR */
        species[1] =
            +2.50000000e+00
            +0.00000000e+00 * tc[1]
            +0.00000000e+00 * tc[2]
            +0.00000000e+00 * tc[3]
            +0.00000000e+00 * tc[4];
        /*species 2: H */
        species[2] =
            +2.50000000e+00
            +7.05332819e-13 * tc[1]
            -1.99591964e-15 * tc[2]
            +2.30081632e-18 * tc[3]
            -9.27732332e-22 * tc[4];
        /*species 3: O2 */
        species[3] =
            +3.78245636e+00
            -2.99673416e-03 * tc[1]
            +9.84730201e-06 * tc[2]
            -9.68129509e-09 * tc[3]
            +3.24372837e-12 * tc[4];
        /*species 4: OH */
        species[4] =
            +4.12530561e+00
            -3.22544939e-03 * tc[1]
            +6.52764691e-06 * tc[2]
            -5.79853643e-09 * tc[3]
            +2.06237379e-12 * tc[4];
        /*species 5: O */
        species[5] =
            +3.16826710e+00
            -3.27931884e-03 * tc[1]
            +6.64306396e-06 * tc[2]
            -6.12806624e-09 * tc[3]
            +2.11265971e-12 * tc[4];
        /*species 6: H2 */
        species[6] =
            +2.34433112e+00
            +7.98052075e-03 * tc[1]
            -1.94781510e-05 * tc[2]
            +2.01572094e-08 * tc[3]
            -7.37611761e-12 * tc[4];
        /*species 7: H2O */
        species[7] =
            +4.19864056e+00
            -2.03643410e-03 * tc[1]
            +6.52040211e-06 * tc[2]
            -5.48797062e-09 * tc[3]
            +1.77197817e-12 * tc[4];
        /*species 8: HO2 */
        species[8] =
            +4.30179801e+00
            -4.74912051e-03 * tc[1]
            +2.11582891e-05 * tc[2]
            -2.42763894e-08 * tc[3]
            +9.29225124e-12 * tc[4];
        /*species 9: H2O2 */
        species[9] =
            +4.27611269e+00
            -5.42822417e-04 * tc[1]
            +1.67335701e-05 * tc[2]
            -2.15770813e-08 * tc[3]
            +8.62454363e-12 * tc[4];
        /*species 10: CO */
        species[10] =
            +3.57953347e+00
            -6.10353680e-04 * tc[1]
            +1.01681433e-06 * tc[2]
            +9.07005884e-10 * tc[3]
            -9.04424499e-13 * tc[4];
        /*species 11: CO2 */
        species[11] =
            +2.35677352e+00
            +8.98459677e-03 * tc[1]
            -7.12356269e-06 * tc[2]
            +2.45919022e-09 * tc[3]
            -1.43699548e-13 * tc[4];
        /*species 12: HCO */
        species[12] =
            +4.22118584e+00
            -3.24392532e-03 * tc[1]
            +1.37799446e-05 * tc[2]
            -1.33144093e-08 * tc[3]
            +4.33768865e-12 * tc[4];
        /*species 13: CH2O */
        species[13] =
            +4.79372315e+00
            -9.90833369e-03 * tc[1]
            +3.73220008e-05 * tc[2]
            -3.79285261e-08 * tc[3]
            +1.31772652e-11 * tc[4];
        /*species 14: CH4 */
        species[14] =
            +5.14987613e+00
            -1.36709788e-02 * tc[1]
            +4.91800599e-05 * tc[2]
            -4.84743026e-08 * tc[3]
            +1.66693956e-11 * tc[4];
        /*species 15: CH3 */
        species[15] =
            +3.67359040e+00
            +2.01095175e-03 * tc[1]
            +5.73021856e-06 * tc[2]
            -6.87117425e-09 * tc[3]
            +2.54385734e-12 * tc[4];
        /*species 16: T-CH2 */
        species[16] =
            +3.76267867e+00
            +9.68872143e-04 * tc[1]
            +2.79489841e-06 * tc[2]
            -3.85091153e-09 * tc[3]
            +1.68741719e-12 * tc[4];
        /*species 17: S-CH2 */
        species[17] =
            +4.19860411e+00
            -2.36661419e-03 * tc[1]
            +8.23296220e-06 * tc[2]
            -6.68815981e-09 * tc[3]
            +1.94314737e-12 * tc[4];
        /*species 18: C2H4 */
        species[18] =
            +3.95920148e+00
            -7.57052247e-03 * tc[1]
            +5.70990292e-05 * tc[2]
            -6.91588753e-08 * tc[3]
            +2.69884373e-11 * tc[4];
        /*species 19: CH3O */
        species[19] =
            +3.71180502e+00
            -2.80463306e-03 * tc[1]
            +3.76550971e-05 * tc[2]
            -4.73072089e-08 * tc[3]
            +1.86588420e-11 * tc[4];
        /*species 20: C2H5 */
        species[20] =
            +4.30646568e+00
            -4.18658892e-03 * tc[1]
            +4.97142807e-05 * tc[2]
            -5.99126606e-08 * tc[3]
            +2.30509004e-11 * tc[4];
        /*species 21: C2H6 */
        species[21] =
            +4.29142492e+00
            -5.50154270e-03 * tc[1]
            +5.99438288e-05 * tc[2]
            -7.08466285e-08 * tc[3]
            +2.68685771e-11 * tc[4];
        /*species 22: CH */
        species[22] =
            +3.48981665e+00
            +3.23835541e-04 * tc[1]
            -1.68899065e-06 * tc[2]
            +3.16217327e-09 * tc[3]
            -1.40609067e-12 * tc[4];
        /*species 23: C2H2 */
        species[23] =
            +8.08681094e-01
            +2.33615629e-02 * tc[1]
            -3.55171815e-05 * tc[2]
            +2.80152437e-08 * tc[3]
            -8.50072974e-12 * tc[4];
        /*species 24: C2H3 */
        species[24] =
            +3.21246645e+00
            +1.51479162e-03 * tc[1]
            +2.59209412e-05 * tc[2]
            -3.57657847e-08 * tc[3]
            +1.47150873e-11 * tc[4];
        /*species 25: CH2CHO */
        species[25] =
            +1.01340010e+00
            +2.26814670e-02 * tc[1]
            -1.57339440e-05 * tc[2]
            +4.04915030e-09 * tc[3]
            +2.95990120e-13 * tc[4];
        /*species 26: C2H4O */
        species[26] =
            +4.72945950e+00
            -3.19328580e-03 * tc[1]
            +4.75349210e-05 * tc[2]
            -5.74586110e-08 * tc[3]
            +2.19311120e-11 * tc[4];
        /*species 27: CH2CO */
        species[27] =
            +2.13583630e+00
            +1.81188721e-02 * tc[1]
            -1.73947474e-05 * tc[2]
            +9.34397568e-09 * tc[3]
            -2.01457615e-12 * tc[4];
        /*species 28: HCCO */
        species[28] =
            +2.25172140e+00
            +1.76550210e-02 * tc[1]
            -2.37291010e-05 * tc[2]
            +1.72757590e-08 * tc[3]
            -5.06648110e-12 * tc[4];
        /*species 29: C2H */
        species[29] =
            +2.88965733e+00
            +1.34099611e-02 * tc[1]
            -2.84769501e-05 * tc[2]
            +2.94791045e-08 * tc[3]
            -1.09331511e-11 * tc[4];
        /*species 30: CH2OH */
        species[30] =
            +4.47832317e+00
            -1.35069687e-03 * tc[1]
            +2.78483707e-05 * tc[2]
            -3.64867397e-08 * tc[3]
            +1.47906775e-11 * tc[4];
        /*species 31: CH3OH */
        species[31] =
            +5.71539582e+00
            -1.52309129e-02 * tc[1]
            +6.52441155e-05 * tc[2]
            -7.10806889e-08 * tc[3]
            +2.61352698e-11 * tc[4];
        /*species 32: C3H4 */
        species[32] =
            +2.61304450e+00
            +1.21225750e-02 * tc[1]
            +1.85398800e-05 * tc[2]
            -3.45251490e-08 * tc[3]
            +1.53350790e-11 * tc[4];
        /*species 33: C3H3 */
        species[33] =
            +1.35110927e+00
            +3.27411223e-02 * tc[1]
            -4.73827135e-05 * tc[2]
            +3.76309808e-08 * tc[3]
            -1.18540923e-11 * tc[4];
        /*species 34: C3H5 */
        species[34] =
            +1.36318350e+00
            +1.98138210e-02 * tc[1]
            +1.24970600e-05 * tc[2]
            -3.33555550e-08 * tc[3]
            +1.58465710e-11 * tc[4];
        /*species 35: C3H6 */
        species[35] =
            +1.49330700e+00
            +2.09251800e-02 * tc[1]
            +4.48679400e-06 * tc[2]
            -1.66891200e-08 * tc[3]
            +7.15814600e-12 * tc[4];
        /*species 36: C3H8 */
        species[36] =
            +9.28510930e-01
            +2.64605660e-02 * tc[1]
            +6.03324460e-06 * tc[2]
            -2.19149530e-08 * tc[3]
            +9.49615440e-12 * tc[4];
        /*species 37: I-C3H7 */
        species[37] =
            +1.44491990e+00
            +2.09991120e-02 * tc[1]
            +7.70362220e-06 * tc[2]
            -1.84762530e-08 * tc[3]
            +7.12829620e-12 * tc[4];
        /*species 38: N-C3H7 */
        species[38] =
            +1.04911730e+00
            +2.60089730e-02 * tc[1]
            +2.35425160e-06 * tc[2]
            -1.95951320e-08 * tc[3]
            +9.37202070e-12 * tc[4];
    } else {
        /*species 0: N2 */
        species[0] =
            +2.92664000e+00
            +1.48797680e-03 * tc[1]
            -5.68476000e-07 * tc[2]
            +1.00970380e-10 * tc[3]
            -6.75335100e-15 * tc[4];
        /*species 1: AR */
        species[1] =
            +2.50000000e+00
            +0.00000000e+00 * tc[1]
            +0.00000000e+00 * tc[2]
            +0.00000000e+00 * tc[3]
            +0.00000000e+00 * tc[4];
        /*species 2: H */
        species[2] =
            +2.50000001e+00
            -2.30842973e-11 * tc[1]
            +1.61561948e-14 * tc[2]
            -4.73515235e-18 * tc[3]
            +4.98197357e-22 * tc[4];
        /*species 3: O2 */
        species[3] =
            +3.28253784e+00
            +1.48308754e-03 * tc[1]
            -7.57966669e-07 * tc[2]
            +2.09470555e-10 * tc[3]
            -2.16717794e-14 * tc[4];
        /*species 4: OH */
        species[4] =
            +2.86472886e+00
            +1.05650448e-03 * tc[1]
            -2.59082758e-07 * tc[2]
            +3.05218674e-11 * tc[3]
            -1.33195876e-15 * tc[4];
        /*species 5: O */
        species[5] =
            +2.56942078e+00
            -8.59741137e-05 * tc[1]
            +4.19484589e-08 * tc[2]
            -1.00177799e-11 * tc[3]
            +1.22833691e-15 * tc[4];
        /*species 6: H2 */
        species[6] =
            +3.33727920e+00
            -4.94024731e-05 * tc[1]
            +4.99456778e-07 * tc[2]
            -1.79566394e-10 * tc[3]
            +2.00255376e-14 * tc[4];
        /*species 7: H2O */
        species[7] =
            +3.03399249e+00
            +2.17691804e-03 * tc[1]
            -1.64072518e-07 * tc[2]
            -9.70419870e-11 * tc[3]
            +1.68200992e-14 * tc[4];
        /*species 8: HO2 */
        species[8] =
            +4.01721090e+00
            +2.23982013e-03 * tc[1]
            -6.33658150e-07 * tc[2]
            +1.14246370e-10 * tc[3]
            -1.07908535e-14 * tc[4];
        /*species 9: H2O2 */
        species[9] =
            +4.16500285e+00
            +4.90831694e-03 * tc[1]
            -1.90139225e-06 * tc[2]
            +3.71185986e-10 * tc[3]
            -2.87908305e-14 * tc[4];
        /*species 10: CO */
        species[10] =
            +2.71518561e+00
            +2.06252743e-03 * tc[1]
            -9.98825771e-07 * tc[2]
            +2.30053008e-10 * tc[3]
            -2.03647716e-14 * tc[4];
        /*species 11: CO2 */
        species[11] =
            +3.85746029e+00
            +4.41437026e-03 * tc[1]
            -2.21481404e-06 * tc[2]
            +5.23490188e-10 * tc[3]
            -4.72084164e-14 * tc[4];
        /*species 12: HCO */
        species[12] =
            +2.77217438e+00
            +4.95695526e-03 * tc[1]
            -2.48445613e-06 * tc[2]
            +5.89161778e-10 * tc[3]
            -5.33508711e-14 * tc[4];
        /*species 13: CH2O */
        species[13] =
            +1.76069008e+00
            +9.20000082e-03 * tc[1]
            -4.42258813e-06 * tc[2]
            +1.00641212e-09 * tc[3]
            -8.83855640e-14 * tc[4];
        /*species 14: CH4 */
        species[14] =
            +7.48514950e-02
            +1.33909467e-02 * tc[1]
            -5.73285809e-06 * tc[2]
            +1.22292535e-09 * tc[3]
            -1.01815230e-13 * tc[4];
        /*species 15: CH3 */
        species[15] =
            +2.28571772e+00
            +7.23990037e-03 * tc[1]
            -2.98714348e-06 * tc[2]
            +5.95684644e-10 * tc[3]
            -4.67154394e-14 * tc[4];
        /*species 16: T-CH2 */
        species[16] =
            +2.87410113e+00
            +3.65639292e-03 * tc[1]
            -1.40894597e-06 * tc[2]
            +2.60179549e-10 * tc[3]
            -1.87727567e-14 * tc[4];
        /*species 17: S-CH2 */
        species[17] =
            +2.29203842e+00
            +4.65588637e-03 * tc[1]
            -2.01191947e-06 * tc[2]
            +4.17906000e-10 * tc[3]
            -3.39716365e-14 * tc[4];
        /*species 18: C2H4 */
        species[18] =
            +2.03611116e+00
            +1.46454151e-02 * tc[1]
            -6.71077915e-06 * tc[2]
            +1.47222923e-09 * tc[3]
            -1.25706061e-13 * tc[4];
        /*species 19: CH3O */
        species[19] =
            +4.75779238e+00
            +7.44142474e-03 * tc[1]
            -2.69705176e-06 * tc[2]
            +4.38090504e-10 * tc[3]
            -2.63537098e-14 * tc[4];
        /*species 20: C2H5 */
        species[20] =
            +1.95465642e+00
            +1.73972722e-02 * tc[1]
            -7.98206668e-06 * tc[2]
            +1.75217689e-09 * tc[3]
            -1.49641576e-13 * tc[4];
        /*species 21: C2H6 */
        species[21] =
            +1.07188150e+00
            +2.16852677e-02 * tc[1]
            -1.00256067e-05 * tc[2]
            +2.21412001e-09 * tc[3]
            -1.90002890e-13 * tc[4];
        /*species 22: CH */
        species[22] =
            +2.87846473e+00
            +9.70913681e-04 * tc[1]
            +1.44445655e-07 * tc[2]
            -1.30687849e-10 * tc[3]
            +1.76079383e-14 * tc[4];
        /*species 23: C2H2 */
        species[23] =
            +4.14756964e+00
            +5.96166664e-03 * tc[1]
            -2.37294852e-06 * tc[2]
            +4.67412171e-10 * tc[3]
            -3.61235213e-14 * tc[4];
        /*species 24: C2H3 */
        species[24] =
            +3.01672400e+00
            +1.03302292e-02 * tc[1]
            -4.68082349e-06 * tc[2]
            +1.01763288e-09 * tc[3]
            -8.62607041e-14 * tc[4];
        /*species 25: CH2CHO */
        species[25] =
            +5.16620060e+00
            +1.08478260e-02 * tc[1]
            -4.46583680e-06 * tc[2]
            +8.06285480e-10 * tc[3]
            -4.84101930e-14 * tc[4];
        /*species 26: C2H4O */
        species[26] =
            +5.40411080e+00
            +1.17230590e-02 * tc[1]
            -4.22631370e-06 * tc[2]
            +6.83724510e-10 * tc[3]
            -4.09848630e-14 * tc[4];
        /*species 27: CH2CO */
        species[27] =
            +4.51129732e+00
            +9.00359745e-03 * tc[1]
            -4.16939635e-06 * tc[2]
            +9.23345882e-10 * tc[3]
            -7.94838201e-14 * tc[4];
        /*species 28: HCCO */
        species[28] =
            +5.62820580e+00
            +4.08534010e-03 * tc[1]
            -1.59345470e-06 * tc[2]
            +2.86260520e-10 * tc[3]
            -1.94078320e-14 * tc[4];
        /*species 29: C2H */
        species[29] =
            +3.16780652e+00
            +4.75221902e-03 * tc[1]
            -1.83787077e-06 * tc[2]
            +3.04190252e-10 * tc[3]
            -1.77232770e-14 * tc[4];
        /*species 30: CH2OH */
        species[30] =
            +5.09312037e+00
            +5.94758550e-03 * tc[1]
            -2.06496524e-06 * tc[2]
            +3.23006703e-10 * tc[3]
            -1.88125052e-14 * tc[4];
        /*species 31: CH3OH */
        species[31] =
            +1.78970791e+00
            +1.40938292e-02 * tc[1]
            -6.36500835e-06 * tc[2]
            +1.38171085e-09 * tc[3]
            -1.17060220e-13 * tc[4];
        /*species 32: C3H4 */
        species[32] =
            +6.31687220e+00
            +1.11337280e-02 * tc[1]
            -3.96293780e-06 * tc[2]
            +6.35642380e-10 * tc[3]
            -3.78755400e-14 * tc[4];
        /*species 33: C3H3 */
        species[33] =
            +7.14221880e+00
            +7.61902005e-03 * tc[1]
            -2.67459950e-06 * tc[2]
            +4.24914801e-10 * tc[3]
            -2.51475415e-14 * tc[4];
        /*species 34: C3H5 */
        species[34] =
            +6.50078770e+00
            +1.43247310e-02 * tc[1]
            -5.67816320e-06 * tc[2]
            +1.10808010e-09 * tc[3]
            -9.03638870e-14 * tc[4];
        /*species 35: C3H6 */
        species[35] =
            +6.73225700e+00
            +1.49083400e-02 * tc[1]
            -4.94989900e-06 * tc[2]
            +7.21202200e-10 * tc[3]
            -3.76620400e-14 * tc[4];
        /*species 36: C3H8 */
        species[36] =
            +7.52441520e+00
            +1.88982820e-02 * tc[1]
            -6.29210410e-06 * tc[2]
            +9.21614570e-10 * tc[3]
            -4.86844780e-14 * tc[4];
        /*species 37: I-C3H7 */
        species[37] =
            +6.51927410e+00
            +1.72201040e-02 * tc[1]
            -5.73642170e-06 * tc[2]
            +8.41307320e-10 * tc[3]
            -4.45659130e-14 * tc[4];
        /*species 38: N-C3H7 */
        species[38] =
            +7.70974790e+00
            +1.60314850e-02 * tc[1]
            -5.27202380e-06 * tc[2]
            +7.58883520e-10 * tc[3]
            -3.88627190e-14 * tc[4];
    }
    return;
}


/*compute the e/(RT) at the given temperature */
/*tc contains precomputed powers of T, tc[0] = log(T) */
void speciesInternalEnergy(double * species, double * tc)
{

    /*temperature */
    double T = tc[1], invT = 1.0 / T;

    /*species with midpoint at T=1000 kelvin */
    if (T < 1000) {
        /*species 0: N2 */
        species[0] =
            +2.29867700e+00
            +7.04120200e-04 * tc[1]
            -1.32107400e-06 * tc[2]
            +1.41037875e-09 * tc[3]
            -4.88970800e-13 * tc[4]
            -1.02089990e+03 * invT;
        /*species 1: AR */
        species[1] =
            +1.50000000e+00
            +0.00000000e+00 * tc[1]
            +0.00000000e+00 * tc[2]
            +0.00000000e+00 * tc[3]
            +0.00000000e+00 * tc[4]
            -7.45375000e+02 * invT;
        /*species 2: H */
        species[2] =
            +1.50000000e+00
            +3.52666409e-13 * tc[1]
            -6.65306547e-16 * tc[2]
            +5.75204080e-19 * tc[3]
            -1.85546466e-22 * tc[4]
            +2.54736599e+04 * invT;
        /*species 3: O2 */
        species[3] =
            +2.78245636e+00
            -1.49836708e-03 * tc[1]
            +3.28243400e-06 * tc[2]
            -2.42032377e-09 * tc[3]
            +6.48745674e-13 * tc[4]
            -1.06394356e+03 * invT;
        /*species 4: OH */
        species[4] =
            +3.12530561e+00
            -1.61272470e-03 * tc[1]
            +2.17588230e-06 * tc[2]
            -1.44963411e-09 * tc[3]
            +4.12474758e-13 * tc[4]
            +3.38153812e+03 * invT;
        /*species 5: O */
        species[5] =
            +2.16826710e+00
            -1.63965942e-03 * tc[1]
            +2.21435465e-06 * tc[2]
            -1.53201656e-09 * tc[3]
            +4.22531942e-13 * tc[4]
            +2.91222592e+04 * invT;
        /*species 6: H2 */
        species[6] =
            +1.34433112e+00
            +3.99026037e-03 * tc[1]
            -6.49271700e-06 * tc[2]
            +5.03930235e-09 * tc[3]
            -1.47522352e-12 * tc[4]
            -9.17935173e+02 * invT;
        /*species 7: H2O */
        species[7] =
            +3.19864056e+00
            -1.01821705e-03 * tc[1]
            +2.17346737e-06 * tc[2]
            -1.37199266e-09 * tc[3]
            +3.54395634e-13 * tc[4]
            -3.02937267e+04 * invT;
        /*species 8: HO2 */
        species[8] =
            +3.30179801e+00
            -2.37456025e-03 * tc[1]
            +7.05276303e-06 * tc[2]
            -6.06909735e-09 * tc[3]
            +1.85845025e-12 * tc[4]
            +2.94808040e+02 * invT;
        /*species 9: H2O2 */
        species[9] =
            +3.27611269e+00
            -2.71411208e-04 * tc[1]
            +5.57785670e-06 * tc[2]
            -5.39427032e-09 * tc[3]
            +1.72490873e-12 * tc[4]
            -1.77025821e+04 * invT;
        /*species 10: CO */
        species[10] =
            +2.57953347e+00
            -3.05176840e-04 * tc[1]
            +3.38938110e-07 * tc[2]
            +2.26751471e-10 * tc[3]
            -1.80884900e-13 * tc[4]
            -1.43440860e+04 * invT;
        /*species 11: CO2 */
        species[11] =
            +1.35677352e+00
            +4.49229839e-03 * tc[1]
            -2.37452090e-06 * tc[2]
            +6.14797555e-10 * tc[3]
            -2.87399096e-14 * tc[4]
            -4.83719697e+04 * invT;
        /*species 12: HCO */
        species[12] =
            +3.22118584e+00
            -1.62196266e-03 * tc[1]
            +4.59331487e-06 * tc[2]
            -3.32860233e-09 * tc[3]
            +8.67537730e-13 * tc[4]
            +3.83956496e+03 * invT;
        /*species 13: CH2O */
        species[13] =
            +3.79372315e+00
            -4.95416684e-03 * tc[1]
            +1.24406669e-05 * tc[2]
            -9.48213152e-09 * tc[3]
            +2.63545304e-12 * tc[4]
            -1.43089567e+04 * invT;
        /*species 14: CH4 */
        species[14] =
            +4.14987613e+00
            -6.83548940e-03 * tc[1]
            +1.63933533e-05 * tc[2]
            -1.21185757e-08 * tc[3]
            +3.33387912e-12 * tc[4]
            -1.02466476e+04 * invT;
        /*species 15: CH3 */
        species[15] =
            +2.67359040e+00
            +1.00547588e-03 * tc[1]
            +1.91007285e-06 * tc[2]
            -1.71779356e-09 * tc[3]
            +5.08771468e-13 * tc[4]
            +1.64449988e+04 * invT;
        /*species 16: T-CH2 */
        species[16] =
            +2.76267867e+00
            +4.84436072e-04 * tc[1]
            +9.31632803e-07 * tc[2]
            -9.62727883e-10 * tc[3]
            +3.37483438e-13 * tc[4]
            +4.60040401e+04 * invT;
        /*species 17: S-CH2 */
        species[17] =
            +3.19860411e+00
            -1.18330710e-03 * tc[1]
            +2.74432073e-06 * tc[2]
            -1.67203995e-09 * tc[3]
            +3.88629474e-13 * tc[4]
            +5.04968163e+04 * invT;
        /*species 18: C2H4 */
        species[18] =
            +2.95920148e+00
            -3.78526124e-03 * tc[1]
            +1.90330097e-05 * tc[2]
            -1.72897188e-08 * tc[3]
            +5.39768746e-12 * tc[4]
            +5.08977593e+03 * invT;
        /*species 19: CH3O */
        species[19] =
            +2.71180502e+00
            -1.40231653e-03 * tc[1]
            +1.25516990e-05 * tc[2]
            -1.18268022e-08 * tc[3]
            +3.73176840e-12 * tc[4]
            +1.30772484e+03 * invT;
        /*species 20: C2H5 */
        species[20] =
            +3.30646568e+00
            -2.09329446e-03 * tc[1]
            +1.65714269e-05 * tc[2]
            -1.49781651e-08 * tc[3]
            +4.61018008e-12 * tc[4]
            +1.28416265e+04 * invT;
        /*species 21: C2H6 */
        species[21] =
            +3.29142492e+00
            -2.75077135e-03 * tc[1]
            +1.99812763e-05 * tc[2]
            -1.77116571e-08 * tc[3]
            +5.37371542e-12 * tc[4]
            -1.15222055e+04 * invT;
        /*species 22: CH */
        species[22] =
            +2.48981665e+00
            +1.61917771e-04 * tc[1]
            -5.62996883e-07 * tc[2]
            +7.90543317e-10 * tc[3]
            -2.81218134e-13 * tc[4]
            +7.07972934e+04 * invT;
        /*species 23: C2H2 */
        species[23] =
            -1.91318906e-01
            +1.16807815e-02 * tc[1]
            -1.18390605e-05 * tc[2]
            +7.00381092e-09 * tc[3]
            -1.70014595e-12 * tc[4]
            +2.64289807e+04 * invT;
        /*species 24: C2H3 */
        species[24] =
            +2.21246645e+00
            +7.57395810e-04 * tc[1]
            +8.64031373e-06 * tc[2]
            -8.94144617e-09 * tc[3]
            +2.94301746e-12 * tc[4]
            +3.48598468e+04 * invT;
        /*species 25: CH2CHO */
        species[25] =
            +1.34001000e-02
            +1.13407335e-02 * tc[1]
            -5.24464800e-06 * tc[2]
            +1.01228758e-09 * tc[3]
            +5.91980240e-14 * tc[4]
            +3.80428530e+02 * invT;
        /*species 26: C2H4O */
        species[26] =
            +3.72945950e+00
            -1.59664290e-03 * tc[1]
            +1.58449737e-05 * tc[2]
            -1.43646527e-08 * tc[3]
            +4.38622240e-12 * tc[4]
            -2.15728780e+04 * invT;
        /*species 27: CH2CO */
        species[27] =
            +1.13583630e+00
            +9.05943605e-03 * tc[1]
            -5.79824913e-06 * tc[2]
            +2.33599392e-09 * tc[3]
            -4.02915230e-13 * tc[4]
            -7.04291804e+03 * invT;
        /*species 28: HCCO */
        species[28] =
            +1.25172140e+00
            +8.82751050e-03 * tc[1]
            -7.90970033e-06 * tc[2]
            +4.31893975e-09 * tc[3]
            -1.01329622e-12 * tc[4]
            +2.00594490e+04 * invT;
        /*species 29: C2H */
        species[29] =
            +1.88965733e+00
            +6.70498055e-03 * tc[1]
            -9.49231670e-06 * tc[2]
            +7.36977613e-09 * tc[3]
            -2.18663022e-12 * tc[4]
            +6.68393932e+04 * invT;
        /*species 30: CH2OH */
        species[30] =
            +3.47832317e+00
            -6.75348435e-04 * tc[1]
            +9.28279023e-06 * tc[2]
            -9.12168492e-09 * tc[3]
            +2.95813550e-12 * tc[4]
            -3.52476728e+03 * invT;
        /*species 31: CH3OH */
        species[31] =
            +4.71539582e+00
            -7.61545645e-03 * tc[1]
            +2.17480385e-05 * tc[2]
            -1.77701722e-08 * tc[3]
            +5.22705396e-12 * tc[4]
            -2.56427656e+04 * invT;
        /*species 32: C3H4 */
        species[32] =
            +1.61304450e+00
            +6.06128750e-03 * tc[1]
            +6.17996000e-06 * tc[2]
            -8.63128725e-09 * tc[3]
            +3.06701580e-12 * tc[4]
            +2.15415670e+04 * invT;
        /*species 33: C3H3 */
        species[33] =
            +3.51109270e-01
            +1.63705612e-02 * tc[1]
            -1.57942378e-05 * tc[2]
            +9.40774520e-09 * tc[3]
            -2.37081846e-12 * tc[4]
            +4.01057783e+04 * invT;
        /*species 34: C3H5 */
        species[34] =
            +3.63183500e-01
            +9.90691050e-03 * tc[1]
            +4.16568667e-06 * tc[2]
            -8.33888875e-09 * tc[3]
            +3.16931420e-12 * tc[4]
            +1.92456290e+04 * invT;
        /*species 35: C3H6 */
        species[35] =
            +4.93307000e-01
            +1.04625900e-02 * tc[1]
            +1.49559800e-06 * tc[2]
            -4.17228000e-09 * tc[3]
            +1.43162920e-12 * tc[4]
            +1.07482600e+03 * invT;
        /*species 36: C3H8 */
        species[36] =
            -7.14890700e-02
            +1.32302830e-02 * tc[1]
            +2.01108153e-06 * tc[2]
            -5.47873825e-09 * tc[3]
            +1.89923088e-12 * tc[4]
            -1.40579070e+04 * invT;
        /*species 37: I-C3H7 */
        species[37] =
            +4.44919900e-01
            +1.04995560e-02 * tc[1]
            +2.56787407e-06 * tc[2]
            -4.61906325e-09 * tc[3]
            +1.42565924e-12 * tc[4]
            +9.42237240e+03 * invT;
        /*species 38: N-C3H7 */
        species[38] =
            +4.91173000e-02
            +1.30044865e-02 * tc[1]
            +7.84750533e-07 * tc[2]
            -4.89878300e-09 * tc[3]
            +1.87440414e-12 * tc[4]
            +1.03123460e+04 * invT;
    } else {
        /*species 0: N2 */
        species[0] =
            +1.92664000e+00
            +7.43988400e-04 * tc[1]
            -1.89492000e-07 * tc[2]
            +2.52425950e-11 * tc[3]
            -1.35067020e-15 * tc[4]
            -9.22797700e+02 * invT;
        /*species 1: AR */
        species[1] =
            +1.50000000e+00
            +0.00000000e+00 * tc[1]
            +0.00000000e+00 * tc[2]
            +0.00000000e+00 * tc[3]
            +0.00000000e+00 * tc[4]
            -7.45375000e+02 * invT;
        /*species 2: H */
        species[2] =
            +1.50000001e+00
            -1.15421486e-11 * tc[1]
            +5.38539827e-15 * tc[2]
            -1.18378809e-18 * tc[3]
            +9.96394714e-23 * tc[4]
            +2.54736599e+04 * invT;
        /*species 3: O2 */
        species[3] =
            +2.28253784e+00
            +7.41543770e-04 * tc[1]
            -2.52655556e-07 * tc[2]
            +5.23676387e-11 * tc[3]
            -4.33435588e-15 * tc[4]
            -1.08845772e+03 * invT;
        /*species 4: OH */
        species[4] =
            +1.86472886e+00
            +5.28252240e-04 * tc[1]
            -8.63609193e-08 * tc[2]
            +7.63046685e-12 * tc[3]
            -2.66391752e-16 * tc[4]
            +3.71885774e+03 * invT;
        /*species 5: O */
        species[5] =
            +1.56942078e+00
            -4.29870569e-05 * tc[1]
            +1.39828196e-08 * tc[2]
            -2.50444497e-12 * tc[3]
            +2.45667382e-16 * tc[4]
            +2.92175791e+04 * invT;
        /*species 6: H2 */
        species[6] =
            +2.33727920e+00
            -2.47012365e-05 * tc[1]
            +1.66485593e-07 * tc[2]
            -4.48915985e-11 * tc[3]
            +4.00510752e-15 * tc[4]
            -9.50158922e+02 * invT;
        /*species 7: H2O */
        species[7] =
            +2.03399249e+00
            +1.08845902e-03 * tc[1]
            -5.46908393e-08 * tc[2]
            -2.42604967e-11 * tc[3]
            +3.36401984e-15 * tc[4]
            -3.00042971e+04 * invT;
        /*species 8: HO2 */
        species[8] =
            +3.01721090e+00
            +1.11991006e-03 * tc[1]
            -2.11219383e-07 * tc[2]
            +2.85615925e-11 * tc[3]
            -2.15817070e-15 * tc[4]
            +1.11856713e+02 * invT;
        /*species 9: H2O2 */
        species[9] =
            +3.16500285e+00
            +2.45415847e-03 * tc[1]
            -6.33797417e-07 * tc[2]
            +9.27964965e-11 * tc[3]
            -5.75816610e-15 * tc[4]
            -1.78617877e+04 * invT;
        /*species 10: CO */
        species[10] =
            +1.71518561e+00
            +1.03126372e-03 * tc[1]
            -3.32941924e-07 * tc[2]
            +5.75132520e-11 * tc[3]
            -4.07295432e-15 * tc[4]
            -1.41518724e+04 * invT;
        /*species 11: CO2 */
        species[11] =
            +2.85746029e+00
            +2.20718513e-03 * tc[1]
            -7.38271347e-07 * tc[2]
            +1.30872547e-10 * tc[3]
            -9.44168328e-15 * tc[4]
            -4.87591660e+04 * invT;
        /*species 12: HCO */
        species[12] =
            +1.77217438e+00
            +2.47847763e-03 * tc[1]
            -8.28152043e-07 * tc[2]
            +1.47290445e-10 * tc[3]
            -1.06701742e-14 * tc[4]
            +4.01191815e+03 * invT;
        /*species 13: CH2O */
        species[13] =
            +7.60690080e-01
            +4.60000041e-03 * tc[1]
            -1.47419604e-06 * tc[2]
            +2.51603030e-10 * tc[3]
            -1.76771128e-14 * tc[4]
            -1.39958323e+04 * invT;
        /*species 14: CH4 */
        species[14] =
            -9.25148505e-01
            +6.69547335e-03 * tc[1]
            -1.91095270e-06 * tc[2]
            +3.05731338e-10 * tc[3]
            -2.03630460e-14 * tc[4]
            -9.46834459e+03 * invT;
        /*species 15: CH3 */
        species[15] =
            +1.28571772e+00
            +3.61995018e-03 * tc[1]
            -9.95714493e-07 * tc[2]
            +1.48921161e-10 * tc[3]
            -9.34308788e-15 * tc[4]
            +1.67755843e+04 * invT;
        /*species 16: T-CH2 */
        species[16] =
            +1.87410113e+00
            +1.82819646e-03 * tc[1]
            -4.69648657e-07 * tc[2]
            +6.50448872e-11 * tc[3]
            -3.75455134e-15 * tc[4]
            +4.62636040e+04 * invT;
        /*species 17: S-CH2 */
        species[17] =
            +1.29203842e+00
            +2.32794318e-03 * tc[1]
            -6.70639823e-07 * tc[2]
            +1.04476500e-10 * tc[3]
            -6.79432730e-15 * tc[4]
            +5.09259997e+04 * invT;
        /*species 18: C2H4 */
        species[18] =
            +1.03611116e+00
            +7.32270755e-03 * tc[1]
            -2.23692638e-06 * tc[2]
            +3.68057308e-10 * tc[3]
            -2.51412122e-14 * tc[4]
            +4.93988614e+03 * invT;
        /*species 19: CH3O */
        species[19] =
            +3.75779238e+00
            +3.72071237e-03 * tc[1]
            -8.99017253e-07 * tc[2]
            +1.09522626e-10 * tc[3]
            -5.27074196e-15 * tc[4]
            +3.90139164e+02 * invT;
        /*species 20: C2H5 */
        species[20] =
            +9.54656420e-01
            +8.69863610e-03 * tc[1]
            -2.66068889e-06 * tc[2]
            +4.38044223e-10 * tc[3]
            -2.99283152e-14 * tc[4]
            +1.28575200e+04 * invT;
        /*species 21: C2H6 */
        species[21] =
            +7.18815000e-02
            +1.08426339e-02 * tc[1]
            -3.34186890e-06 * tc[2]
            +5.53530003e-10 * tc[3]
            -3.80005780e-14 * tc[4]
            -1.14263932e+04 * invT;
        /*species 22: CH */
        species[22] =
            +1.87846473e+00
            +4.85456840e-04 * tc[1]
            +4.81485517e-08 * tc[2]
            -3.26719623e-11 * tc[3]
            +3.52158766e-15 * tc[4]
            +7.10124364e+04 * invT;
        /*species 23: C2H2 */
        species[23] =
            +3.14756964e+00
            +2.98083332e-03 * tc[1]
            -7.90982840e-07 * tc[2]
            +1.16853043e-10 * tc[3]
            -7.22470426e-15 * tc[4]
            +2.59359992e+04 * invT;
        /*species 24: C2H3 */
        species[24] =
            +2.01672400e+00
            +5.16511460e-03 * tc[1]
            -1.56027450e-06 * tc[2]
            +2.54408220e-10 * tc[3]
            -1.72521408e-14 * tc[4]
            +3.46128739e+04 * invT;
        /*species 25: CH2CHO */
        species[25] =
            +4.16620060e+00
            +5.42391300e-03 * tc[1]
            -1.48861227e-06 * tc[2]
            +2.01571370e-10 * tc[3]
            -9.68203860e-15 * tc[4]
            -7.31993470e+02 * invT;
        /*species 26: C2H4O */
        species[26] =
            +4.40411080e+00
            +5.86152950e-03 * tc[1]
            -1.40877123e-06 * tc[2]
            +1.70931128e-10 * tc[3]
            -8.19697260e-15 * tc[4]
            -2.25931220e+04 * invT;
        /*species 27: CH2CO */
        species[27] =
            +3.51129732e+00
            +4.50179872e-03 * tc[1]
            -1.38979878e-06 * tc[2]
            +2.30836470e-10 * tc[3]
            -1.58967640e-14 * tc[4]
            -7.55105311e+03 * invT;
        /*species 28: HCCO */
        species[28] =
            +4.62820580e+00
            +2.04267005e-03 * tc[1]
            -5.31151567e-07 * tc[2]
            +7.15651300e-11 * tc[3]
            -3.88156640e-15 * tc[4]
            +1.93272150e+04 * invT;
        /*species 29: C2H */
        species[29] =
            +2.16780652e+00
            +2.37610951e-03 * tc[1]
            -6.12623590e-07 * tc[2]
            +7.60475630e-11 * tc[3]
            -3.54465540e-15 * tc[4]
            +6.71210650e+04 * invT;
        /*species 30: CH2OH */
        species[30] =
            +4.09312037e+00
            +2.97379275e-03 * tc[1]
            -6.88321747e-07 * tc[2]
            +8.07516758e-11 * tc[3]
            -3.76250104e-15 * tc[4]
            -4.05813228e+03 * invT;
        /*species 31: CH3OH */
        species[31] =
            +7.89707910e-01
            +7.04691460e-03 * tc[1]
            -2.12166945e-06 * tc[2]
            +3.45427713e-10 * tc[3]
            -2.34120440e-14 * tc[4]
            -2.53748747e+04 * invT;
        /*species 32: C3H4 */
        species[32] =
            +5.31687220e+00
            +5.56686400e-03 * tc[1]
            -1.32097927e-06 * tc[2]
            +1.58910595e-10 * tc[3]
            -7.57510800e-15 * tc[4]
            +2.01174950e+04 * invT;
        /*species 33: C3H3 */
        species[33] =
            +6.14221880e+00
            +3.80951002e-03 * tc[1]
            -8.91533167e-07 * tc[2]
            +1.06228700e-10 * tc[3]
            -5.02950830e-15 * tc[4]
            +3.89087427e+04 * invT;
        /*species 34: C3H5 */
        species[34] =
            +5.50078770e+00
            +7.16236550e-03 * tc[1]
            -1.89272107e-06 * tc[2]
            +2.77020025e-10 * tc[3]
            -1.80727774e-14 * tc[4]
            +1.74824490e+04 * invT;
        /*species 35: C3H6 */
        species[35] =
            +5.73225700e+00
            +7.45417000e-03 * tc[1]
            -1.64996633e-06 * tc[2]
            +1.80300550e-10 * tc[3]
            -7.53240800e-15 * tc[4]
            -9.23570300e+02 * invT;
        /*species 36: C3H8 */
        species[36] =
            +6.52441520e+00
            +9.44914100e-03 * tc[1]
            -2.09736803e-06 * tc[2]
            +2.30403642e-10 * tc[3]
            -9.73689560e-15 * tc[4]
            -1.65643940e+04 * invT;
        /*species 37: I-C3H7 */
        species[37] =
            +5.51927410e+00
            +8.61005200e-03 * tc[1]
            -1.91214057e-06 * tc[2]
            +2.10326830e-10 * tc[3]
            -8.91318260e-15 * tc[4]
            +7.32271930e+03 * invT;
        /*species 38: N-C3H7 */
        species[38] =
            +6.70974790e+00
            +8.01574250e-03 * tc[1]
            -1.75734127e-06 * tc[2]
            +1.89720880e-10 * tc[3]
            -7.77254380e-15 * tc[4]
            +7.97622360e+03 * invT;
    }
    return;
}


/*compute the h/(RT) at the given temperature (Eq 20) */
/*tc contains precomputed powers of T, tc[0] = log(T) */
void speciesEnthalpy(double * species, double * tc)
{

    /*temperature */
    double T = tc[1], invT = 1.0 / T;

    /*species with midpoint at T=1000 kelvin */
    if (T < 1000) {
        /*species 0: N2 */
        species[0] =
            +3.29867700e+00
            +7.04120200e-04 * tc[1]
            -1.32107400e-06 * tc[2]
            +1.41037875e-09 * tc[3]
            -4.88970800e-13 * tc[4]
            -1.02089990e+03 * invT;
        /*species 1: AR */
        species[1] =
            +2.50000000e+00
            +0.00000000e+00 * tc[1]
            +0.00000000e+00 * tc[2]
            +0.00000000e+00 * tc[3]
            +0.00000000e+00 * tc[4]
            -7.45375000e+02 * invT;
        /*species 2: H */
        species[2] =
            +2.50000000e+00
            +3.52666409e-13 * tc[1]
            -6.65306547e-16 * tc[2]
            +5.75204080e-19 * tc[3]
            -1.85546466e-22 * tc[4]
            +2.54736599e+04 * invT;
        /*species 3: O2 */
        species[3] =
            +3.78245636e+00
            -1.49836708e-03 * tc[1]
            +3.28243400e-06 * tc[2]
            -2.42032377e-09 * tc[3]
            +6.48745674e-13 * tc[4]
            -1.06394356e+03 * invT;
        /*species 4: OH */
        species[4] =
            +4.12530561e+00
            -1.61272470e-03 * tc[1]
            +2.17588230e-06 * tc[2]
            -1.44963411e-09 * tc[3]
            +4.12474758e-13 * tc[4]
            +3.38153812e+03 * invT;
        /*species 5: O */
        species[5] =
            +3.16826710e+00
            -1.63965942e-03 * tc[1]
            +2.21435465e-06 * tc[2]
            -1.53201656e-09 * tc[3]
            +4.22531942e-13 * tc[4]
            +2.91222592e+04 * invT;
        /*species 6: H2 */
        species[6] =
            +2.34433112e+00
            +3.99026037e-03 * tc[1]
            -6.49271700e-06 * tc[2]
            +5.03930235e-09 * tc[3]
            -1.47522352e-12 * tc[4]
            -9.17935173e+02 * invT;
        /*species 7: H2O */
        species[7] =
            +4.19864056e+00
            -1.01821705e-03 * tc[1]
            +2.17346737e-06 * tc[2]
            -1.37199266e-09 * tc[3]
            +3.54395634e-13 * tc[4]
            -3.02937267e+04 * invT;
        /*species 8: HO2 */
        species[8] =
            +4.30179801e+00
            -2.37456025e-03 * tc[1]
            +7.05276303e-06 * tc[2]
            -6.06909735e-09 * tc[3]
            +1.85845025e-12 * tc[4]
            +2.94808040e+02 * invT;
        /*species 9: H2O2 */
        species[9] =
            +4.27611269e+00
            -2.71411208e-04 * tc[1]
            +5.57785670e-06 * tc[2]
            -5.39427032e-09 * tc[3]
            +1.72490873e-12 * tc[4]
            -1.77025821e+04 * invT;
        /*species 10: CO */
        species[10] =
            +3.57953347e+00
            -3.05176840e-04 * tc[1]
            +3.38938110e-07 * tc[2]
            +2.26751471e-10 * tc[3]
            -1.80884900e-13 * tc[4]
            -1.43440860e+04 * invT;
        /*species 11: CO2 */
        species[11] =
            +2.35677352e+00
            +4.49229839e-03 * tc[1]
            -2.37452090e-06 * tc[2]
            +6.14797555e-10 * tc[3]
            -2.87399096e-14 * tc[4]
            -4.83719697e+04 * invT;
        /*species 12: HCO */
        species[12] =
            +4.22118584e+00
            -1.62196266e-03 * tc[1]
            +4.59331487e-06 * tc[2]
            -3.32860233e-09 * tc[3]
            +8.67537730e-13 * tc[4]
            +3.83956496e+03 * invT;
        /*species 13: CH2O */
        species[13] =
            +4.79372315e+00
            -4.95416684e-03 * tc[1]
            +1.24406669e-05 * tc[2]
            -9.48213152e-09 * tc[3]
            +2.63545304e-12 * tc[4]
            -1.43089567e+04 * invT;
        /*species 14: CH4 */
        species[14] =
            +5.14987613e+00
            -6.83548940e-03 * tc[1]
            +1.63933533e-05 * tc[2]
            -1.21185757e-08 * tc[3]
            +3.33387912e-12 * tc[4]
            -1.02466476e+04 * invT;
        /*species 15: CH3 */
        species[15] =
            +3.67359040e+00
            +1.00547588e-03 * tc[1]
            +1.91007285e-06 * tc[2]
            -1.71779356e-09 * tc[3]
            +5.08771468e-13 * tc[4]
            +1.64449988e+04 * invT;
        /*species 16: T-CH2 */
        species[16] =
            +3.76267867e+00
            +4.84436072e-04 * tc[1]
            +9.31632803e-07 * tc[2]
            -9.62727883e-10 * tc[3]
            +3.37483438e-13 * tc[4]
            +4.60040401e+04 * invT;
        /*species 17: S-CH2 */
        species[17] =
            +4.19860411e+00
            -1.18330710e-03 * tc[1]
            +2.74432073e-06 * tc[2]
            -1.67203995e-09 * tc[3]
            +3.88629474e-13 * tc[4]
            +5.04968163e+04 * invT;
        /*species 18: C2H4 */
        species[18] =
            +3.95920148e+00
            -3.78526124e-03 * tc[1]
            +1.90330097e-05 * tc[2]
            -1.72897188e-08 * tc[3]
            +5.39768746e-12 * tc[4]
            +5.08977593e+03 * invT;
        /*species 19: CH3O */
        species[19] =
            +3.71180502e+00
            -1.40231653e-03 * tc[1]
            +1.25516990e-05 * tc[2]
            -1.18268022e-08 * tc[3]
            +3.73176840e-12 * tc[4]
            +1.30772484e+03 * invT;
        /*species 20: C2H5 */
        species[20] =
            +4.30646568e+00
            -2.09329446e-03 * tc[1]
            +1.65714269e-05 * tc[2]
            -1.49781651e-08 * tc[3]
            +4.61018008e-12 * tc[4]
            +1.28416265e+04 * invT;
        /*species 21: C2H6 */
        species[21] =
            +4.29142492e+00
            -2.75077135e-03 * tc[1]
            +1.99812763e-05 * tc[2]
            -1.77116571e-08 * tc[3]
            +5.37371542e-12 * tc[4]
            -1.15222055e+04 * invT;
        /*species 22: CH */
        species[22] =
            +3.48981665e+00
            +1.61917771e-04 * tc[1]
            -5.62996883e-07 * tc[2]
            +7.90543317e-10 * tc[3]
            -2.81218134e-13 * tc[4]
            +7.07972934e+04 * invT;
        /*species 23: C2H2 */
        species[23] =
            +8.08681094e-01
            +1.16807815e-02 * tc[1]
            -1.18390605e-05 * tc[2]
            +7.00381092e-09 * tc[3]
            -1.70014595e-12 * tc[4]
            +2.64289807e+04 * invT;
        /*species 24: C2H3 */
        species[24] =
            +3.21246645e+00
            +7.57395810e-04 * tc[1]
            +8.64031373e-06 * tc[2]
            -8.94144617e-09 * tc[3]
            +2.94301746e-12 * tc[4]
            +3.48598468e+04 * invT;
        /*species 25: CH2CHO */
        species[25] =
            +1.01340010e+00
            +1.13407335e-02 * tc[1]
            -5.24464800e-06 * tc[2]
            +1.01228758e-09 * tc[3]
            +5.91980240e-14 * tc[4]
            +3.80428530e+02 * invT;
        /*species 26: C2H4O */
        species[26] =
            +4.72945950e+00
            -1.59664290e-03 * tc[1]
            +1.58449737e-05 * tc[2]
            -1.43646527e-08 * tc[3]
            +4.38622240e-12 * tc[4]
            -2.15728780e+04 * invT;
        /*species 27: CH2CO */
        species[27] =
            +2.13583630e+00
            +9.05943605e-03 * tc[1]
            -5.79824913e-06 * tc[2]
            +2.33599392e-09 * tc[3]
            -4.02915230e-13 * tc[4]
            -7.04291804e+03 * invT;
        /*species 28: HCCO */
        species[28] =
            +2.25172140e+00
            +8.82751050e-03 * tc[1]
            -7.90970033e-06 * tc[2]
            +4.31893975e-09 * tc[3]
            -1.01329622e-12 * tc[4]
            +2.00594490e+04 * invT;
        /*species 29: C2H */
        species[29] =
            +2.88965733e+00
            +6.70498055e-03 * tc[1]
            -9.49231670e-06 * tc[2]
            +7.36977613e-09 * tc[3]
            -2.18663022e-12 * tc[4]
            +6.68393932e+04 * invT;
        /*species 30: CH2OH */
        species[30] =
            +4.47832317e+00
            -6.75348435e-04 * tc[1]
            +9.28279023e-06 * tc[2]
            -9.12168492e-09 * tc[3]
            +2.95813550e-12 * tc[4]
            -3.52476728e+03 * invT;
        /*species 31: CH3OH */
        species[31] =
            +5.71539582e+00
            -7.61545645e-03 * tc[1]
            +2.17480385e-05 * tc[2]
            -1.77701722e-08 * tc[3]
            +5.22705396e-12 * tc[4]
            -2.56427656e+04 * invT;
        /*species 32: C3H4 */
        species[32] =
            +2.61304450e+00
            +6.06128750e-03 * tc[1]
            +6.17996000e-06 * tc[2]
            -8.63128725e-09 * tc[3]
            +3.06701580e-12 * tc[4]
            +2.15415670e+04 * invT;
        /*species 33: C3H3 */
        species[33] =
            +1.35110927e+00
            +1.63705612e-02 * tc[1]
            -1.57942378e-05 * tc[2]
            +9.40774520e-09 * tc[3]
            -2.37081846e-12 * tc[4]
            +4.01057783e+04 * invT;
        /*species 34: C3H5 */
        species[34] =
            +1.36318350e+00
            +9.90691050e-03 * tc[1]
            +4.16568667e-06 * tc[2]
            -8.33888875e-09 * tc[3]
            +3.16931420e-12 * tc[4]
            +1.92456290e+04 * invT;
        /*species 35: C3H6 */
        species[35] =
            +1.49330700e+00
            +1.04625900e-02 * tc[1]
            +1.49559800e-06 * tc[2]
            -4.17228000e-09 * tc[3]
            +1.43162920e-12 * tc[4]
            +1.07482600e+03 * invT;
        /*species 36: C3H8 */
        species[36] =
            +9.28510930e-01
            +1.32302830e-02 * tc[1]
            +2.01108153e-06 * tc[2]
            -5.47873825e-09 * tc[3]
            +1.89923088e-12 * tc[4]
            -1.40579070e+04 * invT;
        /*species 37: I-C3H7 */
        species[37] =
            +1.44491990e+00
            +1.04995560e-02 * tc[1]
            +2.56787407e-06 * tc[2]
            -4.61906325e-09 * tc[3]
            +1.42565924e-12 * tc[4]
            +9.42237240e+03 * invT;
        /*species 38: N-C3H7 */
        species[38] =
            +1.04911730e+00
            +1.30044865e-02 * tc[1]
            +7.84750533e-07 * tc[2]
            -4.89878300e-09 * tc[3]
            +1.87440414e-12 * tc[4]
            +1.03123460e+04 * invT;
    } else {
        /*species 0: N2 */
        species[0] =
            +2.92664000e+00
            +7.43988400e-04 * tc[1]
            -1.89492000e-07 * tc[2]
            +2.52425950e-11 * tc[3]
            -1.35067020e-15 * tc[4]
            -9.22797700e+02 * invT;
        /*species 1: AR */
        species[1] =
            +2.50000000e+00
            +0.00000000e+00 * tc[1]
            +0.00000000e+00 * tc[2]
            +0.00000000e+00 * tc[3]
            +0.00000000e+00 * tc[4]
            -7.45375000e+02 * invT;
        /*species 2: H */
        species[2] =
            +2.50000001e+00
            -1.15421486e-11 * tc[1]
            +5.38539827e-15 * tc[2]
            -1.18378809e-18 * tc[3]
            +9.96394714e-23 * tc[4]
            +2.54736599e+04 * invT;
        /*species 3: O2 */
        species[3] =
            +3.28253784e+00
            +7.41543770e-04 * tc[1]
            -2.52655556e-07 * tc[2]
            +5.23676387e-11 * tc[3]
            -4.33435588e-15 * tc[4]
            -1.08845772e+03 * invT;
        /*species 4: OH */
        species[4] =
            +2.86472886e+00
            +5.28252240e-04 * tc[1]
            -8.63609193e-08 * tc[2]
            +7.63046685e-12 * tc[3]
            -2.66391752e-16 * tc[4]
            +3.71885774e+03 * invT;
        /*species 5: O */
        species[5] =
            +2.56942078e+00
            -4.29870569e-05 * tc[1]
            +1.39828196e-08 * tc[2]
            -2.50444497e-12 * tc[3]
            +2.45667382e-16 * tc[4]
            +2.92175791e+04 * invT;
        /*species 6: H2 */
        species[6] =
            +3.33727920e+00
            -2.47012365e-05 * tc[1]
            +1.66485593e-07 * tc[2]
            -4.48915985e-11 * tc[3]
            +4.00510752e-15 * tc[4]
            -9.50158922e+02 * invT;
        /*species 7: H2O */
        species[7] =
            +3.03399249e+00
            +1.08845902e-03 * tc[1]
            -5.46908393e-08 * tc[2]
            -2.42604967e-11 * tc[3]
            +3.36401984e-15 * tc[4]
            -3.00042971e+04 * invT;
        /*species 8: HO2 */
        species[8] =
            +4.01721090e+00
            +1.11991006e-03 * tc[1]
            -2.11219383e-07 * tc[2]
            +2.85615925e-11 * tc[3]
            -2.15817070e-15 * tc[4]
            +1.11856713e+02 * invT;
        /*species 9: H2O2 */
        species[9] =
            +4.16500285e+00
            +2.45415847e-03 * tc[1]
            -6.33797417e-07 * tc[2]
            +9.27964965e-11 * tc[3]
            -5.75816610e-15 * tc[4]
            -1.78617877e+04 * invT;
        /*species 10: CO */
        species[10] =
            +2.71518561e+00
            +1.03126372e-03 * tc[1]
            -3.32941924e-07 * tc[2]
            +5.75132520e-11 * tc[3]
            -4.07295432e-15 * tc[4]
            -1.41518724e+04 * invT;
        /*species 11: CO2 */
        species[11] =
            +3.85746029e+00
            +2.20718513e-03 * tc[1]
            -7.38271347e-07 * tc[2]
            +1.30872547e-10 * tc[3]
            -9.44168328e-15 * tc[4]
            -4.87591660e+04 * invT;
        /*species 12: HCO */
        species[12] =
            +2.77217438e+00
            +2.47847763e-03 * tc[1]
            -8.28152043e-07 * tc[2]
            +1.47290445e-10 * tc[3]
            -1.06701742e-14 * tc[4]
            +4.01191815e+03 * invT;
        /*species 13: CH2O */
        species[13] =
            +1.76069008e+00
            +4.60000041e-03 * tc[1]
            -1.47419604e-06 * tc[2]
            +2.51603030e-10 * tc[3]
            -1.76771128e-14 * tc[4]
            -1.39958323e+04 * invT;
        /*species 14: CH4 */
        species[14] =
            +7.48514950e-02
            +6.69547335e-03 * tc[1]
            -1.91095270e-06 * tc[2]
            +3.05731338e-10 * tc[3]
            -2.03630460e-14 * tc[4]
            -9.46834459e+03 * invT;
        /*species 15: CH3 */
        species[15] =
            +2.28571772e+00
            +3.61995018e-03 * tc[1]
            -9.95714493e-07 * tc[2]
            +1.48921161e-10 * tc[3]
            -9.34308788e-15 * tc[4]
            +1.67755843e+04 * invT;
        /*species 16: T-CH2 */
        species[16] =
            +2.87410113e+00
            +1.82819646e-03 * tc[1]
            -4.69648657e-07 * tc[2]
            +6.50448872e-11 * tc[3]
            -3.75455134e-15 * tc[4]
            +4.62636040e+04 * invT;
        /*species 17: S-CH2 */
        species[17] =
            +2.29203842e+00
            +2.32794318e-03 * tc[1]
            -6.70639823e-07 * tc[2]
            +1.04476500e-10 * tc[3]
            -6.79432730e-15 * tc[4]
            +5.09259997e+04 * invT;
        /*species 18: C2H4 */
        species[18] =
            +2.03611116e+00
            +7.32270755e-03 * tc[1]
            -2.23692638e-06 * tc[2]
            +3.68057308e-10 * tc[3]
            -2.51412122e-14 * tc[4]
            +4.93988614e+03 * invT;
        /*species 19: CH3O */
        species[19] =
            +4.75779238e+00
            +3.72071237e-03 * tc[1]
            -8.99017253e-07 * tc[2]
            +1.09522626e-10 * tc[3]
            -5.27074196e-15 * tc[4]
            +3.90139164e+02 * invT;
        /*species 20: C2H5 */
        species[20] =
            +1.95465642e+00
            +8.69863610e-03 * tc[1]
            -2.66068889e-06 * tc[2]
            +4.38044223e-10 * tc[3]
            -2.99283152e-14 * tc[4]
            +1.28575200e+04 * invT;
        /*species 21: C2H6 */
        species[21] =
            +1.07188150e+00
            +1.08426339e-02 * tc[1]
            -3.34186890e-06 * tc[2]
            +5.53530003e-10 * tc[3]
            -3.80005780e-14 * tc[4]
            -1.14263932e+04 * invT;
        /*species 22: CH */
        species[22] =
            +2.87846473e+00
            +4.85456840e-04 * tc[1]
            +4.81485517e-08 * tc[2]
            -3.26719623e-11 * tc[3]
            +3.52158766e-15 * tc[4]
            +7.10124364e+04 * invT;
        /*species 23: C2H2 */
        species[23] =
            +4.14756964e+00
            +2.98083332e-03 * tc[1]
            -7.90982840e-07 * tc[2]
            +1.16853043e-10 * tc[3]
            -7.22470426e-15 * tc[4]
            +2.59359992e+04 * invT;
        /*species 24: C2H3 */
        species[24] =
            +3.01672400e+00
            +5.16511460e-03 * tc[1]
            -1.56027450e-06 * tc[2]
            +2.54408220e-10 * tc[3]
            -1.72521408e-14 * tc[4]
            +3.46128739e+04 * invT;
        /*species 25: CH2CHO */
        species[25] =
            +5.16620060e+00
            +5.42391300e-03 * tc[1]
            -1.48861227e-06 * tc[2]
            +2.01571370e-10 * tc[3]
            -9.68203860e-15 * tc[4]
            -7.31993470e+02 * invT;
        /*species 26: C2H4O */
        species[26] =
            +5.40411080e+00
            +5.86152950e-03 * tc[1]
            -1.40877123e-06 * tc[2]
            +1.70931128e-10 * tc[3]
            -8.19697260e-15 * tc[4]
            -2.25931220e+04 * invT;
        /*species 27: CH2CO */
        species[27] =
            +4.51129732e+00
            +4.50179872e-03 * tc[1]
            -1.38979878e-06 * tc[2]
            +2.30836470e-10 * tc[3]
            -1.58967640e-14 * tc[4]
            -7.55105311e+03 * invT;
        /*species 28: HCCO */
        species[28] =
            +5.62820580e+00
            +2.04267005e-03 * tc[1]
            -5.31151567e-07 * tc[2]
            +7.15651300e-11 * tc[3]
            -3.88156640e-15 * tc[4]
            +1.93272150e+04 * invT;
        /*species 29: C2H */
        species[29] =
            +3.16780652e+00
            +2.37610951e-03 * tc[1]
            -6.12623590e-07 * tc[2]
            +7.60475630e-11 * tc[3]
            -3.54465540e-15 * tc[4]
            +6.71210650e+04 * invT;
        /*species 30: CH2OH */
        species[30] =
            +5.09312037e+00
            +2.97379275e-03 * tc[1]
            -6.88321747e-07 * tc[2]
            +8.07516758e-11 * tc[3]
            -3.76250104e-15 * tc[4]
            -4.05813228e+03 * invT;
        /*species 31: CH3OH */
        species[31] =
            +1.78970791e+00
            +7.04691460e-03 * tc[1]
            -2.12166945e-06 * tc[2]
            +3.45427713e-10 * tc[3]
            -2.34120440e-14 * tc[4]
            -2.53748747e+04 * invT;
        /*species 32: C3H4 */
        species[32] =
            +6.31687220e+00
            +5.56686400e-03 * tc[1]
            -1.32097927e-06 * tc[2]
            +1.58910595e-10 * tc[3]
            -7.57510800e-15 * tc[4]
            +2.01174950e+04 * invT;
        /*species 33: C3H3 */
        species[33] =
            +7.14221880e+00
            +3.80951002e-03 * tc[1]
            -8.91533167e-07 * tc[2]
            +1.06228700e-10 * tc[3]
            -5.02950830e-15 * tc[4]
            +3.89087427e+04 * invT;
        /*species 34: C3H5 */
        species[34] =
            +6.50078770e+00
            +7.16236550e-03 * tc[1]
            -1.89272107e-06 * tc[2]
            +2.77020025e-10 * tc[3]
            -1.80727774e-14 * tc[4]
            +1.74824490e+04 * invT;
        /*species 35: C3H6 */
        species[35] =
            +6.73225700e+00
            +7.45417000e-03 * tc[1]
            -1.64996633e-06 * tc[2]
            +1.80300550e-10 * tc[3]
            -7.53240800e-15 * tc[4]
            -9.23570300e+02 * invT;
        /*species 36: C3H8 */
        species[36] =
            +7.52441520e+00
            +9.44914100e-03 * tc[1]
            -2.09736803e-06 * tc[2]
            +2.30403642e-10 * tc[3]
            -9.73689560e-15 * tc[4]
            -1.65643940e+04 * invT;
        /*species 37: I-C3H7 */
        species[37] =
            +6.51927410e+00
            +8.61005200e-03 * tc[1]
            -1.91214057e-06 * tc[2]
            +2.10326830e-10 * tc[3]
            -8.91318260e-15 * tc[4]
            +7.32271930e+03 * invT;
        /*species 38: N-C3H7 */
        species[38] =
            +7.70974790e+00
            +8.01574250e-03 * tc[1]
            -1.75734127e-06 * tc[2]
            +1.89720880e-10 * tc[3]
            -7.77254380e-15 * tc[4]
            +7.97622360e+03 * invT;
    }
    return;
}


/*compute the S/R at the given temperature (Eq 21) */
/*tc contains precomputed powers of T, tc[0] = log(T) */
void speciesEntropy(double * species, double * tc)
{

    /*temperature */
    double T = tc[1], invT = 1.0 / T;

    /*species with midpoint at T=1000 kelvin */
    if (T < 1000) {
        /*species 0: N2 */
        species[0] =
            +3.29867700e+00 * tc[0]
            +1.40824040e-03 * tc[1]
            -1.98161100e-06 * tc[2]
            +1.88050500e-09 * tc[3]
            -6.11213500e-13 * tc[4]
            +3.95037200e+00 ;
        /*species 1: AR */
        species[1] =
            +2.50000000e+00 * tc[0]
            +0.00000000e+00 * tc[1]
            +0.00000000e+00 * tc[2]
            +0.00000000e+00 * tc[3]
            +0.00000000e+00 * tc[4]
            +4.36600000e+00 ;
        /*species 2: H */
        species[2] =
            +2.50000000e+00 * tc[0]
            +7.05332819e-13 * tc[1]
            -9.97959820e-16 * tc[2]
            +7.66938773e-19 * tc[3]
            -2.31933083e-22 * tc[4]
            -4.46682853e-01 ;
        /*species 3: O2 */
        species[3] =
            +3.78245636e+00 * tc[0]
            -2.99673416e-03 * tc[1]
            +4.92365101e-06 * tc[2]
            -3.22709836e-09 * tc[3]
            +8.10932092e-13 * tc[4]
            +3.65767573e+00 ;
        /*species 4: OH */
        species[4] =
            +4.12530561e+00 * tc[0]
            -3.22544939e-03 * tc[1]
            +3.26382346e-06 * tc[2]
            -1.93284548e-09 * tc[3]
            +5.15593447e-13 * tc[4]
            -6.90432960e-01 ;
        /*species 5: O */
        species[5] =
            +3.16826710e+00 * tc[0]
            -3.27931884e-03 * tc[1]
            +3.32153198e-06 * tc[2]
            -2.04268875e-09 * tc[3]
            +5.28164927e-13 * tc[4]
            +2.05193346e+00 ;
        /*species 6: H2 */
        species[6] =
            +2.34433112e+00 * tc[0]
            +7.98052075e-03 * tc[1]
            -9.73907550e-06 * tc[2]
            +6.71906980e-09 * tc[3]
            -1.84402940e-12 * tc[4]
            +6.83010238e-01 ;
        /*species 7: H2O */
        species[7] =
            +4.19864056e+00 * tc[0]
            -2.03643410e-03 * tc[1]
            +3.26020105e-06 * tc[2]
            -1.82932354e-09 * tc[3]
            +4.42994543e-13 * tc[4]
            -8.49032208e-01 ;
        /*species 8: HO2 */
        species[8] =
            +4.30179801e+00 * tc[0]
            -4.74912051e-03 * tc[1]
            +1.05791445e-05 * tc[2]
            -8.09212980e-09 * tc[3]
            +2.32306281e-12 * tc[4]
            +3.71666245e+00 ;
        /*species 9: H2O2 */
        species[9] =
            +4.27611269e+00 * tc[0]
            -5.42822417e-04 * tc[1]
            +8.36678505e-06 * tc[2]
            -7.19236043e-09 * tc[3]
            +2.15613591e-12 * tc[4]
            +3.43505074e+00 ;
        /*species 10: CO */
        species[10] =
            +3.57953347e+00 * tc[0]
            -6.10353680e-04 * tc[1]
            +5.08407165e-07 * tc[2]
            +3.02335295e-10 * tc[3]
            -2.26106125e-13 * tc[4]
            +3.50840928e+00 ;
        /*species 11: CO2 */
        species[11] =
            +2.35677352e+00 * tc[0]
            +8.98459677e-03 * tc[1]
            -3.56178134e-06 * tc[2]
            +8.19730073e-10 * tc[3]
            -3.59248870e-14 * tc[4]
            +9.90105222e+00 ;
        /*species 12: HCO */
        species[12] =
            +4.22118584e+00 * tc[0]
            -3.24392532e-03 * tc[1]
            +6.88997230e-06 * tc[2]
            -4.43813643e-09 * tc[3]
            +1.08442216e-12 * tc[4]
            +3.39437243e+00 ;
        /*species 13: CH2O */
        species[13] =
            +4.79372315e+00 * tc[0]
            -9.90833369e-03 * tc[1]
            +1.86610004e-05 * tc[2]
            -1.26428420e-08 * tc[3]
            +3.29431630e-12 * tc[4]
            +6.02812900e-01 ;
        /*species 14: CH4 */
        species[14] =
            +5.14987613e+00 * tc[0]
            -1.36709788e-02 * tc[1]
            +2.45900299e-05 * tc[2]
            -1.61581009e-08 * tc[3]
            +4.16734890e-12 * tc[4]
            -4.64130376e+00 ;
        /*species 15: CH3 */
        species[15] =
            +3.67359040e+00 * tc[0]
            +2.01095175e-03 * tc[1]
            +2.86510928e-06 * tc[2]
            -2.29039142e-09 * tc[3]
            +6.35964335e-13 * tc[4]
            +1.60456433e+00 ;
        /*species 16: T-CH2 */
        species[16] =
            +3.76267867e+00 * tc[0]
            +9.68872143e-04 * tc[1]
            +1.39744921e-06 * tc[2]
            -1.28363718e-09 * tc[3]
            +4.21854298e-13 * tc[4]
            +1.56253185e+00 ;
        /*species 17: S-CH2 */
        species[17] =
            +4.19860411e+00 * tc[0]
            -2.36661419e-03 * tc[1]
            +4.11648110e-06 * tc[2]
            -2.22938660e-09 * tc[3]
            +4.85786843e-13 * tc[4]
            -7.69118967e-01 ;
        /*species 18: C2H4 */
        species[18] =
            +3.95920148e+00 * tc[0]
            -7.57052247e-03 * tc[1]
            +2.85495146e-05 * tc[2]
            -2.30529584e-08 * tc[3]
            +6.74710933e-12 * tc[4]
            +4.09733096e+00 ;
        /*species 19: CH3O */
        species[19] =
            +3.71180502e+00 * tc[0]
            -2.80463306e-03 * tc[1]
            +1.88275486e-05 * tc[2]
            -1.57690696e-08 * tc[3]
            +4.66471050e-12 * tc[4]
            +6.57240864e+00 ;
        /*species 20: C2H5 */
        species[20] =
            +4.30646568e+00 * tc[0]
            -4.18658892e-03 * tc[1]
            +2.48571403e-05 * tc[2]
            -1.99708869e-08 * tc[3]
            +5.76272510e-12 * tc[4]
            +4.70720924e+00 ;
        /*species 21: C2H6 */
        species[21] =
            +4.29142492e+00 * tc[0]
            -5.50154270e-03 * tc[1]
            +2.99719144e-05 * tc[2]
            -2.36155428e-08 * tc[3]
            +6.71714427e-12 * tc[4]
            +2.66682316e+00 ;
        /*species 22: CH */
        species[22] =
            +3.48981665e+00 * tc[0]
            +3.23835541e-04 * tc[1]
            -8.44495325e-07 * tc[2]
            +1.05405776e-09 * tc[3]
            -3.51522668e-13 * tc[4]
            +2.08401108e+00 ;
        /*species 23: C2H2 */
        species[23] =
            +8.08681094e-01 * tc[0]
            +2.33615629e-02 * tc[1]
            -1.77585907e-05 * tc[2]
            +9.33841457e-09 * tc[3]
            -2.12518243e-12 * tc[4]
            +1.39397051e+01 ;
        /*species 24: C2H3 */
        species[24] =
            +3.21246645e+00 * tc[0]
            +1.51479162e-03 * tc[1]
            +1.29604706e-05 * tc[2]
            -1.19219282e-08 * tc[3]
            +3.67877182e-12 * tc[4]
            +8.51054025e+00 ;
        /*species 25: CH2CHO */
        species[25] =
            +1.01340010e+00 * tc[0]
            +2.26814670e-02 * tc[1]
            -7.86697200e-06 * tc[2]
            +1.34971677e-09 * tc[3]
            +7.39975300e-14 * tc[4]
            +1.93565520e+01 ;
        /*species 26: C2H4O */
        species[26] =
            +4.72945950e+00 * tc[0]
            -3.19328580e-03 * tc[1]
            +2.37674605e-05 * tc[2]
            -1.91528703e-08 * tc[3]
            +5.48277800e-12 * tc[4]
            +4.10301590e+00 ;
        /*species 27: CH2CO */
        species[27] =
            +2.13583630e+00 * tc[0]
            +1.81188721e-02 * tc[1]
            -8.69737370e-06 * tc[2]
            +3.11465856e-09 * tc[3]
            -5.03644037e-13 * tc[4]
            +1.22156480e+01 ;
        /*species 28: HCCO */
        species[28] =
            +2.25172140e+00 * tc[0]
            +1.76550210e-02 * tc[1]
            -1.18645505e-05 * tc[2]
            +5.75858633e-09 * tc[3]
            -1.26662028e-12 * tc[4]
            +1.24904170e+01 ;
        /*species 29: C2H */
        species[29] =
            +2.88965733e+00 * tc[0]
            +1.34099611e-02 * tc[1]
            -1.42384751e-05 * tc[2]
            +9.82636817e-09 * tc[3]
            -2.73328777e-12 * tc[4]
            +6.22296438e+00 ;
        /*species 30: CH2OH */
        species[30] =
            +4.47832317e+00 * tc[0]
            -1.35069687e-03 * tc[1]
            +1.39241853e-05 * tc[2]
            -1.21622466e-08 * tc[3]
            +3.69766938e-12 * tc[4]
            +3.30911984e+00 ;
        /*species 31: CH3OH */
        species[31] =
            +5.71539582e+00 * tc[0]
            -1.52309129e-02 * tc[1]
            +3.26220578e-05 * tc[2]
            -2.36935630e-08 * tc[3]
            +6.53381745e-12 * tc[4]
            -1.50409823e+00 ;
        /*species 32: C3H4 */
        species[32] =
            +2.61304450e+00 * tc[0]
            +1.21225750e-02 * tc[1]
            +9.26994000e-06 * tc[2]
            -1.15083830e-08 * tc[3]
            +3.83376975e-12 * tc[4]
            +1.02261390e+01 ;
        /*species 33: C3H3 */
        species[33] =
            +1.35110927e+00 * tc[0]
            +3.27411223e-02 * tc[1]
            -2.36913568e-05 * tc[2]
            +1.25436603e-08 * tc[3]
            -2.96352308e-12 * tc[4]
            +1.52058924e+01 ;
        /*species 34: C3H5 */
        species[34] =
            +1.36318350e+00 * tc[0]
            +1.98138210e-02 * tc[1]
            +6.24853000e-06 * tc[2]
            -1.11185183e-08 * tc[3]
            +3.96164275e-12 * tc[4]
            +1.71732140e+01 ;
        /*species 35: C3H6 */
        species[35] =
            +1.49330700e+00 * tc[0]
            +2.09251800e-02 * tc[1]
            +2.24339700e-06 * tc[2]
            -5.56304000e-09 * tc[3]
            +1.78953650e-12 * tc[4]
            +1.61453400e+01 ;
        /*species 36: C3H8 */
        species[36] =
            +9.28510930e-01 * tc[0]
            +2.64605660e-02 * tc[1]
            +3.01662230e-06 * tc[2]
            -7.30498433e-09 * tc[3]
            +2.37403860e-12 * tc[4]
            +1.92255380e+01 ;
        /*species 37: I-C3H7 */
        species[37] =
            +1.44491990e+00 * tc[0]
            +2.09991120e-02 * tc[1]
            +3.85181110e-06 * tc[2]
            -6.15875100e-09 * tc[3]
            +1.78207405e-12 * tc[4]
            +2.01163170e+01 ;
        /*species 38: N-C3H7 */
        species[38] =
            +1.04911730e+00 * tc[0]
            +2.60089730e-02 * tc[1]
            +1.17712580e-06 * tc[2]
            -6.53171067e-09 * tc[3]
            +2.34300518e-12 * tc[4]
            +2.11360340e+01 ;
    } else {
        /*species 0: N2 */
        species[0] =
            +2.92664000e+00 * tc[0]
            +1.48797680e-03 * tc[1]
            -2.84238000e-07 * tc[2]
            +3.36567933e-11 * tc[3]
            -1.68833775e-15 * tc[4]
            +5.98052800e+00 ;
        /*species 1: AR */
        species[1] =
            +2.50000000e+00 * tc[0]
            +0.00000000e+00 * tc[1]
            +0.00000000e+00 * tc[2]
            +0.00000000e+00 * tc[3]
            +0.00000000e+00 * tc[4]
            +4.36600000e+00 ;
        /*species 2: H */
        species[2] =
            +2.50000001e+00 * tc[0]
            -2.30842973e-11 * tc[1]
            +8.07809740e-15 * tc[2]
            -1.57838412e-18 * tc[3]
            +1.24549339e-22 * tc[4]
            -4.46682914e-01 ;
        /*species 3: O2 */
        species[3] =
            +3.28253784e+00 * tc[0]
            +1.48308754e-03 * tc[1]
            -3.78983334e-07 * tc[2]
            +6.98235183e-11 * tc[3]
            -5.41794485e-15 * tc[4]
            +5.45323129e+00 ;
        /*species 4: OH */
        species[4] =
            +2.86472886e+00 * tc[0]
            +1.05650448e-03 * tc[1]
            -1.29541379e-07 * tc[2]
            +1.01739558e-11 * tc[3]
            -3.32989690e-16 * tc[4]
            +5.70164073e+00 ;
        /*species 5: O */
        species[5] =
            +2.56942078e+00 * tc[0]
            -8.59741137e-05 * tc[1]
            +2.09742295e-08 * tc[2]
            -3.33925997e-12 * tc[3]
            +3.07084227e-16 * tc[4]
            +4.78433864e+00 ;
        /*species 6: H2 */
        species[6] =
            +3.33727920e+00 * tc[0]
            -4.94024731e-05 * tc[1]
            +2.49728389e-07 * tc[2]
            -5.98554647e-11 * tc[3]
            +5.00638440e-15 * tc[4]
            -3.20502331e+00 ;
        /*species 7: H2O */
        species[7] =
            +3.03399249e+00 * tc[0]
            +2.17691804e-03 * tc[1]
            -8.20362590e-08 * tc[2]
            -3.23473290e-11 * tc[3]
            +4.20502480e-15 * tc[4]
            +4.96677010e+00 ;
        /*species 8: HO2 */
        species[8] =
            +4.01721090e+00 * tc[0]
            +2.23982013e-03 * tc[1]
            -3.16829075e-07 * tc[2]
            +3.80821233e-11 * tc[3]
            -2.69771337e-15 * tc[4]
            +3.78510215e+00 ;
        /*species 9: H2O2 */
        species[9] =
            +4.16500285e+00 * tc[0]
            +4.90831694e-03 * tc[1]
            -9.50696125e-07 * tc[2]
            +1.23728662e-10 * tc[3]
            -7.19770763e-15 * tc[4]
            +2.91615662e+00 ;
        /*species 10: CO */
        species[10] =
            +2.71518561e+00 * tc[0]
            +2.06252743e-03 * tc[1]
            -4.99412886e-07 * tc[2]
            +7.66843360e-11 * tc[3]
            -5.09119290e-15 * tc[4]
            +7.81868772e+00 ;
        /*species 11: CO2 */
        species[11] =
            +3.85746029e+00 * tc[0]
            +4.41437026e-03 * tc[1]
            -1.10740702e-06 * tc[2]
            +1.74496729e-10 * tc[3]
            -1.18021041e-14 * tc[4]
            +2.27163806e+00 ;
        /*species 12: HCO */
        species[12] =
            +2.77217438e+00 * tc[0]
            +4.95695526e-03 * tc[1]
            -1.24222806e-06 * tc[2]
            +1.96387259e-10 * tc[3]
            -1.33377178e-14 * tc[4]
            +9.79834492e+00 ;
        /*species 13: CH2O */
        species[13] =
            +1.76069008e+00 * tc[0]
            +9.20000082e-03 * tc[1]
            -2.21129406e-06 * tc[2]
            +3.35470707e-10 * tc[3]
            -2.20963910e-14 * tc[4]
            +1.36563230e+01 ;
        /*species 14: CH4 */
        species[14] =
            +7.48514950e-02 * tc[0]
            +1.33909467e-02 * tc[1]
            -2.86642905e-06 * tc[2]
            +4.07641783e-10 * tc[3]
            -2.54538075e-14 * tc[4]
            +1.84373180e+01 ;
        /*species 15: CH3 */
        species[15] =
            +2.28571772e+00 * tc[0]
            +7.23990037e-03 * tc[1]
            -1.49357174e-06 * tc[2]
            +1.98561548e-10 * tc[3]
            -1.16788599e-14 * tc[4]
            +8.48007179e+00 ;
        /*species 16: T-CH2 */
        species[16] =
            +2.87410113e+00 * tc[0]
            +3.65639292e-03 * tc[1]
            -7.04472985e-07 * tc[2]
            +8.67265163e-11 * tc[3]
            -4.69318918e-15 * tc[4]
            +6.17119324e+00 ;
        /*species 17: S-CH2 */
        species[17] =
            +2.29203842e+00 * tc[0]
            +4.65588637e-03 * tc[1]
            -1.00595973e-06 * tc[2]
            +1.39302000e-10 * tc[3]
            -8.49290912e-15 * tc[4]
            +8.62650169e+00 ;
        /*species 18: C2H4 */
        species[18] =
            +2.03611116e+00 * tc[0]
            +1.46454151e-02 * tc[1]
            -3.35538958e-06 * tc[2]
            +4.90743077e-10 * tc[3]
            -3.14265152e-14 * tc[4]
            +1.03053693e+01 ;
        /*species 19: CH3O */
        species[19] =
            +4.75779238e+00 * tc[0]
            +7.44142474e-03 * tc[1]
            -1.34852588e-06 * tc[2]
            +1.46030168e-10 * tc[3]
            -6.58842745e-15 * tc[4]
            -1.96680028e+00 ;
        /*species 20: C2H5 */
        species[20] =
            +1.95465642e+00 * tc[0]
            +1.73972722e-02 * tc[1]
            -3.99103334e-06 * tc[2]
            +5.84058963e-10 * tc[3]
            -3.74103940e-14 * tc[4]
            +1.34624343e+01 ;
        /*species 21: C2H6 */
        species[21] =
            +1.07188150e+00 * tc[0]
            +2.16852677e-02 * tc[1]
            -5.01280335e-06 * tc[2]
            +7.38040003e-10 * tc[3]
            -4.75007225e-14 * tc[4]
            +1.51156107e+01 ;
        /*species 22: CH */
        species[22] =
            +2.87846473e+00 * tc[0]
            +9.70913681e-04 * tc[1]
            +7.22228275e-08 * tc[2]
            -4.35626163e-11 * tc[3]
            +4.40198457e-15 * tc[4]
            +5.48497999e+00 ;
        /*species 23: C2H2 */
        species[23] =
            +4.14756964e+00 * tc[0]
            +5.96166664e-03 * tc[1]
            -1.18647426e-06 * tc[2]
            +1.55804057e-10 * tc[3]
            -9.03088033e-15 * tc[4]
            -1.23028121e+00 ;
        /*species 24: C2H3 */
        species[24] =
            +3.01672400e+00 * tc[0]
            +1.03302292e-02 * tc[1]
            -2.34041174e-06 * tc[2]
            +3.39210960e-10 * tc[3]
            -2.15651760e-14 * tc[4]
            +7.78732378e+00 ;
        /*species 25: CH2CHO */
        species[25] =
            +5.16620060e+00 * tc[0]
            +1.08478260e-02 * tc[1]
            -2.23291840e-06 * tc[2]
            +2.68761827e-10 * tc[3]
            -1.21025483e-14 * tc[4]
            -1.96333610e+00 ;
        /*species 26: C2H4O */
        species[26] =
            +5.40411080e+00 * tc[0]
            +1.17230590e-02 * tc[1]
            -2.11315685e-06 * tc[2]
            +2.27908170e-10 * tc[3]
            -1.02462158e-14 * tc[4]
            -3.48079170e+00 ;
        /*species 27: CH2CO */
        species[27] =
            +4.51129732e+00 * tc[0]
            +9.00359745e-03 * tc[1]
            -2.08469817e-06 * tc[2]
            +3.07781961e-10 * tc[3]
            -1.98709550e-14 * tc[4]
            +6.32247205e-01 ;
        /*species 28: HCCO */
        species[28] =
            +5.62820580e+00 * tc[0]
            +4.08534010e-03 * tc[1]
            -7.96727350e-07 * tc[2]
            +9.54201733e-11 * tc[3]
            -4.85195800e-15 * tc[4]
            -3.93025950e+00 ;
        /*species 29: C2H */
        species[29] =
            +3.16780652e+00 * tc[0]
            +4.75221902e-03 * tc[1]
            -9.18935385e-07 * tc[2]
            +1.01396751e-10 * tc[3]
            -4.43081925e-15 * tc[4]
            +6.63589475e+00 ;
        /*species 30: CH2OH */
        species[30] =
            +5.09312037e+00 * tc[0]
            +5.94758550e-03 * tc[1]
            -1.03248262e-06 * tc[2]
            +1.07668901e-10 * tc[3]
            -4.70312630e-15 * tc[4]
            -1.84690613e+00 ;
        /*species 31: CH3OH */
        species[31] =
            +1.78970791e+00 * tc[0]
            +1.40938292e-02 * tc[1]
            -3.18250418e-06 * tc[2]
            +4.60570283e-10 * tc[3]
            -2.92650550e-14 * tc[4]
            +1.45023623e+01 ;
        /*species 32: C3H4 */
        species[32] =
            +6.31687220e+00 * tc[0]
            +1.11337280e-02 * tc[1]
            -1.98146890e-06 * tc[2]
            +2.11880793e-10 * tc[3]
            -9.46888500e-15 * tc[4]
            -1.09957660e+01 ;
        /*species 33: C3H3 */
        species[33] =
            +7.14221880e+00 * tc[0]
            +7.61902005e-03 * tc[1]
            -1.33729975e-06 * tc[2]
            +1.41638267e-10 * tc[3]
            -6.28688537e-15 * tc[4]
            -1.25848436e+01 ;
        /*species 34: C3H5 */
        species[34] =
            +6.50078770e+00 * tc[0]
            +1.43247310e-02 * tc[1]
            -2.83908160e-06 * tc[2]
            +3.69360033e-10 * tc[3]
            -2.25909717e-14 * tc[4]
            -1.12430500e+01 ;
        /*species 35: C3H6 */
        species[35] =
            +6.73225700e+00 * tc[0]
            +1.49083400e-02 * tc[1]
            -2.47494950e-06 * tc[2]
            +2.40400733e-10 * tc[3]
            -9.41551000e-15 * tc[4]
            -1.33133500e+01 ;
        /*species 36: C3H8 */
        species[36] =
            +7.52441520e+00 * tc[0]
            +1.88982820e-02 * tc[1]
            -3.14605205e-06 * tc[2]
            +3.07204857e-10 * tc[3]
            -1.21711195e-14 * tc[4]
            -1.78383750e+01 ;
        /*species 37: I-C3H7 */
        species[37] =
            +6.51927410e+00 * tc[0]
            +1.72201040e-02 * tc[1]
            -2.86821085e-06 * tc[2]
            +2.80435773e-10 * tc[3]
            -1.11414782e-14 * tc[4]
            -9.08302150e+00 ;
        /*species 38: N-C3H7 */
        species[38] =
            +7.70974790e+00 * tc[0]
            +1.60314850e-02 * tc[1]
            -2.63601190e-06 * tc[2]
            +2.52961173e-10 * tc[3]
            -9.71567975e-15 * tc[4]
            -1.55152970e+01 ;
    }
    return;
}


/*save molecular weights into array */
void molecularWeight(double * wt)
{
    wt[0] = 28.013400; /*N2 */
    wt[1] = 39.948000; /*AR */
    wt[2] = 1.007970; /*H */
    wt[3] = 31.998800; /*O2 */
    wt[4] = 17.007370; /*OH */
    wt[5] = 15.999400; /*O */
    wt[6] = 2.015940; /*H2 */
    wt[7] = 18.015340; /*H2O */
    wt[8] = 33.006770; /*HO2 */
    wt[9] = 34.014740; /*H2O2 */
    wt[10] = 28.010550; /*CO */
    wt[11] = 44.009950; /*CO2 */
    wt[12] = 29.018520; /*HCO */
    wt[13] = 30.026490; /*CH2O */
    wt[14] = 16.043030; /*CH4 */
    wt[15] = 15.035060; /*CH3 */
    wt[16] = 14.027090; /*T-CH2 */
    wt[17] = 14.027090; /*S-CH2 */
    wt[18] = 28.054180; /*C2H4 */
    wt[19] = 31.034460; /*CH3O */
    wt[20] = 29.062150; /*C2H5 */
    wt[21] = 30.070120; /*C2H6 */
    wt[22] = 13.019120; /*CH */
    wt[23] = 26.038240; /*C2H2 */
    wt[24] = 27.046210; /*C2H3 */
    wt[25] = 43.045610; /*CH2CHO */
    wt[26] = 44.053580; /*C2H4O */
    wt[27] = 42.037640; /*CH2CO */
    wt[28] = 41.029670; /*HCCO */
    wt[29] = 25.030270; /*C2H */
    wt[30] = 31.034460; /*CH2OH */
    wt[31] = 32.042430; /*CH3OH */
    wt[32] = 40.065330; /*C3H4 */
    wt[33] = 39.057360; /*C3H3 */
    wt[34] = 41.073300; /*C3H5 */
    wt[35] = 42.081270; /*C3H6 */
    wt[36] = 44.097210; /*C3H8 */
    wt[37] = 43.089240; /*I-C3H7 */
    wt[38] = 43.089240; /*N-C3H7 */

    return;
}


/*get temperature given internal energy in mass units and mass fracs */
int feeytt_(double * e, double * y, int * iwrk, double * rwrk, double * t)
{
    const int maxiter = 50;
    const double tol  = 0.001;
    double ein  = *e;
    double tmin = 300; // max lower bound for thermo def
    double tmax = 3000; // min upper bound for thermo def
    double e1,emin,emax,cv,t1,dt;
    int i; // loop counter
    CKUBMS(&tmin, y, iwrk, rwrk, &emin);
    CKUBMS(&tmax, y, iwrk, rwrk, &emax);
    if (ein < emin) {
        /*Linear Extrapolation below tmin */
        CKCVBS(&tmin, y, iwrk, rwrk, &cv);
        *t = tmin - (emin-ein)/cv;
        return 1;
    }
    if (ein > emax) {
        /*Linear Extrapolation above tmax */
        CKCVBS(&tmax, y, iwrk, rwrk, &cv);
        *t = tmax - (emax-ein)/cv;
        return 1;
    }
    t1 = tmin + (tmax-tmin)/(emax-emin)*(ein-emin);
    for (i = 0; i < maxiter; ++i) {
        CKUBMS(&t1,y,iwrk,rwrk,&e1);
        CKCVBS(&t1,y,iwrk,rwrk,&cv);
        dt = (ein - e1) / cv;
        if (dt > 100) { dt = 100; }
        else if (dt < -100) { dt = -100; }
        else if (fabs(dt) < tol) break;
        t1 += dt;
    }
    *t = t1;
    return 0;
}


/*convert phi[species] (specific mole nums) to y[species] (mass fracs) */
void fephity_(double * phi, int * iwrk, double * rwrk, double * y)
{
    double XW  = 0; 
    int id; /*loop counter */
    /*Compute mean molecular wt first */
    y[0] = phi[0]*28.013400;   XW += y[0]; /*N2 */
    y[1] = phi[1]*39.948000;   XW += y[1]; /*AR */
    y[2] = phi[2]*1.007970;   XW += y[2]; /*H */
    y[3] = phi[3]*31.998800;   XW += y[3]; /*O2 */
    y[4] = phi[4]*17.007370;   XW += y[4]; /*OH */
    y[5] = phi[5]*15.999400;   XW += y[5]; /*O */
    y[6] = phi[6]*2.015940;   XW += y[6]; /*H2 */
    y[7] = phi[7]*18.015340;   XW += y[7]; /*H2O */
    y[8] = phi[8]*33.006770;   XW += y[8]; /*HO2 */
    y[9] = phi[9]*34.014740;   XW += y[9]; /*H2O2 */
    y[10] = phi[10]*28.010550;   XW += y[10]; /*CO */
    y[11] = phi[11]*44.009950;   XW += y[11]; /*CO2 */
    y[12] = phi[12]*29.018520;   XW += y[12]; /*HCO */
    y[13] = phi[13]*30.026490;   XW += y[13]; /*CH2O */
    y[14] = phi[14]*16.043030;   XW += y[14]; /*CH4 */
    y[15] = phi[15]*15.035060;   XW += y[15]; /*CH3 */
    y[16] = phi[16]*14.027090;   XW += y[16]; /*T-CH2 */
    y[17] = phi[17]*14.027090;   XW += y[17]; /*S-CH2 */
    y[18] = phi[18]*28.054180;   XW += y[18]; /*C2H4 */
    y[19] = phi[19]*31.034460;   XW += y[19]; /*CH3O */
    y[20] = phi[20]*29.062150;   XW += y[20]; /*C2H5 */
    y[21] = phi[21]*30.070120;   XW += y[21]; /*C2H6 */
    y[22] = phi[22]*13.019120;   XW += y[22]; /*CH */
    y[23] = phi[23]*26.038240;   XW += y[23]; /*C2H2 */
    y[24] = phi[24]*27.046210;   XW += y[24]; /*C2H3 */
    y[25] = phi[25]*43.045610;   XW += y[25]; /*CH2CHO */
    y[26] = phi[26]*44.053580;   XW += y[26]; /*C2H4O */
    y[27] = phi[27]*42.037640;   XW += y[27]; /*CH2CO */
    y[28] = phi[28]*41.029670;   XW += y[28]; /*HCCO */
    y[29] = phi[29]*25.030270;   XW += y[29]; /*C2H */
    y[30] = phi[30]*31.034460;   XW += y[30]; /*CH2OH */
    y[31] = phi[31]*32.042430;   XW += y[31]; /*CH3OH */
    y[32] = phi[32]*40.065330;   XW += y[32]; /*C3H4 */
    y[33] = phi[33]*39.057360;   XW += y[33]; /*C3H3 */
    y[34] = phi[34]*41.073300;   XW += y[34]; /*C3H5 */
    y[35] = phi[35]*42.081270;   XW += y[35]; /*C3H6 */
    y[36] = phi[36]*44.097210;   XW += y[36]; /*C3H8 */
    y[37] = phi[37]*43.089240;   XW += y[37]; /*I-C3H7 */
    y[38] = phi[38]*43.089240;   XW += y[38]; /*N-C3H7 */
    for (id = 0; id < 39; ++id) {
        y[id] = y[id]/XW;
    }

    return;
}


/*convert y[species] (mass fracs) to phi[species] (specific mole num) */
void feytphi_(double * y, int * iwrk, double * rwrk, double * phi)
{
    phi[0] = y[0]/ 2.80134000e-02; /*N2 (wt in kg) */
    phi[1] = y[1]/ 3.99480000e-02; /*AR (wt in kg) */
    phi[2] = y[2]/ 1.00797000e-03; /*H (wt in kg) */
    phi[3] = y[3]/ 3.19988000e-02; /*O2 (wt in kg) */
    phi[4] = y[4]/ 1.70073700e-02; /*OH (wt in kg) */
    phi[5] = y[5]/ 1.59994000e-02; /*O (wt in kg) */
    phi[6] = y[6]/ 2.01594000e-03; /*H2 (wt in kg) */
    phi[7] = y[7]/ 1.80153400e-02; /*H2O (wt in kg) */
    phi[8] = y[8]/ 3.30067700e-02; /*HO2 (wt in kg) */
    phi[9] = y[9]/ 3.40147400e-02; /*H2O2 (wt in kg) */
    phi[10] = y[10]/ 2.80105500e-02; /*CO (wt in kg) */
    phi[11] = y[11]/ 4.40099500e-02; /*CO2 (wt in kg) */
    phi[12] = y[12]/ 2.90185200e-02; /*HCO (wt in kg) */
    phi[13] = y[13]/ 3.00264900e-02; /*CH2O (wt in kg) */
    phi[14] = y[14]/ 1.60430300e-02; /*CH4 (wt in kg) */
    phi[15] = y[15]/ 1.50350600e-02; /*CH3 (wt in kg) */
    phi[16] = y[16]/ 1.40270900e-02; /*T-CH2 (wt in kg) */
    phi[17] = y[17]/ 1.40270900e-02; /*S-CH2 (wt in kg) */
    phi[18] = y[18]/ 2.80541800e-02; /*C2H4 (wt in kg) */
    phi[19] = y[19]/ 3.10344600e-02; /*CH3O (wt in kg) */
    phi[20] = y[20]/ 2.90621500e-02; /*C2H5 (wt in kg) */
    phi[21] = y[21]/ 3.00701200e-02; /*C2H6 (wt in kg) */
    phi[22] = y[22]/ 1.30191200e-02; /*CH (wt in kg) */
    phi[23] = y[23]/ 2.60382400e-02; /*C2H2 (wt in kg) */
    phi[24] = y[24]/ 2.70462100e-02; /*C2H3 (wt in kg) */
    phi[25] = y[25]/ 4.30456100e-02; /*CH2CHO (wt in kg) */
    phi[26] = y[26]/ 4.40535800e-02; /*C2H4O (wt in kg) */
    phi[27] = y[27]/ 4.20376400e-02; /*CH2CO (wt in kg) */
    phi[28] = y[28]/ 4.10296700e-02; /*HCCO (wt in kg) */
    phi[29] = y[29]/ 2.50302700e-02; /*C2H (wt in kg) */
    phi[30] = y[30]/ 3.10344600e-02; /*CH2OH (wt in kg) */
    phi[31] = y[31]/ 3.20424300e-02; /*CH3OH (wt in kg) */
    phi[32] = y[32]/ 4.00653300e-02; /*C3H4 (wt in kg) */
    phi[33] = y[33]/ 3.90573600e-02; /*C3H3 (wt in kg) */
    phi[34] = y[34]/ 4.10733000e-02; /*C3H5 (wt in kg) */
    phi[35] = y[35]/ 4.20812700e-02; /*C3H6 (wt in kg) */
    phi[36] = y[36]/ 4.40972100e-02; /*C3H8 (wt in kg) */
    phi[37] = y[37]/ 4.30892400e-02; /*I-C3H7 (wt in kg) */
    phi[38] = y[38]/ 4.30892400e-02; /*N-C3H7 (wt in kg) */

    return;
}


/*reverse of ytcr, useful for rate computations */
void fectyr_(double * c, double * rho, int * iwrk, double * rwrk, double * y)
{
    y[0] = c[0] * 28.013400 / (*rho); 
    y[1] = c[1] * 39.948000 / (*rho); 
    y[2] = c[2] * 1.007970 / (*rho); 
    y[3] = c[3] * 31.998800 / (*rho); 
    y[4] = c[4] * 17.007370 / (*rho); 
    y[5] = c[5] * 15.999400 / (*rho); 
    y[6] = c[6] * 2.015940 / (*rho); 
    y[7] = c[7] * 18.015340 / (*rho); 
    y[8] = c[8] * 33.006770 / (*rho); 
    y[9] = c[9] * 34.014740 / (*rho); 
    y[10] = c[10] * 28.010550 / (*rho); 
    y[11] = c[11] * 44.009950 / (*rho); 
    y[12] = c[12] * 29.018520 / (*rho); 
    y[13] = c[13] * 30.026490 / (*rho); 
    y[14] = c[14] * 16.043030 / (*rho); 
    y[15] = c[15] * 15.035060 / (*rho); 
    y[16] = c[16] * 14.027090 / (*rho); 
    y[17] = c[17] * 14.027090 / (*rho); 
    y[18] = c[18] * 28.054180 / (*rho); 
    y[19] = c[19] * 31.034460 / (*rho); 
    y[20] = c[20] * 29.062150 / (*rho); 
    y[21] = c[21] * 30.070120 / (*rho); 
    y[22] = c[22] * 13.019120 / (*rho); 
    y[23] = c[23] * 26.038240 / (*rho); 
    y[24] = c[24] * 27.046210 / (*rho); 
    y[25] = c[25] * 43.045610 / (*rho); 
    y[26] = c[26] * 44.053580 / (*rho); 
    y[27] = c[27] * 42.037640 / (*rho); 
    y[28] = c[28] * 41.029670 / (*rho); 
    y[29] = c[29] * 25.030270 / (*rho); 
    y[30] = c[30] * 31.034460 / (*rho); 
    y[31] = c[31] * 32.042430 / (*rho); 
    y[32] = c[32] * 40.065330 / (*rho); 
    y[33] = c[33] * 39.057360 / (*rho); 
    y[34] = c[34] * 41.073300 / (*rho); 
    y[35] = c[35] * 42.081270 / (*rho); 
    y[36] = c[36] * 44.097210 / (*rho); 
    y[37] = c[37] * 43.089240 / (*rho); 
    y[38] = c[38] * 43.089240 / (*rho); 

    return;
}


/*ddebdf compatible right hand side of CV burner */
/*rwrk[0] and rwrk[1] should contain rho and ene respectively */
/*working variable phi contains specific mole numbers */
void fecvrhs_(double * time, double * phi, double * phidot, double * rwrk, int * iwrk)
{
    double rho,ene; /*CV Parameters */
    double y[39], wdot[39]; /*temporary storage */
    int i; /*Loop counter */
    double temperature,pressure; /*temporary var */
    rho = rwrk[0];
    ene = rwrk[1];
    fephity_(phi, iwrk, rwrk, y);
    feeytt_(&ene, y, iwrk, rwrk, &temperature);
    CKPY(&rho, &temperature,  y, iwrk, rwrk, &pressure);
    CKWYP(&pressure, &temperature,  y, iwrk, rwrk, wdot);
    for (i=0; i<39; ++i) phidot[i] = wdot[i] / (rho/1000.0); 

    return;
}


/*returns the dimensionality of the cv burner (number of species) */
int fecvdim_()
{
    return 39;
}


/*ddebdf compatible right hand side of ZND solver */
/*rwrk[0] : scaling factor for pressure */
/*rwrk[1] : preshock density (g/cc)  */
/*rwrk[2] : detonation velocity (cm/s)  */
/*solution vector: [P; rho; y0 ... ylast]  */
void fezndrhs_(double * time, double * z, double * zdot, double * rwrk, int * iwrk)
{
    double psc,rho1,udet; /*ZND Parameters */
    double wt[39], hms[39], wdot[39]; /*temporary storage */
    int i; /*Loop counter */
    /*temporary variables */
    double ru, T, uvel, wtm, p, rho, gam, son, xm, sum, drdy, eta, cp, cv ;
    double *y; /*mass frac pointer */

    ru = 8.31451e+07;

    psc = rwrk[0];
    rho1 = rwrk[1];
    udet = rwrk[2];

    p = z[0] * psc;
    rho = z[1];

    y = &z[3];

    CKMMWY(y, 0, 0, &wtm);

    T = p * wtm / rho / ru;

    uvel = (rho1 * udet)/ rho;

    CKCPBS(&T, y, 0, 0, &cp);
    CKCVBS(&T, y, 0, 0, &cv);
    gam = cp/cv;

    son = sqrt(fabs(gam*ru*T/wtm));
    xm = uvel/son;

    CKHMS(&T, 0, 0, hms);
    CKWT(0, 0, wt);
    CKWYP(&p, &T, y, 0, 0, wdot);

    sum = 0.0;
    for (i=0; i<39; ++i) {
        zdot[i+3] = wdot[i] * wt[i] / rho;
        drdy = -rho * wtm / wt[i];
        sum += -( drdy + rho * hms[i]/ (cp*T) ) * zdot[i+3];
    }

    eta = 1.0 - xm*xm;
    zdot[0] = -(uvel*uvel/eta/psc)*sum;
    zdot[1] = -sum/eta;
    zdot[2] = uvel;

    return;
}


/*returns the dimensionality of the ZND solver (3+number of species) */
int feznddim_()
{
    return 42;
}


/*returns the name of the source mechanism file  */
char* femechfile_()
{
    return "";
}


/*returns the species number */
int fesymnum_(const char* s1)
{
    if (strcmp(s1, "N2")==0) return 0; 
    if (strcmp(s1, "AR")==0) return 1; 
    if (strcmp(s1, "H")==0) return 2; 
    if (strcmp(s1, "O2")==0) return 3; 
    if (strcmp(s1, "OH")==0) return 4; 
    if (strcmp(s1, "O")==0) return 5; 
    if (strcmp(s1, "H2")==0) return 6; 
    if (strcmp(s1, "H2O")==0) return 7; 
    if (strcmp(s1, "HO2")==0) return 8; 
    if (strcmp(s1, "H2O2")==0) return 9; 
    if (strcmp(s1, "CO")==0) return 10; 
    if (strcmp(s1, "CO2")==0) return 11; 
    if (strcmp(s1, "HCO")==0) return 12; 
    if (strcmp(s1, "CH2O")==0) return 13; 
    if (strcmp(s1, "CH4")==0) return 14; 
    if (strcmp(s1, "CH3")==0) return 15; 
    if (strcmp(s1, "T-CH2")==0) return 16; 
    if (strcmp(s1, "S-CH2")==0) return 17; 
    if (strcmp(s1, "C2H4")==0) return 18; 
    if (strcmp(s1, "CH3O")==0) return 19; 
    if (strcmp(s1, "C2H5")==0) return 20; 
    if (strcmp(s1, "C2H6")==0) return 21; 
    if (strcmp(s1, "CH")==0) return 22; 
    if (strcmp(s1, "C2H2")==0) return 23; 
    if (strcmp(s1, "C2H3")==0) return 24; 
    if (strcmp(s1, "CH2CHO")==0) return 25; 
    if (strcmp(s1, "C2H4O")==0) return 26; 
    if (strcmp(s1, "CH2CO")==0) return 27; 
    if (strcmp(s1, "HCCO")==0) return 28; 
    if (strcmp(s1, "C2H")==0) return 29; 
    if (strcmp(s1, "CH2OH")==0) return 30; 
    if (strcmp(s1, "CH3OH")==0) return 31; 
    if (strcmp(s1, "C3H4")==0) return 32; 
    if (strcmp(s1, "C3H3")==0) return 33; 
    if (strcmp(s1, "C3H5")==0) return 34; 
    if (strcmp(s1, "C3H6")==0) return 35; 
    if (strcmp(s1, "C3H8")==0) return 36; 
    if (strcmp(s1, "I-C3H7")==0) return 37; 
    if (strcmp(s1, "N-C3H7")==0) return 38; 
    /*species name not found */
    return -1;
}


/*returns the species name */
char* fesymname_(int sn)
{
    if (sn==0) return "N2"; 
    if (sn==1) return "AR"; 
    if (sn==2) return "H"; 
    if (sn==3) return "O2"; 
    if (sn==4) return "OH"; 
    if (sn==5) return "O"; 
    if (sn==6) return "H2"; 
    if (sn==7) return "H2O"; 
    if (sn==8) return "HO2"; 
    if (sn==9) return "H2O2"; 
    if (sn==10) return "CO"; 
    if (sn==11) return "CO2"; 
    if (sn==12) return "HCO"; 
    if (sn==13) return "CH2O"; 
    if (sn==14) return "CH4"; 
    if (sn==15) return "CH3"; 
    if (sn==16) return "T-CH2"; 
    if (sn==17) return "S-CH2"; 
    if (sn==18) return "C2H4"; 
    if (sn==19) return "CH3O"; 
    if (sn==20) return "C2H5"; 
    if (sn==21) return "C2H6"; 
    if (sn==22) return "CH"; 
    if (sn==23) return "C2H2"; 
    if (sn==24) return "C2H3"; 
    if (sn==25) return "CH2CHO"; 
    if (sn==26) return "C2H4O"; 
    if (sn==27) return "CH2CO"; 
    if (sn==28) return "HCCO"; 
    if (sn==29) return "C2H"; 
    if (sn==30) return "CH2OH"; 
    if (sn==31) return "CH3OH"; 
    if (sn==32) return "C3H4"; 
    if (sn==33) return "C3H3"; 
    if (sn==34) return "C3H5"; 
    if (sn==35) return "C3H6"; 
    if (sn==36) return "C3H8"; 
    if (sn==37) return "I-C3H7"; 
    if (sn==38) return "N-C3H7"; 
    /*species name not found */
    return "NOTFOUND";
}

/* End of file  */




#if 0




\\
\\
\\  This is the mechanism file
\\
\\
ELEMENTS
N  AR H  O  C  
END
SPECIES
N2       AR       H        O2       OH       O        H2       H2O      
HO2      H2O2     CO       CO2      HCO      CH2O     CH4      CH3      
T-CH2    S-CH2    C2H4     CH3O     C2H5     C2H6     CH       C2H2     
C2H3     CH2CHO   C2H4O    CH2CO    HCCO     C2H      CH2OH    CH3OH    
C3H4     C3H3     C3H5     C3H6     C3H8     I-C3H7   N-C3H7   
END
REACTIONS
H+O2<=>OH+O                              3.520e+16   -0.700  17069.79
H2+O<=>OH+H                              5.060e+04    2.670   6290.63
H2+OH<=>H2O+H                            1.170e+09    1.300   3635.28
H2O+O<=>2 OH                             7.600e+00    3.840  12779.64
H+O+M<=>OH+M                             6.200e+16   -0.600      0.00
H2/2.50/ H2O/12.00/ 
CO/1.90/ CO2/3.80/ 


H2+O2<=>2 OH                             1.700e+13    0.000  47813.10
2 H+M<=>H2+M                             7.200e+17   -1.000      0.00
H2/2.50/ H2O/16.30/ 
CO/1.90/ CO2/3.80/ 


H+OH+M<=>H2O+M                           3.800e+22   -2.000      0.00
H2/2.50/ H2O/12.00/ 
CO/1.90/ CO2/3.80/ 


2 O+M<=>O2+M                             6.170e+15   -0.500      0.00
H2/2.50/ H2O/12.00/ 
CO/1.90/ CO2/3.80/ 


H+O2(+M)<=>HO2(+M)                       4.650e+12    0.440      0.00
AR/0.50/ O2/0.30/ H2O/7.00/ 
CO/0.75/ CO2/1.50/ 
C2H6/1.50/ 


     LOW  /  2.600e+19   -1.200      0.00 /
     TROE/       0   345.00      1.00    345.00 /
O+OH+M<=>HO2+M                           1.000e+16    0.000      0.00



HO2+H<=>2 OH                             7.080e+13    0.000    299.95
HO2+H<=>H2+O2                            4.280e+13    0.000   1410.13
HO2+H<=>H2O+O                            3.100e+13    0.000   1720.84
HO2+O<=>OH+O2                            2.000e+13    0.000      0.00
HO2+OH<=>H2O+O2                          2.890e+13    0.000   -497.13
2 OH(+M)<=>H2O2(+M)                      7.400e+13   -0.370      0.00
AR/0.70/ H2/2.00/ H2O/6.00/ 
CO/1.50/ CO2/2.00/ CH4/2.00/ 
C2H6/3.00/ 


     LOW  /  1.340e+17   -0.584  -2294.46 /
     TROE/   0.735    94.00   1756.00   5182.00 /
2 HO2<=>H2O2+O2                          3.020e+12    0.000   1386.23
H2O2+H<=>HO2+H2                          4.790e+13    0.000   7958.89
H2O2+H<=>H2O+OH                          1.000e+13    0.000   3585.09
H2O2+OH<=>H2O+HO2                        7.080e+12    0.000   1434.03
H2O2+O<=>HO2+OH                          9.630e+06    2.000   3991.40
CO+OH<=>CO2+H                            4.400e+06    1.500   -740.92
CO+HO2<=>CO2+OH                          6.030e+13    0.000  22944.55
HCO+M<=>CO+H+M                           1.860e+17   -1.000  17000.48
H2/1.90/ H2O/12.00/ 
CO/2.50/ CO2/2.50/ 


HCO+H<=>CO+H2                            1.000e+14    0.000      0.00
HCO+O<=>CO+OH                            3.000e+13    0.000      0.00
HCO+O<=>CO2+H                            3.000e+13    0.000      0.00
HCO+OH<=>CO+H2O                          5.020e+13    0.000      0.00
HCO+O2<=>CO+HO2                          3.000e+12    0.000      0.00
CH2O+M<=>HCO+H+M                         6.260e+16    0.000  77915.87
H2/2.50/ H2O/16.30/ 
CO/1.90/ CO2/3.80/ 


CH2O+H<=>HCO+H2                          1.260e+08    1.620   2165.39
CH2O+O<=>HCO+OH                          3.500e+13    0.000   3513.38
CH2O+OH<=>HCO+H2O                        3.900e+10    0.890    406.31
CH4+H<=>H2+CH3                           1.300e+04    3.000   8037.76
CH4+OH<=>H2O+CH3                         1.600e+07    1.830   2782.03
CH4+O<=>CH3+OH                           1.900e+09    1.440   8675.91
CH4+O2<=>CH3+HO2                         3.980e+13    0.000  56890.54
CH4+HO2<=>CH3+H2O2                       9.030e+12    0.000  24641.49
CH3+H<=>T-CH2+H2                         1.800e+14    0.000  15105.16
CH3+H<=>S-CH2+H2                         1.550e+14    0.000  13479.92
CH3+OH<=>S-CH2+H2O                       1.000e+13    0.000   2502.39
CH3+O<=>CH2O+H                           8.430e+13    0.000      0.00
CH3+T-CH2<=>C2H4+H                       4.220e+13    0.000      0.00
CH3+HO2<=>CH3O+OH                        5.000e+12    0.000      0.00
CH3+O2<=>CH2O+OH                         3.300e+11    0.000   8941.20
CH3+O2<=>CH3O+O                          1.330e+14    0.000  31405.35
2 CH3<=>C2H4+H2                          1.000e+14    0.000  32002.87
2 CH3<=>C2H5+H                           3.160e+13    0.000  14698.85
CH3+H(+M)<=>CH4(+M)                      2.110e+14    0.000      0.00

     LOW  /  6.260e+23   -1.800      0.00 /
     TROE/    0.37  3315.00     61.00        /
2 CH3(+M)<=>C2H6(+M)                     1.810e+13    0.000      0.00

     LOW  /  1.270e+41   -7.000   2762.91 /
     TROE/    0.62    73.00   1180.00        /

S-CH2+OH<=>CH2O+H                        3.000e+13    0.000      0.00
S-CH2+O2<=>CO+OH+H                       3.130e+13    0.000      0.00
S-CH2+CO2<=>CO+CH2O                      3.000e+12    0.000      0.00
S-CH2+M<=>T-CH2+M                        6.000e+12    0.000      0.00
H2/2.40/ H2O/15.40/ 
CO/1.80/ CO2/3.60/ 


T-CH2+H<=>CH+H2                          6.020e+12    0.000  -1787.76
T-CH2+OH<=>CH2O+H                        2.500e+13    0.000      0.00
T-CH2+OH<=>CH+H2O                        1.130e+07    2.000   2999.52
T-CH2+O<=>CO+2H                          8.000e+13    0.000      0.00
T-CH2+O<=>CO+H2                          4.000e+13    0.000      0.00
T-CH2+O2<=>CO2+H2                        2.630e+12    0.000   1491.40
T-CH2+O2<=>CO+OH+H                       6.580e+12    0.000   1491.40
2 T-CH2<=>C2H2+2H                        1.000e+14    0.000      0.00
CH+O<=>CO+H                              4.000e+13    0.000      0.00
CH+O2<=>HCO+O                            1.770e+11    0.760   -478.01
CH+H2O<=>CH2O+H                          1.170e+15   -0.750      0.00
CH+CO2<=>HCO+CO                          4.800e+01    3.220  -3226.58


CH3O+H<=>CH2O+H2                         2.000e+13    0.000      0.00
CH3O+H<=>S-CH2+H2O                       1.600e+13    0.000      0.00
CH3O+OH<=>CH2O+H2O                       5.000e+12    0.000      0.00
CH3O+O<=>OH+CH2O                         1.000e+13    0.000      0.00
CH3O+O2<=>CH2O+HO2                       4.280e-13    7.600  -3537.28
CH3O+M<=>CH2O+H+M                        1.000e+13    0.000  13503.82

C2H6+H<=>C2H5+H2                         5.400e+02    3.500   5210.33
C2H6+O<=>C2H5+OH                         1.400e+00    4.300   2772.47
C2H6+OH<=>C2H5+H2O                       2.200e+07    1.900   1123.33
C2H6+CH3<=>C2H5+CH4                      5.500e-01    4.000   8293.50
C2H6(+M)<=>C2H5+H(+M)                    8.850e+20   -1.230 102222.75

     LOW  /  4.900e+42   -6.430 107170.17 /
     TROE/    0.84   125.00   2219.00   6882.00 /
C2H5+H<=>C2H4+H2                         3.000e+13    0.000      0.00
C2H5+O<=>C2H4+OH                         3.060e+13    0.000      0.00
C2H5+O<=>CH3+CH2O                        4.240e+13    0.000      0.00
C2H5+O2<=>C2H4+HO2                       2.000e+12    0.000   4995.22
C2H5(+M)<=>C2H4+H(+M)                    1.110e+10    1.037  36768.64
     LOW  /  3.990e+33   -4.990  40000.00 /
     TROE/   0.168  1203.00      0.00        /
C2H4+H<=>C2H3+H2                         4.490e+07    2.120  13360.42
C2H4+OH<=>C2H3+H2O                       5.530e+05    2.310   2963.67
C2H4+O<=>CH3+HCO                         2.250e+06    2.080      0.00
C2H4+O<=>CH2CHO+H                        1.210e+06    2.080      0.00
2 C2H4<=>C2H3+C2H5                       5.010e+14    0.000  64700.05
C2H4+O2<=>C2H3+HO2                       4.220e+13    0.000  57623.09
C2H4+HO2<=>C2H4O+OH                      2.230e+12    0.000  17189.29
C2H4O+HO2<=>CH3+CO+H2O2                  4.000e+12    0.000  17007.65
C2H4+M<=>C2H3+H+M                        2.600e+17    0.000  96568.12

C2H4+M<=>C2H2+H2+M                       3.500e+16    0.000  71532.03

C2H3+H<=>C2H2+H2                         1.210e+13    0.000      0.00
C2H3(+M)<=>C2H2+H(+M)                    6.380e+09    1.000  37626.67


     LOW  /  1.510e+14    0.100  32686.42 /
     TROE/   0.3 1e+30   1e-30     /
C2H3+O2<=>CH2O+HCO                       1.700e+29   -5.312   6503.11
C2H3+O2<=>CH2CHO+O                       7.000e+14   -0.611   5262.43
C2H3+O2<=>C2H2+HO2                       5.190e+15   -1.260   3312.62
CH2CHO<=>CH2CO+H                         1.047e+37   -7.189  44340.34
C2H2+O<=>HCCO+H                          4.000e+14    0.000  10659.66
C2H2+O<=>T-CH2+CO                        1.600e+14    0.000   9894.84
C2H2+O2<=>CH2O+CO                        4.600e+15   -0.540  44933.08
C2H2+OH<=>CH2CO+H                        1.900e+07    1.700    999.04
C2H2+OH<=>C2H+H2O                        3.370e+07    2.000  14000.96
CH2CO+H<=>CH3+CO                         1.500e+09    1.430   2688.81
CH2CO+O<=>T-CH2+CO2                      2.000e+13    0.000   2294.46
CH2CO+O<=>HCCO+OH                        1.000e+13    0.000   2000.48
CH2CO+CH3<=>C2H5+CO                      9.000e+10    0.000      0.00
HCCO+H<=>S-CH2+CO                        1.500e+14    0.000      0.00
HCCO+OH<=>HCO+CO+H                       2.000e+12    0.000      0.00
HCCO+O<=>2 CO+H                          9.640e+13    0.000      0.00
HCCO+O2<=>2 CO+OH                        2.880e+07    1.700   1001.43
HCCO+O2<=>CO2+CO+H                       1.400e+07    1.700   1001.43
C2H+OH<=>HCCO+H                          2.000e+13    0.000      0.00
C2H+O<=>CO+CH                            1.020e+13    0.000      0.00
C2H+O2<=>HCCO+O                          6.020e+11    0.000      0.00
C2H+O2<=>CH+CO2                          4.500e+15    0.000  25095.60
C2H+O2<=>HCO+CO                          2.410e+12    0.000      0.00
CH2OH+H<=>CH2O+H2                        3.000e+13    0.000      0.00
CH2OH+H<=>CH3+OH                         1.750e+14    0.000   2796.37
CH2OH+OH<=>CH2O+H2O                      2.400e+13    0.000      0.00
CH2OH+O2<=>CH2O+HO2                      5.000e+12    0.000      0.00
CH2OH+M<=>CH2O+H+M                       5.000e+13    0.000  25119.50
H2/2.40/ H2O/15.40/ 
CO/1.80/ CO2/3.60/ 
CH3O+M<=>CH2OH+M                         1.000e+14    0.000  19120.46
H2/2.50/ H2O/12.00/ 
CO/1.90/ CO2/3.80/ 
CH2CO+OH<=>CH2OH+CO                      1.020e+13    0.000      0.00
CH3OH+OH<=>CH2OH+H2O                     1.440e+06    2.000   -838.91
CH3OH+OH<=>CH3O+H2O                      6.300e+06    2.000   1505.74
CH3OH+H<=>CH2OH+H2                       1.640e+07    2.000   4517.21
CH3OH+H<=>CH3O+H2                        3.830e+07    2.000   5855.64
CH3OH+O<=>CH2OH+OH                       1.000e+13    0.000   4684.51
CH3OH+HO2<=>CH2OH+H2O2                   6.200e+12    0.000  19383.37
CH3OH+O2<=>CH2OH+HO2                     2.000e+13    0.000  44933.08
C3H4+O<=>C2H4+CO                         2.000e+07    1.800   1000.00
CH3+C2H2<=>C3H4+H                        2.560e+09    1.100  13643.88
C3H4+O<=>HCCO+CH3                        7.300e+12    0.000   2250.00
C3H3+H(+M)<=>C3H4(+M)                    3.000e+13    0.000      0.00

     LOW  /  9.000e+15    1.000      0.00 /
     TROE/     0.5  1e+30     1e-30    /
C3H3+HO2<=>C3H4+O2                       2.500e+12    0.000      0.00
C3H4+OH<=>C3H3+H2O                       5.300e+06    2.000   2000.00
C3H3+O2<=>CH2CO+HCO                      3.000e+10    0.000   2868.07
C3H4+H(+M)<=>C3H5(+M)                    4.000e+13    0.000      0.00

     LOW  /  3.000e+24   -2.000      0.00 /
     TROE/     0.8  1e+30     1e-30   /
C3H5+H<=>C3H4+H2                         1.800e+13    0.000      0.00
C3H5+O2<=>C3H4+HO2                       4.990e+15   -1.400  22428.06
C3H5+CH3<=>C3H4+CH4                      3.000e+12   -0.320   -130.98
C2H2+CH3(+M)<=>C3H5(+M)                  6.000e+08    0.000      0.00

     LOW  /  2.000e+09    1.000      0.00 /
     TROE/     0.5  1e+30     1e-30  /
C3H5+OH<=>C3H4+H2O                       6.000e+12    0.000      0.00
C3H3+HCO<=>C3H4+CO                       2.500e+13    0.000      0.00
C3H3+HO2<=>OH+CO+C2H3                    8.000e+11    0.000      0.00
C3H4+O2<=>CH3+HCO+CO                     4.000e+14    0.000  41826.00
C3H6+O<=>C2H5+HCO                        3.500e+07    1.650   -972.75
C3H6+OH<=>C3H5+H2O                       3.100e+06    2.000   -298.28
C3H6+O<=>CH2CO+CH3+H                     1.200e+08    1.650    327.44
C3H6+H<=>C3H5+H2                         1.700e+05    2.500   2492.83
C3H5+H(+M)<=>C3H6(+M)                    2.000e+14    0.000      0.00
AR/0.70/ H2/2.00/ H2O/6.00/ 
CO/1.50/ CO2/2.00/ CH4/2.00/ 
C2H6/3.00/ 
     LOW  /  1.330e+60  -12.000   5967.97 /
     TROE/    0.02  1097.00   1097.00   6860.00 /
C3H5+HO2<=>C3H6+O2                       2.660e+12    0.000      0.00
C3H5+HO2<=>OH+C2H3+CH2O                  3.000e+12    0.000      0.00
C2H3+CH3(+M)<=>C3H6(+M)                  2.500e+13    0.000      0.00
AR/0.70/ H2/2.00/ H2O/6.00/ 
CO/1.50/ CO2/2.00/ CH4/2.00/ 
C2H6/3.00/ 
     LOW  /  4.270e+58  -11.940   9770.55 /
     TROE/   0.175  1341.00  60000.00  10140.00 /
C3H6+H<=>C2H4+CH3                        1.600e+22   -2.390  11185.47
CH3+C2H3<=>C3H5+H                        1.500e+24   -2.830  18618.55
C3H8(+M)<=>CH3+C2H5(+M)                  1.100e+17    0.000  84392.93

     LOW  /  7.830e+18    0.000  64978.49 /
     TROE/    0.76  1946.00     38.00   /
C3H8+O2<=>I-C3H7+HO2                     4.000e+13    0.000  47500.00
C3H8+O2<=>N-C3H7+HO2                     4.000e+13    0.000  50932.12
C3H8+H<=>I-C3H7+H2                       1.300e+06    2.400   4471.08
C3H8+H<=>N-C3H7+H2                       1.330e+06    2.540   6761.47
C3H8+O<=>I-C3H7+OH                       4.760e+04    2.710   2107.31
C3H8+O<=>N-C3H7+OH                       1.900e+05    2.680   3718.45
C3H8+OH<=>N-C3H7+H2O                     1.400e+03    2.660    527.25
C3H8+OH<=>I-C3H7+H2O                     2.700e+04    2.390    393.16
C3H8+HO2<=>I-C3H7+H2O2                   9.640e+03    2.600  13917.30
C3H8+HO2<=>N-C3H7+H2O2                   4.760e+04    2.550  16491.40
I-C3H7+C3H8<=>N-C3H7+C3H8                8.400e-03    4.200   8675.91
C3H6+H(+M)<=>I-C3H7(+M)                  1.330e+13    0.000   1560.71
AR/0.70/ H2/2.00/ H2O/6.00/ 
CO/1.50/ CO2/2.00/ CH4/2.00/ 
C2H6/3.00/ 
     LOW  /  8.700e+42   -7.500   4732.31 /
     TROE/       1  1000.00    645.40   6844.30 /
I-C3H7+O2<=>C3H6+HO2                     1.300e+11    0.000      0.00
N-C3H7(+M)<=>CH3+C2H4(+M)                1.230e+13   -0.100  30210.33

     LOW  /  5.490e+49  -10.000  35779.16 /
     TROE/   -1.17   251.00      0.00   1185.00 /
H+C3H6(+M)<=>N-C3H7(+M)                  1.330e+13    0.000   3260.04
AR/0.70/ H2/2.00/ H2O/6.00/ 
CO/1.50/ CO2/2.00/ CH4/2.00/ 
C2H6/3.00/ 
     LOW  /  6.260e+38   -6.660   7000.48 /
     TROE/       1  1000.00   1310.00  48097.00 /
N-C3H7+O2<=>C3H6+HO2                     9.000e+10    0.000      0.00
END

\\
\\
\\  This is the therm file
\\
\\
THERMO
   298.000  1000.000  5000.000
N2                121286N   2               G  0300.00   5000.00  1000.00      1
 0.02926640E+02 0.14879768E-02-0.05684760E-05 0.10097038E-09-0.06753351E-13    2
-0.09227977E+04 0.05980528E+02 0.03298677E+02 0.14082404E-02-0.03963222E-04    3
 0.05641515E-07-0.02444854E-10-0.10208999E+04 0.03950372E+02                   4
AR                120186AR  1               G  0300.00   5000.00  1000.00      1
 0.02500000E+02 0.00000000E+00 0.00000000E+00 0.00000000E+00 0.00000000E+00    2
-0.07453750E+04 0.04366000E+02 0.02500000E+02 0.00000000E+00 0.00000000E+00    3
 0.00000000E+00 0.00000000E+00-0.07453750E+04 0.04366000E+02                   4
HE                L10/90HE  1    0    0    0G   200.000  6000.000 1000.        1
 2.50000000E+00 0.00000000E+00 0.00000000E+00 0.00000000E+00 0.00000000E+00    2
-7.45375000E+02 9.28723974E-01 2.50000000E+00 0.00000000E+00 0.00000000E+00    3
 0.00000000E+00 0.00000000E+00-7.45375000E+02 9.28723974E-01 0.00000000E+00    4
NE                L10/92NE  1    0    0    0G   200.000  6000.000   1000.00    1
 0.25000000E+01 0.             0.             0.             0.                2
-0.74537500E+03 0.33553227E+01 0.25000000E+01 0.             0.                3
 0.             0.            -0.74537498E+03 0.33553227E+01 0.00000000E+00    4
C(S)              P 4/83C   1    0    0    0S   200.000  5000.000     12.01100 1
 0.14556924e+01 0.17170638e-02-0.69758410e-06 0.13528316e-09-0.96764905e-14    2
-0.69512804e+03-0.85256842e+01-0.31087207e+00 0.44035369e-02 0.19039412e-05    3
-0.63854697e-08 0.29896425e-11-0.10865079e+03 0.11138295e+01                   4
O                 L 1/90O   1   00   00   00G   200.000  3500.000  1000.000    1
 2.56942078E+00-8.59741137E-05 4.19484589E-08-1.00177799E-11 1.22833691E-15    2
 2.92175791E+04 4.78433864E+00 3.16826710E+00-3.27931884E-03 6.64306396E-06    3
-6.12806624E-09 2.11265971E-12 2.91222592E+04 2.05193346E+00 6.72540300E+03    4
O2                TPIS89O   2   00   00   00G   200.000  3500.000  1000.000    1
 3.28253784E+00 1.48308754E-03-7.57966669E-07 2.09470555E-10-2.16717794E-14    2
-1.08845772E+03 5.45323129E+00 3.78245636E+00-2.99673416E-03 9.84730201E-06    3
-9.68129509E-09 3.24372837E-12-1.06394356E+03 3.65767573E+00 8.68010400E+03    4
H                 L 7/88H   1   00   00   00G   200.000  3500.000   1000.00    1
 2.50000001E+00-2.30842973E-11 1.61561948E-14-4.73515235E-18 4.98197357E-22    2
 2.54736599E+04-4.46682914E-01 2.50000000E+00 7.05332819E-13-1.99591964E-15    3
 2.30081632E-18-9.27732332E-22 2.54736599E+04-4.46682853E-01 6.19742800E+03    4
H2                TPIS78H   2   00   00   00G   200.000  3500.000   1000.00    1
 3.33727920E+00-4.94024731E-05 4.99456778E-07-1.79566394E-10 2.00255376E-14    2
-9.50158922E+02-3.20502331E+00 2.34433112E+00 7.98052075E-03-1.94781510E-05    3
 2.01572094E-08-7.37611761E-12-9.17935173E+02 6.83010238E-01 8.46810200E+03    4
OH                S 9/01O   1H   1    0    0G   200.000  6000.000   1000.00    1
 2.86472886E+00 1.05650448E-03-2.59082758E-07 3.05218674E-11-1.33195876E-15    2
 3.71885774E+03 5.70164073E+00 4.12530561E+00-3.22544939E-03 6.52764691E-06    3
-5.79853643E-09 2.06237379E-12 3.38153812E+03-6.90432960E-01 4.51532273E+03    4
!OH"OLD"           RUS 78O   1H   1   00   00G   200.000  3500.000  1000.000    1
! 3.09288767E+00 5.48429716E-04 1.26505228E-07-8.79461556E-11 1.17412376E-14    2
! 3.85865700E+03 4.47669610E+00 3.99201543E+00-2.40131752E-03 4.61793841E-06    3
!-3.88113333E-09 1.36411470E-12 3.61508056E+03-1.03925458E-01 8.81310600E+03    4
H2O               L 8/89H   2O   1   00   00G   200.000  3500.000  1000.000    1
 3.03399249E+00 2.17691804E-03-1.64072518E-07-9.70419870E-11 1.68200992E-14    2
-3.00042971E+04 4.96677010E+00 4.19864056E+00-2.03643410E-03 6.52040211E-06    3
-5.48797062E-09 1.77197817E-12-3.02937267E+04-8.49032208E-01 9.90409200E+03    4
HO2               L 5/89H   1O   2   00   00G   200.000  3500.000  1000.000    1
 4.01721090E+00 2.23982013E-03-6.33658150E-07 1.14246370E-10-1.07908535E-14    2
 1.11856713E+02 3.78510215E+00 4.30179801E+00-4.74912051E-03 2.11582891E-05    3
-2.42763894E-08 9.29225124E-12 2.94808040E+02 3.71666245E+00 1.00021620E+04    4
H2O2              L 7/88H   2O   2   00   00G   200.000  3500.000  1000.000    1
 4.16500285E+00 4.90831694E-03-1.90139225E-06 3.71185986E-10-2.87908305E-14    2
-1.78617877E+04 2.91615662E+00 4.27611269E+00-5.42822417E-04 1.67335701E-05    3
-2.15770813E-08 8.62454363E-12-1.77025821E+04 3.43505074E+00 1.11588350E+04    4
C                 L11/88C   1   00   00   00G   200.000  3500.000  1000.000    1
 2.49266888E+00 4.79889284E-05-7.24335020E-08 3.74291029E-11-4.87277893E-15    2
 8.54512953E+04 4.80150373E+00 2.55423955E+00-3.21537724E-04 7.33792245E-07    3
-7.32234889E-10 2.66521446E-13 8.54438832E+04 4.53130848E+00 6.53589500E+03    4
CH                TPIS79C   1H   1   00   00G   200.000  3500.000  1000.000    1
 2.87846473E+00 9.70913681E-04 1.44445655E-07-1.30687849E-10 1.76079383E-14    2
 7.10124364E+04 5.48497999E+00 3.48981665E+00 3.23835541E-04-1.68899065E-06    3
 3.16217327E-09-1.40609067E-12 7.07972934E+04 2.08401108E+00 8.62500000E+03    4
!3-CH2             L S/93C   1H   2   00   00G   200.000  3500.000  1000.000    1
! 2.87410113E+00 3.65639292E-03-1.40894597E-06 2.60179549E-10-1.87727567E-14    2
! 4.62636040E+04 6.17119324E+00 3.76267867E+00 9.68872143E-04 2.79489841E-06    3
!-3.85091153E-09 1.68741719E-12 4.60040401E+04 1.56253185E+00 1.00274170E+04    4
!1-CH2             L S/93C   1H   2   00   00G   200.000  3500.000  1000.000    1
! 2.29203842E+00 4.65588637E-03-2.01191947E-06 4.17906000E-10-3.39716365E-14    2
! 5.09259997E+04 8.62650169E+00 4.19860411E+00-2.36661419E-03 8.23296220E-06    3
!-6.68815981E-09 1.94314737E-12 5.04968163E+04-7.69118967E-01 9.93967200E+03    4
T-CH2             L S/93C   1H   2   00   00G   200.000  3500.000  1000.000    1
 2.87410113E+00 3.65639292E-03-1.40894597E-06 2.60179549E-10-1.87727567E-14    2
 4.62636040E+04 6.17119324E+00 3.76267867E+00 9.68872143E-04 2.79489841E-06    3
-3.85091153E-09 1.68741719E-12 4.60040401E+04 1.56253185E+00 1.00274170E+04    4
S-CH2             L S/93C   1H   2   00   00G   200.000  3500.000  1000.000    1
 2.29203842E+00 4.65588637E-03-2.01191947E-06 4.17906000E-10-3.39716365E-14    2
 5.09259997E+04 8.62650169E+00 4.19860411E+00-2.36661419E-03 8.23296220E-06    3
-6.68815981E-09 1.94314737E-12 5.04968163E+04-7.69118967E-01 9.93967200E+03    4
CH3               L11/89C   1H   3   00   00G   200.000  3500.000  1000.000    1
 2.28571772E+00 7.23990037E-03-2.98714348E-06 5.95684644E-10-4.67154394E-14    2
 1.67755843E+04 8.48007179E+00 3.67359040E+00 2.01095175E-03 5.73021856E-06    3
-6.87117425E-09 2.54385734E-12 1.64449988E+04 1.60456433E+00 1.03663400E+04    4
CH4               L 8/88C   1H   4   00   00G   200.000  3500.000  1000.000    1
 7.48514950E-02 1.33909467E-02-5.73285809E-06 1.22292535E-09-1.01815230E-13    2
-9.46834459E+03 1.84373180E+01 5.14987613E+00-1.36709788E-02 4.91800599E-05    3
-4.84743026E-08 1.66693956E-11-1.02466476E+04-4.64130376E+00 1.00161980E+04    4
CO                TPIS79C   1O   1   00   00G   200.000  3500.000  1000.000    1
 2.71518561E+00 2.06252743E-03-9.98825771E-07 2.30053008E-10-2.03647716E-14    2
-1.41518724E+04 7.81868772E+00 3.57953347E+00-6.10353680E-04 1.01681433E-06    3
 9.07005884E-10-9.04424499E-13-1.43440860E+04 3.50840928E+00 8.67100000E+03    4
CO2               L 7/88C   1O   2   00   00G   200.000  3500.000  1000.000    1
 3.85746029E+00 4.41437026E-03-2.21481404E-06 5.23490188E-10-4.72084164E-14    2
-4.87591660E+04 2.27163806E+00 2.35677352E+00 8.98459677E-03-7.12356269E-06    3
 2.45919022E-09-1.43699548E-13-4.83719697E+04 9.90105222E+00 9.36546900E+03    4
HCO               L12/89H   1C   1O   1   00G   200.000  3500.000  1000.000    1
 2.77217438E+00 4.95695526E-03-2.48445613E-06 5.89161778E-10-5.33508711E-14    2
 4.01191815E+03 9.79834492E+00 4.22118584E+00-3.24392532E-03 1.37799446E-05    3
-1.33144093E-08 4.33768865E-12 3.83956496E+03 3.39437243E+00 9.98945000E+03    4
CH2O              L 8/88H   2C   1O   1   00G   200.000  3500.000  1000.000    1
 1.76069008E+00 9.20000082E-03-4.42258813E-06 1.00641212E-09-8.83855640E-14    2
-1.39958323E+04 1.36563230E+01 4.79372315E+00-9.90833369E-03 3.73220008E-05    3
-3.79285261E-08 1.31772652E-11-1.43089567E+04 6.02812900E-01 1.00197170E+04    4
CH2OH RADICAL     IU2/03C  1.H  3.O  1.   0.G   200.000  6000.000 1000.        1
 5.09312037E+00 5.94758550E-03-2.06496524E-06 3.23006703E-10-1.88125052E-14    2
-4.05813228E+03-1.84690613E+00 4.47832317E+00-1.35069687E-03 2.78483707E-05    3
-3.64867397E-08 1.47906775E-11-3.52476728E+03 3.30911984E+00-2.06867272E+03    4
!OLD
!CH2OH             GUNL93C   1H   3O   1   00G   200.000  3500.000 1000.0       1
! 3.69266569E+00 8.64576797E-03-3.75101120E-06 7.87234636E-10-6.48554201E-14    2
!-3.24250627E+03 5.81043215E+00 3.86388918E+00 5.59672304E-03 5.93271791E-06    3
!-1.04532012E-08 4.36967278E-12-3.19391367E+03 5.47302243E+00 1.18339080E+04    4
CH3O  METHOXY RAD IU1/03C  1.H  3.O  1.   0.G   200.000  6000.000 1000.        1
 4.75779238E+00 7.44142474E-03-2.69705176E-06 4.38090504E-10-2.63537098E-14    2
 3.90139164E+02-1.96680028E+00 3.71180502E+00-2.80463306E-03 3.76550971E-05    3
-4.73072089E-08 1.86588420E-11 1.30772484E+03 6.57240864E+00 2.53773223E+03    4
!OLD
!CH3O              121686C   1H   3O   1     G  0300.00   3000.00  1000.00      1
! 0.03770799E+02 0.07871497E-01-0.02656384E-04 0.03944431E-08-0.02112616E-12    2
! 0.12783252E+03 0.02929575E+02 0.02106204E+02 0.07216595E-01 0.05338472E-04    3
!-0.07377636E-07 0.02075610E-10 0.09786011E+04 0.13152177E+02                   4
CH3OH             L 8/88C   1H   4O   1   00G   200.000  3500.000  1000.000    1
 1.78970791E+00 1.40938292E-02-6.36500835E-06 1.38171085E-09-1.17060220E-13    2
-2.53748747E+04 1.45023623E+01 5.71539582E+00-1.52309129E-02 6.52441155E-05    3
-7.10806889E-08 2.61352698E-11-2.56427656E+04-1.50409823E+00 1.14352770E+04    4
C2H               L 1/91C   2H   1   00   00G   200.000  3500.000  1000.000    1
 3.16780652E+00 4.75221902E-03-1.83787077E-06 3.04190252E-10-1.77232770E-14    2
 6.71210650E+04 6.63589475E+00 2.88965733E+00 1.34099611E-02-2.84769501E-05    3
 2.94791045E-08-1.09331511E-11 6.68393932E+04 6.22296438E+00 1.04544720E+04    4
C2H2              L 1/91C   2H   2   00   00G   200.000  3500.000  1000.000    1
 4.14756964E+00 5.96166664E-03-2.37294852E-06 4.67412171E-10-3.61235213E-14    2
 2.59359992E+04-1.23028121E+00 8.08681094E-01 2.33615629E-02-3.55171815E-05    3
 2.80152437E-08-8.50072974E-12 2.64289807E+04 1.39397051E+01 1.00058390E+04    4
H2CC              L12/89H   2C   2    0    0G   200.000  6000.000  1000.000    1
 0.42780340E+01 0.47562804E-02-0.16301009E-05 0.25462806E-09-0.14886379E-13    2
 0.48316688E+05 0.64023701E+00 0.32815483E+01 0.69764791E-02-0.23855244E-05    3
-0.12104432E-08 0.98189545E-12 0.48621794E+05 0.59203910E+01 0.49887266E+05    4
C2H3              L 2/92C   2H   3   00   00G   200.000  3500.000  1000.000    1
 3.01672400E+00 1.03302292E-02-4.68082349E-06 1.01763288E-09-8.62607041E-14    2
 3.46128739E+04 7.78732378E+00 3.21246645E+00 1.51479162E-03 2.59209412E-05    3
-3.57657847E-08 1.47150873E-11 3.48598468E+04 8.51054025E+00 1.05750490E+04    4
C2H4              L 1/91C   2H   4   00   00G   200.000  3500.000  1000.000    1
 2.03611116E+00 1.46454151E-02-6.71077915E-06 1.47222923E-09-1.25706061E-13    2
 4.93988614E+03 1.03053693E+01 3.95920148E+00-7.57052247E-03 5.70990292E-05    3
-6.91588753E-08 2.69884373E-11 5.08977593E+03 4.09733096E+00 1.05186890E+04    4
C2H5              L12/92C   2H   5   00   00G   200.000  3500.000  1000.000    1
 1.95465642E+00 1.73972722E-02-7.98206668E-06 1.75217689E-09-1.49641576E-13    2
 1.28575200E+04 1.34624343E+01 4.30646568E+00-4.18658892E-03 4.97142807E-05    3
-5.99126606E-08 2.30509004E-11 1.28416265E+04 4.70720924E+00 1.21852440E+04    4
C2H6              L 8/88C   2H   6   00   00G   200.000  3500.000  1000.000    1
 1.07188150E+00 2.16852677E-02-1.00256067E-05 2.21412001E-09-1.90002890E-13    2
-1.14263932E+04 1.51156107E+01 4.29142492E+00-5.50154270E-03 5.99438288E-05    3
-7.08466285E-08 2.68685771E-11-1.15222055E+04 2.66682316E+00 1.18915940E+04    4
CH2CO             L 5/90C   2H   2O   1   00G   200.000  3500.000  1000.000    1
 4.51129732E+00 9.00359745E-03-4.16939635E-06 9.23345882E-10-7.94838201E-14    2
-7.55105311E+03 6.32247205E-01 2.13583630E+00 1.81188721E-02-1.73947474E-05    3
 9.34397568E-09-2.01457615E-12-7.04291804E+03 1.22156480E+01 1.17977430E+04    4
!CH2CHO"OLD"       T04/83O   1H   3C   2    0G   300.000  5000.000              1
! 0.59756699E+01 0.81305914E-02-0.27436245E-05 0.40703041E-09-0.21760171E-13    2
! 0.49032178E+03-0.50320879E+01 0.34090624E+01 0.10738574E-01 0.18914925E-05    3
!-0.71585831E-08 0.28673851E-11 0.15214766E+04 0.95714535E+01 0.30474436E+04    4
CH2CHO            D04/83O   1H   3C   2    0G   300.000  3000.000              1
 0.51662006E+01 0.10847826E-01-0.44658368E-05 0.80628548E-09-0.48410193E-13    2
-0.73199347E+03-0.19633361E+01 0.10134001E+01 0.22681467E-01-0.15733944E-04    3
 0.40491503E-08 0.29599012E-12 0.38042853E+03 0.19356552E+02                   4
CH2OCH            T 9/92C   2H   3O   1    0G   298.150  3000.000  1000.0      1
 0.48131470E+00 0.20711914E-01-0.12693155E-04 0.34579642E-08-0.35399703E-12    2
 0.15648642E+05 0.34629876E+02 0.10854772E+01 0.12845259E-01 0.24138660E-05    3
-0.44642672E-08-0.29381916E-12 0.15910655E+05 0.33395312E+02 0.16817588E+05    4
CH2OCH2           T 6/92C   2H   4O   1    0G   298.150  3000.0    1000.0      1
 0.54887641E+01 0.12046190E-01-0.43336931E-05 0.70028311E-09-0.41949088E-13    2
-0.91804251E+04-0.70799605E+01 0.37590532E+01-0.94412180E-02 0.80309721E-04    3
-0.10080788E-06 0.40039921E-10-0.75608143E+04 0.78497475E+01-0.63304657E+04    4
CH3CO             T 9/92C   2H   3O   1    0G   200.000  6000.0    1000.0      1
 0.59447731E+01 0.78667205E-02-0.28865882E-05 0.47270875E-09-0.28599861E-13    2
-0.37873075E+04-0.50136751E+01 0.41634257E+01-0.23261610E-03 0.34267820E-04    3
-0.44105227E-07 0.17275612E-10-0.26574529E+04 0.73468280E+01-0.12027167E+04    4
C2H4O             L 8/88C   2H   4O   1    0G   200.000  6000.0    1000.0      1
 0.54041108E+01 0.11723059E-01-0.42263137E-05 0.68372451E-09-0.40984863E-13    2
-0.22593122E+05-0.34807917E+01 0.47294595E+01-0.31932858E-02 0.47534921E-04    3
-0.57458611E-07 0.21931112E-10-0.21572878E+05 0.41030159E+01-0.19987949E+05    4
HCCO              SRIC91H   1C   2O   1     G  0300.00   4000.00  1000.00      1
 0.56282058E+01 0.40853401E-02-0.15934547E-05 0.28626052E-09-0.19407832E-13    2
 0.19327215E+05-0.39302595E+01 0.22517214E+01 0.17655021E-01-0.23729101E-04    3
 0.17275759E-07-0.50664811E-11 0.20059449E+05 0.12490417E+02                   4
HCCOH              SRI91C   2O   1H   20   0G   300.000  5000.000   1000.0     1
 0.59238291E+01 0.67923600E-02-0.25658564E-05 0.44987841E-09-0.29940101E-13    2
 0.72646260E+04-0.76017742E+01 0.12423733E+01 0.31072201E-01-0.50866864E-04    3
 0.43137131E-07-0.14014594E-10 0.80316143E+04 0.13874319E+02                   4
C2O               RUS 79C   2O   1    0    0G   200.000  6000.000              1
 0.51512722E+01 0.23726722E-02-0.76135971E-06 0.11706415E-09-0.70257804E-14    2
 0.33241888E+05-0.22183135E+01 0.28648610E+01 0.11990216E-01-0.18362448E-04    3
 0.15769739E-07-0.53897452E-11 0.33749932E+05 0.88867772E+01 0.35003406E+05    4
C3H2              S 4/01C   3H   2    0    0G   200.000  6000.000              1
 7.47247827E+00 4.57765160E-03-1.56482125E-06 2.43991965E-10-1.42462924E-14    2
 8.83321441E+04-1.27113314E+01 3.74356467E+00 2.51955211E-02-4.62608277E-05    3
 4.34360520E-08-1.53992558E-11 8.89297787E+04 4.22612394E+00 9.08356403E+04    4
cC3H2             121686C   3H   2          G  0300.00   5000.00  1000.00      1
 0.06530853E+02 0.05870316E-01-0.01720777E-04 0.02127498E-08-0.08291910E-13    2
 0.05115214E+06-0.01122728E+03 0.02691077E+02 0.01480366E+00-0.03250551E-04    3
-0.08644363E-07 0.05284878E-10 0.05219072E+06 0.08757391E+02                   4
C3H3              T 5/97C   3H   3    0    0G   200.000  6000.000              1
 7.14221880E+00 7.61902005E-03-2.67459950E-06 4.24914801E-10-2.51475415E-14    2
 3.89087427E+04-1.25848436E+01 1.35110927E+00 3.27411223E-02-4.73827135E-05    3
 3.76309808E-08-1.18540923E-11 4.01057783E+04 1.52058924E+01 4.16139977E+04    4
C3H4              L 8/89C   3H   4    0    0G   200.000  6000.000              1
 0.63168722E+01 0.11133728E-01-0.39629378E-05 0.63564238E-09-0.37875540E-13    2
 0.20117495E+05-0.10995766E+02 0.26130445E+01 0.12122575E-01 0.18539880E-04    3
-0.34525149E-07 0.15335079E-10 0.21541567E+05 0.10226139E+02 0.22962267E+05    4
aC3H4             L 8/89C   3H   4    0    0G   200.000  6000.000              1
 0.63168722E+01 0.11133728E-01-0.39629378E-05 0.63564238E-09-0.37875540E-13    2
 0.20117495E+05-0.10995766E+02 0.26130445E+01 0.12122575E-01 0.18539880E-04    3
-0.34525149E-07 0.15335079E-10 0.21541567E+05 0.10226139E+02 0.22962267E+05    4
pC3H4             T 2/90H   4C   3    0    0G   200.000  6000.000              1
 0.60252400E+01 0.11336542E-01-0.40223391E-05 0.64376063E-09-0.38299635E-13    2
 0.19620942E+05-0.86043785E+01 0.26803869E+01 0.15799651E-01 0.25070596E-05    3
-0.13657623E-07 0.66154285E-11 0.20802374E+05 0.98769351E+01 0.22302059E+05    4
cC3H4             T12/81C   3H   4    0    0G   300.000  5000.000              1
 0.66999931E+01 0.10357372E-01-0.34551167E-05 0.50652949E-09-0.26682276E-13    2
 0.30199051E+05-0.13378770E+02-0.24621047E-01 0.23197215E-01-0.18474357E-05    3
-0.15927593E-07 0.86846155E-11 0.32334137E+05 0.22729762E+02 0.3332728 E+05    4
C3H8              P11/94C   3H   8    0    0G   300.000  3000.000              1
 0.75244152E+01 0.18898282E-01-0.62921041E-05 0.92161457E-09-0.48684478E-13    2
-0.16564394E+05-0.17838375E+02 0.92851093E+00 0.26460566E-01 0.60332446E-05    3
-0.21914953E-07 0.94961544E-11-0.14057907E+05 0.19225538E+02                   4
N-C3H7            P11/94C   3H   7    0    0G   300.000  3000.000              1
 0.77097479E+01 0.16031485E-01-0.52720238E-05 0.75888352E-09-0.38862719E-13    2
 0.79762236E+04-0.15515297E+02 0.10491173E+01 0.26008973E-01 0.23542516E-05    3
-0.19595132E-07 0.93720207E-11 0.10312346E+05 0.21136034E+02                   4
I-C3H7            P11/94C   3H   7    0    0G   300.000  3000.000              1
 0.65192741E+01 0.17220104E-01-0.57364217E-05 0.84130732E-09-0.44565913E-13    2
 0.73227193E+04-0.90830215E+01 0.14449199E+01 0.20999112E-01 0.77036222E-05    3
-0.18476253E-07 0.71282962E-11 0.94223724E+04 0.20116317E+02                   4
C3H6              120186C   3H   6          G  0300.00   5000.00  1000.00      1
 0.06732257E+02 0.01490834E+00-0.04949899E-04 0.07212022E-08-0.03766204E-12    2
-0.09235703E+04-0.01331335E+03 0.01493307E+02 0.02092518E+00 0.04486794E-04    3
-0.01668912E-06 0.07158146E-10 0.01074826E+05 0.01614534E+03                   4
CH2CHCO           T05/99C   3H   3O   1    0G   200.000  6000.0    1000.0      1
 6.95842227E+00 1.07193211E-02-3.85218494E-06 6.22009064E-10-3.72401640E-14    2
 5.64826498E+03-1.14745786E+01 3.21169467E+00 1.18422105E-02 1.67462582E-05    3
-3.06947176E-08 1.33048816E-11 7.12815750E+03 1.00881663E+01 8.70564832E+03    4
!CH3CHOCH2         T 6/92C   3H   6O   1    0G   298.150  3000.0    1000.0      1
! 0.86900558E 01 0.16020987E-01-0.53971753E-05 0.79941542E-09-0.42656366E-13    2
!-0.15420691E 05-0.22485016E 02 0.48733836E 00 0.28519690E-01 0.30096162E-05    3
!-0.22652642E-07 0.10706728E-10-0.12556434E 05 0.22605270E 02-0.11156446E 05    4
!REPLACE SPACE WITH +
CH3CHOCH2         T 6/92C   3H   6O   1    0G   298.150  3000.0    1000.0      1
 0.86900558E+01 0.16020987E-01-0.53971753E-05 0.79941542E-09-0.42656366E-13    2
-0.15420691E+05-0.22485016E+02 0.48733836E+00 0.28519690E-01 0.30096162E-05    3
-0.22652642E-07 0.10706728E-10-0.12556434E+05 0.22605270E+02-0.11156446E+05    4
CH3CH2CHO         T 9/92C   3H   6O   1    0G   273.150  5000.000  1000.0      1
 0.33137982E+01 0.26619606E-01-0.10475596E-04 0.18815334E-08-0.12761310E-12    2
-0.25459603E+05 0.96608447E+01 0.76044596E+01-0.86403564E-02 0.73930097E-04    3
-0.79687398E-07 0.28004927E-10-0.25489789E+05-0.67643691E+01-0.23097645E+05    4
CH3COCH3          T 5/92C   3H   6O   1    0G   200.000  6000.000  1000.0      1
 0.72975991E+01 0.17566207E-01-0.63170456E-05 0.10203086E-08-0.61094016E-13    2
-0.29817680E+05-0.12756981E+02 0.55557943E+01-0.28365428E-02 0.70568945E-04    3
-0.87810488E-07 0.34028266E-10-0.28113337E+05 0.23226600E+01-0.26116945E+05    4
C2H3CHO           T 6/92C   3H   4O   1    0G   298.150  3000.0    1000.0      1
 0.48353180E+01 0.19772601E-01-0.10426628E-04 0.26525803E-08-0.26278207E-12    2
-0.11557837E+05 0.18853144E+01 0.11529584E+01 0.28040214E-01-0.15072153E-04    3
 0.15905842E-08 0.84930371E-12-0.10417694E+05 0.21453279E+02-0.89572567E+04    4
C3H5              PD5/98C   3H   5    0    0G   300.000  3000.000              1
 0.65007877E+01 0.14324731E-01-0.56781632E-05 0.11080801E-08-0.90363887E-13    2
 0.17482449E+05-0.11243050E+02 0.13631835E+01 0.19813821E-01 0.12497060E-04    3
-0.33355555E-07 0.15846571E-10 0.19245629E+05 0.17173214E+02                   4
CH3CCH2           PD5/98C   3H   5    0    0G   300.000  3000.000              1
 0.54255528E+01 0.15511072E-01-0.56678350E-05 0.79224388E-09-0.16878034E-13    2
 0.27843027E+05-0.33527184E+01 0.17329209E+01 0.22394620E-01-0.51490611E-05    3
-0.67596466E-08 0.38253211E-11 0.29040498E+05 0.16568878E+02                   4
CH3CHCH           PD5/98C   3H   5    0    0G   300.000  3000.000              1
 0.53725281E+01 0.15780509E-01-0.59922850E-05 0.93089664E-09-0.36550966E-13    2
 0.29614760E+05-0.34186478E+01 0.91372931E+00 0.26432343E-01-0.11758950E-04    3
-0.23035678E-08 0.27715488E-11 0.30916867E+05 0.19989269E+02                   4
C4H               P 1/93C   4H   1    0    0G   300.000  3000.000              1
 0.77697593E+01 0.49829976E-02-0.17628546E-05 0.28144284E-09-0.16689869E-13    2
 0.94345900E+05-0.14165274E+02 0.13186295E+01 0.38582956E-01-0.71385623E-04    3
 0.65356359E-07-0.22617666E-10 0.95456106E+05 0.15567583E+02                   4
C4H2              D11/99C   4H   2    0    0G   300.000  3000.000              1
 0.91576328E+01 0.55430518E-02-0.13591604E-05 0.18780075E-10 0.23189536E-13    2
 0.52588039E+05-0.23711460E+02 0.10543978E+01 0.41626960E-01-0.65871784E-04    3
 0.53257075E-07-0.16683162E-10 0.54185211E+05 0.14866591E+02                   4
nC4H3             D11/99C   4H   3    0    0G   300.000  3000.000              1
 0.83308964E+01 0.10036335E-01-0.37419134E-05 0.55459226E-09-0.17431933E-13    2
 0.64202992E+05-0.17071651E+02 0.47389764E+00 0.39499991E-01-0.46494391E-04    3
 0.28660121E-07-0.69771350E-11 0.65944547E+05 0.21486549E+02                   4
iC4H3             D11/99C   4H   3    0    0G   300.000  3000.000              1
 0.83073168E+01 0.11032343E-01-0.48934003E-05 0.10189599E-08-0.80571800E-13    2
 0.59025477E+05-0.14808586E+02 0.43293457E+01 0.25507301E-01-0.24854140E-04    3
 0.13154156E-07-0.27520122E-11 0.59920035E+05 0.47984581E+01                   4
H2C4O             120189H   2C   4O   1     G  0300.00   4000.00  1000.00      1
 0.01026888E+03 0.04896164E-01-0.04885081E-05-0.02708566E-08 0.05107013E-12    2
 0.02346903E+06-0.02815985E+03 0.04810971E+02 0.01313999E+00 0.09865073E-05    3
-0.06120720E-07 0.01640003E-10 0.02545803E+06 0.02113424E+02                   4
C4H4              D11/99C   4H   4    0    0G   200.000  6000.000  1000.000    1
 0.10411188E+02 0.69172289E-02 0.39218751E-07-0.85007118E-09 0.15480747E-12    2
 0.31219680E+05-0.29647858E+02 0.10881900E+01 0.31711046E-01-0.20855530E-04    3
 0.21386397E-08 0.25900250E-11 0.33876453E+05 0.18801643E+02                   4
nC4H5             H6W/94C   4H   5    0    0G   300.000  3000.000              1
 0.98501978E+01 0.10779008E-01-0.13672125E-05-0.77200535E-09 0.18366314E-12    2
 0.38840301E+05-0.26001846E+02 0.16305321E+00 0.39830137E-01-0.34000128E-04    3
 0.15147233E-07-0.24665825E-11 0.41429766E+05 0.23536163E+02                   4
iC4H5             H6W/94C   4H   5    0    0G   300.000  3000.000              1
 0.10229092E+02 0.94850138E-02-0.90406445E-07-0.12596100E-08 0.24781468E-12    2
 0.34642812E+05-0.28564529E+02-0.19932900E-01 0.38005672E-01-0.27559450E-04    3
 0.77835551E-08 0.40209383E-12 0.37496223E+05 0.24394241E+02                   4
C4H5-2            H6W/94C   4H   5    0    0G   300.000  3000.000              1
 1.45381710E+01-8.56770560E-03 2.35595240E-05-1.36763790E-08 2.44369270E-12    2
 3.32590950E+04-4.53694970E+01 2.96962800E+00 2.44422450E-02-9.12514240E-06    3
-4.24668710E-18 1.63047280E-21 3.55033160E+04 1.20360510E+01 3.73930550E+04    4
c-C4H5            PUPM3 C   4H   5    0    0G   300.000  3000.000              1
 0.67467155E+01 0.17283000E-01-0.65168579E-05 0.98917574E-09-0.34604908E-13    2
 0.32808359E+05-0.12912880E+02-0.26397593E+01 0.41549157E-01-0.21920954E-04    3
-0.46559014E-08 0.61348890E-11 0.35373828E+05 0.35701797E+02                   4
C4H7              H6W/94C   4H   7    0    0G   300.000  3000.000              1
 0.11963392E+02 0.11425305E-01 0.78948909E-06-0.19858872E-08 0.36873645E-12    2
 0.16962977E+05-0.37542908E+02 0.28698254E+00 0.36964495E-01-0.86277441E-05    3
-0.15051821E-07 0.89891263E-11 0.20551301E+05 0.24484467E+02                   4
C4H612            A 8/83C   4H   6    0    0G   300.     3000.     1000.0      1
  0.1781557E+02 -0.4257502E-02  0.1051185E-04 -0.4473844E-08  0.5848138E-12    2
  0.1267342E+05 -0.6982662E+02  0.1023467E+01  0.3495919E-01 -0.2200905E-04    3
  0.6942272E-08 -0.7879187E-12  0.1811799E+05  0.1975066E+02  0.1950807E+05    4
C4H6-2            A 8/83C   4H   6    0    0G   300.     3000.     1000.0      1
  9.0338133E+00 8.2124510E-03  7.1753952E-06 -5.8834334E-09  1.0343915E-12     2
  1.4335068E+04 -2.0985762E+01  2.1373338E+00  2.6486229E-02 -9.0568711E-06    3
 -5.5386397E-19 2.1281884E-22  1.5710902E+04  1.3529426E+01  1.7488676E+04     4
C4H10             P11/94C   4H  10    0    0G   300.000  3000.000              1
 0.10526774E+02 0.23590738E-01-0.78522480E-05 0.11448408E-08-0.59827703E-13    2
-0.20479223E+05-0.32198579E+02 0.15685419E+01 0.34652278E-01 0.68168129E-05    3
-0.27995097E-07 0.12307742E-10-0.17129977E+05 0.17908045E+02                   4
iC4H10            P11/94C   4H  10    0    0G   300.000  3000.000              1
 0.10846169E+02 0.23338389E-01-0.77833962E-05 0.11393807E-08-0.59918289E-13    2
-0.21669854E+05-0.35870573E+02 0.54109489E+00 0.37860301E-01 0.55459804E-05    3
-0.30500110E-07 0.14033357E-10-0.17977644E+05 0.21150935E+02                   4
pC4H9             P11/94C   4H   9    0    0G   300.000  3000.000              1
 0.90131759E+01 0.23992501E-01-0.89488794E-05 0.15311024E-08-0.98216680E-13    2
 0.47050163E+04-0.20568160E+02 0.22128506E+01 0.32808150E-01 0.35445091E-05    3
-0.24586397E-07 0.11510570E-10 0.71406715E+04 0.17148115E+02                   4
sC4H9             P11/94C   4H   9    0    0G   300.000  3000.000              1
 0.94263839E+01 0.21918998E-01-0.72868375E-05 0.10630334E-08-0.55649464E-13    2
 0.31965874E+04-0.22406051E+02 0.69428423E+00 0.33113346E-01 0.62942577E-05    3
-0.27025274E-07 0.11989315E-10 0.64175654E+04 0.26279789E+02                   4
tC4H9             P11/94C   4H   9    0    0G   300.000  3000.000              1
 0.76607261E+01 0.23879414E-01-0.80890353E-05 0.12057521E-08-0.65009814E-13    2
 0.16207623E+04-0.14800281E+02 0.96167553E+00 0.25735856E-01 0.15609033E-04    3
-0.26656519E-07 0.89418010E-11 0.46564412E+04 0.24805366E+02                   4
iC4H9             P11/94C   4H   9    0    0G   300.000  3000.000              1
 0.36943491E+01 0.36043526E-01-0.18406555E-04 0.46356137E-08-0.45862968E-12    2
 0.53753792E+04 0.68486993E+01-0.52798452E+00 0.50164629E-01-0.37679302E-04    3
 0.17505938E-07-0.39549774E-11 0.64430984E+04 0.28114795E+02                   4
C4H81             T 6/83C   4H   8    0    0G   300.000  5000.000              1
 0.20535841E+01 0.34350507E-01-0.15883197E-04 0.33089662E-08-0.25361045E-12    2
-0.21397231E+04 0.15543201E+02 0.11811380E+01 0.30853380E-01 0.50865247E-05    3
-0.24654888E-07 0.11110193E-10-0.17904004E+04 0.21062469E+02                   4
C4H82             T 6/83C   4H   8    0    0G   300.000  5000.00               1
 0.82797676E+00 0.35864539E-01-0.16634498E-04 0.34732759E-08-0.26657398E-12    2
-0.30521033E+04 0.21342545E+02 0.12594252E+01 0.27808424E-01 0.87013932E-05    3
-0.24402205E-07 0.98977710E-11-0.29647742E+04 0.20501129E+02                   4
iC4H8             T 6/83H   8C   4    0    0G   300.000  5000.0                1
 0.44609470E+01 0.29611487E-01-0.13077129E-04 0.26571934E-08-0.20134713E-12    2
-0.50066758E+04 0.10671549E+01 0.26471405E+01 0.25902957E-01 0.81985354E-05    3
-0.22193259E-07 0.88958580E-11-0.40373069E+04 0.12676388E+02                   4
C4H7              AM1/94C   4H   7    0    0G   300.000  3000.000  1000.000    1
 0.11963392E+02 0.11425305E-01 0.78948909E-06-0.19858872E-08 0.36873645E-12    2
 0.16962977E+05-0.37542908E+02 0.28698254E+00 0.36964495E-01-0.86277441E-05    3
-0.15051821E-07 0.89891263E-11 0.20551301E+05 0.24484467E+02                   4
iC4H7             P11/94C   4H   7    0    0G   300.000  3000.000              1
 0.74491956E+01 0.22630504E-01-0.88095014E-05 0.14336478E-08-0.73247269E-13    2
 0.11196182E+05-0.11947779E+02 0.34512660E+01 0.24686039E-01 0.52359514E-05    3
-0.16130826E-07 0.53881687E-11 0.12783361E+05 0.11080150E+02                   4
C2H3CHOCH2        A 8/83C   4H   6O   1    0G   300.     3000.     1000.0      1
-4.72093360E+00 3.91413780E-02-6.52872650E-06-7.68209500E-09 2.51473310E-12    2
 1.75352252E+03 5.17190420E+01 7.97985440E-01 3.44034320E-02-1.24598510E-05    3
-5.18062790E-18 1.99359540E-21-6.48927540E+02 2.18896980E+01 1.00654250E+03    4
CH3CHCHCHO        T 5/92C   4H   6O   1    0G   298.150  3000.0    1000.0      1
 1.98794540E+01-2.09130550E-02 4.45360508E-05-2.60374870E-08 4.86836120E-12    2
-1.95278768E+04-6.87200320E+01-1.55577660E+00 4.09640630E-02-1.69868810E-05    3
-6.00928140E-18 2.31368530E-21-1.41394920E+04 3.74707580E+01-1.29340710E+04    4
CH2CHCOCH3        T 3/97C   4H   6O   1    0G   200.000  3000.0    1000.0      1
 1.98794540E+01-2.09130550E-02 4.45360580E-05-2.60374870E-08 4.86836120E-12    2
-1.90786168E+04-6.97265750E+01-1.55577660E+00 4.09640630E-02-1.69868810E-05    3
-6.00928140E-18 2.31368530E-21-1.49447258E+04 3.64642160E+01-1.66079520E+04    4
C4H4O             T03/97C   4H   4O   1    0G   200.000  6000.0    1000.0      1
 9.38935003E+00 1.40291241E-02-5.07755110E-06 8.24137332E-10-4.95319963E-14    2
-8.68241814E+03-2.79162920E+01 8.47469463E-01 1.31773796E-02 5.99735901E-05    3
-9.71562904E-08 4.22733796E-11-5.36785445E+03 2.14945172E+01-4.17166616E+03    4
CH3CHCHCO         T03/97C   4H   5O   1    0G   200.000  6000.000  1000.0      1
 8.90967920E+00 1.34364140E-02-7.62977390E-07-1.69114810E-09 2.95540440E-13    2
 1.48898740E+03-1.79662460E+01-1.08199860E+00 3.64929760E-02-1.52255950E-05    3
-5.62607170E-18 2.16113750E-21 3.56713230E+03 3.27142550E+01 4.73074990E+03    4
CH2CHCHCHO        T03/97C   4H   5O   1    0G   200.000  6000.000  1000.0      1
 8.90967920E+00 1.34364140E-02-7.62977390E-07-1.69114810E-09 2.95540440E-13    2
 1.48898740E+03-1.79662460E+01-1.08199860E+00 3.64929760E-02-1.52255950E-05    3
-5.62607170E-18 2.16113750E-21 3.56713230E+03 3.27142550E+01 4.73074990E+03    4
CH2CHCH2CHO       T 5/92C   4H   6O   1    0G   298.150  3000.0    1000.0      1
 1.98794540E+01-2.09130550E-02 4.45360508E-05-2.60374870E-08 4.86836120E-12    2
-1.58539966E+04-6.71095639E+01-1.55577660E+00 4.09640630E-02-1.69868810E-05    3
-6.00928140E-18 2.31368530E-21-1.04656118E+04 3.90812260E+01-1.29340710E+04    4
C4H6O25           T 3/97C   4H   6O   1    0G   200.000  5000.000  1000.0      1
 8.60658242E+00 2.08310051E-02-8.42229481E-06 1.56717640E-09-1.09391202E-13    2
-1.76177415E+04-2.32464750E+01 2.67053463E+00 4.92586420E-03 8.86967406E-05    3
-1.26219194E-07 5.23991321E-11-1.46572472E+04 1.45722395E+01-1.30831522E+04    4
C4H6O23           T 3/97C   4H   6O   1    0G   200.000  5000.000  1000.0      1
 8.60658242E+00 2.08310051E-02-8.42229481E-06 1.56717640E-09-1.09391202E-13    2
-1.32392815E+04-2.32464750E+01 2.67053463E+00 4.92586420E-03 8.86967406E-05    3
-1.26219194E-07 5.23991321E-11-1.02787872E+04 1.45722395E+01-1.30831522E+04    4
sC4H9             T07/95C   4H   9    0    0G   200.000  6000.000  1000.0      1
 0.88057265E+01 0.23630381E-01-0.84564737E-05 0.13612584E-08-0.81313232E-13    2
 0.37941169E+04-0.19996770E+02 0.46457042E+01 0.79313214E-02 0.70027013E-04    3
-0.95973349E-07 0.38628890E-10 0.62341181E+04 0.79642808E+01 0.84190169E+04    4
C5H2               20587C   5H   2          G  0300.00   5000.00  1000.00      1
 0.01132917E+03 0.07424057E-01-0.02628189E-04 0.04082541E-08-0.02301333E-12    2
 0.07878706E+06-0.03617117E+03 0.03062322E+02 0.02709998E+00-0.01009170E-03    3
-0.01272745E-06 0.09167219E-10 0.08114969E+06 0.07071078E+02                   4
C5H3               20387C   5H   3          G  0300.00   5000.00  1000.00      1
 0.01078762E+03 0.09539619E-01-0.03206745E-04 0.04733323E-08-0.02512135E-12    2
 0.06392904E+06-0.03005444E+03 0.04328720E+02 0.02352480E+00-0.05856723E-04    3
-0.01215449E-06 0.07726478E-10 0.06588531E+06 0.04173259E+02                   4
C5H6              T 1/90C   5H 6      0    0G   200.000  6000.000              1
 0.99757848E+01 0.18905543E-01-0.68411461E-05 0.11099340E-08-0.66680236E-13    2
 0.11081693E+05-0.32209454E+02 0.86108957E+00 0.14804031E-01 0.72108895E-04    3
-0.11338055E-06 0.48689972E-10 0.14801755E+05 0.21353453E+02 0.16152485E+05    4
!C5H5"OLD"         D10/01C   5H   5    0    0G   300.000  3000.000              1
!-0.18328686E+01 0.41817095E-01-0.26248981E-04 0.80593523E-08-0.98131702E-12    2
! 0.30725047E+05 0.32755760E+02-0.14847748E+02 0.14919417E+00-0.29516959E-03    3
! 0.27862689E-06-0.96990506E-10 0.31251482E+05 0.83555710E+02                   4
C5H5              T12/89C   5H 5      0    0G   300.00   2000.000 1000.00      1
 0.74743938E+01 0.16012733E-01-0.64823148E-08-0.35819703E-08 0.92365071E-12    2
 2.80860000E+04-0.16133000E+02 0.98349822E+00 0.33651476E-01-0.11054181E-06    3
-0.36743394E-07 0.23141184E-10 2.96260000E+04 0.16585519E+02                   4
cC5H8             T03/97C   5H   8O   0    0G   200.000  6000.000  1000.0      1
 0.77244792E+01 0.28322316E-01-0.11545236E-04 0.21540815E-08-0.15054178E-12    2
-0.78261573E+03-0.19769698E+02 0.26898140E+01 0.20954550E-02 0.11303687E-03    3
-0.15408070E-06 0.62763658E-10 0.23139663E+04 0.15294056E+02 0.39328836E+04    4
lC5H9             T03/97C   5H   9O   0    0G   200.000  6000.000  1000.0      1
 0.20313000E+02 0.10869880E-01-0.19063805E-05 0.00000000E+00 0.00000000E+00    2
 0.94061603E+04-0.82533815E+02 0.11430827E+01 0.44350789E-01-0.17825470E-04    3
 0.00000000E+00 0.00000000E+00 0.16967656E+05 0.24181940E+02 0.19122233E+05    4
cC5H9             T03/97C   5H   9O   0    0G   200.000  6000.000  1000.0      1
 0.11406802E+02 0.22563988E-01-0.70235595E-05 0.11321968E-08-0.73438204E-13    2
 0.75268769E+04-0.39636280E+02 0.29427128E+00 0.13823374E-01 0.90847653E-04    3
-0.13008694E-06 0.53051811E-10 0.12565712E+05 0.27389773E+02 0.13838458E+05    4
C5H4O             T 8/99C   5H   4O   1    0G   200.000  6000.000              1
 1.00806824E+01 1.61143465E-02-5.83314509E-06 9.46759320E-10-5.68972206E-14    2
 1.94364771E+03-2.94521623E+01 2.64576497E-01 3.34873827E-02 1.67738470E-06    3
-2.96207455E-08 1.54431476E-11 5.11159287E+03 2.35409513E+01 6.64245999E+03    4
C5H4OH            T 8/99C   5H   5O   1    0G   200.000  6000.000              1
 1.33741248E+01 1.51996469E-02-5.45685046E-06 8.80944866E-10-5.27493258E-14    2
 2.20358027E+03-4.59569069E+01-1.28398054E+00 4.90298511E-02-1.35844414E-05    3
-2.92983743E-08 1.90820619E-11 6.37364803E+03 3.08073591E+01 8.00114499E+03    4
C5H5O(2,4)        D 9/97C   5H   5O   1   00G   300.000  3000.000              1
 0.85405312E+01 0.22989510E-01-0.95437563E-05 0.17061612E-08-0.97459360E-13    2
 0.22263699E+05-0.20818825E+02-0.30777600E+01 0.52581679E-01-0.28856513E-04    3
-0.33885479E-08 0.63361399E-11 0.25510455E+05 0.39591522E+02 0.26570048E+05    4
C5H5O(1,3)        DU0997C   5H   5O   1   00G   300.000  3000.000   1000.00    1
 0.92431440E+01 0.22201257E-01-0.93105946E-05 0.17155222E-08-0.10613969E-12    2
 0.15908394E+04-0.24087738E+02-0.29566984E+01 0.55851892E-01-0.37241636E-04    3
 0.41624357E-08 0.39272010E-11 0.48573193E+04 0.38676682E+02                   4
C5H5OH            HWZD99C   5H   6O   1    0G   300.000  3000.000              1
 0.34893970E+01 0.38052600E-01-0.21654527E-04 0.59238574E-08-0.62763461E-12    2
-0.82131025E+04 0.71248055E+01-0.50430169E+01 0.71253479E-01-0.70918177E-04    3
 0.38680220E-07-0.87888264E-11-0.64167788E+04 0.48617100E+02                   4
bi-C5H4O          DU0997C   5H   4O   1   00G   300.000  3000.000   1000.00    1
 0.10514051E+02 0.16667502E-01-0.61001861E-05 0.81804008E-09-0.88743752E-14    2
 0.27501334E+05-0.30678673E+02-0.35879545E+01 0.59943721E-01-0.52969943E-04    3
 0.19971461E-07-0.14667430E-11 0.31091709E+05 0.40873169E+02                   4
lC5H6             HWZD99C   5H   6    0    0G   300.     3000.      1000.      1
 0.86914568E+01 0.21268958E-01-0.79818547E-05 0.11795985E-08-0.35253359E-13    2
 0.25763865E+05-0.19189083E+02 0.58391756E+00 0.42602919E-01-0.24962495E-04    3
 0.25815752E-08 0.23169964E-11 0.28043699E+05 0.22916780E+02                   4
lC5H7             HWZD99C   5H   7    0    0G   300.000  3000.000              1
 0.22246480E+01 0.39601296E-01-0.22345617E-04 0.60649676E-08-0.63840047E-12    2
 0.22303428E+05 0.14009951E+02-0.40974307E+01 0.61832044E-01-0.48770780E-04    3
 0.16696418E-07-0.75334899E-12 0.23683646E+05 0.45148109E+02                   4
C6H2              D11/99C   6H   2    0    0G   300.000  3000.000              1
 0.12893918E+02 0.79145068E-02-0.24027240E-05 0.24340149E-09 0.31383246E-14    2
 0.79832406E+05-0.40771996E+02 0.45099974E+00 0.67475192E-01-0.11809925E-03    3
 0.10367632E-06-0.34851039E-10 0.82173062E+05 0.17704124E+02                   4
C6H               P 1/93C   6H   1    0    0G   300.000  3000.000              1
 0.12370055E+02 0.52177699E-02-0.16885009E-05 0.25807149E-09-0.15472851E-13    2
 0.12158739E+06-0.34952797E+02-0.25630299E+00 0.63793827E-01-0.11440118E-03    3
 0.10136744E-06-0.34361855E-10 0.12408855E+06 0.24930750E+02                   4
l-C6H4            H6W/94C   6H   4    0    0G   300.000  3000.000              1
 0.12715182E+02 0.13839662E-01-0.43765440E-05 0.31541636E-09 0.46619026E-13    2
 0.57031148E+05-0.39464600E+02 0.29590225E+00 0.58053318E-01-0.67766756E-04    3
 0.43376762E-07-0.11418864E-10 0.60001371E+05 0.22318970E+02                   4
l-C6H6            H6W/94C   6H   6    0    0G   300.000  3000.000              1
 0.17584442E+02 0.64486600E-02 0.48933980E-05-0.34696221E-08 0.56150749E-12    2
 0.34111988E+05-0.66017838E+02-0.10170622E+01 0.61794821E-01-0.59461061E-04    3
 0.31873491E-07-0.71717693E-11 0.39202707E+05 0.29460373E+02                   4
c-C6H7            H6W/94C   6H   7    0    0G   300.000  3000.000              1
 0.19996841E+02 0.11189543E-02 0.11649756E-04-0.62779471E-08 0.94939508E-12    2
 0.16730059E+05-0.83746933E+02-0.30328493E+01 0.50804518E-01-0.69150292E-05    3
-0.29715974E-07 0.16296353E-10 0.23895383E+05 0.38909180E+02                   4
n-C6H7            H6W/94C   6H   7    0    0G   300.000  3000.000              1
 0.22577469E+02-0.30737517E-02 0.14225234E-04-0.69880848E-08 0.10232874E-11    2
 0.41228980E+05-0.91568619E+02 0.13248032E+00 0.57103366E-01-0.43712644E-04    3
 0.15538603E-07-0.12976356E-11 0.47730512E+05 0.25339081E+02                   4
C6H8              H6W/94C   6H   8    0    0G   300.000  3000.000              1
 0.28481979E+02-0.15702948E-01 0.26771697E-04-0.11780109E-07 0.16573427E-11    2
 0.93346445E+04-0.12500226E+03 0.15850439E+01 0.40215142E-01 0.78439543E-05    3
-0.38761325E-07 0.18545207E-10 0.17949613E+05 0.19112625E+02                   4
cC6H8             T03/97C   6H   8O   0    0G   200.000  6000.000  1000.0      1
 0.11779870E+02 0.25519980E-01-0.92666947E-05 0.15068122E-08-0.90658701E-13    2
 0.65486686E+04-0.41618805E+02 0.17265319E+01 0.14887612E-01 0.94809230E-04    3
-0.14083394E-06 0.58859873E-10 0.11021297E+05 0.19130886E+02 0.12784878E+05    4
lC6H9             T 2/92C   6H   9O    0   0G   200.000  3000.000 1000.0       1
 0.23165919E+02 0.10813608E-01-0.17638168E-05 0.00000000E+00 0.00000000E+00    2
 0.11162402E+05-0.98600332E+02 0.31671271E+00 0.52069818E-01-0.21965057E-04    3
 0.00000000E+00 0.00000000E+00 0.19926824E+05 0.27879902E+02 0.22141533E+05    4
cC6H9             T 2/92C   6H   9O    0   0G   200.000  3000.000 1000.0       1
 0.26295828E+02 0.86828857E-02-0.15770376E-05 0.00000000E+00 0.00000000E+00    2
 0.20863563E+04-0.12573825E+03-0.35714300E+01 0.61696043E-01-0.26928803E-04    3
 0.00000000E+00 0.00000000E+00 0.13657039E+05 0.39986250E+02 0.15096500E+05    4
cC6H10            T03/97C   6H  10O   0    0G   200.000  6000.000  1000.0      1
 0.11773904E+02 0.30947360E-01-0.11234330E-04 0.18262494E-08-0.10985119E-12    2
-0.72028376E+04-0.42658688E+02 0.23662378E+01 0.10681712E-01 0.11822112E-03    3
-0.16567854E-06 0.67612802E-10-0.24824973E+04 0.16769357E+02-0.55324968E+03    4
C6H3              H6W/94C   6H   3    0    0G   300.000  3000.000              1
 0.58188343E+01 0.27933408E-01-0.17825427E-04 0.53702536E-08-0.61707627E-12    2
 0.85188250E+05-0.92147827E+00 0.11790619E+01 0.55547360E-01-0.73076168E-04    3
 0.52076736E-07-0.15046964E-10 0.85647312E+05 0.19179199E+02                   4
i-C6H5            H6W/94C   6H   5    0    0G   300.000  3000.000              1
 0.22501663E+02-0.81009977E-02 0.15955695E-04-0.72310371E-08 0.10310424E-11    2
 0.58473410E+05-0.91224777E+02-0.78585434E+00 0.60221825E-01-0.62890264E-04    3
 0.36310730E-07-0.87000259E-11 0.64942270E+05 0.28658905E+02                   4
i-C6H7            H6W/94C   6H   7    0    0G   300.000  3000.000              1
 0.20481506E+02 0.79439697E-03 0.11450761E-04-0.60991177E-08 0.91756724E-12    2
 0.37728426E+05-0.81812073E+02-0.17099094E+01 0.62486034E-01-0.54290707E-04    3
 0.26959682E-07-0.58999090E-11 0.44086621E+05 0.33344772E+02                   4
o-C6H4            D11/99C   6H   4    0    0G   300.000  3000.000              1
 0.88432961E+01 0.20301474E-01-0.88674269E-05 0.17264292E-08-0.11786047E-12    2
 0.49317113E+05-0.24014301E+02-0.38454189E+01 0.58391564E-01-0.48644750E-04    3
 0.16770320E-07-0.78580680E-12 0.52592500E+05 0.40587132E+02                   4
m-C6H4            D11/99C   6H   4    0    0G   300.000  3000.000              1
 0.95307283E+01 0.19178549E-01-0.80941481E-05 0.14811132E-08-0.88632260E-13    2
 0.56865535E+05-0.27623203E+02-0.39450364E+01 0.59887171E-01-0.50811577E-04    3
 0.17603140E-07-0.72608743E-12 0.60323117E+05 0.40899506E+02                   4
p-C6H4            D11/99C   6H   4    0    0G   300.000  3000.000              1
 0.98300371E+01 0.18499156E-01-0.75165058E-05 0.12727610E-08-0.61767120E-13    2
 0.64446117E+05-0.29418266E+02-0.39744728E+01 0.58399867E-01-0.44950713E-04    3
 0.10307744E-07 0.22412619E-11 0.68058992E+05 0.41168865E+02                   4
l-C6H4Z           D11/99C   6H   4    0    0G   300.000  3000.000              1
 0.11186811E+02 0.17122138E-01-0.73898623E-05 0.14678845E-08-0.10733922E-12    2
 0.60743207E+05-0.29537384E+02 0.20895090E+01 0.53276263E-01-0.63299172E-04    3
 0.40811642E-07-0.10598600E-10 0.62662203E+05 0.14613283E+02                   4
nC6H5             D11/99C   6H   5    0    0G   300.000  3000.000              1
 0.11263281E+02 0.19379666E-01-0.76874276E-05 0.12866819E-08-0.63244650E-13    2
 0.68052773E+05-0.30487534E+02-0.27013230E+00 0.59389681E-01-0.60963321E-04    3
 0.33169378E-07-0.71466453E-11 0.70785828E+05 0.26953651E+02                   4
C6H5              D11/99C   6H   5    0    0G   300.000  3000.000              1
 0.85973110E+01 0.22241630E-01-0.87199978E-05 0.13788785E-08-0.53146056E-13    2
 0.36261047E+05-0.22954643E+02-0.36931453E+01 0.52178968E-01-0.25558427E-04    3
-0.70661121E-08 0.75833975E-11 0.39779590E+05 0.41332535E+02                   4
C6H6              D11/99C   6H   6    0    0G   300.000  3000.000              1
 0.91381245E+01 0.23854433E-01-0.88127726E-05 0.12099021E-08-0.18221503E-13    2
 0.52043462E+04-0.29115665E+02-0.48437734E+01 0.58427613E-01-0.29485855E-04    3
-0.69390440E-08 0.82125253E-11 0.91817773E+04 0.43889832E+02                   4
C5H5CH3           P 1/93C   6H   8    0    0G   300.000  2500.000              1
 0.14628364E+02 0.19849248E-01-0.50529134E-05 0.10556275E-10 0.11381723E-12    2
 0.55674092E+04-0.56114021E+02-0.45763016E-01 0.29978730E-01 0.61898092E-04    3
-0.11171783E-06 0.49435803E-10 0.10927480E+05 0.26558569E+02                   4
C5H4CH2           P 1/93C   6H   6    0    0G   300.000  2500.000              1
 0.75731055E+04-0.18843678E+02 0.17058320E-01-0.65980571E-05 0.93053393E-09    2
-0.22894220E+07-0.40003195E+05 0.78428810E+02-0.43919629E+00 0.13370259E-02    3
-0.14196110E-05 0.56357985E-09 0.22226365E+05-0.41005380E+03                   4
C6H5C6H5          HW /94C  12H  10    0    0G   300.000  3000.000              1
 0.50761871E+02-0.34501564E-01 0.50293413E-04-0.21559579E-07 0.30097192E-11    2
 0.21538867E+04-0.24670712E+03-0.10283234E+02 0.12428707E+00-0.95990268E-04    3
 0.32294793E-07-0.23045229E-11 0.20165258E+05 0.72707947E+02                   4
C6H5C2H           H6W/94C   8H   6    0    0G   300.000  3000.000              1
 0.24090759E+02 0.78232400E-03 0.11453964E-04-0.61620504E-08 0.93346685E-12    2
 0.27429445E+05-0.10499631E+03-0.52645016E+01 0.84511042E-01-0.76597848E-04    3
 0.33216978E-07-0.47673063E-11 0.35566242E+05 0.46378815E+02                   4
C6H5CH3           L 6/87C   7H   8    0    0G   200.000  6000.000              1
 0.12940034E+02 0.26691287E-01-0.96838505E-05 0.15738629E-08-0.94663601E-13    2
-0.69764908E+03-0.46728785E+02 0.16152663E+01 0.21099438E-01 0.85366018E-04    3
-0.13261066E-06 0.55956604E-10 0.40756300E+04 0.20282210E+02 0.60135835E+04    4
C6H5CH2           T08/90C   7H   7    0    0G   200.000  6000.000              1
 0.14043980E+02 0.23493873E-01-0.85375367E-05 0.13890841E-08-0.83614420E-13    2
 0.18564203E+05-0.51665589E+02 0.48111540E+00 0.38512832E-01 0.32861492E-04    3
-0.76972721E-07 0.35423068E-10 0.23307027E+05 0.23548820E+02 0.25317186E+05    4
C6H5C2H3          T12/94C   8H   8    0    0G   298.150  5000.000              1
 0.16139277E+02 0.24210847E-01-0.72678359E-05 0.11392276E-08-0.72984881E-13    2
 0.10249251E+05-0.61169437E+02-0.10717708E+02 0.12666725E+00-0.17762493E-03    3
 0.14344049E-06-0.47616577E-10 0.16597133E+05 0.71526331E+02 0.17723291E+05    4
C6H5CH2OH         L 7/87C   7H   8O   1    0G   200.000  6000.000 1000.00      1
 0.15281154E+02 0.27208501E-01-0.98584660E-05 0.16012183E-08-0.96278057E-13    2
-0.19700471E+05-0.59418673E+02 0.20642021E+01 0.22775140E-01 0.95972053E-04    3
-0.15085110E-06 0.64175832E-10-0.14285021E+05 0.18148312E+02-0.12077200E+05    4
C6H5CHO           L 3/86C   7H   6O   1    0G   298.150  5000.000 1000.00      1
 0.13650737E+02 0.25680419E-01-0.10466729E-04 0.19413430E-08-0.13483792E-12    2
-0.11019744E+05-0.47965796E+02-0.31627334E+01 0.66369245E-01-0.34816353E-04    3
-0.62999377E-08 0.85807101E-11-0.61169349E+04 0.40231735E+02-0.44259974E+04    4
C6H5CO    EST/BUR P 1/93C   7H   5O   1    0G   300.000  2500.000              1
 0.13374409E+02 0.23999289E-01-0.10465724E-04 0.21669131E-08-0.18007045E-12    2
 0.69147837E+04-0.44659218E+02-0.20251155E+01 0.61512541E-01-0.31603653E-04    3
-0.69724599E-08 0.79835149E-11 0.11255803E+05 0.35778175E+02                   4
C6H4O2            PUML96C   6H   4O   2    0G   300.000  5000.000 1000.000     1
 0.11730840E+02 0.23614995E-01-0.10234576E-04 0.19532174E-08-0.12746022E-12    2
-0.21085770E+05-0.36300453E+02-0.95193005E+00 0.57842445E-01-0.38214439E-04    3
 0.46312656E-08 0.36296651E-11-0.17611047E+05 0.29239513E+02                   4
C6H5O             T05/02C   6H   5O   1    0G   200.000  6000.000 1000.000     1
 1.37221720E+01 1.74688771E-02-6.35504520E-06 1.03492308E-09-6.23410504E-14    2
 2.87274751E+02-4.88181680E+01-4.66204455E-01 4.13443975E-02 1.32412991E-05    3
-5.72872769E-08 2.89763707E-11 4.77858391E+03 2.76990274E+01 6.49467016E+03    4
C6H5OH            L 4/84C   6H   6O   1    0G   300.000  5000.000              1
 0.14912073E+02 0.18378135E-01-0.61983128E-05 0.91983221E-09-0.49209565E-13    2
-0.18375199E+05-0.55924103E+02-0.16956539E+01 0.52271299E-01-0.72024050E-05    3
-0.35859603E-07 0.20449073E-10-0.13284121E+05 0.32542160E+02-0.11594207E+05    4
C6H5C2H5          A 6/83C   8H  10    0    0G   300.     3000.    1000.00      1
  0.3878978E+01  0.5810059E-01 -0.3196380E-04  0.8448993E-08 -0.8694825E-12    2
 -0.5024922E+03  0.3837099E+01 -0.7266845E+01  0.1003089E+00 -0.9651715E-04    3
  0.5565908E-07 -0.1453370E-10  0.1987290E+04  0.5857746E+02  0.3529492E+04    4
HOC6H4CH3 AVG CRESOL6/87C   7H   8O   1    0G   200.000  6000.000 1000.00      1
 0.15932987E+02 0.27011160E-01-0.99448722E-05 0.16296689E-08-0.98513298E-13    2
-0.23592065E+05-0.59732841E+02 0.42258267E+00 0.45551636E-01 0.32012513E-04    3
-0.81121959E-07 0.37665658E-10-0.18202621E+05 0.26032903E+02-0.15911701E+05    4
OC6H4CH3  EST/BUR P 1/93C   7H   7O   1    0G   300.000  2500.000              1
 0.22609371E+02 0.75646150E-02 0.65960894E-05-0.47150865E-08 0.80409063E-12    2
-0.82025244E+04-0.97292511E+02-0.28855777E+00 0.48003536E-01 0.18032993E-04    3
-0.61741488E-07 0.28852587E-10-0.68945581E+03 0.26720068E+02                   4
bi-C6H5CH2        A 6/83C  14H  14    0    0G   300.     3000.    1000.00      1
  0.7292035E+01  0.9250200E-01 -0.5168641E-04  0.1362709E-07 -0.1381148E-11    2
  0.1031673E+05 -0.1132738E+02 -0.1388958E+02  0.1720984E+00 -0.1700660E-03    3
  0.9601888E-07 -0.2373253E-10  0.1503234E+05  0.9270736E+02  0.1721641E+05    4
C10H8             H6W/94C  10H   8    0    0G   300.000  3000.000              1
 0.36468643E+02-0.15419513E-01 0.30160038E-04-0.13700120E-07 0.19582730E-11    2
 0.35091445E+04-0.17329489E+03-0.94505043E+01 0.11137849E+00-0.10345667E-03    3
 0.52800392E-07-0.11804439E-10 0.16695594E+05 0.65187668E+02                   4
C6H4CH3           P 1/93C   7H   7    0    0G   300.000  2500.000              1
 0.11615498E+02 0.27431838E-01-0.10899345E-04 0.18641830E-08-0.10191607E-12    2
 0.31209334E+05-0.38994637E+02-0.31415942E+01 0.56723077E-01-0.86885111E-05    3
-0.34249616E-07 0.19266902E-10 0.35738547E+05 0.39742840E+02                   4
!Added from our previous data
C5H8              T 2/90C   5H   8    0    0G   200.000  5000.000 1000.        1
 0.77244792E+01 0.28322316E-01-0.11545236E-04 0.21540815E-08-0.15054178E-12    2
-0.78261573E+03-0.19769698E+02 0.26898140E+01 0.20954550E-02 0.11303687E-03    3
-0.15408070E-06 0.62763658E-10 0.23139663E+04 0.15294056E+02                   4
C4H8                    C   4H   80   00   0G   300.00   5000.00  1000.00      1
 0.20535840E+01 0.34350500E-01-0.15883196E-04 0.33089660E-08-0.25361040E-12    2
-0.21397230E+04 0.15543201E+02 0.11811380E+01 0.30853380E-01 0.50865240E-05    3
-0.24654880E-07 0.11110192E-10-0.17904000E+04 0.21062470E+02                   4
JP10                    C  10H  16O   00   0G   300.00   5000.00  1000.00      1
-4.78290200E+00 9.08977000E-02-4.73497000E-05 9.36283900E-09-3.17350600E-12    2
-9.13640100E+03-1.59228000E+01-4.78290200E+00 9.08977000E-02-4.73497000E-05    3
 9.36283900E-09-3.17350600E-12-9.13640100E+03-1.59228000E+01                   4
N                 120186N   1               G  0300.00   5000.00  1000.00      1
 0.02450268E+02 0.10661458E-03-0.07465337E-06 0.01879652E-09-0.10259839E-14    2
 0.05611604E+06 0.04448758E+02 0.02503071E+02-0.02180018E-03 0.05420529E-06    3
-0.05647560E-09 0.02099904E-12 0.05609890E+06 0.04167566E+02                   4
NO                RUS 89N   1O   1    0    0G   200.000  6000.000 1000.        1
 3.26071234E+00 1.19101135E-03-4.29122646E-07 6.94481463E-11-4.03295681E-15    2
 9.92143132E+03 6.36900518E+00 4.21859896E+00-4.63988124E-03 1.10443049E-05    3
-9.34055507E-09 2.80554874E-12 9.84509964E+03 2.28061001E+00 1.09770882E+04    4
HCN               L 7/88H   1C   1N   1    0G   200.000  6000.000 1000.        1
 0.38022392E+01 0.31464227E-02-0.10632185E-05 0.16619757E-09-0.97997567E-14    2
 0.14910512E+05 0.15754601E+01 0.22589885E+01 0.10051170E-01-0.13351763E-04    3
 0.10092349E-07-0.30089029E-11 0.15215853E+05 0.89164418E+01 0.16236675E+05    4
NH                L11/89N   1H   1    0    0G   200.000  6000.000 1000.        1
 0.27836929E+01 0.13298429E-02-0.42478047E-06 0.78348504E-10-0.55044470E-14    2
 0.42134514E+05 0.57407798E+01 0.34929084E+01 0.31179197E-03-0.14890484E-05    3
 0.24816442E-08-0.10356967E-11 0.41894294E+05 0.18483277E+01 0.42940822E+05    4
HNCO              T 6/94H   1N   1C   1O   1G   200.000  6000.000 1000.        1
 0.52936894E+01 0.40307770E-02-0.14130589E-05 0.22445562E-09-0.13287683E-13    2
-0.15973489E+05-0.30864710E+01 0.22432188E+01 0.14491349E-01-0.15236174E-04    3
 0.83345851E-08-0.17104033E-11-0.15233708E+05 0.12157321E+02-0.14039745E+05    4
NH2               L12/89N   1H   2    0    0G   200.000  6000.000 1000.        1
 0.28476611E+01 0.31428453E-02-0.89866557E-06 0.13032357E-09-0.74885356E-14    2
 0.21823916E+05 0.64718133E+01 0.42055601E+01-0.21355282E-02 0.72682021E-05    3
-0.59302799E-08 0.18067218E-11 0.21535223E+05-0.14663231E+00 0.22747541E+05    4
CN                T 6/94C   1N   1    0    0G   200.000  6000.000 1000.        1
 0.37459804E+01 0.43450773E-04 0.29705984E-06-0.68651804E-10 0.44134174E-14    2
 0.52353188E+05 0.27867600E+01 0.36129350E+01-0.95551327E-03 0.21442976E-05    3
-0.31516324E-09-0.46430356E-12 0.52525340E+05 0.39804995E+01 0.52571034E+05    4
HNO               L12/89H   1N   1O   1    0G   200.000  3500.000 1000.        1
 0.31655229E+01 0.30000862E-02-0.39436619E-06-0.38575815E-10 0.70807189E-14    2
 0.11194426E+05 0.76477833E+01 0.45352475E+01-0.56853972E-02 0.18519850E-04    3
-0.17188273E-07 0.55583207E-11 0.11039881E+05 0.17431919E+01 0.12271645E+05    4
N2O               L 7/88N   2O   1    0    0G   200.000  6000.000 1000.        1
 0.48230729E+01 0.26270251E-02-0.95850872E-06 0.16000712E-09-0.97752302E-14    2
 0.80734047E+04-0.22017208E+01 0.22571502E+01 0.11304728E-01-0.13671319E-04    3
 0.96819803E-08-0.29307182E-11 0.87417746E+04 0.10757992E+02 0.98141682E+04    4
N2H               T07/93N   2H   1    0    0G   200.000  6000.000 1000.        1
 0.37667545E+01 0.28915081E-02-0.10416620E-05 0.16842594E-09-0.10091896E-13    2
 0.28650697E+05 0.44705068E+01 0.43446927E+01-0.48497072E-02 0.20059459E-04    3
-0.21726464E-07 0.79469538E-11 0.28791973E+05 0.29779411E+01 0.30009829E+05    4
NH3  AMONIA       RUS 89N   1H   3    0    0G   200.000  6000.000 1000.        1
 2.71709692E+00 5.56856338E-03-1.76886396E-06 2.67417260E-10-1.52731419E-14    2
-6.58451989E+03 6.09289837E+00 4.30177808E+00-4.77127330E-03 2.19341619E-05    3
-2.29856489E-08 8.28992268E-12-6.74806394E+03-6.90644393E-01-5.52528050E+03    4
NO2               L 7/88N   1O   2    0    0G   200.000  6000.000 1000.        1
 0.48847540E+01 0.21723955E-02-0.82806909E-06 0.15747510E-09-0.10510895E-13    2
 0.23164982E+04-0.11741695E+00 0.39440312E+01-0.15854290E-02 0.16657812E-04    3
-0.20475426E-07 0.78350564E-11 0.28966180E+04 0.63119919E+01 0.41124701E+04    4
NCO               EA 93 N   1C   1O   1     G   200.000  6000.000  1000.000    1
 0.51521845E+01 0.23051761E-02-0.88033153E-06 0.14789098E-09-0.90977996E-14    2
 0.14004123E+05-0.25442660E+01 0.28269308E+01 0.88051688E-02-0.83866134E-05    3
 0.48016964E-08-0.13313595E-11 0.14682477E+05 0.95504646E+01                   4
C4H6                    C   4H   60   00   0G   300.00   3000.00  1000.00      1
 0.98438620E+01 0.15445170E-01-0.57172000E-05 0.10145160E-08-0.68655930E-13    2
 0.90772280E+04-0.28003430E+02 0.11107870E+02-0.63027940E-02 0.53619200E-04    3
-0.59145190E-07 0.21238630E-10 0.96868770E+04-0.29928690E+02                   4
C7H16             000000N   0AR  0C   7H  16G    300.00  5000.00  1000.00      1
 5.15327664E+00 6.58448144E-02-2.99765849E-05 5.12173194E-09 0.00000000E+00    2
-2.73334877E+04 2.64465624E+00-1.49861609E+00 8.56446777E-02-5.10778379E-05    3
 1.45322121E-08-1.45719946E-12-2.56089558E+04 3.65725432E+01                   4
C5H10             000000N   0AR  0C   5H  10G    300.00  5000.00  1000.00      1
 4.62768794E+00 3.99163471E-02-1.76584355E-05 2.94527974E-09 0.00000000E+00    2
-5.90930391E+03 3.39515508E+00-1.36099451E+00 5.87684877E-02-3.93332993E-05    3
 1.36933176E-08-1.93663167E-12-4.42142034E+03 3.36502744E+01                   4
!ethanol
C2H5OH                  C   2H   6O   1     G    300.00   5000.00 1000.00      1
 .434717120E+01 .186288000E-01-.677946700E-05 .816592600E-09 .000000000E+00    2
-.306615743E+05 .324247304E+01 .576535800E+00 .289451200E-01-.161002000E-04    3
 .359164100E-08 .000000000E+00-.296359500E+05 .227081300E+02                   4
CH3CHOH                 C   2H   5O   1     G    300.00   5000.00 1553.00      1
 .726570301E+01 .109588926E-01-.363662803E-05 .553659830E-09-.317012322E-13    2
-.864371441E+04-.106822851E+02 .183974631E+01 .187789371E-01-.460544253E-05    3
-.213116990E-08 .943772653E-12-.629595195E+04 .201446141E+02                   4
CH3CH2O            MAR96C   2H   5O   1     G  0300.00   5000.00  1405.00      1 
 8.31182392E+00 1.03426319E-02-3.39186089E-06 5.12212617E-10-2.91601713E-14    2
-6.13097954E+03-2.13985581E+01-2.71296378E-01 2.98839812E-02-1.97090548E-05    3
 6.37339893E-09-7.77965054E-13-3.16397196E+03 2.47706003E+01                   4
HOC2H4O2                C   2H   5O   3    0G   300.000  5000.    1395.00      1
 9.22339915E+00 1.41346358E-02-4.75283025E-06 7.28795964E-10-4.18969629E-14    2
-2.35984031E+04-1.53847386E+01 3.58811609E+00 2.99414161E-02-2.35156549E-05    3
 1.12635525E-08-2.28663686E-12-2.17409435E+04 1.42166729E+01                   4
CH2CH2OH                C   2H   5O   1     G    300.00   5000.00 1391.00      1
 .752244726E+01 .110492715E-01-.372576465E-05 .572827397E-09-.330061759E-13    2
-.729337464E+04-.124960750E+02 .117714711E+01 .248115685E-01-.150299503E-04    3
 .479006785E-08-.640994211E-12-.495369043E+04 .220081586E+02                   4
C2H4OH                  C   2H   5O   1     G    300.00   5000.00 1391.00      1
 .752244726E+01 .110492715E-01-.372576465E-05 .572827397E-09-.330061759E-13    2
-.729337464E+04-.124960750E+02 .117714711E+01 .248115685E-01-.150299503E-04    3
 .479006785E-08-.640994211E-12-.495369043E+04 .220081586E+02                   4
CH3CHO            L 8/88C   2H   4O   1    0G   200.000  6000.0    1000.0      1
 0.54041108E+01 0.11723059E-01-0.42263137E-05 0.68372451E-09-0.40984863E-13    2
-0.22593122E+05-0.34807917E+01 0.47294595E+01-0.31932858E-02 0.47534921E-04    3
-0.57458611E-07 0.21931112E-10-0.21572878E+05 0.41030159E+01-0.19987949E+05    4
ENDOFDATA

\\
\\
\\  This is the tran file
\\
\\
AR                 0   136.500     3.330     0.000     0.000     0.000
RR                 0   136.500     3.330     0.000     0.000     0.000
AS                 0  1045.500     4.580     0.000     0.000     0.000 ! MEC
ASH                1   199.300     4.215     0.000     0.000     1.000 ! MEC
ASH2               2   229.600     4.180     0.000     0.000     1.000 ! MEC 
C                  0    71.400     3.298     0.000     0.000     0.000 ! *
C2                 1    97.530     3.621     0.000     1.760     4.000
C2O                1   232.400     3.828     0.000     0.000     1.000 ! *
CN2                1   232.400     3.828     0.000     0.000     1.000 ! OIS
C2H                1   265.300     3.721     0.000     0.000     2.500 ! NMM
C2H2               1   265.300     3.721     0.000     0.000     2.500 ! NMM
C2H2OH             2   224.700     4.162     0.000     0.000     1.000 ! *
C2H3               2   265.300     3.721     0.000     0.000     1.000 ! NMM 
C2H4               2   238.400     3.496     0.000     0.000     1.500 ! NMM
C2H5               2   247.500     4.350     0.000     0.000     1.500 ! NMM
C2H5OH             2   470.600     4.410     0.000     0.000     1.500 ! NMM
HOCH2O             2   470.600     4.410     0.000     0.000     1.500 ! WJP
C2H4O2H            2   470.600     4.410     0.000     0.000     1.500 ! WJP
O2C2H4O2H          2   470.600     4.410     0.000     0.000     1.500 ! WJP
C2H5O2             2   470.600     4.410     0.000     0.000     1.500 ! WJP    
C2H5O2H            2   470.600     4.410     0.000     0.000     1.500 ! WJP    
C2H5O              2   470.600     4.410     0.000     0.000     1.500 ! NMM
PC2H4OH            2   470.600     4.410     0.000     0.000     1.500 ! NMM
SC2H4OH            2   470.600     4.410     0.000     0.000     1.500 ! NMM
O2C2H4OH           2   523.2       5.664     1.7       0.0       1.0   ! WJP
C2H4O              2   436.000     3.970     0.000     0.000     2.000 !=CH3HCO konnov
C2H4O1,2           2   387.3       4.349     0.000     0.000     1.500 ! WJP
C2H6               2   247.500     4.350     0.000     0.000     1.500 ! NMM
C2N                1   232.400     3.828     0.000     0.000     1.000 ! OIS
C2N2               1   349.000     4.361     0.000     0.000     1.000 ! OIS
C3H2               2   209.000     4.100     0.000     0.000     1.000 ! *
C3H2(S)            2   209.000     4.100     0.000     0.000     1.000 ! *
C3H3               1   324.800     4.290     0.000     0.000     1.000 ! NMM
C4H3               1   357.000     4.720     0.000     0.000     1.000 ! NMM
C3H4O              2   443.200     4.120     0.000     0.000     1.000 ! NMM
CHCHCHO            2   443.200     4.120     0.000     0.000     1.000 ! NMM
HCCCHO             2   443.200     4.120     0.000     0.000     1.000 ! NMM
HCCCO              2   443.200     4.120     0.000     0.000     1.000 ! NMM
H2CCHCO            2   443.200     4.120     0.000     0.000     1.000 ! NMM
CH3CCO             2   443.200     4.120     0.000     0.000     1.000 ! NMM
CH3CHCO            2   443.200     4.120     0.000     0.000     1.000 ! NMM
CH2CHCO            2   443.200     4.120     0.000     0.000     1.000 ! NMM
C2H3CO             2   443.200     4.120     0.000     0.000     1.000 ! NMM
!C2H5CHO            2   424.600     4.820     0.000     0.000     1.000 ! NMM
CH2CH2CHO          2   424.600     4.820     0.000     0.000     1.000 ! NMM
C2H5CO             2   424.600     4.820     0.000     0.000     1.000 ! NMM
CH3COCH3           2   435.500     4.860     0.000     0.000     1.000 ! NMM
CH3COCH2           2   435.500     4.860     0.000     0.000     1.000 ! NMM
C3H4               1   324.800     4.290     0.000     0.000     1.000 ! NMM
AC3H4              1   324.800     4.290     0.000     0.000     1.000 ! NMM
C3H4-A             1   324.800     4.290     0.000     0.000     1.000 ! NMM
PC3H4              1   324.800     4.290     0.000     0.000     1.000 ! NMM 
C3H4-P             1   324.800     4.290     0.000     0.000     1.000 ! NMM 
C3H4C              2   324.800     4.290     0.000     0.000     1.000 ! NMM
C3H6               2   307.800     4.140     0.000     0.000     1.000 ! NMM
C3H6OH             2   487.900     4.820     0.000     0.000     1.000 ! NMM
HOC3H6O2           2   487.900     4.820     0.000     0.000     1.000 ! NMM
!C3H6O              2   411.000     4.820     0.000     0.000     1.000 ! NMM 
C3H5O              2   411.000     4.820     0.000     0.000     1.000 ! NMM
C3H7               2   303.400     4.810     0.000     0.000     1.000 ! NMM
C4H6               2   357.000     4.720     0.000     0.000     1.000 ! NMM
I-C3H7              2   303.400     4.810     0.000     0.000     1.000 ! NMM
N-C3H7             2   303.400     4.810     0.000     0.000     1.000 ! NMM
NC3H7              2   303.400     4.810     0.000     0.000     1.000 ! NMM
!IC3H7O             2   468.300     4.760     0.000     0.000     1.000 ! NMM
!NC3H7O             2   487.900     4.820     0.000     0.000     1.000 ! NMM
C3H8               2   303.400     4.810     0.000     0.000     1.000 ! NMM
C4H                1   357.000     4.720     0.000     0.000     1.000 ! NMM
C4H2               1   357.000     4.720     0.000     0.000     1.000 ! NMM
C4H2OH             2   224.700     4.162     0.000     0.000     1.000 ! *
CH3CHCCH           2   355.000     4.650     0.000     0.000     1.000 ! NMM
IC4H7              2   355.000     4.650     0.000     0.000     1.000 ! NMM
C4H7               2   355.000     4.650     0.000     0.000     1.000 ! NMM
C4H71-4            2   355.000     4.650     0.000     0.000     1.000 ! C4H8 WJP
C4H8               2   355.000     4.650     0.000     0.000     1.000 ! NMM
C4H8-1             2   355.000     4.650     0.000     0.000     1.000 ! NMM
C4H8-2             2   355.000     4.650     0.000     0.000     1.000 ! NMM
!IC4H8              2   355.000     4.650     0.000     0.000     1.000 ! NMM
PC4H9              2   352.000     5.240     0.000     0.000     1.000 ! NMM
C4H9               2   352.000     5.240     0.000     0.000     1.000 ! NMM
SC4H9              2   352.000     5.240     0.000     0.000     1.000 ! NMM
TC4H9              2   352.000     5.240     0.000     0.000     1.000 ! NMM
IC4H9              2   352.000     5.240     0.000     0.000     1.000 ! NMM
PC4H9O             2   496.000     5.200     0.000     0.000     1.000 ! NMM
TC4H9O             2   496.000     5.200     0.000     0.000     1.000 ! NMM
SC4H9O             2   496.000     5.200     0.000     0.000     1.000 ! NMM
IC4H9O             2   496.000     5.200     0.000     0.000     1.000 ! NMM
PC4H9O2            2   496.000     5.200     0.000     0.000     1.000 ! WJP
SC4H9O2            2   496.000     5.200     0.000     0.000     1.000 ! WJP
PC4H9O2H           2   496.000     5.200     0.000     0.000     1.000 ! WJP
SC4H9O2H           2   496.000     5.200     0.000     0.000     1.000 ! WJP
IC4H8OH            2   496.000     5.200     0.000     0.000     1.000 ! NMM
C4H8OH-1           2   496.000     5.200     0.000     0.000     1.000 ! WJP 
C4H8OH-2           2   496.000     5.200     0.000     0.000     1.000 ! WJP
C4H8O1-2           2   496.000     5.200     0.000     0.000     1.000 ! WJP
C4H8O1-3           2   496.000     5.200     0.000     0.000     1.000 ! WJP
C4H8O1-4           2   496.000     5.200     0.000     0.000     1.000 ! WJP
C4H8O2-3           2   496.000     5.200     0.000     0.000     1.000 ! WJP
!IC4H7OH            2   496.000     5.200     0.000     0.000     1.000 ! NMM
O2C4H8OH-1         2   496.000     5.200     0.000     0.000     1.000 ! WJP
O2C4H8OH-2         2   496.000     5.200     0.000     0.000     1.000 ! WJP
C4H8OOH1-2         2   496.000     5.200     0.000     0.000     1.000 ! WJP
C4H8OOH1-3         2   496.000     5.200     0.000     0.000     1.000 ! WJP
C4H8OOH1-4         2   496.000     5.200     0.000     0.000     1.000 ! WJP
C4H8OOH2-1         2   496.000     5.200     0.000     0.000     1.000 ! WJP
C4H8OOH2-3         2   496.000     5.200     0.000     0.000     1.000 ! WJP
C4H8OOH2-4         2   496.000     5.200     0.000     0.000     1.000 ! WJP
C4H8OOH1-2O2         2   496.000     5.200     0.000     0.000     1.000 ! WJP
C4H8OOH1-3O2         2   496.000     5.200     0.000     0.000     1.000 ! WJP
C4H8OOH1-4O2         2   496.000     5.200     0.000     0.000     1.000 ! WJP
C4H8OOH2-1O2         2   496.000     5.200     0.000     0.000     1.000 ! WJP
C4H8OOH2-3O2         2   496.000     5.200     0.000     0.000     1.000 ! WJP
C4H8OOH2-4O2         2   496.000     5.200     0.000     0.000     1.000 ! WJP
IO2C4H8OH          2   496.000     5.200     0.000     0.000     1.000 ! *
C4H7O              2   496.000     5.200     0.000     0.000     1.000 ! NMM
IC4H7O             2   496.000     5.200     0.000     0.000     1.000 ! NMM
!C4H10              2   352.000     5.240     0.000     0.000     1.000 ! NMM
!IC4H10             2   352.000     5.240     0.000     0.000     1.000 ! NMM
C5H2               1   408.000     5.200     0.000     0.000     1.000 ! NMM
C5H3               1   408.000     5.200     0.000     0.000     1.000 ! NMM
C5H5               1   408.000     5.200     0.000     0.000     1.000 ! NMM
C5H6               1   408.000     5.200     0.000     0.000     1.000 ! NMM
C5H7               2   408.000     5.200     0.000     0.000     1.000 ! NMM
CYC5H7             2   408.000     5.200     0.000     0.000     1.000 !
C5H8               2   408.000     5.200     0.000     0.000     1.000 ! NMM
C6H2               1   408.000     5.200     0.000     0.000     1.000 ! NMM
C6H4               2   412.300     5.349     0.000     0.000     1.000 ! JAM
C6H5               2   412.300     5.349     0.000     0.000     1.000 ! JAM
C6H5(L)            2   412.300     5.349     0.000     0.000     1.000 ! JAM
C6H5OH             2   450.000     5.500     0.000     0.000     1.000 ! NMM
C6H5O              2   450.000     5.500     0.000     0.000     1.000 ! JAM
OKETPHNL           2   450.000     5.500     0.000     0.000     1.000 !
C6H4O2             2   450.000     5.500     0.000     0.000     1.000
C5H4O              2   450.000     5.500     0.000     0.000     1.000 ! NMM
C5H4OH             2   450.000     5.500     0.000     0.000     1.000 ! NMM
C5H5O              2   450.000     5.500     0.000     0.000     1.000 ! NMM
C5H5OH             2   450.000     5.500     0.000     0.000     1.000 ! NMM 
LC6H5              2   426.300     5.510     0.000     0.000     1.000
LC3H3C3H2          2   426.300     5.510     0.000     0.000     1.000 
LC3H4C3H2          2   426.300     5.510     0.000     0.000     1.000
LC3H3C3H3          2   426.300     5.510     0.000     0.000     1.000
C6H6               2   468.500     5.230     0.000     10.30     1.000 ! NMM 
C6H7               2   468.500     5.230     0.000     0.000     1.000 ! NMM 
CYC6H7             2   468.500     5.230     0.000     0.000     1.000 ! NMM
CYC6H8             2   468.500     5.230     0.000     0.000     1.000 ! NMM
C6H5CH2            2   495.300     5.680     0.000     0.000     1.000 ! NMM
C6H5CH3            2   495.300     5.680     0.430     12.30     1.000 ! NMM
C6H4CH3            2   495.300     5.680     0.000     0.000     1.000 ! NMM
CH3C6H4            2   495.300     5.680     0.000     0.000     1.000 ! NMM
C6H5CO             2   622.400     5.530     0.000     0.000     1.000 ! NMM
C6H5CHO            2   622.400     5.530     0.000     0.000     1.000 ! NMM
C6H5CH2OH          2   622.400     5.530     0.000     0.000     1.000 ! NMM
OC6H4CH3           2   621.100     5.640     0.000     0.000     1.000 ! NMM
HOC6H4CH3          2   621.100     5.640     0.000     0.000     1.000 ! NMM
XYLYLENE           2   523.600     6.182     0.000     0.000     1.000
XYLYLRAD           2   523.600     6.182     0.000     0.000     1.000  
C6H5C2H5           2   523.600     5.960     0.000     0.000     1.000 ! NMM 
ACH3C2H3           2   523.600     5.960     0.000     0.000     1.000
ACH3C2H5           2   523.600     5.960     0.000     0.000     1.000
ACH2RC2H3          2   523.600     5.960     0.000     0.000     1.000
ACH3CH3            2   523.600     5.960     0.000     0.000     1.000 !
ACH3RCH2           2   523.600     5.960     0.000     0.000     1.000
C6H9               2   426.300     5.510     0.000     0.000     1.000 ! NMM
C6H10              2   426.300     5.510     0.000     0.000     1.000 ! NMM
C8H14              2   494.000     6.170     0.000     0.000     1.000 ! NMM
C8H16-C            2   538.1       6.112     0.0       0.0       1.0   ! TCPC
C8H16-1-5          2   511.5       6.297     0.0       0.0       1.0   ! TCPC
!IC8H14             2   494.000     6.170     0.000     0.000     1.000 ! NMM
C6H5C2H3           2   546.200     6.000     0.130     15.00     1.000 ! NMM
C6H5CHCH           2   546.200     6.000     0.000     0.000     1.000 ! NMM
C6H5CCH2           2   546.200     6.000     0.000     0.000     1.000
C6H5C2H            2   534.300     5.710     0.770     0.000     1.000 ! NMM
C6H5C2             2   534.300     5.710     0.000     0.000     1.000 ! NMM
C6H4C2H3           2   546.200     6.000     0.000     0.000     1.000 ! NMM
C6H4C2H            2   534.300     5.710     0.000     0.000     1.000 ! NMM
AAC2H5             2   695.000     6.530     0.000     0.000     1.000
AAC2H3             2   689.800     6.500     0.000     0.000     1.000
AARCCH2            2   689.800     6.500     0.000     0.000     1.000
AACCH              2   689.800     6.500     0.000     0.000     1.000
ARACCH             2   689.800     6.500     0.000     0.000     1.000
ARAC2H3            2   687.200     6.490     0.000     0.000     1.000
C6H5CCO            2   588.200     5.940     0.000     0.000     1.0001
C10H7              2   630.400     6.180     0.000     0.000     1.000 ! NMM
C10H7O             2   630.400     6.180     0.000     0.000     1.000 ! NMM 
AC2H3C2H5          2   630.400     6.180     0.000     0.000     1.000
AC2H3C2H3          2   630.400     6.180     0.000     0.000     1.000
C10H8              2   630.400     6.180     0.000     16.50     1.000 ! NMM
C10H9              2   630.400     6.180     0.000     0.000     1.000 ! NMM
C10H10             2   630.400     6.180     0.000     0.000     1.000 ! NMM
C10H7CH2           2   660.00      6.350     0.000     0.000     1.000 ! NMM
AACH3CH2           2   660.0       6.350     0.000     0.000     1.000
C10H7OH            2   663.45      6.362     0.000     0.000     1.000
C10H7CH3           2   660.0       6.350     0.000     0.000     1.000 ! NMM   
FLRNTHN            2   812.3       7.170     0.000     0.000     1.000 ! NMM
ACEPHEN            2   812.3       7.170     0.000     0.000     1.000
ANTHRACN           2   772.0       6.960     0.000     25.40     1.000 ! NMM
CH3INDENE          2   625.0       6.150     0.000     0.000     1.000
CH3INDENYL         2   625.0       6.150     0.000     0.000     1.000
AAACH3             2   783.9       6.995     0.000     0.000     1.000
P1HENANOL          2   783.9       6.995     0.000     0.000     1.000
P5HENANOL          2   783.9       6.995     0.000     0.000     1.000
P1HANOXY           2   783.9       6.995     0.000     0.000     1.000
P5HANOXY           2   783.9       6.995     0.000     0.000     1.000     
AAARCH2            2   783.9       6.995     0.000     0.000     1.000 
AAAC2H5            2   816.6       7.160     0.000     0.000     1.000 
AAAC2H3            2   812.0       7.137     0.000     0.000     1.000
PHNTHRN            2   772.0       6.960     0.000     38.80     1.000
PENTANAPH          2   772.0       6.960     0.000     0.000     1.000
PENAPRAD           2   772.0       6.960     0.000     0.000     1.000   
P1HNTHRNYL         2   772.0       6.960     0.000     38.80     1.000 ! NMM
P5HNTHRNYL         2   772.0       6.960     0.000     38.80     1.000
PYRENE             2   834.9       7.240     0.000     0.000     1.000 ! NMM
CY5PYREN           2   862.0       7.382     0.000     0.000     1.000
H4PENTDEF          2   834.9       7.240     0.000     0.000     1.000
H4PDFRAD           2   834.9       7.240     0.000     0.000     1.000
PYRENYL            2   834.9       7.240     0.000     0.000     1.000 ! NMM
DHPYRENE           2   834.9       7.240     0.000     0.000     1.000
BENZOAP            2   832.5       7.550     1.400     0.000     1.000 ! NMM
SMILEY             2   832.5       7.550     0.000     0.000     1.000
BENZOGHI           2   832.5       7.550     0.000     0.000     1.000
CPENTACD           2   832.5       7.550     0.000     0.000     1.000
ACEC10H8           2   695.4       6.760     0.000     0.000     1.000 ! NMM
ACEC10H7           2   695.4       6.760     0.000     0.000     1.000
INDENE             2   588.6       5.960     0.650     0.000     1.000 ! NMM
INDENYL            2   588.6       5.960     0.000     0.000     1.000 ! NMM
CH3NDENE           2   588.6       5.960     0.000     0.000     1.000 ! NMM
CH3NDNYL           2   588.6       5.960     0.000     0.000     1.000 ! NMM
CH3FLRNE           2   712.6       6.890     0.000     0.000     1.000
CH3FLRNL           2   712.6       6.890     0.000     0.000     1.000
FLRENE             2   712.6       6.890     0.000     0.000     1.000
FLRNYLP            2   712.6       6.890     0.000     0.000     1.000
FLRNYLA            2   712.6       6.890     0.000     0.000     1.000
CH2FLRNE           2   712.6       6.890     0.000     0.000     1.000       
C6H5C5H5           2   783.800     6.640     0.000     0.000     1.000
C6H5C5H4           2   783.800     6.640     0.000     0.000     1.000
BIBENZYL           2   783.800     6.640     0.000     0.000     1.000 ! NMM
STILBENE           2   772.0       6.960     0.000     0.000     1.000 ! NMM
STILBNRD           2   772.0       6.960     0.000     0.000     1.000 ! NMM 
DHANTHRN           2   772.0       6.960     0.000     0.000     1.000 
OBZYLTOL           2   772.0       6.960     0.000     0.000     1.000
OBZYLTLR           2   772.0       6.960     0.000     0.000     1.000
DMDP               2   712.6       6.890     0.000     0.000     1.000
DMDPRD             2   712.6       6.890     0.000     0.000     1.000
CH                 1    80.000     2.750     0.000     0.000     0.000
CH2                1   144.000     3.800     0.000     0.000     0.000
T-CH2              1   144.000     3.800     0.000     0.000     0.000
SCH2               1   144.000     3.800     0.000     0.000     0.000
S-CH2              1   144.000     3.800     0.000     0.000     0.000
CH2CHCCH           2   373.700     4.790     0.000     0.000     1.000 ! NMM 
CH2CHCCH2          2   373.700     4.790     0.000     0.000     1.000 ! NMM 
CH3CHCCH2          2   357.100     4.720     0.000     0.000     1.000 
CH2CH2CCH          2   373.700     4.790     0.000     0.000     1.000 ! NMM
CH2CHCH2           2   316.000     4.220     0.000     0.000     1.000 ! NMM 
C3H5               2   316.000     4.220     0.000     0.000     1.000
AC3H5              2   316.000     4.220     0.000     0.000     1.000
C3H5-A             2   316.000     4.220     0.000     0.000     1.000 
CH2CHCHCH          2   357.100     4.720     0.000     0.000     1.000 ! NMM 
CHCHCHCH           2   357.100     4.720     0.000     0.000     1.000 ! NMM 
CH2CHCHCH2         2   357.100     4.720     0.000     0.000     1.000 ! NMM 
CH2CO              2   436.000     3.970     0.000     0.000     2.000
C2H3O1,2           2   436.000     3.970     0.000     0.000     2.000 ! WJP
CH2O               2   498.000     3.590     0.000     0.000     2.000
OCHO               2   498.000     3.590     0.000     0.000     2.000 ! WJP
HCOH               2   498.000     3.590     0.000     0.000     1.000
H2CO               2   498.000     3.590     0.000     0.000     2.000
CH2OH              2   417.000     3.690     1.700     0.000     2.000
CH2HCO             2   436.000     3.970     0.000     0.000     2.000
CH2CHO             2   436.000     3.970     0.000     0.000     2.000
CHOCHO             1   440.200     4.010     0.000     0.000     2.000 ! NMM
CHOCO              1   440.200     4.010     0.000     0.000     2.000 ! NMM
HCO2H              2   481.800     3.626     1.7       0.000     1.000 ! CH3OH
CH3                1   144.000     3.800     0.000     0.000     0.000
CH3CC              2   252.000     4.760     0.000     0.000     1.000 ! JAM
!CH3CHCCH           2   373.700     4.790     0.000     0.000     1.000 ! NMM
CH3CCCH2           2   357.100     4.720     0.000     0.000     1.000 ! NMM 
CH3CCCH3           2   357.100     4.720     0.000     0.000     1.000 ! NMM 
CH3CCH2            2   316.000     4.220     0.000     0.000     1.000 ! NMM 
TC3H5              2   316.000     4.220     0.000     0.000     1.000 
C3H5-T             2   316.000     4.220     0.000     0.000     1.000 
CH3CHCH            2   316.000     4.220     0.000     0.000     1.000 ! NMM 
SC3H5              2   316.000     4.220     0.000     0.000     1.000
C3H5-S             2   316.000     4.220     0.000     0.000     1.000
CH3CH2CCH          2   357.100     4.720     0.000     0.000     1.000 ! NMM 
CH3HCO             2   436.000     3.970     0.000     0.000     2.000
CH3CHO             2   436.000     3.970     0.000     0.000     2.000
HOCHO              2   436.000     3.970     0.000     0.000     2.000 ! WJP
CH3CO              2   436.000     3.970     0.000     0.000     2.000
CH3CO2             2   436.000     3.970     0.000     0.000     2.000 ! WJP
CH3CO3             2   436.000     3.970     0.000     0.000     2.000 ! WJP
CH3CO3H            2   436.000     3.970     0.000     0.000     2.000 ! WJP
HO2CHO             2   436.000     3.970     0.000     0.000     2.000 ! WJP
O2CHO              2   436.000     3.970     0.000     0.000     2.000 ! WJP
CH3O               2   417.000     3.690     1.700     0.000     2.000
CH3OH              2   481.800     3.626     0.000     0.000     1.000 ! SVE
CH3O2              2   481.800     3.626     0.000     0.000     1.000 ! WJP
CH3O2H             2   481.800     3.626     0.000     0.000     1.000 ! WJP
CH4                2   141.400     3.746     0.000     2.600    13.000
CH4O               2   417.000     3.690     1.700     0.000     2.000
CN                 1    75.000     3.856     0.000     0.000     1.000 ! OIS
CNC                1   232.400     3.828     0.000     0.000     1.000 ! OIS
CNN                1   232.400     3.828     0.000     0.000     1.000 ! OIS
CO                 1    98.100     3.650     0.000     1.950     1.800
CO2                1   244.000     3.763     0.000     2.650     2.100
F                  0    80.000     2.750     0.000     0.000     0.000
F2                 1   125.700     3.301     0.000     1.600     3.800
H                  0   145.000     2.050     0.000     0.000     0.000
GAH                1   335.500     4.240     0.000     0.000     1.000 ! MEC
H2C4O              2   357.000     5.180     0.000     0.000     1.000 ! JAM
H2                 1    38.000     2.920     0.000     0.790   280.000
H2CCC              2   265.300     3.721     0.000     0.000     1.000 ! *
H2CCC(S)           2   265.300     3.721     0.000     0.000     1.000 ! *
H2CCCH             2   252.000     4.760     0.000     0.000     1.000 ! JAM
H2CCCCH            2   357.100     4.720     0.000     0.000     1.000 ! NMM 
H2CCCCH2           2   357.100     4.720     0.000     0.000     1.000 ! NMM 
H2CCCCCH           1   408.000     5.200     0.000     0.000     1.000 ! NMM
H2CN               1   569.000     3.630     0.000     0.000     1.000 ! OS/JM
H2NO               2   116.700     3.492     0.000     0.000     1.000 ! JAM
H2O                2   572.400     2.605     1.844     0.000     4.000
H2O2               2   107.400     3.458     0.000     0.000     3.800
H2S                2   301.000     3.600     0.000     0.000     1.000 ! OIS
HC2N2              1   349.000     4.361     0.000     0.000     1.000 ! OIS
HCCHCCH            2   357.100     4.720     0.000     0.000     1.000 ! NMM 
HCCO               2   150.000     2.500     0.000     0.000     1.000 ! *
HCCOH              2   436.000     3.970     0.000     0.000     2.000
HCCCHCCH           1   408.000     5.200     0.000     0.000     1.000 ! NMM
HCN                1   569.000     3.630     0.000     0.000     1.000 ! OIS
HCO                2   498.000     3.590     0.000     0.000     0.000
CHO                2   498.000     3.590     0.000     0.000     0.000
HCO+               1   498.000     3.590     0.000     0.000     0.000
HE                 0    10.200     2.576     0.000     0.000     0.000 ! *
HF                 1   330.000     3.148     1.920     2.460     1.000 ! SV/MEC
HF0                1   352.000     2.490     1.730     0.000     5.000
HF1                1   352.000     2.490     1.730     0.000     5.000
HF2                1   352.000     2.490     1.730     0.000     5.000
HF3                1   352.000     2.490     1.730     0.000     5.000
HF4                1   352.000     2.490     1.730     0.000     5.000
HF5                1   352.000     2.490     1.730     0.000     5.000
HF6                1   352.000     2.490     1.730     0.000     5.000
HF7                1   352.000     2.490     1.730     0.000     5.000
HF8                1   352.000     2.490     1.730     0.000     5.000
HCNO               2   232.400     3.828     0.000     0.000     1.000 ! JAM
HOCN               2   232.400     3.828     0.000     0.000     1.000 ! JAM
HNCO               2   232.400     3.828     0.000     0.000     1.000 ! OIS
HNNO               2   232.400     3.828     0.000     0.000     1.000 ! *
HNO                2   116.700     3.492     0.000     0.000     1.000 ! *
HNOH               2   116.700     3.492     0.000     0.000     1.000 ! JAM
HO2                2   107.400     3.458     0.000     0.000     1.000 ! *
HSO2               2   252.000     4.290     0.000     0.000     1.000 ! OIS
N                  0    71.400     3.298     0.000     0.000     0.000 ! *
N2                 1    97.530     3.621     0.000     1.760     4.000
N2H                2    71.400     3.798     0.000     0.000     1.000 ! *
N2H2               2    71.400     3.798     0.000     0.000     1.000 ! *
N2H3               2   200.000     3.900     0.000     0.000     1.000 ! *
N2H4               2   205.000     4.230     0.000     4.260     1.500
N2O                1   232.400     3.828     0.000     0.000     1.000 ! *
NCN                1   232.400     3.828     0.000     0.000     1.000 ! OIS
NCO                1   232.400     3.828     0.000     0.000     1.000 ! OIS
NH                 1    80.000     2.650     0.000     0.000     4.000
NH2                2    80.000     2.650     0.000     2.260     4.000
NH3                2   481.000     2.920     1.470     0.000    10.000
NO                 1    97.530     3.621     0.000     1.760     4.000
NCNO               2   232.400     3.828     0.000     0.000     1.000 ! OIS
NO2                2   200.000     3.500     0.000     0.000     1.000 ! *
O                  0    80.000     2.750     0.000     0.000     0.000
O2                 1   107.400     3.458     0.000     1.600     3.800
O3                 2   180.000     4.100     0.000     0.000     2.000
OH                 1    80.000     2.750     0.000     0.000     0.000
S                  0   847.000     3.839     0.000     0.000     0.000 ! OIS
S2                 1   847.000     3.900     0.000     0.000     1.000 ! OIS
SH                 1   847.000     3.900     0.000     0.000     1.000 ! OIS
SO                 1   301.000     3.993     0.000     0.000     1.000 ! OIS
SO2                2   252.000     4.290     0.000     0.000     1.000 ! OIS
SO3                2   378.400     4.175     0.000     0.000     1.000 ! OIS
SIH4               2   207.6       4.084     0.000     0.000     1.000 ! MEC
SIH3               2   170.3       3.943     0.000     0.000     1.000 ! MEC
SIH2               2   133.1       3.803     0.000     0.000     1.000 ! MEC
SIH                1    95.8       3.662     0.000     0.000     1.000 ! MEC
SI                 0  3036.        2.910     0.000     0.000     0.000 ! MEC
SI2H6              2   301.3       4.828     0.000     0.000     1.000 ! MEC
SI2H5              2   306.9       4.717     0.000     0.000     1.000 ! MEC
SI2H4              2   312.6       4.601     0.000     0.000     1.000 ! MEC
SI2H3              2   318.2       4.494     0.000     0.000     1.000 ! MEC
SI2H2              2   323.8       4.383     0.000     0.000     1.000 ! MEC
SI2                1  3036.        3.280     0.000     0.000     1.000 ! MEC
SI3                2  3036.        3.550     0.000     0.000     1.000 ! MEC
SIF3               2   309.6       4.359     0.000     0.000     1.000 ! MEC
SIF3NH2            2   231.0       4.975     0.000     0.000     1.000 ! MEC
SIF4               2   171.9       4.880     0.000     0.000     1.000 ! SVE
SIHF3              2   180.8       4.681     0.000     0.000     1.000 ! MEC
H2SISIH2           2   312.6       4.601     0.000     0.000     1.000 ! MEC
H3SISIH            2   312.6       4.601     0.000     0.000     1.000 ! MEC
SI3H8              2   331.2       5.562     0.000     0.000     1.000 ! MEC
ASH3               2   259.8       4.145     0.000     0.000     1.000 ! MEC
AS2                1   1045.5      5.510     0.000     0.000     1.000 ! MEC
GAME3              2   378.2       5.52      0.000     0.000     1.000 ! MEC
GAME2              2   675.8       5.22      0.000     0.000     1.000 ! MEC
GAME               2   972.7       4.92      0.000     0.000     1.000 ! MEC
GA                 0  2961.8       4.62      0.000     0.000     0.000 ! MEC
K                  0   850.        4.25      0.000     0.000     1.000 ! SINGH
KOH                2  1213.        4.52      0.000     0.000     1.000 ! SINGH
KO2                2  1213.        4.69      0.000     0.000     1.000 ! SINGH
KH                 1    93.3       3.542     0.000     0.000     1.000 ! SINGH
K+                 0   850.        4.25      0.000     0.000     1.000 ! SINGH
E                  0   850.        425.      0.000     0.000     1.000 ! SINGH
KCL                1  1989.        4.186     0.000     0.000     1.000 ! SINGH
CL                 0   130.8       3.613     0.000     0.000     1.000 ! SINGH
CL-                0   130.8       3.613     0.000     0.000     1.000 ! SINGH
HCL                1   344.7       3.339     1.084     0.000     1.000 ! SINGH
KO                 1   383.0       3.812     0.000     0.000     1.000 ! SINGH
NC10H22               2   540.0   7.085   0.0 0.0 1.0 !   TCPC
NC10H22O              2   600.6   7.229   1.8 0.0 1.0 !   TCPC
335C10H22             2   522.0   6.873   0.0 0.0 1.0 !   WJP
2255C10H22            2   497.3   6.899   0.0 0.0 1.0 !   WJP
IC8H18                2   458.5   6.414   0.0 0.0 1.0 !   WJP
AC8H17                2   458.5   6.414   0.0 0.0 1.0 !   WJP
BC8H17                2   458.5   6.414   0.0 0.0 1.0 !   WJP
CC8H17                2   458.5   6.414   0.0 0.0 1.0 !   WJP
DC8H17                2   458.5   6.414   0.0 0.0 1.0 !   WJP
1C8H17OH              2   581.3   6.506   2.0 0.0 1.0 !   TCPC
AC8H17O               2   581.3   6.506   2.0 0.0 1.0 !   WJP
BC8H17O               2   581.3   6.506   2.0 0.0 1.0 !   WJP
CC8H17O               2   581.3   6.506   2.0 0.0 1.0 !   WJP
DC8H17O               2   581.3   6.506   2.0 0.0 1.0 !   WJP
1C8H16                2   485.6   6.440   0.3 0.0 1.0 !   WJP
IC8H16                2   485.6   6.440   0.3 0.0 1.0 !   WJP
JC8H16                2   485.6   6.440   0.3 0.0 1.0 !   WJP
IC8H15                2   485.6   6.440   0.3 0.0 1.0 !   WJP
IC8H14                2   485.6   6.440   0.3 0.0 1.0 !   WJP
C7H16                 2   459.6   6.253   0.0 0.0 1.0 !   TCPC
C7H15-1               2   459.6   6.253   0.0 0.0 1.0 !   WJP
C7H15-2               2   459.6   6.253   0.0 0.0 1.0 !   WJP
C7H15-3               2   459.6   6.253   0.0 0.0 1.0 !   WJP
C7H15-4               2   459.6   6.253   0.0 0.0 1.0 !   WJP
NEOC7H16              2   437.3   6.168   0.0 0.0 1.0 !   WJP
2-4C7H16              2   437.3   6.168   0.0 0.0 1.0 !   WJP
QC7H15                2   437.3   6.168   0.0 0.0 1.0 !   WJP
PC7H15                2   437.3   6.168   0.0 0.0 1.0 !   WJP
OC7H15                2   437.3   6.168   0.0 0.0 1.0 !   WJP
NC7H15                2   437.3   6.168   0.0 0.0 1.0 !   WJP
XC7H15                2   437.3   6.168   0.0 0.0 1.0 !   WJP
YC7H15                2   437.3   6.168   0.0 0.0 1.0 !   WJP
ZC7H15                2   437.3   6.168   0.0 0.0 1.0 !   WJP
1C7H15OH              2   561.0   6.317   1.7 0.0 1.0 !   TCPC
C7H15O-1              2   561.0   6.317   1.7 0.0 1.0 !   WJP
C7H15O-2              2   561.0   6.317   1.7 0.0 1.0 !   WJP
C7H15O-3              2   561.0   6.317   1.7 0.0 1.0 !   WJP
C7H15O-4              2   561.0   6.317   1.7 0.0 1.0 !   WJP
C7H15O2-1             2   561.0   6.317   1.7 0.0 1.0 !   WJP
C7H15O2-2             2   561.0   6.317   1.7 0.0 1.0 !   WJP
C7H15O2-3             2   561.0   6.317   1.7 0.0 1.0 !   WJP
C7H15O2-4             2   561.0   6.317   1.7 0.0 1.0 !   WJP
C7H15O2H-1            2   561.0   6.317   1.7 0.0 1.0 !   WJP
C7H15O2H-2            2   561.0   6.317   1.7 0.0 1.0 !   WJP
C7H15O2H-3            2   561.0   6.317   1.7 0.0 1.0 !   WJP
C7H15O2H-4            2   561.0   6.317   1.7 0.0 1.0 !   WJP
C7H14OOH1-2           2   561.0   6.317   1.7 0.0 1.0 !   WJP
C7H14OOH1-3           2   561.0   6.317   1.7 0.0 1.0 !   WJP
C7H14OOH1-4           2   561.0   6.317   1.7 0.0 1.0 !   WJP
C7H14OOH1-5           2   561.0   6.317   1.7 0.0 1.0 !   WJP
C7H14OOH2-1           2   561.0   6.317   1.7 0.0 1.0 !   WJP
C7H14OOH2-3           2   561.0   6.317   1.7 0.0 1.0 !   WJP
C7H14OOH2-4           2   561.0   6.317   1.7 0.0 1.0 !   WJP
C7H14OOH2-5           2   561.0   6.317   1.7 0.0 1.0 !   WJP
C7H14OOH2-6           2   561.0   6.317   1.7 0.0 1.0 !   WJP
C7H14OOH3-1           2   561.0   6.317   1.7 0.0 1.0 !   WJP
C7H14OOH3-2           2   561.0   6.317   1.7 0.0 1.0 !   WJP
C7H14OOH3-4           2   561.0   6.317   1.7 0.0 1.0 !   WJP
C7H14OOH3-5           2   561.0   6.317   1.7 0.0 1.0 !   WJP
C7H14OOH3-6           2   561.0   6.317   1.7 0.0 1.0 !   WJP
C7H14OOH3-7           2   561.0   6.317   1.7 0.0 1.0 !   WJP
C7H14OOH4-1           2   561.0   6.317   1.7 0.0 1.0 !   WJP
C7H14OOH4-2           2   561.0   6.317   1.7 0.0 1.0 !   WJP
C7H14OOH4-3           2   561.0   6.317   1.7 0.0 1.0 !   WJP
C7H14OOH1-2O2         2   600.6   7.229   1.8 0.0 1.0 !   NC10H22O WJP
C7H14OOH1-3O2         2   600.6   7.229   1.8 0.0 1.0 !   NC10H22O WJP
C7H14OOH1-4O2         2   600.6   7.229   1.8 0.0 1.0 !   NC10H22O WJP
C7H14OOH1-5O2         2   600.6   7.229   1.8 0.0 1.0 !   NC10H22O WJP
C7H14OOH2-1O2         2   600.6   7.229   1.8 0.0 1.0 !   NC10H22O WJP
C7H14OOH2-3O2         2   600.6   7.229   1.8 0.0 1.0 !   NC10H22O WJP
C7H14OOH2-4O2         2   600.6   7.229   1.8 0.0 1.0 !   NC10H22O WJP
C7H14OOH2-5O2         2   600.6   7.229   1.8 0.0 1.0 !   NC10H22O WJP
C7H14OOH2-6O2         2   600.6   7.229   1.8 0.0 1.0 !   NC10H22O WJP
C7H14OOH3-1O2         2   600.6   7.229   1.8 0.0 1.0 !   NC10H22O WJP
C7H14OOH3-2O2         2   600.6   7.229   1.8 0.0 1.0 !   NC10H22O WJP
C7H14OOH3-4O2         2   600.6   7.229   1.8 0.0 1.0 !   NC10H22O WJP
C7H14OOH3-5O2         2   600.6   7.229   1.8 0.0 1.0 !   NC10H22O WJP
C7H14OOH3-6O2         2   600.6   7.229   1.8 0.0 1.0 !   NC10H22O WJP
C7H14OOH3-7O2         2   600.6   7.229   1.8 0.0 1.0 !   NC10H22O WJP
C7H14OOH4-1O2         2   600.6   7.229   1.8 0.0 1.0 !   NC10H22O WJP
C7H14OOH4-2O2         2   600.6   7.229   1.8 0.0 1.0 !   NC10H22O WJP
C7H14OOH4-3O2         2   600.6   7.229   1.8 0.0 1.0 !   NC10H22O WJP
C7H14O1-2             2   511.5   6.297   0.0 0.0 1.0 !   C8H16-1-5 WJP 
C7H14O1-3             2   511.5   6.297   0.0 0.0 1.0 !   C8H16-1-5 WJP 
C7H14O1-4             2   511.5   6.297   0.0 0.0 1.0 !   C8H16-1-5 WJP 
C7H14O1-5             2   511.5   6.297   0.0 0.0 1.0 !   C8H16-1-5 WJP 
C7H14O2-3             2   511.5   6.297   0.0 0.0 1.0 !   C8H16-1-5 WJP 
C7H14O2-4             2   511.5   6.297   0.0 0.0 1.0 !   C8H16-1-5 WJP 
C7H14O2-5             2   511.5   6.297   0.0 0.0 1.0 !   C8H16-1-5 WJP 
C7H14O2-6             2   511.5   6.297   0.0 0.0 1.0 !   C8H16-1-5 WJP 
C7H14O3-4             2   511.5   6.297   0.0 0.0 1.0 !   C8H16-1-5 WJP 
C7H14O3-5             2   511.5   6.297   0.0 0.0 1.0 !   C8H16-1-5 WJP 
NC7KET12              2   581.3   6.506   2.0 0.0 1.0 !   1C8H17OH WJP
NC7KET13              2   581.3   6.506   2.0 0.0 1.0 !   1C8H17OH WJP
NC7KET14              2   581.3   6.506   2.0 0.0 1.0 !   1C8H17OH WJP
NC7KET15              2   581.3   6.506   2.0 0.0 1.0 !   1C8H17OH WJP
NC7KET21              2   581.3   6.506   2.0 0.0 1.0 !   1C8H17OH WJP
NC7KET23              2   581.3   6.506   2.0 0.0 1.0 !   1C8H17OH WJP
NC7KET24              2   581.3   6.506   2.0 0.0 1.0 !   1C8H17OH WJP
NC7KET25              2   581.3   6.506   2.0 0.0 1.0 !   1C8H17OH WJP
NC7KET26              2   581.3   6.506   2.0 0.0 1.0 !   1C8H17OH WJP
NC7KET31              2   581.3   6.506   2.0 0.0 1.0 !   1C8H17OH WJP
NC7KET32              2   581.3   6.506   2.0 0.0 1.0 !   1C8H17OH WJP
NC7KET34              2   581.3   6.506   2.0 0.0 1.0 !   1C8H17OH WJP
NC7KET35              2   581.3   6.506   2.0 0.0 1.0 !   1C8H17OH WJP
NC7KET36              2   581.3   6.506   2.0 0.0 1.0 !   1C8H17OH WJP
NC7KET37              2   581.3   6.506   2.0 0.0 1.0 !   1C8H17OH WJP
NC7KET41              2   581.3   6.506   2.0 0.0 1.0 !   1C8H17OH WJP
NC7KET42              2   581.3   6.506   2.0 0.0 1.0 !   1C8H17OH WJP
NC7KET43              2   581.3   6.506   2.0 0.0 1.0 !   1C8H17OH WJP
QC7H15O               2   561.0   6.317   1.7 0.0 1.0 !   WJP
PC7H15O               2   561.0   6.317   1.7 0.0 1.0 !   WJP
OC7H15O               2   561.0   6.317   1.7 0.0 1.0 !   WJP
NC7H15O               2   561.0   6.317   1.7 0.0 1.0 !   WJP
XC7H15O               2   561.0   6.317   1.7 0.0 1.0 !   WJP
YC7H15O               2   561.0   6.317   1.7 0.0 1.0 !   WJP
ZC7H15O               2   561.0   6.317   1.7 0.0 1.0 !   WJP
1C7H14                2   457.8   6.173   0.3 0.0 1.0 !   TCPC
C7H14-1               2   457.8   6.173   0.3 0.0 1.0 !   TCPC
C7H14-2               2   457.8   6.173   0.3 0.0 1.0 !   WJP
C7H14-3               2   457.8   6.173   0.3 0.0 1.0 !   WJP
C7H13                 2   457.8   6.173   0.3 0.0 1.0 !   WJP
IBC7H14               2   439.2   6.151   0.0 0.0 1.0 !   TCPC
O-C7H14               2   439.2   6.151   0.0 0.0 1.0 !   WJP
PC7H14                2   439.2   6.151   0.0 0.0 1.0 !   WJP
XC7H14                2   439.2   6.151   0.0 0.0 1.0 !   WJP
YC7H14                2   439.2   6.151   0.0 0.0 1.0 !   WJP
PC7H13                2   439.2   6.151   0.0 0.0 1.0 !   WJP
XC7H13                2   439.2   6.151   0.0 0.0 1.0 !   WJP
NC6H14                2   427.4   5.946   0.0 0.0 1.0 !   WJP
NEOC6H14              2   406.1   5.842   0.0 0.0 1.0 !   WJP
XC6H14                2   416.7   5.852   0.0 0.0 1.0 !   WJP
3-C6H14               2   422.5   5.870   0.0 0.0 1.0 !   WJP
IC6H14                2   422.5   5.870   0.0 0.0 1.0 !   WJP
C2H5COC3H7-N          2   498.6   6.009   2.0 0.0 1.0 !   TCPC
FC6H13                2   406.1   5.842   0.0 0.0 1.0 !   WJP
GC6H13                2   406.1   5.842   0.0 0.0 1.0 !   WJP
HC6H13                2   406.1   5.842   0.0 0.0 1.0 !   WJP
AC6H13                2   422.5   5.870   0.0 0.0 1.0 !   WJP
BC6H13                2   422.5   5.870   0.0 0.0 1.0 !   WJP
C-C6H13               2   422.5   5.870   0.0 0.0 1.0 !   WJP
DC6H13                2   422.5   5.870   0.0 0.0 1.0 !   WJP
EC6H13                2   422.5   5.870   0.0 0.0 1.0 !   WJP
1C6H13OH              2   541.5   5.674   1.8 0.0 1.0 !   TCPC
FC6H13O               2   541.5   5.674   1.8 0.0 1.0 !   WJP
GC6H13O               2   541.5   5.674   1.8 0.0 1.0 !   WJP
HC6H13O               2   541.5   5.674   1.8 0.0 1.0 !   WJP
AC6H13O               2   541.5   5.674   1.8 0.0 1.0 !   WJP
BC6H13O               2   541.5   5.674   1.8 0.0 1.0 !   WJP
C-C6H13O              2   541.5   5.674   1.8 0.0 1.0 !   WJP
DC6H13O               2   541.5   5.674   1.8 0.0 1.0 !   WJP
EC6H13O               2   541.5   5.674   1.8 0.0 1.0 !   WJP
NEOC6H12              2   397.9   5.767   0.0 0.0 1.0 !   WJP
KC6H12                2   435.9   5.807   0.0 0.0 1.0 !   WJP
JC6H12                2   415.3   5.794   0.0 0.0 1.0 !   WJP
C-C6H12               2   414.4   5.872   0.0 0.0 1.0 !   WJP
C-C6H12-C             2   411.9   5.860   0.0 0.0 1.0 !   WJP
H-C6H12               2   430.6   5.843   0.0 0.0 1.0 !   WJP
H-C6H12-C             2   433.6   5.825   0.0 0.0 1.0 !   WJP
BC6H12                2   430.1   5.833   0.0 0.0 1.0 !   WJP
3C6H12                2   431.5   5.859   0.0 0.0 1.0 !   WJP
3C6H12-C              2   428.9   5.830   0.3 0.0 1.0 !   WJP
2C6H12                2   429.6   5.829   0.0 0.0 1.0 !   WJP
2C6H12-C              2   432.4   5.827   0.0 0.0 1.0 !   WJP
1C6H12                2   423.2   5.834   0.4 0.0 1.0 !   WJP
AC6H12                2   430.1   5.833   0.0 0.0 1.0 !   WJP
DC6H12                2   414.4   5.872   0.0 0.0 1.0 !   WJP
NEOC6H11              2   397.9   5.767   0.0 0.0 1.0 !   WJP
C6H11OOH1-4           2   561.0   6.317   1.7 0.0 1.0 !   1C7H15OH WJP
C6H11OOH1-5           2   561.0   6.317   1.7 0.0 1.0 !   1C7H15OH WJP
C6H11O1-4             2   541.5   5.674   1.8 0.0 1.0 !   1C6H13OH WJP
C6H11O1-5             2   541.5   5.674   1.8 0.0 1.0 !   1C6H13OH WJP
IC6H12                2   430.1   5.833   0.0 0.0 1.0 !   WJP
NC3H7COOC2H5          2   494.8   6.174   1.8 0.0 1.0 !  TCPC
NC5KET12              2   494.8   6.174   1.8 0.0 1.0 !  TCPC
NC5KET13              2   494.8   6.174   1.8 0.0 1.0 !  TCPC
NC5KET14              2   494.8   6.174   1.8 0.0 1.0 !  TCPC
NC5KET15              2   494.8   6.174   1.8 0.0 1.0 !  TCPC
NC5KET21              2   494.8   6.174   1.8 0.0 1.0 !  TCPC
NC5KET23              2   494.8   6.174   1.8 0.0 1.0 !  TCPC
NC5KET24              2   494.8   6.174   1.8 0.0 1.0 !  TCPC
NC5KET25              2   494.8   6.174   1.8 0.0 1.0 !  TCPC
NC5KET31              2   494.8   6.174   1.8 0.0 1.0 !  TCPC
NC5KET32              2   494.8   6.174   1.8 0.0 1.0 !  TCPC
NC3H7COOC3H7-N        2   467.0   6.548   1.8 0.0 1.0 ! TCPC
NC6KET12              2   467.0   6.548   1.8 0.0 1.0 ! WJP
NC6KET13              2   467.0   6.548   1.8 0.0 1.0 ! WJP
NC6KET14              2   467.0   6.548   1.8 0.0 1.0 ! WJP
NC6KET15              2   467.0   6.548   1.8 0.0 1.0 ! WJP
NC6KET21              2   467.0   6.548   1.8 0.0 1.0 ! WJP
NC6KET23              2   467.0   6.548   1.8 0.0 1.0 ! WJP
NC6KET24              2   467.0   6.548   1.8 0.0 1.0 ! WJP
NC6KET25              2   467.0   6.548   1.8 0.0 1.0 ! WJP
NC6KET26              2   467.0   6.548   1.8 0.0 1.0 ! WJP
NC6KET31              2   467.0   6.548   1.8 0.0 1.0 ! WJP
NC6KET32              2   467.0   6.548   1.8 0.0 1.0 ! WJP
NC6KET34              2   467.0   6.548   1.8 0.0 1.0 ! WJP
NC6KET35              2   467.0   6.548   1.8 0.0 1.0 ! WJP
NC6KET36              2   467.0   6.548   1.8 0.0 1.0 ! WJP
NC5H12                2   391.7   5.591   0.0 0.0 1.0 !   WJP
NEO-C5H12             2   357.8   5.550   0.0 0.0 1.0 !   WJP
IC5H12                2   382.1   5.548   0.0 0.0 1.0 !   WJP
NC5H11CHO             2   498.6   6.009   2.0 0.0 1.0 !  C2H5COC3H7-N WJP
NC5H11CO              2   498.6   6.009   2.0 0.0 1.0 !  C2H5COC3H7-N WJP
NC5H10CHO-1           2   498.6   6.009   2.0 0.0 1.0 !  C2H5COC3H7-N WJP
NC5H10CHO-2           2   498.6   6.009   2.0 0.0 1.0 !  C2H5COC3H7-N WJP
NC5H10CHO-3           2   498.6   6.009   2.0 0.0 1.0 !  C2H5COC3H7-N WJP
NC5H10CHO-4           2   498.6   6.009   2.0 0.0 1.0 !  C2H5COC3H7-N WJP
NC5H10CHO-5           2   498.6   6.009   2.0 0.0 1.0 !  C2H5COC3H7-N WJP
1C5H11OH              2   523.2   5.664   1.7 0.0 1.0 !   TCPC
IC5H11OH-1            2   451.9   6.041   0.0 0.0 1.0 !   WJP
IC5H11OH-2            2   431.4   5.624   1.9 0.0 1.0 !   WJP
1C5H11O               2   523.2   5.664   1.7 0.0 1.0 !   WJP
2C5H11O               2   523.2   5.664   1.7 0.0 1.0 !   WJP
3C5H11O               2   523.2   5.664   1.7 0.0 1.0 !   WJP
C5H11O-1              2   523.2   5.664   1.7 0.0 1.0 !   WJP
C5H11O-2              2   523.2   5.664   1.7 0.0 1.0 !   WJP
C5H11O-3              2   523.2   5.664   1.7 0.0 1.0 !   WJP
AC5H11O               2   523.2   5.664   1.7 0.0 1.0 !   WJP
BC5H11O               2   523.2   5.664   1.7 0.0 1.0 !   WJP
CC5H11O               2   523.2   5.664   1.7 0.0 1.0 !   WJP
DC5H11O               2   523.2   5.664   1.7 0.0 1.0 !   WJP
C5H11O2-1             2   523.2   5.664   1.7 0.0 1.0 !   WJP
C5H11O2-2             2   523.2   5.664   1.7 0.0 1.0 !   WJP
C5H11O2-3             2   523.2   5.664   1.7 0.0 1.0 !   WJP
C5H11O2H-1            2   523.2   5.664   1.7 0.0 1.0 !   WJP
C5H11O2H-2            2   523.2   5.664   1.7 0.0 1.0 !   WJP
C5H11O2H-3            2   523.2   5.664   1.7 0.0 1.0 !   WJP
C5H10OOH1-2           2   523.2   5.664   1.7 0.0 1.0 !   WJP
C5H10OOH1-3            2   523.2   5.664   1.7 0.0 1.0 !   WJP
C5H10OOH1-4            2   523.2   5.664   1.7 0.0 1.0 !   WJP
C5H10OOH2-1            2   523.2   5.664   1.7 0.0 1.0 !   WJP
C5H10OOH2-3            2   523.2   5.664   1.7 0.0 1.0 !   WJP
C5H10OOH2-4            2   523.2   5.664   1.7 0.0 1.0 !   WJP
C5H10OOH2-5            2   523.2   5.664   1.7 0.0 1.0 !   WJP
C5H10OOH3-1            2   523.2   5.664   1.7 0.0 1.0 !   WJP
C5H10OOH3-2            2   523.2   5.664   1.7 0.0 1.0 !   WJP
C5H10OOH1-2O2          2   523.2   5.664   1.7 0.0 1.0 !   WJP
C5H10OOH1-3O2          2   523.2   5.664   1.7 0.0 1.0 !   WJP
C5H10OOH1-4O2          2   523.2   5.664   1.7 0.0 1.0 !   WJP
C5H10OOH1-5O2          2   523.2   5.664   1.7 0.0 1.0 !   WJP
C5H10OOH2-1O2          2   523.2   5.664   1.7 0.0 1.0 !   WJP
C5H10OOH2-3O2          2   523.2   5.664   1.7 0.0 1.0 !   WJP
C5H10OOH2-4O2          2   523.2   5.664   1.7 0.0 1.0 !   WJP
C5H10OOH2-5O2          2   523.2   5.664   1.7 0.0 1.0 !   WJP
C5H10OOH3-1O2          2   523.2   5.664   1.7 0.0 1.0 !   WJP
C5H10OOH3-2O2          2   523.2   5.664   1.7 0.0 1.0 !   WJP
C5H10O1-2              2   523.2   5.664   1.7 0.0 1.0 !   WJP
C5H10O1-3              2   523.2   5.664   1.7 0.0 1.0 !   WJP
C5H10O1-4              2   523.2   5.664   1.7 0.0 1.0 !   WJP
C5H10O1-5              2   523.2   5.664   1.7 0.0 1.0 !   WJP
C5H10O2-3              2   523.2   5.664   1.7 0.0 1.0 !   WJP
C5H10O2-4              2   523.2   5.664   1.7 0.0 1.0 !   WJP
C5H9OOH-14             2   541.5   5.674   1.8 0.0 1.0 !   1C6H13OH WJP
C5H9OOH-15             2   541.5   5.674   1.8 0.0 1.0 !   1C6H13OH WJP
C5H9O-14               2   523.2   5.664   1.7 0.0 1.0 !   1C5H11OH WJP
C5H9O-15               2   523.2   5.664   1.7 0.0 1.0 !   1C5H11OH WJP
NEO-C5H11O            2   523.2   5.664   1.7 0.0 1.0 !   WJP
C2H5COC2H5            2   476.7   5.714   2.7 0.0 1.0 !   TCPC
C2H5COC2H3            2   476.7   5.714   2.7 0.0 1.0 !   WJP
PC2H4COC2H3           2   476.7   5.714   2.7 0.0 1.0 !   WJP
SC2H4COC2H3           2   476.7   5.714   2.7 0.0 1.0 !   WJP
IC3H7COCH3            2   469.0   5.632   2.8 0.0 1.0 !   WJP
NC3H7COCH3            2   477.0   5.735   2.5 0.0 1.0 !   WJP
NC4H9CHO              2   476.0   5.778   2.6 0.0 1.0 !   TCPC
NC4H9CO               2   476.0   5.778   2.6 0.0 1.0 !   WJP
C4H8CHO-1             2   476.0   5.778   2.6 0.0 1.0 !   WJP
C4H8CHO-2             2   476.0   5.778   2.6 0.0 1.0 !   WJP
C4H8CHO-3             2   476.0   5.778   2.6 0.0 1.0 !   WJP
C4H8CHO-4             2   476.0   5.778   2.6 0.0 1.0 !   WJP
NC4KET12              2   476.0   5.778   2.6 0.0 1.0 !  WJP
NC4KET13              2   476.0   5.778   2.6 0.0 1.0 !  WJP
NC4KET14              2   476.0   5.778   2.6 0.0 1.0 !  WJP
NC4KET21              2   476.0   5.778   2.6 0.0 1.0 !  WJP
NC4KET23              2   476.0   5.778   2.6 0.0 1.0 !  WJP
NC4KET24              2   476.0   5.778   2.6 0.0 1.0 !  WJP
C-C5H10               2   372.1   5.446   0.0 0.0 1.0 !   WJP
BC5H10                2   391.4   5.550   0.0 0.0 1.0 !   WJP
AC5H10                2   386.6   5.532   0.5 0.0 1.0 !   WJP
2C5H10                2   396.8   5.458   0.0 0.0 1.0 !   WJP
C5H10-2               2   396.8   5.458   0.0 0.0 1.0 !   WJP
1C5H10                2   386.2   5.489   0.4 0.0 1.0 !   WJP
C5H10                 2   386.2   5.489   0.4 0.0 1.0 !   WJP
C5H10-1               2   386.2   5.489   0.4 0.0 1.0 !   WJP
C5H9                  2   396.8   5.458   0.0 0.0 1.0 !   WJP
IC5H9                 2   386.6   5.532   0.5 0.0 1.0 !   WJP
NC4H10                2   350.9   5.206   0.0 0.0 1.0 !   WJP
C4H10                 2   350.9   5.206   0.0 0.0 1.0 !   WJP
IC4H10                2   335.7   5.208   0.1 0.0 1.0 !   WJP
NC4H9OH               2   502.2   5.356   1.8 0.0 1.0 !   WJP
IC4H7OH               2   502.2   5.356   1.8 0.0 1.0 !   WJP
IC4H6OH               2   502.2   5.356   1.8 0.0 1.0 !   WJP
C4H7CHO1-4            2   476.0   5.778   2.6 0.0 1.0 !   NC4H9CHO WJP
C4H7CO1-4             2   476.0   5.778   2.6 0.0 1.0 !   NC4H9CHO WJP
C4H7CHO1-43           2   476.0   5.778   2.6 0.0 1.0 !   NC4H9CHO WJP
C4H7CHO1-44           2   476.0   5.778   2.6 0.0 1.0 !   NC4H9CHO WJP
C4H7OOH1-4            2   523.2   5.664   1.7 0.0 1.0 !   1C5H11OH WJP
C4H7O1-4              2   476.0   5.778   2.6 0.0 1.0 !   NC4H9CHO WJP
IC3H7CHO              2   436.4   5.352   0.0 0.0 1.0 !   TCPC
TC3H6O2CHO            2   436.4   5.352   0.0 0.0 1.0 !   WJP
TC3H6O2HCO            2   436.4   5.352   0.0 0.0 1.0 !   WJP
TC3H6OHCHO            2   436.4   5.352   0.0 0.0 1.0 !   WJP
IC3H5O2HCHO           2   436.4   5.352   0.0 0.0 1.0 !   WJP
NC3H7CHO              2   464.2   5.009   2.6 0.0 1.0 !   TCPC
AC3H5CHO              2   464.2   5.009   2.6 0.0 1.0 !   WJP
AC3H5CO               2   464.2   5.009   2.6 0.0 1.0 !   WJP
C2H3CHCHO             2   464.2   5.009   2.6 0.0 1.0 !   WJP
C2H5CHCHO             2   464.2   5.009   2.6 0.0 1.0 !   WJP
C3H6CHO-1             2   464.2   5.009   2.6 0.0 1.0 !   WJP
C3H6CHO-2             2   464.2   5.009   2.6 0.0 1.0 !   WJP
C3H6CHO-3             2   464.2   5.009   2.6 0.0 1.0 !   WJP
SC3H5CHO              2   464.2   5.009   2.6 0.0 1.0 !   TCPC
SC3H5CO               2   464.2   5.009   2.6 0.0 1.0 !   TCPC
C2H5OCHO              2   427.0   5.117   2.0 0.0 1.0 !   TCPC
CH3CHOCHO             2   427.0   5.117   2.0 0.0 1.0 !   TCPC
C2H5COCH3             2   454.0   5.413   3.3 0.0 1.0 !   TCPC
C2H5COCH2             2   454.0   5.413   3.3 0.0 1.0 !   WJP
C2H3COCH3             2   454.0   5.413   3.3 0.0 1.0 !   WJP
C3KET12               2   464.2   5.009   2.6 0.0 1.0 !   WJP
C3KET13               2   464.2   5.009   2.6 0.0 1.0 !   WJP
C3KET21               2   464.2   5.009   2.6 0.0 1.0 !   WJP
IC3H7CO               2   436.4   5.352   0.0 0.0 1.0 !   WJP
NC3H7CO               2   464.2   5.009   2.6 0.0 1.0 !   WJP
IC3H6CHO              2   436.4   5.352   0.0 0.0 1.0 !   WJP
TC3H6CHO              2   436.4   5.352   0.0 0.0 1.0 !   WJP
TC3H6OCHO             2   436.4   5.352   0.0 0.0 1.0 !   WJP
IC3H6CO               2   436.4   5.352   0.0 0.0 1.0 !   WJP
IC3H5CHO              2   436.4   5.352   0.0 0.0 1.0 !   WJP
IC3H5CO               2   436.4   5.352   0.0 0.0 1.0 !   WJP
IC4H8                 2   344.5   5.089   0.5 0.0 1.0 !   WJP
2-C4H8                2   354.1   5.135   0.0 0.0 1.0 !   WJP
2-C4H8-S              2   359.7   5.076   0.3 0.0 1.0 !   WJP
1-C4H8                2   345.7   5.088   0.3 0.0 1.0 !   WJP
1,3-C4H6              2   350.4   4.984   0.0 0.0 1.0 !   WJP
1,2-C4H6              2   370.3   4.984   0.4 0.0 1.0 !   WJP
C3H6O                 2   403.6   4.968   2.0 0.0 1.0 !   WJP
C3H6O1-3              2   403.6   4.968   2.0 0.0 1.0 !   WJP
C3H6O1-2              2   403.6   4.968   2.0 0.0 1.0 !   WJP
C2H5CHO               2   435.2   4.662   2.7 0.0 1.0 !   WJP
C3H6OOH1-2            2   435.2   4.662   2.7 0.0 1.0 !   WJP
C3H6OOH1-3            2   435.2   4.662   2.7 0.0 1.0 !   WJP
C3H6OOH2-1            2   435.2   4.662   2.7 0.0 1.0 !   WJP
C3H6OOH1-2O2          2   435.2   4.662   2.7 0.0 1.0 !   WJP
C3H6OOH1-3O2          2   435.2   4.662   2.7 0.0 1.0 !   WJP
C3H6OOH2-1O2          2   435.2   4.662   2.7 0.0 1.0 !   WJP
NC3H7OH               2   481.5   4.997   1.7 0.0 1.0 !   WJP
IC3H7OH               2   459.5   5.036   1.7 0.0 1.0 !   WJP
CH3OC2H5              2   364.6   4.998   1.2 0.0 1.0 !   WJP
IC3H5OH               2   459.5   5.036   1.7 0.0 1.0 !   WJP
TC3H6OH               2   459.5   5.036   1.7 0.0 1.0 !   WJP
NC3H7O                2   481.5   4.997   1.7 0.0 1.0 !   WJP
NC3H7O2               2   481.5   4.997   1.7 0.0 1.0 !   WJP
NC3H7O2H              2   481.5   4.997   1.7 0.0 1.0 !   WJP
IC3H7O                2   459.5   5.036   1.7 0.0 1.0 !   WJP
IC3H7O2               2   459.5   5.036   1.7 0.0 1.0 !   WJP
IC3H7O2H              2   459.5   5.036   1.7 0.0 1.0 !   WJP
C3H5OH                2   481.5   4.997   1.7 0.0 1.0 !   WJP
C2H3CHO               2   428.8   4.958   2.9 0.0 1.0 !   WJP
CH2CCH2OH             2   481.5   4.997   1.7 0.0 1.0 !   WJP
A-AC5H10O             3   492.434     5.369     0.000     0.000     0.000    !FLAMEMASTER
A-BC5H10O             3   492.434     5.369     0.000     0.000     0.000    !FLAMEMASTER
AC3H4COC2H5           3   527.994     5.587     0.000     0.000     0.000    !FLAMEMASTER
AC3H4COCH3            3   482.331     5.306     0.000     0.000     0.000    !FLAMEMASTER
AC3H5CHCOCH3          3   527.994     5.587     0.000     0.000     0.000    !FLAMEMASTER
AC5H10OOH-A           3   546.691     5.698     0.000     0.000     0.000    !FLAMEMASTER
AC5H10OOH-AO2         3   639.455     6.230     0.000     0.000     0.000    !FLAMEMASTER
AC5H10OOH-B           3   546.691     5.698     0.000     0.000     0.000    !FLAMEMASTER
AC5H10OOH-BO2         3   639.455     6.230     0.000     0.000     0.000    !FLAMEMASTER
AC5H10OOH-C           3   546.691     5.698     0.000     0.000     0.000    !FLAMEMASTER
AC5H10OOH-CO2         3   639.455     6.230     0.000     0.000     0.000    !FLAMEMASTER
AC5H10OOH-D           3   546.691     5.698     0.000     0.000     0.000    !FLAMEMASTER
AC5H10OOH-DO2         3   639.455     6.230     0.000     0.000     0.000    !FLAMEMASTER
AC5H11                3   440.735     5.041     0.000     0.000     0.000    !FLAMEMASTER
AC5H11O2              3   546.691     5.698     0.000     0.000     0.000    !FLAMEMASTER
AC5H11O2H             3   549.783     5.717     0.000     0.000     0.000    !FLAMEMASTER
A-CC5H10O             3   492.434     5.369     0.000     0.000     0.000    !FLAMEMASTER
A-DC5H10O             3   492.434     5.369     0.000     0.000     0.000    !FLAMEMASTER
BC5H10OOH-A           3   546.691     5.698     0.000     0.000     0.000    !FLAMEMASTER
BC5H10OOH-AO2         3   639.455     6.230     0.000     0.000     0.000    !FLAMEMASTER
BC5H10OOH-C           3   546.691     5.698     0.000     0.000     0.000    !FLAMEMASTER
BC5H10OOH-CO2         3   639.455     6.230     0.000     0.000     0.000    !FLAMEMASTER
BC5H10OOH-D           3   546.691     5.698     0.000     0.000     0.000    !FLAMEMASTER
BC5H10OOH-DO2         3   639.455     6.230     0.000     0.000     0.000    !FLAMEMASTER
BC5H11                3   440.735     5.041     0.000     0.000     0.000    !FLAMEMASTER
BC5H11O2              3   546.691     5.698     0.000     0.000     0.000    !FLAMEMASTER
BC5H11O2H             3   549.783     5.717     0.000     0.000     0.000    !FLAMEMASTER
B-CC5H10O             3   492.434     5.369     0.000     0.000     0.000    !FLAMEMASTER
B-DC5H10O             3   492.434     5.369     0.000     0.000     0.000    !FLAMEMASTER
C2H5CHCO              3   436.950     5.016     0.000     0.000     0.000    !FLAMEMASTER
C2H5COC2H4P           3   489.084     5.348     0.000     0.000     0.000    !FLAMEMASTER
C2H5COC2H4S           3   489.084     5.348     0.000     0.000     0.000    !FLAMEMASTER
C3H6COC2H5-1          3   534.323     5.625     0.000     0.000     0.000    !FLAMEMASTER
C3H6COC2H5-2          3   534.323     5.625     0.000     0.000     0.000    !FLAMEMASTER
C3H6COC2H5-3          3   534.323     5.625     0.000     0.000     0.000    !FLAMEMASTER
C3H6COCH3-1           3   489.084     5.348     0.000     0.000     0.000    !FLAMEMASTER
C3H6COCH3-2           3   489.084     5.348     0.000     0.000     0.000    !FLAMEMASTER
C3H6COCH3-3           3   489.084     5.348     0.000     0.000     0.000    !FLAMEMASTER
C4H6CHO1-43           3   482.331     5.306     0.000     0.000     0.000    !FLAMEMASTER
C4H6CHO1-44           3   482.331     5.306     0.000     0.000     0.000    !FLAMEMASTER
C4H8COCH3-1           3   534.323     5.625     0.000     0.000     0.000    !FLAMEMASTER
C4H8COCH3-2           3   534.323     5.625     0.000     0.000     0.000    !FLAMEMASTER
C4H8COCH3-3           3   534.323     5.625     0.000     0.000     0.000    !FLAMEMASTER
C4H8COCH3-4           3   534.323     5.625     0.000     0.000     0.000    !FLAMEMASTER
C5H10CHO-1            3   534.323     5.625     0.000     0.000     0.000    !FLAMEMASTER
C5H10CHO-2            3   534.323     5.625     0.000     0.000     0.000    !FLAMEMASTER
C5H10CHO-3            3   534.323     5.625     0.000     0.000     0.000    !FLAMEMASTER
C5H10CHO-4            3   534.323     5.625     0.000     0.000     0.000    !FLAMEMASTER
C5H10CHO-5            3   534.323     5.625     0.000     0.000     0.000    !FLAMEMASTER
C5H10OOH1-5           3   546.691     5.698     0.000     0.000     0.000    !FLAMEMASTER
C5H11-1               3   440.735     5.041     0.000     0.000     0.000    !FLAMEMASTER
C5H11-2               3   440.735     5.041     0.000     0.000     0.000    !FLAMEMASTER
C5H11-3               3   440.735     5.041     0.000     0.000     0.000    !FLAMEMASTER
C5H9O1-4              3   489.084     5.348     0.000     0.000     0.000    !FLAMEMASTER
C5H9O1-5              3   489.084     5.348     0.000     0.000     0.000    !FLAMEMASTER
C5H9OOH1-4            3   543.585     5.680     0.000     0.000     0.000    !FLAMEMASTER
C5H9OOH1-5            3   543.585     5.680     0.000     0.000     0.000    !FLAMEMASTER
C6H11                 3   482.473     5.307     0.000     0.000     0.000    !FLAMEMASTER
C6H12-1               3   485.857     5.328     0.000     0.000     0.000    !FLAMEMASTER
C6H12-2               3   485.857     5.328     0.000     0.000     0.000    !FLAMEMASTER
C6H12-3               3   485.857     5.328     0.000     0.000     0.000    !FLAMEMASTER
C6H12O1-2             3   537.467     5.643     0.000     0.000     0.000    !FLAMEMASTER
C6H12O1-3             3   537.467     5.643     0.000     0.000     0.000    !FLAMEMASTER
C6H12O1-4             3   537.467     5.643     0.000     0.000     0.000    !FLAMEMASTER
C6H12O1-5             3   537.467     5.643     0.000     0.000     0.000    !FLAMEMASTER
C6H12O2-3             3   537.467     5.643     0.000     0.000     0.000    !FLAMEMASTER
C6H12O2-4             3   537.467     5.643     0.000     0.000     0.000    !FLAMEMASTER
C6H12O2-5             3   537.467     5.643     0.000     0.000     0.000    !FLAMEMASTER
C6H12O3-4             3   537.467     5.643     0.000     0.000     0.000    !FLAMEMASTER
C6H12OOH1-2           3   588.653     5.943     0.000     0.000     0.000    !FLAMEMASTER
C6H12OOH1-2O2         3   677.149     6.436     0.000     0.000     0.000    !FLAMEMASTER
C6H12OOH1-3           3   588.653     5.943     0.000     0.000     0.000    !FLAMEMASTER
C6H12OOH1-3O2         3   677.149     6.436     0.000     0.000     0.000    !FLAMEMASTER
C6H12OOH1-4           3   588.653     5.943     0.000     0.000     0.000    !FLAMEMASTER
C6H12OOH1-4O2         3   677.149     6.436     0.000     0.000     0.000    !FLAMEMASTER
C6H12OOH1-5           3   588.653     5.943     0.000     0.000     0.000    !FLAMEMASTER
C6H12OOH1-5O2         3   677.149     6.436     0.000     0.000     0.000    !FLAMEMASTER
C6H12OOH2-1           3   588.653     5.943     0.000     0.000     0.000    !FLAMEMASTER
C6H12OOH2-1O2         3   677.149     6.436     0.000     0.000     0.000    !FLAMEMASTER
C6H12OOH2-3           3   588.653     5.943     0.000     0.000     0.000    !FLAMEMASTER
C6H12OOH2-3O2         3   677.149     6.436     0.000     0.000     0.000    !FLAMEMASTER
C6H12OOH2-4           3   588.653     5.943     0.000     0.000     0.000    !FLAMEMASTER
C6H12OOH2-4O2         3   677.149     6.436     0.000     0.000     0.000    !FLAMEMASTER
C6H12OOH2-5           3   588.653     5.943     0.000     0.000     0.000    !FLAMEMASTER
C6H12OOH2-5O2         3   677.149     6.436     0.000     0.000     0.000    !FLAMEMASTER
C6H12OOH2-6           3   588.653     5.943     0.000     0.000     0.000    !FLAMEMASTER
C6H12OOH2-6O2         3   677.149     6.436     0.000     0.000     0.000    !FLAMEMASTER
C6H12OOH3-1           3   588.653     5.943     0.000     0.000     0.000    !FLAMEMASTER
C6H12OOH3-1O2         3   677.149     6.436     0.000     0.000     0.000    !FLAMEMASTER
C6H12OOH3-2           3   588.653     5.943     0.000     0.000     0.000    !FLAMEMASTER
C6H12OOH3-2O2         3   677.149     6.436     0.000     0.000     0.000    !FLAMEMASTER
C6H12OOH3-4           3   588.653     5.943     0.000     0.000     0.000    !FLAMEMASTER
C6H12OOH3-4O2         3   677.149     6.436     0.000     0.000     0.000    !FLAMEMASTER
C6H12OOH3-5           3   588.653     5.943     0.000     0.000     0.000    !FLAMEMASTER
C6H12OOH3-5O2         3   677.149     6.436     0.000     0.000     0.000    !FLAMEMASTER
C6H12OOH3-6           3   588.653     5.943     0.000     0.000     0.000    !FLAMEMASTER
C6H12OOH3-6O2         3   677.149     6.436     0.000     0.000     0.000    !FLAMEMASTER
C6H13-1               3   489.224     5.349     0.000     0.000     0.000    !FLAMEMASTER
C6H13-2               3   489.224     5.349     0.000     0.000     0.000    !FLAMEMASTER
C6H13-3               3   489.224     5.349     0.000     0.000     0.000    !FLAMEMASTER
C6H13O-1              3   540.597     5.662     0.000     0.000     0.000    !FLAMEMASTER
C6H13O-2              3   540.597     5.662     0.000     0.000     0.000    !FLAMEMASTER
C6H13O2-1             3   588.653     5.943     0.000     0.000     0.000    !FLAMEMASTER
C6H13O2-2             3   588.653     5.943     0.000     0.000     0.000    !FLAMEMASTER
C6H13O2-3             3   588.653     5.943     0.000     0.000     0.000    !FLAMEMASTER
C6H13O2H-1            3   591.585     5.960     0.000     0.000     0.000    !FLAMEMASTER
C6H13O2H-2            3   591.585     5.960     0.000     0.000     0.000    !FLAMEMASTER
C6H13O2H-3            3   591.585     5.960     0.000     0.000     0.000    !FLAMEMASTER
C6H13O-3              3   540.597     5.662     0.000     0.000     0.000    !FLAMEMASTER
CC4H8O                3   444.197     5.063     0.000     0.000     0.000    !FLAMEMASTER
CC5H10                3   437.102     5.017     0.000     0.000     0.000    !FLAMEMASTER
CC5H10OOH-A           3   546.691     5.698     0.000     0.000     0.000    !FLAMEMASTER
CC5H10OOH-AO2         3   639.455     6.230     0.000     0.000     0.000    !FLAMEMASTER
CC5H10OOH-B           3   546.691     5.698     0.000     0.000     0.000    !FLAMEMASTER
CC5H10OOH-BO2         3   639.455     6.230     0.000     0.000     0.000    !FLAMEMASTER
CC5H10OOH-D           3   546.691     5.698     0.000     0.000     0.000    !FLAMEMASTER
CC5H10OOH-DO2         3   639.455     6.230     0.000     0.000     0.000    !FLAMEMASTER
CC5H11                3   440.735     5.041     0.000     0.000     0.000    !FLAMEMASTER
CC5H11O2              3   546.691     5.698     0.000     0.000     0.000    !FLAMEMASTER
CC5H11O2H             3   549.783     5.717     0.000     0.000     0.000    !FLAMEMASTER
C-DC5H10O             3   492.434     5.369     0.000     0.000     0.000    !FLAMEMASTER
CH2CH2COCH3           3   440.584     5.040     0.000     0.000     0.000    !FLAMEMASTER
CH2CHOOHCOCH3         3   546.562     5.698     0.000     0.000     0.000    !FLAMEMASTER
CH3CHCHO              3   387.860     4.687     0.000     0.000     0.000    !FLAMEMASTER
CH3CHCOCH3            3   440.584     5.040     0.000     0.000     0.000    !FLAMEMASTER
CH3CHOOCOCH3          3   546.562     5.698     0.000     0.000     0.000    !FLAMEMASTER
CH3COCH2O             3   447.639     5.086     0.000     0.000     0.000    !FLAMEMASTER
CH3COCH2O2            3   502.115     5.429     0.000     0.000     0.000    !FLAMEMASTER
CH3COCH2O2H           3   505.403     5.449     0.000     0.000     0.000    !FLAMEMASTER
DC5H10OOH-A           3   546.691     5.698     0.000     0.000     0.000    !FLAMEMASTER
DC5H10OOH-AO2         3   639.455     6.230     0.000     0.000     0.000    !FLAMEMASTER
DC5H10OOH-B           3   546.691     5.698     0.000     0.000     0.000    !FLAMEMASTER
DC5H10OOH-BO2         3   639.455     6.230     0.000     0.000     0.000    !FLAMEMASTER
DC5H10OOH-C           3   546.691     5.698     0.000     0.000     0.000    !FLAMEMASTER
DC5H10OOH-CO2         3   639.455     6.230     0.000     0.000     0.000    !FLAMEMASTER
DC5H11                3   440.735     5.041     0.000     0.000     0.000    !FLAMEMASTER
DC5H11O2              3   546.691     5.698     0.000     0.000     0.000    !FLAMEMASTER
DC5H11O2H             3   549.783     5.717     0.000     0.000     0.000    !FLAMEMASTER
IC3H5COC2H4P          3   527.994     5.587     0.000     0.000     0.000    !FLAMEMASTER
IC3H5COC2H4S          3   527.994     5.587     0.000     0.000     0.000    !FLAMEMASTER
IC3H5COC2H5           3   531.165     5.606     0.000     0.000     0.000    !FLAMEMASTER
IC3H5COCH2            3   482.331     5.306     0.000     0.000     0.000    !FLAMEMASTER
IC3H5COCH3            3   485.716     5.327     0.000     0.000     0.000    !FLAMEMASTER
IC3H6CHCOCH2          3   527.994     5.587     0.000     0.000     0.000    !FLAMEMASTER
IC3H6CHCOCH3          3   531.165     5.606     0.000     0.000     0.000    !FLAMEMASTER
IC3H6COC2H3           3   527.994     5.587     0.000     0.000     0.000    !FLAMEMASTER
IC3H6COC2H5           3   534.323     5.625     0.000     0.000     0.000    !FLAMEMASTER
IC3H6COCH3            3   489.084     5.348     0.000     0.000     0.000    !FLAMEMASTER
IC3H7COC2H3           3   531.165     5.606     0.000     0.000     0.000    !FLAMEMASTER
IC3H7COC2H4P          3   534.323     5.625     0.000     0.000     0.000    !FLAMEMASTER
IC3H7COC2H4S          3   534.323     5.625     0.000     0.000     0.000    !FLAMEMASTER
IC3H7COC2H5           3   537.467     5.643     0.000     0.000     0.000    !FLAMEMASTER
IC3H7COCH2            3   489.084     5.348     0.000     0.000     0.000    !FLAMEMASTER
IC4H6Q2-II            3   597.176     5.992     0.000     0.000     0.000    !FLAMEMASTER
IC4H7-I1              3   380.022     4.633     0.000     0.000     0.000    !FLAMEMASTER
IC4H7OOH              3   498.949     5.410     0.000     0.000     0.000    !FLAMEMASTER
IC4H8O                3   444.197     5.063     0.000     0.000     0.000    !FLAMEMASTER
IC4H8OOH-I            3   502.252     5.430     0.000     0.000     0.000    !FLAMEMASTER
IC4H8OOH-IO2          3   600.078     6.009     0.000     0.000     0.000    !FLAMEMASTER
IC4H8OOH-T            3   502.252     5.430     0.000     0.000     0.000    !FLAMEMASTER
IC4H8OOH-TO2          3   600.078     6.009     0.000     0.000     0.000    !FLAMEMASTER
IC4H9O2               3   502.252     5.430     0.000     0.000     0.000    !FLAMEMASTER
IC4H9O2H              3   505.540     5.450     0.000     0.000     0.000    !FLAMEMASTER
IC4KETII              3   549.655     5.716     0.000     0.000     0.000    !FLAMEMASTER
IC4KETIT              3   549.655     5.716     0.000     0.000     0.000    !FLAMEMASTER
IC5KETAA              3   591.463     5.959     0.000     0.000     0.000    !FLAMEMASTER
IC5KETAB              3   591.463     5.959     0.000     0.000     0.000    !FLAMEMASTER
IC5KETAC              3   591.463     5.959     0.000     0.000     0.000    !FLAMEMASTER
IC5KETAD              3   591.463     5.959     0.000     0.000     0.000    !FLAMEMASTER
IC5KETCA              3   591.463     5.959     0.000     0.000     0.000    !FLAMEMASTER
IC5KETCB              3   591.463     5.959     0.000     0.000     0.000    !FLAMEMASTER
IC5KETCD              3   591.463     5.959     0.000     0.000     0.000    !FLAMEMASTER
IC5KETDA              3   591.463     5.959     0.000     0.000     0.000    !FLAMEMASTER
IC5KETDB              3   591.463     5.959     0.000     0.000     0.000    !FLAMEMASTER
IC5KETDC              3   591.463     5.959     0.000     0.000     0.000    !FLAMEMASTER
NC3H7COC2H4P          3   534.323     5.625     0.000     0.000     0.000    !FLAMEMASTER
NC3H7COC2H4S          3   534.323     5.625     0.000     0.000     0.000    !FLAMEMASTER
NC3H7COC2H5           3   537.467     5.643     0.000     0.000     0.000    !FLAMEMASTER
NC3H7COCH2            3   489.084     5.348     0.000     0.000     0.000    !FLAMEMASTER
NC4H9COCH2            3   534.323     5.625     0.000     0.000     0.000    !FLAMEMASTER
NC4H9COCH3            3   537.467     5.643     0.000     0.000     0.000    !FLAMEMASTER
NEO-C5H10O            3   492.434     5.369     0.000     0.000     0.000    !FLAMEMASTER
NEOC5H10OOH           3   546.691     5.698     0.000     0.000     0.000    !FLAMEMASTER
NEOC5H10OOH-O2        3   639.455     6.230     0.000     0.000     0.000    !FLAMEMASTER
NEOC5H11              3   440.735     5.041     0.000     0.000     0.000    !FLAMEMASTER
NEOC5H11O             3   495.769     5.390     0.000     0.000     0.000    !FLAMEMASTER
NEOC5H11O2            3   546.691     5.698     0.000     0.000     0.000    !FLAMEMASTER
NEOC5H11O2H           3   549.783     5.717     0.000     0.000     0.000    !FLAMEMASTER
NEOC5H12              3   444.347     5.064     0.000     0.000     0.000    !FLAMEMASTER
NEOC5H9Q2             3   639.455     6.230     0.000     0.000     0.000    !FLAMEMASTER
NEOC5H9Q2-N           3   639.455     6.230     0.000     0.000     0.000    !FLAMEMASTER
NEOC5KEJOL            3   540.467     5.661     0.000     0.000     0.000    !FLAMEMASTER
NEOC5KET              3   591.463     5.959     0.000     0.000     0.000    !FLAMEMASTER
NEOC5KETOX            3   540.467     5.661     0.000     0.000     0.000    !FLAMEMASTER
O2C4H8CHO             3   588.531     5.942     0.000     0.000     0.000    !FLAMEMASTER
O2HC4H8CO             3   588.531     5.942     0.000     0.000     0.000    !FLAMEMASTER
SC3H5COCH2            3   482.331     5.306     0.000     0.000     0.000    !FLAMEMASTER
TC3H6COC2H3           3   527.994     5.587     0.000     0.000     0.000    !FLAMEMASTER
TC3H6COC2H5           3   534.323     5.625     0.000     0.000     0.000    !FLAMEMASTER
TC3H6COCH3            3   489.084     5.348     0.000     0.000     0.000    !FLAMEMASTER
TC4H8CHO              3   489.084     5.348     0.000     0.000     0.000    !FLAMEMASTER
TC4H8OOH-I            3   502.252     5.430     0.000     0.000     0.000    !FLAMEMASTER
TC4H8OOH-IO2          3   600.078     6.009     0.000     0.000     0.000    !FLAMEMASTER
TC4H9O2               3   502.252     5.430     0.000     0.000     0.000    !FLAMEMASTER
TC4H9O2H              3   505.540     5.450     0.000     0.000     0.000    !FLAMEMASTER
!ethanol
C2H5OH                2   470.600     4.410     0.000     0.000     1.500    ! NMM
CH3CHOH               2   362.600     4.530     0.000     0.000     1.500    ! MI
CH3CH2O               2   470.600     4.410     0.000     0.000     1.500    ! NMM    
HOC2H4O2              2   523.2       5.664     1.7       0.0       1.0      ! WJP    
CH2CH2OH              2   362.600     4.530     0.000     0.000     1.500    ! MI
C2H4OH                2   362.600     4.530     0.000     0.000     1.500    ! MI
END

#endif
