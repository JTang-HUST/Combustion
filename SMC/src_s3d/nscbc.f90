module nscbc_module

  use bc_module
  use bl_error_module
  use multifab_module
  use parallel
  
  use chemistry_module
  use derivative_stencil_module, only : stencil_ng, first_deriv_8, first_deriv_6, &
       first_deriv_4, first_deriv_l3, first_deriv_r3, first_deriv_rb, first_deriv_lb
  use physbndry_reg_module
  use probin_module, only : bcx_lo,bcx_hi,bcy_lo,bcy_hi,bcz_lo,bcz_hi, &
       prob_lo_x, prob_lo_y, prob_lo_z, prob_hi_x, prob_hi_y, prob_hi_z, &
       sigma=>outlet_sigma, Pinfty=>outlet_Pinfty, outlet_eta, inlet_eta, &
       nscbc_burn
  use smc_bc_module
  use variables_module

  implicit none

  integer, save :: dm

  type(physbndry_reg), save :: qin_xlo, qin_xhi, qin_ylo, qin_yhi, qin_zlo, qin_zhi
  integer, save :: iuin, ivin, iwin, iTin, iYin1
  integer, save :: nqin

  type(physbndry_reg), save :: aux_xlo, aux_xhi, aux_ylo, aux_yhi, aux_zlo, aux_zhi
  integer, parameter :: igamma=1, iWbar=2, icp=3, icv=4, ics=5, iwdot1=6
  integer, save :: naux, nreg

  double precision, save :: Lxdomain, Lydomain, Lzdomain
  double precision, save :: Ma2_xlo, Ma2_xhi, Ma2_ylo, Ma2_yhi, Ma2_zlo, Ma2_zhi

  private

  public :: nscbc, nscbc_init, nscbc_build_registers, nscbc_init_inlet_reg_from_scratch, &
       nscbc_close, impose_hard_bc, qin_xlo, qin_xhi, qin_ylo, qin_yhi, qin_zlo, qin_zhi

contains

  subroutine nscbc_init(dm_in)
    integer, intent(in) :: dm_in
    dm = dm_in
    iuin=1 
    ivin=2 
    if (dm .eq. 3) then
       iwin=3
       iTin=4
    else
       iwin=-1
       iTin=3
    end if
    iYin1 = iTin + 1
    Lxdomain = prob_hi_x - prob_lo_x
    Lydomain = prob_hi_y - prob_lo_y
    Lzdomain = prob_hi_z - prob_lo_z
    naux = iwdot1 + nspecies - 1
    nqin = iYin1 + nspecies - 1
  end subroutine nscbc_init

  subroutine nscbc_build_registers(la)
    use layout_module
    type(layout), intent(in) :: la

    if (bcx_lo .eq. OUTLET) then  
       call physbndry_reg_build(aux_xlo, la, naux, 1, -1, .true.)
    else if (bcx_lo .eq. INLET) then
       call physbndry_reg_build(aux_xlo, la, naux, 1, -1, .true.)       
       call physbndry_reg_build(qin_xlo, la, nqin, 1, -1, .true.)  
!       call physbndry_reg_setval(qin_xlo, 0.d0)
    end if

    if (bcy_lo .eq. OUTLET) then 
       call physbndry_reg_build(aux_ylo, la, naux, 2, -1, .true.)
    else if (bcy_lo .eq. INLET) then
       call physbndry_reg_build(aux_ylo, la, naux, 2, -1, .true.)
       call physbndry_reg_build(qin_ylo, la, nqin, 2, -1, .true.)
!       call physbndry_reg_setval(qin_ylo, 0.d0)
    end if

    if (dm.eq.3) then
       if (bcz_lo .eq. OUTLET) then
          call physbndry_reg_build(aux_zlo, la, naux, 3, -1, .true.)
       else if (bcz_lo .eq. INLET) then
          call physbndry_reg_build(aux_zlo, la, naux, 3, -1, .true.)
          call physbndry_reg_build(qin_zlo, la, nqin, 3, -1, .true.)
          !       call physbndry_reg_setval(qin_zlo, 0.d0)
       end if
    end if

    if (bcx_hi .eq. OUTLET) then 
       call physbndry_reg_build(aux_xhi, la, naux, 1, +1, .true.)
    else if (bcx_hi .eq. INLET) then
       call physbndry_reg_build(aux_xhi, la, naux, 1, +1, .true.)
       call physbndry_reg_build(qin_xhi, la, nqin, 1, +1, .true.)
