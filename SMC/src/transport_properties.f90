module transport_properties

  use chemistry_module
  use multifab_module
  use variables_module

  use egz_module
  use tranlib_module

  implicit none

  private

  public get_transport_properties

contains

  subroutine get_transport_properties(Q, mu, xi, lam, Ddiag, ng, ghostcells_only)

    use probin_module, only : use_tranlib
    use smc_bc_module, only : get_data_lo_hi

    type(multifab), intent(in   ) :: Q
    type(multifab), intent(inout) :: mu, xi, lam, Ddiag
    integer, intent(in), optional :: ng
    logical, intent(in), optional :: ghostcells_only
 
    integer :: ngwork, idim
    logical :: lgco
    integer :: ngq, n, dm, lo(Q%dim), hi(Q%dim), wlo(Q%dim), whi(Q%dim)
    double precision, pointer, dimension(:,:,:,:) :: qp, mup, xip, lamp, dp

    dm = Q%dim
    ngq = nghost(Q)

    ngwork = ngq
    if (present(ng)) then
       ngwork = min(ngwork, ng)
    end if

    lgco = .false.
    if (present(ghostcells_only)) then
       lgco = ghostcells_only
    end if

    do n=1,nfabs(Q)
       
       qp => dataptr(Q,n)
       mup => dataptr(mu,n)
       xip => dataptr(xi,n)
       lamp => dataptr(lam,n)
       dp => dataptr(Ddiag,n)

       lo = lwb(get_box(Q,n))
       hi = upb(get_box(Q,n))

       call get_data_lo_hi(n,wlo,whi)

       do idim=1,dm
          wlo(idim) = max(wlo(idim), lo(idim)-ngwork)
          whi(idim) = min(whi(idim), hi(idim)+ngwork)
       end do

       if (dm .eq. 1) then
          if (use_tranlib) then
             call tranlib_1d(lo,hi,ngq,qp,mup,xip,lamp,dp,wlo,whi,lgco)
          else
             call get_trans_prop_1d(lo,hi,ngq,qp,mup,xip,lamp,dp,wlo,whi,lgco)
          end if
       else if (dm .eq. 2) then
          if (use_tranlib) then
             call tranlib_2d(lo,hi,ngq,qp,mup,xip,lamp,dp,wlo,whi,lgco)
          else
             call get_trans_prop_2d(lo,hi,ngq,qp,mup,xip,lamp,dp,wlo,whi,lgco)
          end if
       else
          if (use_tranlib) then
             call tranlib_3d(lo,hi,ngq,qp,mup,xip,lamp,dp,wlo,whi,lgco)
          else
             call get_trans_prop_3d(lo,hi,ngq,qp,mup,xip,lamp,dp,wlo,whi,lgco)
          end if
       end if

    end do

  end subroutine get_transport_properties


  subroutine get_trans_prop_1d(lo,hi,ng,q,mu,xi,lam,Ddiag,wlo,whi,gco)
    use probin_module, only : use_bulk_viscosity
    logical, intent(in) :: gco  ! ghost cells only
    integer, intent(in) :: lo(1), hi(1), ng, wlo(1), whi(1)
    double precision,intent(in )::    q(lo(1)-ng:hi(1)+ng,nprim)
    double precision,intent(out)::   mu(lo(1)-ng:hi(1)+ng)
    double precision,intent(out)::   xi(lo(1)-ng:hi(1)+ng)
    double precision,intent(out)::  lam(lo(1)-ng:hi(1)+ng)
    double precision,intent(out)::Ddiag(lo(1)-ng:hi(1)+ng,nspecies)

    integer, parameter :: np = 4

    integer :: i, n, nptot, qxn, iwrk, ib, nb, istart, iend
    double precision :: rwrk, Cp(nspecies)
    double precision :: L1Z(np), L2Z(np), DZ(np,nspecies), XZ(np,nspecies), &
         CPZ(np,nspecies)

    if (gco) call bl_error("get_trans_prop_1d: ghost-cells-only not supported")

    nptot = whi(1) - wlo(1) + 1
    nb = nptot / np
    if (nb*np .ne. nptot) call bl_error("get_trans_prop_1d: grid size not supported")

    !$omp parallel private(i,n,qxn,iwrk,ib,istart,iend,rwrk) &
    !$omp private(Cp,L1Z,L2Z,DZ,XZ,CPZ)

    call egzini(np)
              
    !$omp do
    do ib=0,nb-1
       
       istart = wlo(1) + ib*np
       iend = istart + np - 1

       do n=1,nspecies
          qxn = qx1+n-1
          do i=istart,iend
             XZ(i,n) = q(i,qxn)
          end do
       end do
          
       if (use_bulk_viscosity) then
          do i=istart,iend
             call ckcpms(q(i,qtemp), iwrk, rwrk, Cp)
             CPZ(i,:) = Cp
          end do
       else
          CPZ = 0.d0
       end if
       
       call egzpar(q(istart:iend,qtemp), XZ, CPZ)
       
       call egze3(q(istart:iend,qtemp), mu(istart:iend))
       
       if (use_bulk_viscosity) then
          call egzk3(q(istart:iend,qtemp), xi(istart:iend))
       else
          xi(istart:iend) = 0.d0
       end if
       
       call egzl1( 1.d0, XZ, L1Z)
       call egzl1(-1.d0, XZ, L2Z)
       lam(istart:iend) = 0.5d0*(L1Z+L2Z)
       
       call EGZVR1(q(istart:iend,qtemp), DZ)
       do n=1,nspecies
          do i=istart,iend
             Ddiag(i,n) = DZ(i,n)
          end do
       end do
       
    end do
    !$omp end do
    !$omp end parallel

  end subroutine get_trans_prop_1d


  subroutine get_trans_prop_2d(lo,hi,ng,q,mu,xi,lam,Ddiag,wlo,whi,gco)
    use probin_module, only : use_bulk_viscosity
    logical, intent(in) :: gco  ! ghost cells only
    integer, intent(in) :: lo(2), hi(2), ng, wlo(2), whi(2)
    double precision,intent(in )::    q(lo(1)-ng:hi(1)+ng,lo(2)-ng:hi(2)+ng,nprim)
    double precision,intent(out)::   mu(lo(1)-ng:hi(1)+ng,lo(2)-ng:hi(2)+ng)
    double precision,intent(out)::   xi(lo(1)-ng:hi(1)+ng,lo(2)-ng:hi(2)+ng)
    double precision,intent(out)::  lam(lo(1)-ng:hi(1)+ng,lo(2)-ng:hi(2)+ng)
    double precision,intent(out)::Ddiag(lo(1)-ng:hi(1)+ng,lo(2)-ng:hi(2)+ng,nspecies)

    integer :: i, j, n, np, qxn, iwrk, ii, jj, iisize, jisize
    integer :: iindex(whi(1)-wlo(1)-hi(1)+lo(1))
    integer :: jindex(whi(2)-wlo(2)-hi(2)+lo(2))
    double precision :: rwrk, Cp(nspecies)
    double precision, allocatable :: L1Z(:), L2Z(:), DZ(:,:), XZ(:,:), CPZ(:,:), &
         TZ(:), EZ(:), KZ(:)

    if (.not. gco) then

       np = whi(1) - wlo(1) + 1

       !$omp parallel private(i,j,n,qxn,iwrk) &
       !$omp private(rwrk,Cp,L1Z,L2Z,DZ,XZ,CPZ)

       call egzini(np)
              
       allocate(L1Z(wlo(1):whi(1)))
       allocate(L2Z(wlo(1):whi(1)))

       allocate(DZ(wlo(1):whi(1),nspecies))
       allocate(XZ(wlo(1):whi(1),nspecies))
       allocate(CPZ(wlo(1):whi(1),nspecies))

       !$omp do
       do j=wlo(2),whi(2)

          do n=1,nspecies
             qxn = qx1+n-1
             do i=wlo(1),whi(1)
                XZ(i,n) = q(i,j,qxn)
             end do
          end do
          
          if (use_bulk_viscosity) then
             do i=wlo(1),whi(1)
                call ckcpms(q(i,j,qtemp), iwrk, rwrk, Cp)
                CPZ(i,:) = Cp
             end do
          else
             CPZ = 0.d0
          end if
          
          call egzpar(q(wlo(1):whi(1),j,qtemp), XZ, CPZ)

          call egze3(q(wlo(1):whi(1),j,qtemp), mu(wlo(1):whi(1),j))

          if (use_bulk_viscosity) then
             call egzk3(q(wlo(1):whi(1),j,qtemp), xi(wlo(1):whi(1),j))
          else
             xi(wlo(1):whi(1),j) = 0.d0
          end if

          call egzl1( 1.d0, XZ, L1Z)
          call egzl1(-1.d0, XZ, L2Z)
          lam(wlo(1):whi(1),j) = 0.5d0*(L1Z+L2Z)
          
          call EGZVR1(q(wlo(1):whi(1),j,qtemp), DZ)
          do n=1,nspecies
             do i=wlo(1),whi(1)
                Ddiag(i,j,n) = DZ(i,n)
             end do
          end do

       end do
       !$omp end do
       
       deallocate(L1Z, L2Z, DZ, XZ, CPZ)
       !$omp end parallel

    else ! ghost cells only 

       jisize = size(jindex)

       if (jisize > 0) then
          ! do j = wlo(2),lo(2)-1 & hi(2)+2,whi(2)
          ! do i = wlo(1), wlo(2)

          jj = 1
          do j=wlo(2),lo(2)-1
             jindex(jj) = j
             jj = jj+1
          end do
          do j=hi(2)+1,whi(2)
             jindex(jj) = j
             jj = jj+1
          end do

          np = whi(1) - wlo(1) + 1
          !$omp parallel private(i,j,jj,n,qxn,iwrk) &
          !$omp private(rwrk,Cp,L1Z,L2Z,DZ,XZ,CPZ)

          call egzini(np)

          allocate(L1Z(wlo(1):whi(1)))
          allocate(L2Z(wlo(1):whi(1)))

          allocate(DZ(wlo(1):whi(1),nspecies))
          allocate(XZ(wlo(1):whi(1),nspecies))
          allocate(CPZ(wlo(1):whi(1),nspecies))
    
          !$omp do
          do jj=1,jisize
             
             j = jindex(jj)
             
             do n=1,nspecies
                qxn = qx1+n-1
                do i=wlo(1),whi(1)
                   XZ(i,n) = q(i,j,qxn)
                end do
             end do
             
             if (use_bulk_viscosity) then
                do i=wlo(1),whi(1)
                   call ckcpms(q(i,j,qtemp), iwrk, rwrk, Cp)
                   CPZ(i,:) = Cp
                end do
             else
                CPZ = 0.d0
             end if
                
             call egzpar(q(wlo(1):whi(1),j,qtemp), XZ, CPZ)

             call egze3(q(wlo(1):whi(1),j,qtemp), mu(wlo(1):whi(1),j))

             if (use_bulk_viscosity) then
                CALL egzk3(q(wlo(1):whi(1),j,qtemp), xi(wlo(1):whi(1),j))
             else
                xi(wlo(1):whi(1),j) = 0.d0
             end if
             
             call egzl1( 1.d0, XZ, L1Z)
             call egzl1(-1.d0, XZ, L2Z)
             lam(wlo(1):whi(1),j) = 0.5d0*(L1Z+L2Z)

             call EGZVR1(q(wlo(1):whi(1),j,qtemp), DZ)
             do n=1,nspecies
                do i=wlo(1),whi(1)
                   Ddiag(i,j,n) = DZ(i,n)
                end do
             end do
             
          end do
          !$omp end do
          
          deallocate(L1Z, L2Z, DZ, XZ, CPZ)
          !$omp end parallel
       end if
       
       iisize = size(iindex)

       if (iisize > 0) then
          ! do j = lo(2), hi(2)
          ! do i = wlo(1),lo(1)-1 & hi(1)+1,whi(1)

          ii = 1
          do i=wlo(1),lo(1)-1
             iindex(ii) = i
             ii = ii+1
          end do
          do i=hi(1)+1,whi(1)
             iindex(ii) = i
             ii = ii+1
          end do
          
          np = iisize

          !$omp parallel private(i,j,ii,n,qxn,iwrk) &
          !$omp private(rwrk,Cp,L1Z,L2Z,DZ,XZ,CPZ,TZ,EZ,KZ)

          call egzini(np)
    
          allocate(TZ(np))
          allocate(EZ(np))
          allocate(KZ(np))
          allocate(L1Z(np))
          allocate(L2Z(np))
          allocate(DZ(np,nspecies))
          allocate(XZ(np,nspecies))
          allocate(CPZ(np,nspecies))
        
          !$omp do
          do j=lo(2),hi(2)
             
             do n=1,nspecies
                qxn = qx1+n-1
                do ii=1,np
                   i = iindex(ii)
                   XZ(ii,n) = q(i,j,qxn)
                end do
             end do

             if (use_bulk_viscosity) then
                do ii=1,np
                   i = iindex(ii)
                   TZ(ii) = q(i,j,qtemp)
                   call ckcpms(TZ(ii), iwrk, rwrk, Cp)
                   CPZ(ii,:) = Cp
                end do
             else
                CPZ = 0.d0
             end if
             
             call egzpar(TZ, XZ, CPZ)
             
             call egze3(TZ, EZ)
             
             if (use_bulk_viscosity) then
                CALL egzk3(TZ, KZ)
             else
                KZ = 0.d0
             end if
             
             call egzl1( 1.d0, XZ, L1Z)
             call egzl1(-1.d0, XZ, L2Z)
             
             do ii=1,np
                i = iindex(ii)
                mu(i,j) = EZ(ii)
                xi(i,j) = KZ(ii)
                lam(i,j) = 0.5d0*(L1Z(ii)+L2Z(ii))
             end do
             
             call EGZVR1(TZ, DZ)
             do n=1,nspecies
                do ii=1,np
                   i = iindex(ii)
                   Ddiag(i,j,n) = DZ(ii,n)
                end do
             end do
             
          end do
          !$omp end do

          deallocate(TZ, EZ, KZ, L1Z, L2Z, DZ, XZ, CPZ)
          !$omp end parallel
       end if

    end if

  end subroutine get_trans_prop_2d


  subroutine get_trans_prop_3d(lo,hi,ng,q,mu,xi,lam,Ddiag,wlo,whi,gco)
    use probin_module, only : use_bulk_viscosity
    logical, intent(in) :: gco  ! ghost cells only
    integer, intent(in) :: lo(3), hi(3), ng, wlo(3), whi(3)
    double precision,intent(in )::    q(lo(1)-ng:hi(1)+ng,lo(2)-ng:hi(2)+ng,lo(3)-ng:hi(3)+ng,nprim)
    double precision,intent(out)::   mu(lo(1)-ng:hi(1)+ng,lo(2)-ng:hi(2)+ng,lo(3)-ng:hi(3)+ng)
    double precision,intent(out)::   xi(lo(1)-ng:hi(1)+ng,lo(2)-ng:hi(2)+ng,lo(3)-ng:hi(3)+ng)
    double precision,intent(out)::  lam(lo(1)-ng:hi(1)+ng,lo(2)-ng:hi(2)+ng,lo(3)-ng:hi(3)+ng)
    double precision,intent(out)::Ddiag(lo(1)-ng:hi(1)+ng,lo(2)-ng:hi(2)+ng,lo(3)-ng:hi(3)+ng,nspecies)

    integer :: i, j, k, n, np, qxn, iwrk, ii, jj, kk, iisize, jisize, kisize
    integer :: iindex(whi(1)-wlo(1)-hi(1)+lo(1))
    integer :: jindex(whi(2)-wlo(2)-hi(2)+lo(2))
    integer :: kindex(whi(3)-wlo(3)-hi(3)+lo(3))
    double precision :: rwrk, Cp(nspecies)
    double precision, allocatable :: L1Z(:), L2Z(:), DZ(:,:), XZ(:,:), CPZ(:,:), &
         TZ(:), EZ(:), KZ(:)

    if (.not. gco) then

       np = whi(1) - wlo(1) + 1

       !$omp parallel private(i,j,k,n,qxn,iwrk) &
       !$omp private(rwrk,Cp,L1Z,L2Z,DZ,XZ,CPZ)

       call egzini(np)
              
       allocate(L1Z(wlo(1):whi(1)))
       allocate(L2Z(wlo(1):whi(1)))

       allocate(DZ(wlo(1):whi(1),nspecies))
       allocate(XZ(wlo(1):whi(1),nspecies))
       allocate(CPZ(wlo(1):whi(1),nspecies))

       !$omp do collapse(2)
       do k=wlo(3),whi(3)
          do j=wlo(2),whi(2)

             do n=1,nspecies
                qxn = qx1+n-1
                do i=wlo(1),whi(1)
                   XZ(i,n) = q(i,j,k,qxn)
                end do
             end do

             if (use_bulk_viscosity) then
                do i=wlo(1),whi(1)
                   call ckcpms(q(i,j,k,qtemp), iwrk, rwrk, Cp)
                   CPZ(i,:) = Cp
                end do
             else
                CPZ = 0.d0
             end if

             call egzpar(q(wlo(1):whi(1),j,k,qtemp), XZ, CPZ)

             call egze3(q(wlo(1):whi(1),j,k,qtemp), mu(wlo(1):whi(1),j,k))

             if (use_bulk_viscosity) then
                CALL egzk3(q(wlo(1):whi(1),j,k,qtemp), xi(wlo(1):whi(1),j,k))
             else
                xi(wlo(1):whi(1),j,k) = 0.d0
             end if

             call egzl1( 1.d0, XZ, L1Z)
             call egzl1(-1.d0, XZ, L2Z)
             lam(wlo(1):whi(1),j,k) = 0.5d0*(L1Z+L2Z)

             call EGZVR1(q(wlo(1):whi(1),j,k,qtemp), DZ)
             do n=1,nspecies
                do i=wlo(1),whi(1)
                   Ddiag(i,j,k,n) = DZ(i,n)
                end do
             end do

          end do
       end do
       !$omp end do
       
       deallocate(L1Z, L2Z, DZ, XZ, CPZ)
       !$omp end parallel

    else ! ghost cells only 

       kisize = size(kindex)

       if (kisize > 0) then
          ! do k = wlo(3),lo(3)-1 & hi(3)+1,whi(3)
          ! do j = wlo(2), whi(2)
          ! do i = wlo(1), wlo(2)

          kk = 1
          do k=wlo(3),lo(3)-1
             kindex(kk) = k
             kk = kk+1
          end do
          do k=hi(3)+1,whi(3)
             kindex(kk) = k
             kk = kk+1
          end do

          np = whi(1) - wlo(1) + 1

          !$omp parallel private(i,j,k,kk,n,qxn,iwrk) &
          !$omp private(rwrk,Cp,L1Z,L2Z,DZ,XZ,CPZ)

          call egzini(np)
    
          allocate(L1Z(wlo(1):whi(1)))
          allocate(L2Z(wlo(1):whi(1)))

          allocate(DZ(wlo(1):whi(1),nspecies))
          allocate(XZ(wlo(1):whi(1),nspecies))
          allocate(CPZ(wlo(1):whi(1),nspecies))
       
          !$omp do collapse(2)
          do kk=1,kisize
             do j=wlo(2),whi(2)

                k = kindex(kk)

                do n=1,nspecies
                   qxn = qx1+n-1
                   do i=wlo(1),whi(1)
                      XZ(i,n) = q(i,j,k,qxn)
                   end do
                end do

                if (use_bulk_viscosity) then
                   do i=wlo(1),whi(1)
                      call ckcpms(q(i,j,k,qtemp), iwrk, rwrk, Cp)
                      CPZ(i,:) = Cp
                   end do
                else
                   CPZ = 0.d0
                end if
                
                call egzpar(q(wlo(1):whi(1),j,k,qtemp), XZ, CPZ)

                call egze3(q(wlo(1):whi(1),j,k,qtemp), mu(wlo(1):whi(1),j,k))

                if (use_bulk_viscosity) then
                   CALL egzk3(q(wlo(1):whi(1),j,k,qtemp), xi(wlo(1):whi(1),j,k))
                else
                   xi(wlo(1):whi(1),j,k) = 0.d0
                end if

                call egzl1( 1.d0, XZ, L1Z)
                call egzl1(-1.d0, XZ, L2Z)
                lam(wlo(1):whi(1),j,k) = 0.5d0*(L1Z+L2Z)

                call EGZVR1(q(wlo(1):whi(1),j,k,qtemp), DZ)
                do n=1,nspecies
                   do i=wlo(1),whi(1)
                      Ddiag(i,j,k,n) = DZ(i,n)
                   end do
                end do

             end do
          end do
          !$omp end do

          deallocate(L1Z, L2Z, DZ, XZ, CPZ)
          !$omp end parallel
       end if

       jisize = size(jindex)

       if (jisize > 0) then
          ! do k =  lo(3),  hi(3)
          ! do j = wlo(2),lo(2)-1 & hi(2)+2,whi(2)
          ! do i = wlo(1), wlo(2)

          jj = 1
          do j=wlo(2),lo(2)-1
             jindex(jj) = j
             jj = jj+1
          end do
          do j=hi(2)+1,whi(2)
             jindex(jj) = j
             jj = jj+1
          end do

          np = whi(1) - wlo(1) + 1

          !$omp parallel private(i,j,k,jj,n,qxn,iwrk) &
          !$omp private(rwrk,Cp,L1Z,L2Z,DZ,XZ,CPZ)

          call egzini(np)

          allocate(L1Z(wlo(1):whi(1)))
          allocate(L2Z(wlo(1):whi(1)))

          allocate(DZ(wlo(1):whi(1),nspecies))
          allocate(XZ(wlo(1):whi(1),nspecies))
          allocate(CPZ(wlo(1):whi(1),nspecies))
    
          !$omp do collapse(2)
          do k=lo(3),hi(3)
             do jj=1,jisize

                j = jindex(jj)

                do n=1,nspecies
                   qxn = qx1+n-1
                   do i=wlo(1),whi(1)
                      XZ(i,n) = q(i,j,k,qxn)
                   end do
                end do
                
                if (use_bulk_viscosity) then
                   do i=wlo(1),whi(1)
                      call ckcpms(q(i,j,k,qtemp), iwrk, rwrk, Cp)
                      CPZ(i,:) = Cp
                   end do
                else
                   CPZ = 0.d0
                end if
                
                call egzpar(q(wlo(1):whi(1),j,k,qtemp), XZ, CPZ)

                call egze3(q(wlo(1):whi(1),j,k,qtemp), mu(wlo(1):whi(1),j,k))

                if (use_bulk_viscosity) then
                   CALL egzk3(q(wlo(1):whi(1),j,k,qtemp), xi(wlo(1):whi(1),j,k))
                else
                   xi(wlo(1):whi(1),j,k) = 0.d0
                end if

                call egzl1( 1.d0, XZ, L1Z)
                call egzl1(-1.d0, XZ, L2Z)
                lam(wlo(1):whi(1),j,k) = 0.5d0*(L1Z+L2Z)

                call EGZVR1(q(wlo(1):whi(1),j,k,qtemp), DZ)
                do n=1,nspecies
                   do i=wlo(1),whi(1)
                      Ddiag(i,j,k,n) = DZ(i,n)
                   end do
                end do
                
             end do
          end do
          !$omp end do

          deallocate(L1Z, L2Z, DZ, XZ, CPZ)
          !$omp end parallel
       end if
       
       iisize = size(iindex)

       if (iisize > 0) then
          ! do k = lo(3), hi(3)
          ! do j = lo(2), hi(2)
          ! do i = wlo(1),lo(1)-1 & hi(1)+1,whi(1)

          ii = 1
          do i=wlo(1),lo(1)-1
             iindex(ii) = i
             ii = ii+1
          end do
          do i=hi(1)+1,whi(1)
             iindex(ii) = i
             ii = ii+1
          end do
          
          np = iisize

          !$omp parallel private(i,j,k,ii,n,qxn,iwrk) &
          !$omp private(rwrk,Cp,L1Z,L2Z,DZ,XZ,CPZ,TZ,EZ,KZ)

          call egzini(np)
    
          allocate(TZ(np))
          allocate(EZ(np))
          allocate(KZ(np))
          allocate(L1Z(np))
          allocate(L2Z(np))
          allocate(DZ(np,nspecies))
          allocate(XZ(np,nspecies))
          allocate(CPZ(np,nspecies))
        
          !$omp do collapse(2)
          do k=lo(3),hi(3)
             do j=lo(2),hi(2)

                do n=1,nspecies
                   qxn = qx1+n-1
                   do ii=1,np
                      i = iindex(ii)
                      XZ(ii,n) = q(i,j,k,qxn)
                   end do
                end do

                if (use_bulk_viscosity) then
                   do ii=1,np
                      i = iindex(ii)
                      TZ(ii) = q(i,j,k,qtemp)
                      call ckcpms(TZ(ii), iwrk, rwrk, Cp)
                      CPZ(ii,:) = Cp
                   end do
                else
                   CPZ = 0.d0
                end if

                call egzpar(TZ, XZ, CPZ)

                call egze3(TZ, EZ)
                               
                if (use_bulk_viscosity) then
                   CALL egzk3(TZ, KZ)
                else
                   KZ = 0.d0
                end if

                call egzl1( 1.d0, XZ, L1Z)
                call egzl1(-1.d0, XZ, L2Z)

                do ii=1,np
                   i = iindex(ii)
                   mu(i,j,k) = EZ(ii)
                   xi(i,j,k) = KZ(ii)
                   lam(i,j,k) = 0.5d0*(L1Z(ii)+L2Z(ii))
                end do

                call EGZVR1(TZ, DZ)
                do n=1,nspecies
                   do ii=1,np
                      i = iindex(ii)
                      Ddiag(i,j,k,n) = DZ(ii,n)
                   end do
                end do
 
             end do
          end do
          !$omp end do

          deallocate(TZ, EZ, KZ, L1Z, L2Z, DZ, XZ, CPZ)
          !$omp end parallel
       end if

    end if

  end subroutine get_trans_prop_3d


  subroutine tranlib_1d(lo,hi,ng,q,mu,xi,lam,Ddiag,wlo,whi,gco)
    logical, intent(in) :: gco  ! ghost cells only
    integer, intent(in) :: lo(1), hi(1), ng, wlo(1), whi(1)
    double precision,intent(in )::    q(lo(1)-ng:hi(1)+ng,nprim)
    double precision,intent(out)::   mu(lo(1)-ng:hi(1)+ng)
    double precision,intent(out)::   xi(lo(1)-ng:hi(1)+ng)
    double precision,intent(out)::  lam(lo(1)-ng:hi(1)+ng)
    double precision,intent(out)::Ddiag(lo(1)-ng:hi(1)+ng,nspecies)

    integer :: i, n, iwrk
    double precision :: Xt(nspecies), Dt(nspecies), Wbar, rwrk

    !$omp parallel private(i,n,Xt,Dt,Wbar,iwrk,rwrk)
    !$omp do
    do i=wlo(1),whi(1)

       if (gco) then
          if ( i.ge.lo(1).and.i.le.hi(1) ) then ! not a ghost cell
             cycle 
          end if
       end if
       
       do n=1,nspecies
          Xt(n) = q(i,qx1+n-1)
       end do
       
       call mcavis(q(i,qtemp),Xt,mcwork,mu(i))

       xi(i) = 0.d0

       call mcacon(q(i,qtemp),Xt,mcwork,lam(i))
       
       call mcadif(q(i,qpres),q(i,qtemp),Xt,mcwork,Dt)
       
       call ckmmwx(Xt, iwrk, rwrk, Wbar)
       rwrk = q(i,qrho) / Wbar
       do n=1,nspecies
          Ddiag(i,n) = rwrk * Dt(n) * molecular_weight(n)
       end do

    end do
    !$omp end do
    !$omp end parallel

  end subroutine tranlib_1d


  subroutine tranlib_2d(lo,hi,ng,q,mu,xi,lam,Ddiag,wlo,whi,gco)
    logical, intent(in) :: gco  ! ghost cells only
    integer, intent(in) :: lo(2), hi(2), ng, wlo(2), whi(2)
    double precision,intent(in )::    q(lo(1)-ng:hi(1)+ng,lo(2)-ng:hi(2)+ng,nprim)
    double precision,intent(out)::   mu(lo(1)-ng:hi(1)+ng,lo(2)-ng:hi(2)+ng)
    double precision,intent(out)::   xi(lo(1)-ng:hi(1)+ng,lo(2)-ng:hi(2)+ng)
    double precision,intent(out)::  lam(lo(1)-ng:hi(1)+ng,lo(2)-ng:hi(2)+ng)
    double precision,intent(out)::Ddiag(lo(1)-ng:hi(1)+ng,lo(2)-ng:hi(2)+ng,nspecies)

    integer :: i, j, n, iwrk
    double precision :: Xt(nspecies), Dt(nspecies), Wbar, rwrk

    !$omp parallel private(i,j,n,Xt,Dt,Wbar,iwrk,rwrk)
    !$omp do collapse(2)
    do    j=wlo(2),whi(2)
       do i=wlo(1),whi(1)

          if (gco) then
             if ( i.ge.lo(1).and.i.le.hi(1) .and. &
                  j.ge.lo(2).and.j.le.hi(2) ) then ! not a ghost cell
                cycle 
             end if
          end if

          do n=1,nspecies
             Xt(n) = q(i,j,qx1+n-1)
          end do

          call mcavis(q(i,j,qtemp),Xt,mcwork,mu(i,j))

          xi(i,j) = 0.d0

         call mcacon(q(i,j,qtemp),Xt,mcwork,lam(i,j))
          
         call mcadif(q(i,j,qpres),q(i,j,qtemp),Xt,mcwork,Dt)

         call ckmmwx(Xt, iwrk, rwrk, Wbar)
         rwrk = q(i,j,qrho) / Wbar
         do n=1,nspecies
            Ddiag(i,j,n) = rwrk * Dt(n) * molecular_weight(n)
         end do

       end do
    end do
    !$omp end do
    !$omp end parallel

  end subroutine tranlib_2d


  subroutine tranlib_3d(lo,hi,ng,q,mu,xi,lam,Ddiag,wlo,whi,gco)
    logical, intent(in) :: gco  ! ghost cells only
    integer, intent(in) :: lo(3), hi(3), ng, wlo(3), whi(3)
    double precision,intent(in )::    q(lo(1)-ng:hi(1)+ng,lo(2)-ng:hi(2)+ng,lo(3)-ng:hi(3)+ng,nprim)
    double precision,intent(out)::   mu(lo(1)-ng:hi(1)+ng,lo(2)-ng:hi(2)+ng,lo(3)-ng:hi(3)+ng)
    double precision,intent(out)::   xi(lo(1)-ng:hi(1)+ng,lo(2)-ng:hi(2)+ng,lo(3)-ng:hi(3)+ng)
    double precision,intent(out)::  lam(lo(1)-ng:hi(1)+ng,lo(2)-ng:hi(2)+ng,lo(3)-ng:hi(3)+ng)
    double precision,intent(out)::Ddiag(lo(1)-ng:hi(1)+ng,lo(2)-ng:hi(2)+ng,lo(3)-ng:hi(3)+ng,nspecies)

    integer :: i, j, k, n, iwrk
    double precision :: Xt(nspecies), Dt(nspecies), Wbar, rwrk

    !$omp parallel private(i,j,k,n,Xt,Dt,Wbar,iwrk,rwrk)
    !$omp do collapse(2)
    do    k=wlo(3),whi(3)
       do j=wlo(2),whi(2)
       do i=wlo(1),whi(1)

          if (gco) then
             if ( i.ge.lo(1).and.i.le.hi(1) .and. &
                  j.ge.lo(2).and.j.le.hi(2) .and. &
                  k.ge.lo(3).and.k.le.hi(3) ) then ! not a ghost cell
                cycle 
             end if
          end if

          do n=1,nspecies
             Xt(n) = q(i,j,k,qx1+n-1)
          end do
          
          call mcavis(q(i,j,k,qtemp),Xt,mcwork,mu(i,j,k))

          xi(i,j,k) = 0.d0

          call mcacon(q(i,j,k,qtemp),Xt,mcwork,lam(i,j,k))
          
          call mcadif(q(i,j,k,qpres),q(i,j,k,qtemp),Xt,mcwork,Dt)

          call ckmmwx(Xt, iwrk, rwrk, Wbar)
          rwrk = q(i,j,k,qrho) / Wbar
          do n=1,nspecies
             Ddiag(i,j,k,n) = rwrk * Dt(n) * molecular_weight(n)
          end do

       end do
       end do
    end do
    !$omp end do
    !$omp end parallel

  end subroutine tranlib_3d

end module transport_properties
