# $FreeBSD$

SRCDIR=	${SRCTOP}/usr.sbin/makefs
.PATH:	${SRCDIR}

CLEANFILES+= ${.OBJDIR}/ufs
beforedepend:	${.OBJDIR}/ufs
${.OBJDIR}/ufs:
	ln -sf ${SRCTOP}/sys/ufs ${.OBJDIR}/ufs

CFLAGS+=-I${.OBJDIR}

BUILDTOOL=yes

.include "${SRCDIR}/Makefile"
