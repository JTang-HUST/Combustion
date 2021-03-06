# A set of useful macros for putting together a SMC application.

# include the main Makefile stuff
include $(BOXLIB_HOME)/Tools/F_mk/GMakedefs.mak


include ./GPackage.mak
VPATH_LOCATIONS += .
FINCLUDE_LOCATIONS += .

# default target (make just takes the one that appears first)
ALL: main.$(suf).exe


#-----------------------------------------------------------------------------
# core BoxLib directories
BOXLIB_CORE := Src/F_BaseLib


#-----------------------------------------------------------------------------
# core SMC directories
SMC_SRC ?= src

#-----------------------------------------------------------------------------

ifeq ($(strip $(BOXLIB_HOME)),)
  $(error "Must define BOXLIB_HOME")
endif

ifeq ($(strip $(SDCLIB_HOME)),)
  ifeq ($(strip $(SMC_SRC)),src)
    $(error "Must define SDCLIB_HOME when SMC_SRC=$(SMC_SRC)")
  else ifeq ($(strip $(SMC_SRC)),src_s3d)
    $(error "Must define SDCLIB_HOME when SMC_SRC=$(SMC_SRC)")
  endif
endif

#-----------------------------------------------------------------------------
# Fmpack is the list of all the GPackage.mak files that we need to
# include into the build system to define the list of source files.
#
# Fmlocs is the list of all the directories that we want to search
# for the source files in -- this is usually going to be the
# same as the list of directories containing GPackage.mak defined
# above.
#
# Fincs is the list of directories that have include files that
# we need to tell the compiler about.

# SMC modules
Fmdirs += $(SMC_SRC)

Fmpack := $(foreach dir, $(Fmdirs), $(SMC_TOP_DIR)/$(dir)/GPackage.mak)
Fmlocs := $(foreach dir, $(Fmdirs), $(SMC_TOP_DIR)/$(dir))

# BoxLib
Fmpack += $(foreach dir, $(BOXLIB_CORE), $(BOXLIB_HOME)/$(dir)/GPackage.mak)
Fmlocs += $(foreach dir, $(BOXLIB_CORE), $(BOXLIB_HOME)/$(dir))

# SDCLib
ifdef SDCLIB_HOME
  Fmpack += $(SDCLIB_HOME)/GPackage.mak
  Fmlocs += $(SDCLIB_HOME)/src $(SDCLIB_HOME)/src/encap
  INCLUDE_LOCATIONS += $(SDCLIB_HOME)/include
  ifeq ($(strip $(SMC_SRC)),src)
    csources += getdt.c
  endif
endif

# Chemistry & Transport
ifeq ($(strip $(SMC_SRC)),src_min)
  USE_EGM := t
else
  USE_EGZ := t
endif
USE_WORK_SPACE_MODULE := t
Fmpack += $(CHEMISTRY_DIR)/src_common/GPackage.mak
Fmlocs += $(CHEMISTRY_DIR)/src_common
Fmpack += $(CHEMISTRY_DIR)/F_Src/GPackage.mak
Fmlocs += $(CHEMISTRY_DIR)/F_Src

INCLUDE_LOCATIONS += $(CHEMISTRY_DIR)/src_common
ifeq ($(CHEMISTRY_MODEL),LIDRYER)
  csources += LiDryer.c
  vpath %.c   $(VPATH_LOCATIONS) $(CHEMISTRY_DIR)/data/LiDryer
  vpath %.f   $(VPATH_LOCATIONS) $(CHEMISTRY_DIR)/data/LiDryer/PMFs
else ifeq ($(CHEMISTRY_MODEL),DRM19)
  csources += drm19.c
  vpath %.c   $(VPATH_LOCATIONS) $(CHEMISTRY_DIR)/data/gri
  vpath %.f   $(VPATH_LOCATIONS) $(CHEMISTRY_DIR)/data/gri/PMFs
else ifeq ($(CHEMISTRY_MODEL),GRI30)
  csources += grimech30.c
  vpath %.c   $(VPATH_LOCATIONS) $(CHEMISTRY_DIR)/data/gri
  vpath %.f   $(VPATH_LOCATIONS) $(CHEMISTRY_DIR)/data/gri/PMFs
else ifeq ($(CHEMISTRY_MODEL),LUDME)
  csources += LuDME.c
  vpath %.c   $(VPATH_LOCATIONS) $(CHEMISTRY_DIR)/data/Lu
  vpath %.f   $(VPATH_LOCATIONS) $(CHEMISTRY_DIR)/data/Lu/PMFs
else ifeq ($(CHEMISTRY_MODEL),LUDMERED)
  csources += LuDME-red.c
  fsources += ckwyp.f
  vpath %.c   $(VPATH_LOCATIONS) $(CHEMISTRY_DIR)/data/Lu-red
  vpath %.f   $(VPATH_LOCATIONS) $(CHEMISTRY_DIR)/data/Lu-red
endif

ifeq ($(strip $(SMC_SRC)),src_s3d)
  ifneq ($(CHEMISTRY_MODEL),LUDMERED)
    $(error "For src_s3d, only LUDMERED is supported")
  endif
endif

