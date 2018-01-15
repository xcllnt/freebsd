# $FreeBSD$

.include "${SRCTOP}/lib/clang/llvm.pre.mk"

CFLAGS+=	-I${OBJTOP}/lib/clang/libllvm

.include "${SRCTOP}/lib/clang/llvm.build.mk"

# Special case for the bootstrap-tools phase.
.if (defined(TOOLS_PREFIX) || ${MACHINE} == "host") && \
    (${PROG_CXX} == "clang-tblgen" || ${PROG_CXX} == "llvm-tblgen")
LIBDEPS+=	llvmminimal
.else
LIBDEPS+=	llvm
.endif

.for lib in ${LIBDEPS}
.if defined(BUILDING_TOOLS)
LDADD+=		${TOOLS_OBJTOP}/lib${lib}/lib${lib}.a
.else
DPADD+=		${OBJTOP}/lib/clang/lib${lib}/lib${lib}.a
LDADD+=		${OBJTOP}/lib/clang/lib${lib}/lib${lib}.a
.endif
.endfor

PACKAGE=	clang

.if defined(BUILDING_TOOLS)
LIBADD+=	ncurses
.else
LIBADD+=	ncursesw
LIBADD+=	pthread
.endif

.include <bsd.prog.mk>
