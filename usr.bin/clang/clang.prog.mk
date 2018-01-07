# $FreeBSD$

.include "${SRCTOP}/lib/clang/clang.pre.mk"

.if defined(TOOLS_OBJTOP)
CFLAGS+=	-I${TOOLS_OBJTOP}/libclang
CFLAGS+=	-I${TOOLS_OBJTOP}/libllvm
.else
CFLAGS+=	-I${OBJTOP}/lib/clang/libclang
CFLAGS+=	-I${OBJTOP}/lib/clang/libllvm
.endif

.include "${SRCTOP}/lib/clang/clang.build.mk"

LIBDEPS+=	clang
LIBDEPS+=	llvm

.for lib in ${LIBDEPS}
.if defined(TOOLS_OBJTOP)
LDADD+=		${TOOLS_OBJTOP}/lib${lib}/lib${lib}.a
.else
DPADD+=		${OBJTOP}/lib/clang/lib${lib}/lib${lib}.a
LDADD+=		${OBJTOP}/lib/clang/lib${lib}/lib${lib}.a
.endif
.endfor

PACKAGE=	clang

.if defined(TOOLS_OBJTOP)
LIBADD+=	ncurses
.else
LIBADD+=	ncursesw
LIBADD+=	pthread
.endif

.include <bsd.prog.mk>
