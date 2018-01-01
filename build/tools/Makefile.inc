# $FreeBSD$

TOOLS_OBJTOP?=	${.OBJDIR:H}
TOOLS_SRCTOP:=	${.PARSEDIR:tA}

HOST_OS!=	uname -s

CFLAGS+=	-I${TOOLS_SRCTOP}/include

LLVM_TOOLS_CFLAGS= -I${TOOLS_SRCTOP}/include/${HOST_OS}

.if ${HOST_OS} == "Linux"
CFLAGS+=	-D_GNU_SOURCE
.endif

.if !defined(LIB) || ${LIB} != netbsd
LIBNETBSDDIR=	${TOOLS_OBJTOP}/libnetbsd
.endif

MK_DEBUG_FILES=	no
WARNS=		0

ARFLAGS=	-cr
RANLIBFLAGS=
TSORTFLAGS=

CLANG_TBLGEN=	${TOOLS_OBJTOP}/clang-tblgen/clang-tblgen
FILE2C=		${TOOLS_OBJTOP}/file2c/file2c
LLVM_TBLGEN=	${TOOLS_OBJTOP}/llvm-tblgen/llvm-tblgen
