#include_next <sys/stat.h>

#ifndef _SYS_STAT_H_COMPAT_
#define	_SYS_STAT_H_COMPAT_

#ifdef __linux__
/* Linux has no st_flags, needed by makefs... */
#ifdef __x86_64__
#define	st_flags	__glibc_reserved[0]
#else
#define	st_flags	__glibc_reserved4
#endif
#endif	/* __linux__ */

#endif	/* !_SYS_STAT_H_COMPAT_ */
