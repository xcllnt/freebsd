#include_next <pwd.h>

#ifdef __linux__
static inline int
setpassent(int stayopen)
{

	return (1);
}
#endif
