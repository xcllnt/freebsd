#include_next <unistd.h>

#ifndef _UNISTD_H_COMPAT_
#define	_UNISTD_H_COMPAT_

#if !defined(__cplusplus)
char    *fflagstostr(unsigned long);
int      strtofflags(char **, unsigned long *, unsigned long *);

mode_t   getmode(const void *, mode_t);
void    *setmode(const char *);
#endif

#endif	/* !_UNISTD_H_COMPAT_ */
