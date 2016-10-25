# $FreeBSD$

SUBDIR= \
	config \
	file2c \
	libfreebsd \
	libnetbsd \
	libsbuf \
	libutil \
	makefs \
	mkimg

SUBDIR_DEPEND_config=	file2c libsbuf
SUBDIR_DEPEND_makefs=	libfreebsd libnetbsd libsbuf libutil
SUBDIR_DEPEND_mkimg=	libutil

SUBDIR_PARALLEL=
.include <bsd.subdir.mk>
