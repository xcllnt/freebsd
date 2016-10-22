#include_next <stdlib.h>

#ifndef _STDLIB_H_COMPAT_
#define	_STDLIB_H_COMPAT_

#define	EXIT_FAILURE	1

#ifdef __linux__
extern char *program_invocation_short_name;
static inline const char *
getprogname(void)
{

	return (program_invocation_short_name);
}

static inline void
setprogname(char *name)
{

	program_invocation_short_name = name;
}
#endif	/* __linux__ */

#endif	/* !_STDLIB_H_COMPAT_ */