!       call physbndry_reg_setval(qin_xhi, 0.d0)
    end if

    if (bcy_hi .eq. OUTLET) then 
       call physbndry_reg_build(aux_yhi, la, naux, 2, +1, .true.)
    else if (bcy_hi .eq. INLET) then
       call physbndry_reg_build(aux_yhi, la, naux, 2, +1, .true.)
       call physbndry_reg_build(qin_yhi, la, nqin, 2, +1, .true.)
!       call physbndry_reg_setval(qin_yhi, 0.d0)
    end if

    if (dm.eq.3) then
       if (bcz_hi .eq. OUTLET) then
          call physbndry_reg_build(aux_zhi, la, naux, 3, +1, .true.)
       else if (bcz_hi .eq. INLET) then
          call physbndry_reg_build(aux_zhi, la, naux, 3, +1, .true.)
          call physbndry_reg_build(qin_zhi, la, nqin, 3, +1, .true.)
          !       call physbndry_reg_setval(qin_zhi, 0.d0)
       end if
    end if

    nreg = 0
    if (aux_xlo%nc .gt. 0) then
       nreg = nreg + 1
    end if
    if (aux_xhi%nc .gt. 0) then
       nreg = nreg + 1
    end if
    if (aux_ylo%nc .gt. 0) then
       nreg = nreg + 1
    end if
    if (aux_yhi%nc .gt. 0) then
       nreg = nreg + 1
    end if
    if (aux_zlo%nc .gt. 0) then
       nreg = nreg + 1
    end if
    if (aux_zhi%nc .gt. 0) then
       nreg = nreg + 1
    end if

  end subroutine nscbc_build_registers


  subroutine nscbc_init_inlet_reg_from_scratch(U)
    type(multifab), intent(in) :: U

    if (bcx_lo .eq. INLET) then
       call store_inflow(qin_xlo, U)
    end if

    if (bcy_lo .eq. INLET) then
       call store_inflow(qin_ylo, U)
    end if

    if (dm.eq.3 .and. bcz_lo .eq. INLET) then
       call store_inflow(qin_zlo, U)
    end if

    if (bcx_hi .eq. INLET) then
       call store_inflow(qin_xhi, U)
    end if

    if (bcy_hi .eq. INLET) then
       call store_inflow(qin_yhi, U)
    end if

    if (dm.eq.3 .and. bcz_hi .eq. INLET) then
       call store_inflow(qin_zhi, U)
    end if

  end subroutine nscbc_init_inlet_reg_from_scratch


  subroutine nscbc_close()
    if (aux_xlo%nc .gt. 0) then
       call physbndry_reg_destroy(aux_xlo)
    end if

    if (aux_ylo%nc .gt. 0) then
       call physbndry_reg_destroy(aux_ylo)
    end if

    if (aux_zlo%nc .gt. 0) then
       call physbndry_reg_destroy(aux_zlo)
    end if

    if (aux_xhi%nc .gt. 0) then
       call physbndry_reg_destroy(aux_xhi)
    end if

    if (aux_yhi%nc .gt. 0) then
       call physbndry_reg_destroy(aux_yhi)
    end if

    if (aux_zhi%nc .gt. 0) then
       call physbndry_reg_destroy(aux_zhi)
    end if

    if (qin_xlo%nc .gt. 0) then
       call physbndry_reg_destroy(qin_xlo)
    end if

    if (qin_ylo%nc .gt. 0) then
       call physbndry_reg_destroy(qin_ylo)
    end if

    if (qin_zlo%nc .gt. 0) then
       call physbndry_reg_destroy(qin_zlo)
    end if

    if (qin_xhi%nc .gt. 0) then
       call physbndry_reg_destroy(qin_xhi)
    end if

    if (qin_yhi%nc .gt. 0) then
       call physbndry_reg_destroy(qin_yhi)
    end if

    if (qin_zhi%nc .gt. 0) then
       call physbndry_reg_destroy(qin_zhi)
    end if
  end subroutine nscbc_close


  subroutine nscbc(Q, con, Fdif, Upchem, rhs, t, dx, update_mach)
    type(multifab), intent(in   ) :: Q, con, Fdif, Upchem
    type(multifab), intent(inout) :: rhs
    double precision, intent(in) :: t, dx(3)
    logical, intent(in) :: update_mach

    integer :: n, nb, ngq, ngc, ireg
    integer :: blo(Q%dim), bhi(Q%dim)
    integer :: dlo(Q%dim), dhi(Q%dim)
    integer ::  lo(Q%dim),  hi(Q%dim)
    integer :: alo(Q%dim), ahi(Q%dim)

    double precision :: proc_Ma2_xlo, proc_Ma2_xhi
    double precision :: proc_Ma2_ylo, proc_Ma2_yhi
    double precision :: proc_Ma2_zlo, proc_Ma2_zhi
    double precision :: Ma2s(nreg), proc_Ma2s(nreg)

    double precision, pointer, dimension(:,:,:,:) :: qp, cp, fdp, upcp, rhp, auxp, qinp

    nb = nfabs(Q)
    ngq = nghost(Q)
    ngc = nghost(con)

    proc_Ma2_xlo=0.d0 
    proc_Ma2_xhi=0.d0 
    proc_Ma2_ylo=0.d0 
    proc_Ma2_yhi=0.d0 
    proc_Ma2_zlo=0.d0 
    proc_Ma2_zhi=0.d0

    do n=1,nb

       lo = lwb(get_box(Q,n))
       hi = upb(get_box(Q,n))

       qp   => dataptr(Q, n)
       upcp => dataptr(Upchem, n)

       if (isValid(aux_xlo,n)) then
          alo = lwb(get_box(aux_xlo%data,n))
          ahi = upb(get_box(aux_xlo%data,n))

          auxp => dataptr(aux_xlo%data,n)

          if (dm.eq.2) then
             call compute_aux_2d(1,lo,hi,ngq,qp,upcp,auxp,alo,ahi,proc_Ma2_xlo)
          else
             call compute_aux_3d(1,lo,hi,ngq,qp,upcp,auxp,alo,ahi,proc_Ma2_xlo)
          end if
       end if

       if (isValid(aux_xhi,n)) then
          alo = lwb(get_box(aux_xhi%data,n))
          ahi = upb(get_box(aux_xhi%data,n))

          auxp => dataptr(aux_xhi%data,n)

          if (dm.eq.2) then
             call compute_aux_2d(1,lo,hi,ngq,qp,upcp,auxp,alo,ahi,proc_Ma2_xhi)
          else
             call compute_aux_3d(1,lo,hi,ngq,qp,upcp,auxp,alo,ahi,proc_Ma2_xhi)
          end if
       end if

       if (isValid(aux_ylo,n)) then
          alo = lwb(get_box(aux_ylo%data,n))
          ahi = upb(get_box(aux_ylo%data,n))

          auxp => dataptr(aux_ylo%data,n)

          if (dm.eq.2) then
             call compute_aux_2d(2,lo,hi,ngq,qp,upcp,auxp,alo,ahi,proc_Ma2_ylo)
          else
             call compute_aux_3d(2,lo,hi,ngq,qp,upcp,auxp,alo,ahi,proc_Ma2_ylo)
          end if
       end if

       if (isValid(aux_yhi,n)) then
          alo = lwb(get_box(aux_yhi%data,n))
          ahi = upb(get_box(aux_yhi%data,n))

          auxp => dataptr(aux_yhi%data,n)

          if (dm.eq.2) then
             call compute_aux_2d(2,lo,hi,ngq,qp,upcp,auxp,alo,ahi,proc_Ma2_yhi)
          else
             call compute_aux_3d(2,lo,hi,ngq,qp,upcp,auxp,alo,ahi,proc_Ma2_yhi)
          end if
       end if

       if (dm.eq.3) then
          if (isValid(aux_zlo,n)) then
             alo = lwb(get_box(aux_zlo%data,n))
             ahi = upb(get_box(aux_zlo%data,n))
             
             auxp => dataptr(aux_zlo%data,n)
             
             call compute_aux_3d(3,lo,hi,ngq,qp,upcp,auxp,alo,ahi,proc_Ma2_zlo)
          end if
          
          if (isValid(aux_zhi,n)) then
             alo = lwb(get_box(aux_zhi%data,n))
             ahi = upb(get_box(aux_zhi%data,n))
             
             auxp => dataptr(aux_zhi%data,n)
             
             call compute_aux_3d(3,lo,hi,ngq,qp,upcp,auxp,alo,ahi,proc_Ma2_zhi)
          end if
       end if

    end do

    if (update_mach) then
       ireg = 0
       if (aux_xlo%nc .gt. 0) then
          ireg = ireg+1
          proc_Ma2s(ireg) = proc_Ma2_xlo
       end if
       
       if (aux_xhi%nc .gt. 0) then
          ireg = ireg+1
          proc_Ma2s(ireg) = proc_Ma2_xhi
       end if
       
       if (aux_ylo%nc .gt. 0) then
          ireg = ireg+1
          proc_Ma2s(ireg) = proc_Ma2_ylo
       end if
       
       if (aux_yhi%nc .gt. 0) then
          ireg = ireg+1
          proc_Ma2s(ireg) = proc_Ma2_yhi
       end if
       
       if (aux_zlo%nc .gt. 0) then
          ireg = ireg+1
          proc_Ma2s(ireg) = proc_Ma2_zlo
       end if
       
       if (aux_zhi%nc .gt. 0) then
          ireg = ireg+1
          proc_Ma2s(ireg) = proc_Ma2_zhi
       end if
       
       if (ireg > 0) then
          call parallel_reduce(Ma2s, proc_Ma2s, MPI_MAX)
          
          ireg = 0
          if (aux_xlo%nc .gt. 0) then
             ireg = ireg+1
             Ma2_xlo = proc_Ma2s(ireg)
          end if
          
          if (aux_xhi%nc .gt. 0) then
             ireg = ireg+1
             Ma2_xhi = proc_Ma2s(ireg)
          end if
          
          if (aux_ylo%nc .gt. 0) then
             ireg = ireg+1
             Ma2_ylo = proc_Ma2s(ireg)
          end if
          
          if (aux_yhi%nc .gt. 0) then
             ireg = ireg+1
             Ma2_yhi = proc_Ma2s(ireg)
          end if
          
          if (aux_zlo%nc .gt. 0) then
             ireg = ireg+1
             Ma2_zlo = proc_Ma2s(ireg)
          end if
          
          if (aux_zhi%nc .gt. 0) then
             ireg = ireg+1
             Ma2_zhi = proc_Ma2s(ireg)
          end if
       end if
    end if

    do n=1,nb
       qp  => dataptr(Q,n)
       cp  => dataptr(con,n)
       rhp => dataptr(rhs,n)
       fdp => dataptr(Fdif, n)

       lo = lwb(get_box(Q,n))
       hi = upb(get_box(Q,n))

       call get_data_lo_hi(n,dlo,dhi)
       call get_boxbc(n,blo,bhi)

       if (isValid(aux_xlo,n)) then
          auxp => dataptr(aux_xlo%data,n)          
          if (blo(1) .eq. OUTLET) then
             if (dm.eq.2) then
                call outlet_xlo_2d(lo,hi,ngq,ngc,dx,qp,cp,fdp,rhp,auxp(:,lo(1),:,1),dlo,dhi)
             else
                call outlet_xlo_3d(lo,hi,ngq,ngc,dx,qp,cp,fdp,rhp,auxp(:,lo(1),:,:),dlo,dhi)
             end if
          else
             qinp => dataptr(qin_xlo%data,n)
             if (dm.eq.2) then
                call update_inlet_xlo_2d(lo,hi,qinp(:,lo(1),:,1),t,dx)
                call inlet_xlo_2d(lo,hi,ngq,ngc,dx,qp,cp,fdp,rhp,auxp(:,lo(1),:,1),qinp(:,lo(1),:,1),dlo,dhi)
             else
                call update_inlet_xlo_3d(lo,hi,qinp(:,lo(1),:,:),t,dx)
                call inlet_xlo_3d(lo,hi,ngq,ngc,dx,qp,cp,fdp,rhp,auxp(:,lo(1),:,:),qinp(:,lo(1),:,:),dlo,dhi)
             end if
          end if
       end if

       if (isValid(aux_xhi,n)) then
          auxp => dataptr(aux_xhi%data,n)
          if (bhi(1) .eq. OUTLET) then
             if (dm.eq.2) then
                call outlet_xhi_2d(lo,hi,ngq,ngc,dx,qp,cp,fdp,rhp,auxp(:,hi(1),:,1),dlo,dhi)
             else
                call outlet_xhi_3d(lo,hi,ngq,ngc,dx,qp,cp,fdp,rhp,auxp(:,hi(1),:,:),dlo,dhi)
             end if
          else
             qinp => dataptr(qin_xhi%data,n)
             call bl_error("inlet_xhi not implemented")
