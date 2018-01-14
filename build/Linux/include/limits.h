#include_next <limits.h>

#ifdef __linux__
#define	GID_MAX		UINT_MAX
#define	UID_MAX		UINT_MAX
#endif
