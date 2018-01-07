# $FreeBSD$

SRCDIR=	${SRCTOP}/lib/clang/libclang

CFLAGS+=-I${TOOLS_OBJTOP}/libllvm

# Force automatic creation of sub-directories 
MK_AUTO_OBJ=yes

.include "${.CURDIR:H}/Makefile.inc"
.include "${SRCDIR}/Makefile"