!             call inlet_xhi(lo,hi,ngq,ngc,dx,qp,cp,fdp,rhp,auxp(:,hi(1),:,:),qinp(:,hi(1),:,:),dlo,dhi)
          end if
       end if

       if (isValid(aux_ylo,n)) then
          auxp => dataptr(aux_ylo%data,n)          
          if (blo(2) .eq. OUTLET) then
             if (dm.eq.2) then
                call outlet_ylo_2d(lo,hi,ngq,ngc,dx,qp,cp,fdp,rhp,auxp(:,:,lo(2),1),dlo,dhi)
             else
                call outlet_ylo_3d(lo,hi,ngq,ngc,dx,qp,cp,fdp,rhp,auxp(:,:,lo(2),:),dlo,dhi)
             end if
          else
             qinp => dataptr(qin_ylo%data,n)
             if (dm .eq. 2) then
                call update_inlet_ylo_2d(lo,hi,qinp(:,:,lo(2),1),t,dx)
                call inlet_ylo_2d(lo,hi,ngq,ngc,dx,qp,cp,fdp,rhp,auxp(:,:,lo(2),1),qinp(:,:,lo(2),1),dlo,dhi)
             else
                call update_inlet_ylo_3d(lo,hi,qinp(:,:,lo(2),:),t,dx)
                call inlet_ylo_3d(lo,hi,ngq,ngc,dx,qp,cp,fdp,rhp,auxp(:,:,lo(2),:),qinp(:,:,lo(2),:),dlo,dhi)
             end if
          end if
       end if

       if (isValid(aux_yhi,n)) then
          auxp => dataptr(aux_yhi%data,n)
          if (bhi(2) .eq. OUTLET) then
             if (dm.eq.2) then
                call outlet_yhi_2d(lo,hi,ngq,ngc,dx,qp,cp,fdp,rhp,auxp(:,:,hi(2),1),dlo,dhi)
             else
                call outlet_yhi_3d(lo,hi,ngq,ngc,dx,qp,cp,fdp,rhp,auxp(:,:,hi(2),:),dlo,dhi)
             end if
          else
             qinp => dataptr(qin_yhi%data,n)
             call bl_error("inlet_yhi not implemented")
