# $FreeBSD$

LLVM_SRCS= ${SRCTOP}/contrib/llvm

.include "${SRCTOP}/lib/clang/clang.build.mk"

LLVM_LIB_OBJDIR?=${.OBJDIR:H:H:H}/lib/clang

.for lib in ${LIBDEPS}
DPADD+=	${LLVM_LIB_OBJDIR}/lib${lib}/lib${lib}.a
LDADD+=	${LLVM_LIB_OBJDIR}/lib${lib}/lib${lib}.a
.endfor

PACKAGE=	clang

LIBADD+= ncurses pthread

BINDIR?= /usr/bin

.include <bsd.prog.mk>
