# $FreeBSD$

SRCDIR=	${SRCTOP}/usr.sbin/makefs
.PATH:	${SRCDIR}

CLEANFILES+= ${.OBJDIR}/ufs
beforedepend:	${.OBJDIR}/ufs
${.OBJDIR}/ufs:
	ln -sf ${SRCTOP}/sys/ufs ${.OBJDIR}/ufs

CFLAGS+=-I${.OBJDIR}

LDADD+= -L${TOOLS_OBJTOP}/libsbuf
LDADD+= -L${TOOLS_OBJTOP}/libutil

MK_TESTS=no
.include "${SRCDIR}/Makefile"

LDADD+= ${TOOLS_OBJTOP}/libfreebsd/libfreebsd.a
