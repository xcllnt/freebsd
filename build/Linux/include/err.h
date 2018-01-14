#include_next <err.h>

#ifndef _ERR_H_COMPAT_
#define	_ERR_H_COMPAT_

#ifdef __linux__
#include <errno.h>
#include <stdarg.h>

static inline void
errc(int eval, int code, const char *fmt, ...)
{
	va_list ap;

	va_start(ap, fmt);
	errno = code;
	verr(eval, fmt, ap);
	va_end(ap);
	/* NOTREACHED */
}
#endif	/* __linux__ */

#endif	/* !_ERR_H_COMPAT_ */
