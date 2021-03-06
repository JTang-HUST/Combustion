module compute_advection_module
   use cell_conversions_module
   use ghost_cells_module
   implicit none
   private
   include 'spec.h'
   public :: add_diffdiff_terms, compute_advection
contains
   subroutine add_diffdiff_terms(diffdiff, scal_avg, beta, gamma_face, dx)
      implicit none

      double precision, intent(out) ::   diffdiff( 0:nx-1)
      double precision, intent(in ) ::   scal_avg(-2:nx+1,nscal)
      double precision, intent(in ) ::       beta(-2:nx+1,nscal)
      double precision, intent(in ) :: gamma_face( 0:nx,  Nspec)
      double precision, intent(in ) ::       dx

      double precision ::      T_cc(-2:nx+1)
      double precision ::      h_cc(-2:nx+1, Nspec)
      double precision ::    h_face( 0:nx)
      double precision ::     Y_avg(-2:nx+1)
      double precision ::    grad_Y( 0:nx)
      double precision :: beta_face( 0:nx)
      
      double precision :: rwrk
      
      integer :: i, n, iwrk
      
      call cc_to_face(beta_face, beta(:, RhoH))
      
      call avg_to_cc(T_cc, scal_avg(:,Temp), T_bc(on_lo))
      do i=-2,nx+1
         call ckhms(T_cc(i),iwrk,rwrk,h_cc(i,:))
      end do
      
      do n=1,Nspec
         call cc_to_face(h_face, h_cc(:,n))
         call divide_avgs(Y_avg, scal_avg(:, FirstSpec+n-1), scal_avg(:, Density), Y_bc(n,on_lo))
         call avg_to_grad(grad_Y, Y_avg, dx)
         
         do i=0,nx-1
            diffdiff(i) = diffdiff(i) &
               + (h_face(i+1)*(gamma_face(i+1,n)-beta_face(i+1)*grad_Y(i+1)) & 
                - h_face(i)*(gamma_face(i,n) - beta_face(i)*grad_Y(i)))/dx
         end do
      end do
   end subroutine add_diffdiff_terms
   
   subroutine compute_advection(advection, scal_avg, vel, dx)
      implicit none
      double precision, intent(out  ) :: advection( 0:nx-1,nscal)
      double precision, intent(in   ) ::  scal_avg(-2:nx+1,nscal)
      double precision, intent(in   ) ::       vel( 0:nx)
      double precision, intent(in   ) ::  dx
      
      double precision :: scal_face(0:nx, nscal)
      integer          :: i,n
      logical          :: compute_comp(nscal)
      
      ! we need to compute the advection term for: 
      ! density rho, density*enthalpy rho h, density*mass fractions rho Y_j
      ! (i.e. don't need to compute for RhoRT or temperature)
      do n = 1, nscal
         compute_comp(n) = .true.
      enddo
      compute_comp(RhoRT) = .false.
      compute_comp(Temp) = .false.
      
      ! we first compute face-values for the scalar quantities
      ! using the stencil, given cell-average values
      call scal_avg_to_face(scal_face, scal_avg)
      
      ! compute the advection term according to the divergence theorem
      do n = 1,nscal
         if (compute_comp(n)) then
             do i=0,nx-1
                advection(i,n) = - (vel(i+1)*scal_face(i+1,n) &
                                  - vel(i  )*scal_face(i  ,n))/dx
             enddo
          endif
      enddo
      
   end subroutine compute_advection
end module compute_advection_module
