# $FreeBSD$

SRCDIR=	${SRCTOP}/usr.bin/clang/clang
.PATH:	${SRCDIR}

LLVM_LIB_OBJDIR=${TOOLS_OBJTOP}/libclang

.include "${SRCDIR}/Makefile"

.if ${HOST_OS} == Linux
LDADD+=	-ldl
.endif
