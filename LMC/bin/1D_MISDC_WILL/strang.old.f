      subroutine strang_chem(scal_old,scal_new,
     $                       diff_old, diff_new, diff_hat, aofs_old, aofs_new,
     $                       const_src,lin_src_old,lin_src_new,
     $                       I_R,dt,lo,hi,bc)
     
      use wchem
     
      implicit none
      include 'spec.h'
      real*8     scal_old(-2:nfine+1,nscal)
      real*8     scal_new(-2:nfine+1,nscal)
      real*8     diff_old(-1:nfine,nscal)
      real*8     diff_new(-1:nfine,nscal)
      real*8     diff_hat(-1:nfine,nscal)
      real*8     aofs_old(0:nfine-1,nscal)
      real*8     aofs_new(0:nfine-1,nscal)
      real*8    const_src( 0:nfine-1,nscal)
      real*8  lin_src_old( 0:nfine-1,nscal)
      real*8  lin_src_new( 0:nfine-1,nscal)
      real*8          I_R(-1:nfine  ,0:Nspec)
      real*8           dt
      
      integer lo,hi,bc(2)
      integer substeps
      integer i,is,n,j
      
      real*8 dtr
      real*8 Tnew
      
      real*8 rho_new
      real*8 hmix
      real*8 Y(Nspec)
      
      real*8 YTold(Nspec+1)
      real*8 YTnew(Nspec+1)
      real*8 YTnext(Nspec+1)
      real*8 guess(Nspec+1)
      real*8 Rhguess
      real*8 wnew(Nspec), wold(Nspec)
      
      real*8 cp, hnew(Nspec), hold(Nspec), cp_old
      
      real*8 Qry(Nspec)
      
      double precision RWRK
      integer IWRK
      
      integer NiterMAX, Niter, ifail
      parameter (NiterMAX = 30)
      double precision res(NiterMAX), errMAX
      
      integer FuncCount, do_diag
      real*8 diag(Nreac)
      
      do_diag = 0
      
      errMax = hmix_TYP*1.e-20
      
      substeps = 1
      dtr = dt/substeps
      
c     Evolve chem over grid
      do i=lo,hi
         if (use_strang) then
            print *,'REMOVED STRANG ALGORITHM'
         else
            ! compute C_p from the previous time step
            !call CKCPBS(scal_old(i,Temp), Y, iwrk, rwrk, cp_old)
            ! compute enthalpies from previous time step
            !call CKHMS(scal_old(i, Temp), iwrk, rwrk, hold)
            
            rho_new = 0.d0
            do n = 1,Nspec
               is = FirstSpec+n-1
               YTnew(n) = scal_new(i,is)
               YTold(n) = scal_old(i,is)
               rho_new = rho_new + scal_new(i,is)
               
               const_src(i, is) = const_src(i, is)
               lin_src_old(i,is) = lin_src_old(i,is)
               lin_src_new(i,is) = lin_src_new(i,is)
               
               c_0(n) = const_src(i, is) + lin_src_old(i, is)
               c_1(n) = (lin_src_new(i,is) - lin_src_old(i,is))/dt
            enddo
            
            YTnew(Nspec + 1) = scal_new(i,Temp)
            YTold(Nspec + 1) = scal_old(i,RhoH)
            
            c_0(0) = const_src(i,RhoH) + lin_src_old(i, RhoH)
            c_1(0) = (lin_src_new(i,RhoH)-lin_src_old(i,RhoH))/dt
            rhoh_INIT = scal_old(i, RhoH)
            T_INIT = scal_old(i, Temp)
            
            !call wvode_chem(YTold, YTnext, dt)
            call rk_chem(YTold, YTnext, dt)
            
