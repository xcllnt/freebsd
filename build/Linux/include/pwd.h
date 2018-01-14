#ifdef __APPLE__
#define user_from_uid host_user_from_uid
#endif

#include_next <pwd.h>

#ifdef __APPLE__
#undef user_from_uid
#endif

int uid_from_user(const char *, uid_t *);
const char *user_from_uid(uid_t, int);

int pwcache_userdb(int (*)(int), void (*)(void),
    struct passwd * (*)(const char *), struct passwd * (*)(uid_t));

#ifdef __linux__
static inline int
setpassent(int stayopen)
{

	return (1);
}
#endif
