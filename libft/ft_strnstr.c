#include "libft.h"

char * ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;
	char	*new_big;
	char	*new_little;

	i = 0;
	j = 0;
	new_big = (char *)big;
	new_little = (char *)little;
	while (big[i + j])
	{
	i++;
	}
}