#ifdef __APPLE__
#define	group_from_gid	host_group_from_gid
#endif
#include_next <grp.h>
#ifdef __APPLE__
#undef group_from_gid
#endif

int gid_from_group(const char *, gid_t *);
const char *group_from_gid(gid_t, int);

int pwcache_groupdb(int (*)(int), void (*)(void),
    struct group * (*)(const char *), struct group * (*)(gid_t));

#ifdef __linux__
static inline int
setgroupent(int stayopen)
{

	return (1);
}
#endif
