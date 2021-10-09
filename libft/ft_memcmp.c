#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t count)
{
	const char *new_s1;
	const char *new_s2;

	new_s1 = (const char *)s1;
	new_s2 = (const char *)s2;
	return (ft_strncmp(new_s1, new_s2, count));
}