!            do n = 1,Nspec
!               Y(n) = YTnew(n)/rho_new
!            enddo
!            
!            hmix = scal_new(i,RhoH)/rho_new
!            Tnew = scal_new(i,Temp)
!            
!            ! compute the production rate from the current time step, previous k
!            call CKWYR(rho_new, Tnew, Y, IWRK, RWRK, wnew)
!            ! compute enthalpies from the current time step
!            call CKHMS(Tnew, iwrk, rwrk, hnew)
!            ! compute C_p from current time step
!            call CKCPBS(Tnew, Y, iwrk, rwrk, cp)
!            
!            do j=1,substeps
!               ! set up the right hand side for the BE solve
!               YTnext(Nspec + 1) = YTold(Nspec+1)
!     $            +     dtr* (diff_hat(i,RhoH) - diff_new(i,RhoH))/(rho_new*cp)
!     $            + 0.5*dtr*((aofs_old(i,RhoH) + diff_old(i,RhoH))/(scal_old(i,Density)*cp_old)
!     $                     + (aofs_new(i,RhoH) + diff_new(i,RhoH))/(rho_new*cp))
!               do n = 1, Nspec
!                  is = FirstSpec+n-1
!                  YTnext(n) = YTold(n)
!     $                          + dtr*(const_src(i, is)
!     $                                - wnew(n)*mwt(n)
!     $                                + 0.5*mwt(n)*(wold(n)+wnew(n)))
!!                  Qry(n) = const_src(i, FirstSpec+n-1) - wnew(n)*mwt(n)
!!     $                          + 0.5*mwt(n)*(wold(n)+wnew(n))
!                  YTnext(Nspec + 1) = YTnext(Nspec + 1)
!     $                  -     dtr* hnew(n)*(diff_hat(i,is) - diff_new(i,is) - wnew(n)*mwt(n))/(rho_new*cp)
!     $                  - 0.5*dtr*(hold(n)*(aofs_old(i,is) + diff_old(i,is) + wold(n)*mwt(n))/(scal_old(i, Density)*cp_old)
!     $                           + hnew(n)*(aofs_new(i,is) + diff_new(i,is) + wnew(n)*mwt(n))/(rho_new*cp))
!               enddo              
!!               YTnext(Nspec + 1) = YTold(Nspec + 1)
!               
!               ! call VODE to solve the ODE, to get a guess for the BE Newton solve
!               call chemsolve(guess, Rhguess, YTold, scal_old(i,RhoH), FuncCount,
!     &                  dtr, diag, do_diag, ifail, i)
!               
!               rho_new = 0.d0
!               do n = 1, Nspec
!                  rho_new = rho_new + guess(n)
!               enddo
!               do n = 1, Nspec
!                  Y(n) = guess(n)/rho_new
!               enddo
!               hmix = Rhguess / rho_new
!               
!               guess(Nspec+1) = scal_new(i,Temp)
!               call FORT_TfromHYpt(guess(Nspec+1),hmix,Y,
!     &                       Nspec,errMax,NiterMAX,res,Niter)
!     
!               ! call the nonlinear backward Euler solver
!               !call bechem(YTnew, const_src(i, RhoH), Qry, rho_new, YTnext, dtr)
!               
!               !guess = YTold
!               
!               call bechem(guess, const_src(i, RhoH), Qry, rho_new, YTnext, dtr)
!               
!               if (i .eq. 100) then
!                  print *,'difference from guess: ', maxval(abs(guess-YTnext))
!               endif
!               
!               do n = 1,Nspec
!                  Y(n) = YTnext(n)/rho_new
!               enddo
!               
!               call CKWYR(rho_new, YTnext(Nspec+1), Y, iwrk, rwrk, wold)
!               
!               YTold = YTnext
!            enddo
            
            scal_new(i,Density) = 0.d0
            do n = 1,Nspec
               scal_new(i,Density) = scal_new(i,Density) + YTnext(n)
               scal_new(i,FirstSpec+n-1) = YTnext(n)
            enddo
            
            do n = 1,Nspec
               Y(n) = scal_new(i,FirstSpec+n-1)/scal_new(i,Density)
            enddo
            !scal_new(i, Temp) = YTnext(Nspec+1)
            
            ! advance the enthalpy...
            !scal_new(i,RhoH) = scal_old(i,RhoH) + dt*const_src(i, RhoH)
            !call CKHBMS(scal_new(i, Temp), Y, iwrk, rwrk, scal_new(i,RhoH))
            !scal_new(i, RhoH) = scal_new(i, RhoH)*scal_new(i, Density)
            
            scal_new(i, RhoH) = YTnext(Nspec + 1)
            hmix = scal_new(i,RhoH) / scal_new(i,Density)
            
            call FORT_TfromHYpt(scal_new(i,Temp),hmix,Y,
     &                          Nspec,errMax,NiterMAX,res,Niter)
            if (Niter.lt.0) then
               print *,'strang_chem: H to T solve failed'
               print *,'Niter=',Niter
               stop
            endif
            
            ! compute wdot
            call CKWYR(scal_new(i,Density), scal_new(i,Temp), Y, iwrk, rwrk, wnew)
            do n = 1,Nspec
               Y(n) = scal_old(i,FirstSpec+n-1)/scal_old(i,Density)
            enddo
            call CKWYR(scal_old(i,Density), scal_old(i,Temp), Y, iwrk, rwrk, wold)
            
            do n = 1,Nspec
               is = FirstSpec + n - 1
               I_R(i,n) =
     $              (scal_new(i,is)-scal_old(i,is)) / dt
     $              - const_src(i,is)
     $              - 0.5d0*(lin_src_old(i,is)+lin_src_new(i,is))
               I_R(i,n) = 0.5*mwt(n)*(wold(n)+wnew(n))
            enddo
            
         endif
         
         call set_bc_s(scal_new,lo,hi,bc)

      enddo
      
      print *,'... done chemistry'

      end
