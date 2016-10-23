#ifndef _LIBUTIL_H_
#define	_LIBUTIL_H_

#include <stdint.h>
#include <stdio.h>

int	expand_number(const char *_buf, uint64_t *_num);

char	*fparseln(FILE *fp, size_t *size, size_t *lineno, const char str[3],
    int flags);

#define	FPARSELN_UNESCESC	0x01
#define	FPARSELN_UNESCCONT	0x02
#define	FPARSELN_UNESCCOMM	0x04
#define	FPARSELN_UNESCREST	0x08
#define	FPARSELN_UNESCALL	0x0f

#endif /* !_LIBUTIL_H_ */
