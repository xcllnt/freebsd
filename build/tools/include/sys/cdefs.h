#include_next <sys/cdefs.h>

#ifndef __offsetof
#define	__offsetof(type, field)	 __builtin_offsetof(type, field)
#endif

#ifndef __printflike
#define	__printflike(x,y)
#endif

#ifndef __unused
#define	__unused		__attribute__((__unused__))
#endif
