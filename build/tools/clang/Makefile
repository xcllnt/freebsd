# $FreeBSD$

SRCDIR=	${SRCTOP}/usr.bin/clang/clang

MK_CLANG_IS_CC=no

.include "${.CURDIR:H}/Makefile.inc"
.include "${SRCDIR}/Makefile"

.if ${HOST_OS} == Linux
LDADD+=	-ldl
.endif
