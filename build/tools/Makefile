# $FreeBSD$

SUBDIR= \
	clang \
	clang-tblgen \
	config \
	file2c \
	libclang \
	libfreebsd \
	libllvm \
	libllvmminimal \
	libnetbsd \
	libsbuf \
	libutil \
	llvm-tblgen \
	makefs \
	mkimg

SUBDIR_DEPEND_clang=		libclang
SUBDIR_DEPEND_clang-tblgen=	libllvmminimal
SUBDIR_DEPEND_config=		file2c libsbuf
SUBDIR_DEPEND_libclang=		clang-tblgen libllvm
SUBDIR_DEPEND_libllvm=		llvm-tblgen
SUBDIR_DEPEND_llvm-tblgen=	libllvmminimal
SUBDIR_DEPEND_makefs=		libfreebsd libnetbsd libsbuf libutil
SUBDIR_DEPEND_mkimg=		libutil

SUBDIR_PARALLEL=
.include <bsd.subdir.mk>