!            call inlet_yhi(lo,hi,ngq,ngc,dx,qp,cp,fdp,rhp,auxp(:,:,hi(2),:),qinp(:,:,hi(2),:),dlo,dhi)
          end if
       end if

       if (dm.eq.3) then
          
          if (isValid(aux_zlo,n)) then
             auxp => dataptr(aux_zlo%data,n)          
             if (blo(3) .eq. OUTLET) then
                call outlet_zlo(lo,hi,ngq,ngc,dx,qp,cp,fdp,rhp,auxp(:,:,:,lo(3)),dlo,dhi)
             else
                qinp => dataptr(qin_zlo%data,n)
                call bl_error("inlet_zlo not implemented")
                !            call inlet_zlo(lo,hi,ngq,ngc,dx,qp,cp,fdp,rhp,auxp(:,:,:,lo(3)),qinp(:,:,:,lo(3)),dlo,dhi)
             end if
          end if
          
          if (isValid(aux_zhi,n)) then
             auxp => dataptr(aux_zhi%data,n)
             if (bhi(3) .eq. OUTLET) then
                call outlet_zhi(lo,hi,ngq,ngc,dx,qp,cp,fdp,rhp,auxp(:,:,:,hi(3)),dlo,dhi)
             else
                qinp => dataptr(qin_zhi%data,n)
                call bl_error("inlet_zhi not implemented")
                !             call inlet_zhi(lo,hi,ngq,ngc,dx,qp,cp,fdp,rhp,auxp(:,:,:,hi(3)),qinp(:,:,:,hi(3)),dlo,dhi)
             end if
          end if

       end if

    end do

  end subroutine nscbc


  subroutine compute_aux_2d(idim,lo,hi,ng,Q,Upc,A,alo,ahi,mach2)
    integer, intent(in) :: idim,ng
    integer, dimension(2), intent(in) :: lo, hi, alo, ahi
    double precision, intent(in ) :: Q  (  -ng+lo(1): hi(1)+ng,-ng+lo(2): hi(2)+ng,nprim)
    double precision, intent(in ) :: Upc(      lo(1): hi(1)   ,    lo(2): hi(2)   ,ncons)
    double precision, intent(out) :: A  (naux,alo(1):ahi(1)   ,   alo(2):ahi(2)         )
    double precision, intent(inout) :: mach2

    integer :: i, j, iwrk
    double precision :: Tt, rwrk, cv, cp, gamma, Wbar, vel2, cs2
    double precision :: Yt(nspecies)

    !$omp parallel private(i,j,iwrk,Tt,rwrk,cv,cp,gamma,Wbar,vel2,cs2,Yt) &
    !$omp reduction(max:mach2)
    !$omp do collapse(2)
    do j=alo(2),ahi(2)
       do i=alo(1),ahi(1)
          
          Tt = q(i,j,qtemp)
          Yt = q(i,j,qy1:qy1+nspecies-1)

          call ckcvbs(Tt, Yt, iwrk, rwrk, cv)
          call ckmmwy(Yt, iwrk, rwrk, Wbar)
          
          cp = cv + Ru/Wbar
          gamma = cp / cv
          cs2 = gamma*q(i,j,qpres)/q(i,j,qrho)
          
          vel2 = q(i,j,qu+idim-1)**2
          mach2 = max(mach2, vel2/cs2)

          A(igamma,i,j) = gamma
          A(iWbar ,i,j) = Wbar
          A(icp   ,i,j) = cp
          A(icv   ,i,j) = cv
          A(ics   ,i,j) = sqrt(cs2)

          if (nscbc_burn) then
             A(iwdot1:,i,j) = Upc(i,j,iry1:iry1+nspecies-1)
          else
             A(iwdot1:,i,j) = 0.d0
          end if

       end do
    end do
    !$omp end do
    !$omp end parallel

  end subroutine compute_aux_2d

  subroutine compute_aux_3d(idim,lo,hi,ng,Q,Upc,A,alo,ahi,mach2)
    integer, intent(in) :: idim,ng
    integer, dimension(3), intent(in) :: lo, hi, alo, ahi
    double precision, intent(in ) :: Q (  -ng+lo(1): hi(1)+ng,-ng+lo(2): hi(2)+ng,-ng+lo(3): hi(3)+ng,nprim)
    double precision, intent(in ) ::Upc(      lo(1): hi(1)   ,    lo(2): hi(2)   ,    lo(3): hi(3)   ,ncons)
    double precision, intent(out) :: A (naux,alo(1):ahi(1)   ,   alo(2):ahi(2)   ,   alo(3):ahi(3))
    double precision, intent(inout) :: mach2

    integer :: i, j, k, iwrk
    double precision :: Tt, rwrk, cv, cp, gamma, Wbar, vel2, cs2
    double precision :: Yt(nspecies)

    !$omp parallel private(i,j,k,iwrk,Tt,rwrk,cv,cp,gamma,Wbar,vel2,cs2,Yt) &
    !$omp reduction(max:mach2)
    !$omp do collapse(2)
    do k=alo(3),ahi(3)
       do j=alo(2),ahi(2)
          do i=alo(1),ahi(1)

             Tt = q(i,j,k,qtemp)
             Yt = q(i,j,k,qy1:qy1+nspecies-1)

             call ckcvbs(Tt, Yt, iwrk, rwrk, cv)
             call ckmmwy(Yt, iwrk, rwrk, Wbar)

             cp = cv + Ru/Wbar
             gamma = cp / cv
             cs2 = gamma*q(i,j,k,qpres)/q(i,j,k,qrho)

             vel2 = q(i,j,k,qu+idim-1)**2
             mach2 = max(mach2, vel2/cs2)

             A(igamma,i,j,k) = gamma
             A(iWbar ,i,j,k) = Wbar
             A(icp   ,i,j,k) = cp
             A(icv   ,i,j,k) = cv
             A(ics   ,i,j,k) = sqrt(cs2)

             if (nscbc_burn) then
                A(iwdot1:,i,j,k) = Upc(i,j,k,iry1:iry1+nspecies-1)
             else
                A(iwdot1:,i,j,k) = 0.d0
             end if

          end do
       end do
    end do
    !$omp end do
    !$omp end parallel

  end subroutine compute_aux_3d


  subroutine LtoLHS_2d(idim, L, lhs, aux, rho, u, v, T, Y, h, rhoE)
    integer, intent(in) :: idim
    double precision, intent(in) :: L(4+nspecies)
    double precision, intent(in) :: aux(naux)
    double precision, intent(in) :: rho, u, v, T, Y(nspecies), h(nspecies), rhoE
    double precision, intent(out) :: lhs(ncons)

    double precision :: du, dv, drho, dp, dY(nspecies), rhode, cpWT

    if (idim .eq. 1) then ! x-direction
       du = (L(4)-L(1))/(rho*aux(ics))
       dv = L(3)
    else if (idim .eq. 2) then ! y-direction
       dv = (L(4)-L(1))/(rho*aux(ics))
       du = L(3)
    else
       call bl_error('Unknow idim in LtoLHS()')
    end if

    drho = L(2) + (L(4)+L(1))/aux(ics)**2
    dp = L(4) + L(1)
    dY = L(5:)

    cpWT = aux(icp)*aux(iWbar)*T
    rhode = dp/(aux(igamma)-1.d0) - aux(icv)*T*drho + &
         rho*sum((h-cpWT*inv_mwt)*dY)

    lhs(irho) = drho
    lhs(imx) = drho*u + rho*du
    lhs(imy) = drho*v + rho*dv
    lhs(iene) = rho*(u*du+v*dv) + drho/rho*rhoE + rhode
    lhs(iry1:) = rho*dY + drho*Y
    
  end subroutine LtoLHS_2d

  subroutine LtoLHS_3d(idim, L, lhs, aux, rho, u, v, w, T, Y, h, rhoE)
    integer, intent(in) :: idim
    double precision, intent(in) :: L(5+nspecies)
    double precision, intent(in) :: aux(naux)
    double precision, intent(in) :: rho, u, v, w, T, Y(nspecies), h(nspecies), rhoE
    double precision, intent(out) :: lhs(ncons)

    double precision :: du, dv, dw, drho, dp, dY(nspecies), rhode, cpWT

    if (idim .eq. 1) then ! x-direction
       du = (L(5)-L(1))/(rho*aux(ics))
       dv = L(3)
       dw = L(4)
    else if (idim .eq. 2) then ! y-direction
       dv = (L(5)-L(1))/(rho*aux(ics))
       du = L(3)
       dw = L(4)
    else if (idim .eq. 3) then ! z-direction
       dw = (L(5)-L(1))/(rho*aux(ics))
       du = L(3)
       dv = L(4)       
    else
       call bl_error('Unknow idim in LtoLHS()')
    end if

    drho = L(2) + (L(5)+L(1))/aux(ics)**2
    dp = L(5) + L(1)
    dY = L(6:)

    cpWT = aux(icp)*aux(iWbar)*T
    rhode = dp/(aux(igamma)-1.d0) - aux(icv)*T*drho + &
         rho*sum((h-cpWT*inv_mwt)*dY)

    lhs(irho) = drho
    lhs(imx) = drho*u + rho*du
    lhs(imy) = drho*v + rho*dv
    lhs(imz) = drho*w + rho*dw
    lhs(iene) = rho*(u*du+v*dv+w*dw) + drho/rho*rhoE + rhode
    lhs(iry1:) = rho*dY + drho*Y

  end subroutine LtoLHS_3d

include 'hardbc.f90'
include 'nscbc_x.f90'  
include 'nscbc_y.f90'  
include 'nscbc_z.f90'  
include 'inlet_x_2d.f90'
include 'inlet_x_3d.f90'
include 'inlet_y_2d.f90'
include 'inlet_y_3d.f90'

end module nscbc_module
