module transport_properties

  use chemistry_module
  use eglib_module
  use multifab_module
  use variables_module

  implicit none

  private

  public get_transport_properties

contains

  subroutine get_transport_properties(Q, mu, xi, lam, Ddiag, ng, ghostcells_only)
    type(multifab), intent(in   ) :: Q
    type(multifab), intent(inout) :: mu, xi, lam, Ddiag
    integer, intent(in), optional :: ng
    logical, intent(in), optional :: ghostcells_only
 
    integer :: ngwork
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

       wlo = lo - ngwork
       whi = hi + ngwork

       if (dm .ne. 3) then
          call bl_error("Only 3D is supported in get_transport_properties")
       else
          call get_trans_prop_3d(lo,hi,ngq,qp,mup,xip,lamp,dp,wlo,whi,lgco)
       end if

    end do

  end subroutine get_transport_properties

  subroutine get_trans_prop_3d(lo,hi,ng,q,mu,xi,lam,Ddiag,wlo,whi,gco)
    logical, intent(in) :: gco  ! ghost cells only
    integer, intent(in) :: lo(3), hi(3), ng, wlo(3), whi(3)
    double precision,intent(in )::    q(lo(1)-ng:hi(1)+ng,lo(2)-ng:hi(2)+ng,lo(3)-ng:hi(3)+ng,nprim)
    double precision,intent(out)::   mu(lo(1)-ng:hi(1)+ng,lo(2)-ng:hi(2)+ng,lo(3)-ng:hi(3)+ng)
    double precision,intent(out)::   xi(lo(1)-ng:hi(1)+ng,lo(2)-ng:hi(2)+ng,lo(3)-ng:hi(3)+ng)
    double precision,intent(out)::  lam(lo(1)-ng:hi(1)+ng,lo(2)-ng:hi(2)+ng,lo(3)-ng:hi(3)+ng)
    double precision,intent(out)::Ddiag(lo(1)-ng:hi(1)+ng,lo(2)-ng:hi(2)+ng,lo(3)-ng:hi(3)+ng,nspecies)

    integer :: i, j, k, n, iwrk
    integer :: np, ii, jj, kk, iisize, jisize, kisize 
    integer :: iindex(whi(1)-wlo(1)-hi(1)+lo(1))
    integer :: jindex(whi(2)-wlo(2)-hi(2)+lo(2))
    integer :: kindex(whi(3)-wlo(3)-hi(3)+lo(3))
    double precision :: rwrk
    double precision, allocatable :: Tt(:), Xt(:,:), Yt(:,:), Cpt(:,:), Wtm(:), D(:,:)
    double precision, allocatable :: ME(:), MK(:), L1(:), L2(:)

    ! eglib parameters
    integer, parameter :: ITLS=1, IFLAG=5

    if (.not. gco) then

       np = whi(1) - wlo(1) + 1
       call eglib_init(nspecies, np, ITLS, IFLAG)
       
       !$omp parallel private(i,j,k,n,iwrk,rwrk,ii) &
       !$omp private(Tt,Xt,Yt,Cpt,Wtm,D,ME,MK,L1,L2)
       
       allocate(Tt(np))
       allocate(Wtm(np))
       allocate(ME(np))
       allocate(MK(np))
       allocate(L1(np))
       allocate(L2(np))
       
       allocate(Xt(nspecies,np))
       allocate(Yt(nspecies,np))
       allocate(Cpt(nspecies,np))
       allocate(D(nspecies,np))
       
       !$omp do
       do k=wlo(3),whi(3)
          do j=wlo(2),whi(2)
             
             do i=wlo(1), whi(1)
                ii = i-wlo(1)+1
                Tt(  ii) = q(i,j,k,qtemp)
                CALL CKCPMS(Tt(ii), iwrk, rwrk, Cpt(:,ii))
                Yt(:,ii) = q(i,j,k,qy1:qy1+nspecies-1)
                CALL CKMMWY(Yt(:,ii), iwrk, rwrk, Wtm(ii))
                Xt(:,ii) = q(i,j,k,qx1:qx1+nspecies-1)
             end do
          
             CALL EGMPAR(np, Tt, Xt, Yt, Cpt, egwork, egiwork)
          
             CALL EGME3(np, Tt, Yt, egwork, ME) 
             mu(wlo(1):whi(1),j,k) = ME
          
             CALL EGMK3(np, Tt, Yt, egwork, MK) 
             xi(wlo(1):whi(1),j,k) = MK
             
             CALL EGMVR1(np, Tt, Yt, egwork, D)
             do n=1,nspecies
                do i=wlo(1), whi(1)
                   ii = i-wlo(1)+1
                   Ddiag(i,j,k,n) = D(n,ii) * Wtm(ii) * inv_mwt(n)
                end do
             end do
             
             CALL EGML1(np,  1.d0, Tt, Xt, egwork, L1)
             CALL EGML1(np, -1.d0, Tt, Xt, egwork, L2)
             lam(wlo(1):whi(1),j,k) = 0.5d0*(L1+L2)
             
          end do
       end do
       !$omp end do
       
       deallocate(Tt, Xt, Yt, Cpt, Wtm, D, ME, MK, L1, L2)
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
          call eglib_init(nspecies, np, ITLS, IFLAG)
    
          !$omp parallel private(i,j,k,kk,n,iwrk,rwrk,ii) &
          !$omp private(Tt,Xt,Yt,Cpt,Wtm,D,ME,MK,L1,L2)
       
          allocate(Tt(np))
          allocate(Wtm(np))
          allocate(ME(np))
          allocate(MK(np))
          allocate(L1(np))
          allocate(L2(np))
          
          allocate(Xt(nspecies,np))
          allocate(Yt(nspecies,np))
          allocate(Cpt(nspecies,np))
          allocate(D(nspecies,np))
    
          !$omp do collapse(2)
          do kk=1,kisize
             do j=wlo(2),whi(2)

                k = kindex(kk)

                do i=wlo(1), whi(1)
                   ii = i-wlo(1)+1
                   Tt(  ii) = q(i,j,k,qtemp)
                   CALL CKCPMS(Tt(ii), iwrk, rwrk, Cpt(:,ii))
                   Yt(:,ii) = q(i,j,k,qy1:qy1+nspecies-1)
                   CALL CKMMWY(Yt(:,ii), iwrk, rwrk, Wtm(ii))
                   Xt(:,ii) = q(i,j,k,qx1:qx1+nspecies-1)
                end do
                
                CALL EGMPAR(np, Tt, Xt, Yt, Cpt, egwork, egiwork)
                
                CALL EGME3(np, Tt, Yt, egwork, ME) 
                mu(wlo(1):whi(1),j,k) = ME
                
                CALL EGMK3(np, Tt, Yt, egwork, MK) 
                xi(wlo(1):whi(1),j,k) = MK
                
                CALL EGMVR1(np, Tt, Yt, egwork, D)
                do n=1,nspecies
                   do i=wlo(1), whi(1)
                      ii = i-wlo(1)+1
                      Ddiag(i,j,k,n) = D(n,ii) * Wtm(ii) * inv_mwt(n)
                   end do
                end do
                
                CALL EGML1(np,  1.d0, Tt, Xt, egwork, L1)
                CALL EGML1(np, -1.d0, Tt, Xt, egwork, L2)
                lam(wlo(1):whi(1),j,k) = 0.5d0*(L1+L2)
                
             end do
          end do
          !$omp end do
          
          deallocate(Tt, Xt, Yt, Cpt, Wtm, D, ME, MK, L1, L2)
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
          call eglib_init(nspecies, np, ITLS, IFLAG)
    
          !$omp parallel private(i,j,k,jj,n,iwrk,rwrk,ii) &
          !$omp private(Tt,Xt,Yt,Cpt,Wtm,D,ME,MK,L1,L2)
       
          allocate(Tt(np))
          allocate(Wtm(np))
          allocate(ME(np))
          allocate(MK(np))
          allocate(L1(np))
          allocate(L2(np))
          
          allocate(Xt(nspecies,np))
          allocate(Yt(nspecies,np))
          allocate(Cpt(nspecies,np))
          allocate(D(nspecies,np))
    
          !$omp do
          do k=lo(3),hi(3)
             do jj=1,jisize

                j = jindex(jj)

                do i=wlo(1), whi(1)
                   ii = i-wlo(1)+1
                   Tt(  ii) = q(i,j,k,qtemp)
                   CALL CKCPMS(Tt(ii), iwrk, rwrk, Cpt(:,ii))
                   Yt(:,ii) = q(i,j,k,qy1:qy1+nspecies-1)
                   CALL CKMMWY(Yt(:,ii), iwrk, rwrk, Wtm(ii))
                   Xt(:,ii) = q(i,j,k,qx1:qx1+nspecies-1)
                end do
                
                CALL EGMPAR(np, Tt, Xt, Yt, Cpt, egwork, egiwork)
                
                CALL EGME3(np, Tt, Yt, egwork, ME) 
                mu(wlo(1):whi(1),j,k) = ME
                
                CALL EGMK3(np, Tt, Yt, egwork, MK) 
                xi(wlo(1):whi(1),j,k) = MK
                
                CALL EGMVR1(np, Tt, Yt, egwork, D)
                do n=1,nspecies
                   do i=wlo(1), whi(1)
                      ii = i-wlo(1)+1
                      Ddiag(i,j,k,n) = D(n,ii) * Wtm(ii) * inv_mwt(n)
                   end do
                end do
                
                CALL EGML1(np,  1.d0, Tt, Xt, egwork, L1)
                CALL EGML1(np, -1.d0, Tt, Xt, egwork, L2)
                lam(wlo(1):whi(1),j,k) = 0.5d0*(L1+L2)
                
             end do
          end do
          !$omp end do
          
          deallocate(Tt, Xt, Yt, Cpt, Wtm, D, ME, MK, L1, L2)
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
          call eglib_init(nspecies, np, ITLS, IFLAG)
    
          !$omp parallel private(i,j,k,n,iwrk,rwrk,ii) &
          !$omp private(Tt,Xt,Yt,Cpt,Wtm,D,ME,MK,L1,L2)
       
          allocate(Tt(np))
          allocate(Wtm(np))
          allocate(ME(np))
          allocate(MK(np))
          allocate(L1(np))
          allocate(L2(np))
          
          allocate(Xt(nspecies,np))
          allocate(Yt(nspecies,np))
          allocate(Cpt(nspecies,np))
          allocate(D(nspecies,np))
    
          !$omp do
          do k=lo(3),hi(3)
             do j=lo(2),hi(2)

                do ii=1,iisize
                   i = iindex(ii)
                   Tt(  ii) = q(i,j,k,qtemp)
                   CALL CKCPMS(Tt(ii), iwrk, rwrk, Cpt(:,ii))
                   Yt(:,ii) = q(i,j,k,qy1:qy1+nspecies-1)
                   CALL CKMMWY(Yt(:,ii), iwrk, rwrk, Wtm(ii))
                   Xt(:,ii) = q(i,j,k,qx1:qx1+nspecies-1)
                end do
                
                CALL EGMPAR(np, Tt, Xt, Yt, Cpt, egwork, egiwork)
                
                CALL EGME3(np, Tt, Yt, egwork, ME) 
                CALL EGMK3(np, Tt, Yt, egwork, MK) 
                
                CALL EGML1(np,  1.d0, Tt, Xt, egwork, L1)
                CALL EGML1(np, -1.d0, Tt, Xt, egwork, L2)

                do ii=1,iisize
                   i = iindex(ii)
                   mu(i,j,k) = ME(ii)
                   xi(i,j,k) = MK(ii)
                   lam(i,j,k) = 0.5d0*(L1(ii)+L2(ii))
                end do

                CALL EGMVR1(np, Tt, Yt, egwork, D)
                do n=1,nspecies
                   do ii=1,iisize
                      i = iindex(ii)
                      Ddiag(i,j,k,n) = D(n,ii) * Wtm(ii) * inv_mwt(n)
                   end do
                end do
                                
             end do
          end do
          !$omp end do
          
          deallocate(Tt, Xt, Yt, Cpt, Wtm, D, ME, MK, L1, L2)
          !$omp end parallel
       end if

    end if

  end subroutine get_trans_prop_3d

end module transport_properties
