module transport_properties

  use meth_params_module
  use egz_module

  implicit none

  private

  public :: get_transport_properties

contains

  subroutine get_transport_properties(lo, hi, Q, qlo, qhi, QVAR, mu, xi, lam, Ddiag, clo, chi)
    integer, intent(in) :: lo(3), hi(3), qlo(3), qhi(3), clo(3), chi(3), QVAR
    double precision, intent(in) ::     Q(qlo(1):qhi(1),qlo(2):qhi(2),qlo(3):qhi(3),QVAR)
    double precision             ::    mu(clo(1):chi(1),clo(2):chi(2),clo(3):chi(3))
    double precision             ::    xi(clo(1):chi(1),clo(2):chi(2),clo(3):chi(3))
    double precision             ::   lam(clo(1):chi(1),clo(2):chi(2),clo(3):chi(3))
    double precision             :: Ddiag(clo(1):chi(1),clo(2):chi(2),clo(3):chi(3),NSPEC)

    integer :: iwrk, i, j, k, n, np
    double precision :: rwrk, Cpt(nspec)
    double precision, allocatable :: L1Z(:), L2Z(:), DZ(:,:), XZ(:,:), CPZ(:,:)

    np = hi(1)-lo(1)+1

    allocate(L1Z(lo(1):hi(1)))
    allocate(L2Z(lo(1):hi(1)))
    
    allocate(DZ (lo(1):hi(1),nspec))
    allocate(XZ (lo(1):hi(1),nspec))
    allocate(CPZ(lo(1):hi(1),nspec))

    call egzini(np)

    do    k = lo(3),hi(3)
       do j = lo(2),hi(2)

          do n=1,nspec
             do i=lo(1),hi(1)
                XZ(i,n) = Q(i,j,k,QFX+n-1)
             end do
          end do
          
          if (iflag > 3) then
             do i=lo(1),hi(1)
                call ckcpms(Q(i,j,k,QTEMP), iwrk, rwrk, Cpt)
                CPZ(i,:) = Cpt
             end do
          else
             CPZ = 0.d0
          end if

          call egzpar(Q(lo(1):hi(1),j,k,QTEMP), XZ, CPZ)
          
          call egze3(Q(lo(1):hi(1),j,k,QTEMP), mu(lo(1):hi(1),j,k))

          call egzk3(Q(lo(1):hi(1),j,k,QTEMP), xi(lo(1):hi(1),j,k))

          call egzl1( 1.d0, XZ, L1Z)
          call egzl1(-1.d0, XZ, L2Z)
          lam(lo(1):hi(1),j,k) = 0.5d0*(L1Z+L2Z)

          call EGZVR1(Q(lo(1):hi(1),j,k,QTEMP), DZ)
          do n=1,nspec
             do i=lo(1),hi(1)
                Ddiag(i,j,k,n) = DZ(i,n)
             end do
          end do

       end do
    end do

    deallocate(L1Z, L2Z, DZ, XZ, CPZ)

  end subroutine get_transport_properties

end module transport_properties
