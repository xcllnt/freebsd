# $FreeBSD$

BUILDING_TOOLS=	yes

.if defined(SRCDIR)
.PATH: ${SRCDIR}
.endif

TOOLS_OBJTOP?=	${.OBJDIR:H}
TOOLS_SRCTOP:=	${.PARSEDIR:tA}

HOST_OS!=	uname -s
HOST_SRCTOP?=	${TOOLS_SRCTOP:H}/${HOST_OS}

CFLAGS+=	-I${HOST_SRCTOP}/include

TOOLS_PREFIX?=	${TOOLS_SRCTOP}

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

.sinclude "${HOST_SRCTOP}/Makefile.inc"
