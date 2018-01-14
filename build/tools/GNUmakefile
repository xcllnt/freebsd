# $FreeBSD$

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
