# $FreeBSD$

SRCDIR=	${SRCTOP}/usr.sbin/makefs
.PATH:	${SRCDIR}

CLEANFILES+= ${.OBJDIR}/ufs
beforedepend:	${.OBJDIR}/ufs
${.OBJDIR}/ufs:
	ln -sf ${SRCTOP}/sys/ufs ${.OBJDIR}/ufs

CFLAGS+=-I${.OBJDIR}

LDADD+= -L${BUILDTOP}/libnetbsd
LDADD+= -L${BUILDTOP}/libsbuf
LDADD+= -L${BUILDTOP}/libutil

BUILDTOOL=yes

MK_TESTS=no
.include "${SRCDIR}/Makefile"