ifdef CONVERGENCE
  CFLAGS += -DCONVERGENCE
endif

# any include directories
Fmincludes += $(SMC_SRC)
ifneq ("$(wildcard $(SMC_TOP_DIR)/$(strip $(SMC_SRC))/include)","")
  Fmincludes += $(strip $(SMC_SRC))/include
endif
Fmincs := $(foreach dir, $(Fmincludes), $(SMC_TOP_DIR)/$(dir))


# include the necessary GPackage.mak files that define this setup
include $(Fmpack)

# vpath defines the directories to search for the source files

#  Note: GMakerules.mak will include '.' at the start of the
#  VPATH_LOCATIONS to first search in the problem directory
VPATH_LOCATIONS += $(Fmlocs)


# list of directories to put in the Fortran include path
FINCLUDE_LOCATIONS += $(Fmincs)


#-----------------------------------------------------------------------------
# define the build instructions for the executable
main.$(suf).exe: $(objects)
ifdef MKVERBOSE
	$(HPCLINK) $(LINK.f90) -o main.$(suf).exe $(objects) $(libraries)
	@echo SUCCESS
else
	@echo "Linking $@ ..."
	@$(HPCLINK) $(LINK.f90) -o main.$(suf).exe $(objects) $(libraries)
	@echo SUCCESS
endif


#-----------------------------------------------------------------------------
# runtime parameter stuff (probin.f90)

# template used by write_probin.py to build probin.f90
PROBIN_TEMPLATE := $(SMC_TOP_DIR)/probin.template

# list of the directories to search for _parameters files
PROBIN_PARAMETER_DIRS = ./

PROBIN_PARAMETER_DIRS += $(SMC_TOP_DIR)

# list of all valid _parameters files for probin
PROBIN_PARAMETERS := $(shell $(BOXLIB_HOME)/Tools/F_scripts/findparams.py $(PROBIN_PARAMETER_DIRS))

probin.f90: $(PROBIN_PARAMETERS) $(PROBIN_TEMPLATE)
	@echo " "
	@echo "${bold}WRITING probin.f90${normal}"
ifdef MKVERBOSE
	$(BOXLIB_HOME)/Tools/F_scripts/write_probin.py \
           -t $(PROBIN_TEMPLATE) -o probin.f90 -n probin \
           --pa "$(PROBIN_PARAMETERS)"
else
	@$(BOXLIB_HOME)/Tools/F_scripts/write_probin.py \
           -t $(PROBIN_TEMPLATE) -o probin.f90 -n probin \
           --pa "$(PROBIN_PARAMETERS)"
endif
	@echo " "


#-----------------------------------------------------------------------------
# build_info stuff
deppairs: build_info.f90

build_info.f90:
	@echo " "
	@echo "${bold}WRITING build_info.f90${normal}"
ifdef MKVERBOSE
	$(BOXLIB_HOME)/Tools/F_scripts/makebuildinfo.py \
           --modules "$(Fmdirs)" \
           --FCOMP "$(COMP)" \
           --FCOMP_version "$(FCOMP_VERSION)" \
           --f90_compile_line "$(COMPILE.f90)" \
           --f_compile_line "$(COMPILE.f)" \
           --C_compile_line "$(COMPILE.c)" \
           --link_line "$(LINK.f90)" \
           --boxlib_home "$(BOXLIB_HOME)" \
           --source_home "$(SMC_TOP_DIR)" \
           --extra_home "$(SDCLIB_HOME)"
else
	@$(BOXLIB_HOME)/Tools/F_scripts/makebuildinfo.py \
           --modules "$(Fmdirs)" \
           --FCOMP "$(COMP)" \
           --FCOMP_version "$(FCOMP_VERSION)" \
           --f90_compile_line "$(COMPILE.f90)" \
           --f_compile_line "$(COMPILE.f)" \
           --C_compile_line "$(COMPILE.c)" \
           --link_line "$(LINK.f90)" \
           --boxlib_home "$(BOXLIB_HOME)" \
           --source_home "$(SMC_TOP_DIR)" \
           --extra_home "$(SDCLIB_HOME)" \
           --network "$(CHEMISTRY_MODEL)"
endif
	@echo " "

$(odir)/build_info.o: build_info.f90
ifdef MKVERBOSE
	$(COMPILE.f90) $(OUTPUT_OPTION) build_info.f90
	rm -f build_info.f90
else
	@echo "Building build_info.f90 ..."
	@$(COMPILE.f90) $(OUTPUT_OPTION) build_info.f90
	@rm -f build_info.f90
endif


#-----------------------------------------------------------------------------
# include the BoxLib Fortran Makefile rules
include $(BOXLIB_HOME)/Tools/F_mk/GMakerules.mak


#-----------------------------------------------------------------------------
# for debugging.  To see the value of a Makefile variable,
# e.g. Fmlocs, simply do "make print-Fmlocs".  This will
# print out the value.
print-%: ; @echo $* is $($*)


#-----------------------------------------------------------------------------
# cleaning.  Add more actions to 'clean' and 'realclean' to remove
# probin.f90 and build_info.f90 -- this is where the '::' in make comes
# in handy
clean::
	$(RM) probin.f90
	$(RM) build_info.f90
