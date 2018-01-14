# $FreeBSD$
#
# This makefile exists for those environments in which make
# is the GNU make utility.  The primary function of this file
# is to hand over the build to the portable BSD make utility,
# which is commonly called bmake instead.
# Additionally, this file could and should grow the support
# for either installing pre-built versions of bmake or building
# bmake from the version in the source tree.

HOST_OS=$(shell uname -s)

ifeq (${HOST_OS}, Darwin)
NCPUS=	$(shell sysctl -n hw.ncpu)
else
NCPUS=	$(shell grep '^processor' /proc/cpuinfo | wc -l)
endif

BMAKE?= env MAKEFLAGS= MAKELEVEL= MFLAGS= bmake -j${NCPUS}

COMPILER_TYPE_Darwin=clang
COMPILER_TYPE_$(HOST_OS)?=gcc
COMPILER_TYPE=$(COMPILER_TYPE_$(HOST_OS))

all clean obj:
	$(BMAKE) -f Makefile -m $(CURDIR)/../../share/mk COMPILER_TYPE=$(COMPILER_TYPE) $@
