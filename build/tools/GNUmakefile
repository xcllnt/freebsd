# $FreeBSD$

HOST_OS=$(shell uname -s)

BMAKE?= bmake

COMPILER_TYPE_Darwin=clang
COMPILER_TYPE_$(HOST_OS)?=gcc
COMPILER_TYPE=$(COMPILER_TYPE_$(HOST_OS))

all clean:
	$(BMAKE) -f Makefile -m ../../share/mk COMPILER_TYPE=$(COMPILER_TYPE) $@
