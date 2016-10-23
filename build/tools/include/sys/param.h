#include_next <sys/param.h>

#ifndef MAXPHYS
#define	MAXPHYS	(128 * 1024)
#endif

#ifndef roundup2
#define	roundup2(x, y)	(((x)+((y)-1))&(~((y)-1)))
#endif
