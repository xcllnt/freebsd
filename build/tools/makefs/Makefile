# $FreeBSD$

SRCDIR=	${SRCTOP}/usr.sbin/makefs
.PATH:	${SRCDIR}

CLEANFILES+= ${.OBJDIR}/ufs
beforedepend:	${.OBJDIR}/ufs
${.OBJDIR}/ufs:
	ln -sf ${SRCTOP}/sys/ufs ${.OBJDIR}/ufs

CFLAGS+=-I${.OBJDIR}

LDADD+= -L${.OBJDIR:H}/libsbuf
LDADD+= -L${.OBJDIR:H}/libutil

BUILDTOOL=yes

MK_TESTS=no
.include "${SRCDIR}/Makefile"

LDADD+= ${.OBJDIR:H}/libfreebsd/libfreebsd.a
