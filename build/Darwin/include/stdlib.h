#include_next <stdlib.h>

#ifndef _STDLIB_H_COMPAT_
#define	_STDLIB_H_COMPAT_

#define	EXIT_FAILURE	1

#ifdef __linux__

__BEGIN_DECLS
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
__END_DECLS

#endif	/* __linux__ */

#endif	/* !_STDLIB_H_COMPAT_ */
