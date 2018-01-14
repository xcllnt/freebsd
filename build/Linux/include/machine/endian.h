#ifdef __APPLE__
#include_next <machine/endian.h>
#endif

#ifndef _MACHINE_ENDIAN_H_WRAPPER_
#define	_MACHINE_ENDIAN_H_WRAPPER_

#define	__bswap16_gen(x)	(__uint16_t)((x) << 8 | (x) >> 8)
#define	__bswap32_gen(x)		\
	(((__uint32_t)__bswap16((x) & 0xffff) << 16) | __bswap16((x) >> 16))
#define	__bswap64_gen(x)		\
	(((__uint64_t)__bswap32((x) & 0xffffffff) << 32) | __bswap32((x) >> 32))

#ifdef __GNUCLIKE_BUILTIN_CONSTANT_P
#define	__bswap16(x)				\
	((__uint16_t)(__builtin_constant_p(x) ?	\
	    __bswap16_gen((__uint16_t)(x)) : __bswap16_var(x)))
#define	__bswap32(x)			\
	(__builtin_constant_p(x) ?	\
	    __bswap32_gen((__uint32_t)(x)) : __bswap32_var(x))
#define	__bswap64(x)			\
	(__builtin_constant_p(x) ?	\
	    __bswap64_gen((__uint64_t)(x)) : __bswap64_var(x))
#else
/* XXX these are broken for use in static initializers. */
#define	__bswap16(x)	__bswap16_var(x)
#define	__bswap32(x)	__bswap32_var(x)
#define	__bswap64(x)	__bswap64_var(x)
#endif

/* These are defined as functions to avoid multiple evaluation of x. */

static __inline __uint16_t
__bswap16_var(__uint16_t _x)
{

	return (__bswap16_gen(_x));
}

static __inline __uint32_t
__bswap32_var(__uint32_t _x)
{

	return (__bswap32_gen(_x));
}

static __inline __uint64_t
__bswap64_var(__uint64_t _x)
{

	/*
	 * It is important for the optimizations that the following is not
	 * really generic, but expands to 2 __bswap32_var()'s.
	 */
	return (__bswap64_gen(_x));
}

#endif	/* !_MACHINE_ENDIAN_H_WRAPPER_ */
