#include_next <err.h>

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
