#include_next <grp.h>

#ifdef __linux__
static inline int
setgroupent(int stayopen)
{

	return (1);
}
#endif
