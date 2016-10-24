#include_next <unistd.h>

char    *fflagstostr(unsigned long);
int      strtofflags(char **, unsigned long *, unsigned long *);

mode_t   getmode(const void *, mode_t);
void    *setmode(const char *);
