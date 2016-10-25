# $FreeBSD$

LIB=	freebsd
SRCS+=	fgetln.c setmode.c

.PATH:	${SRCTOP}/lib/libc/gen
SRCS+=	strtofflags.c

.PATH:	${SRCTOP}/contrib/libc-pwcache
SRCS+=	pwcache.c

.PATH:	${SRCTOP}/contrib/libc-vis
SRCS+=	unvis.c vis.c

INTERNALLIB=
.include <bsd.lib.mk>
