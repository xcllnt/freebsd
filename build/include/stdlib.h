#include_next <stdlib.h>

#ifndef _STDLIB_H_COMPAT_
#define	_STDLIB_H_COMPAT_

#ifdef __linux__
extern char *program_invocation_short_name;
static inline const char *
getprogname(void)
{

	return (program_invocation_short_name);
}
#endif	/* __linux__ */

#endif	/* !_STDLIB_H_COMPAT_ */
