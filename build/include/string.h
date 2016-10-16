#include_next <string.h>

#ifndef _STRING_H_COMPAT_
#define	_STRING_H_COMPAT_

#ifdef __linux__
static inline size_t
strlcpy(char *dst, const char *src, size_t sz)
{

	if (sz > 0) {
		sz--;
		strncpy(dst, src, sz);
		dst[sz] = '\0';
	}
	return (strlen(src));
}
#endif	/* __linux__ */

#endif	/* !_STRING_H_COMPAT_ */
