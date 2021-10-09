#include "libft.h"

void *ft_memchr(const void *arr, int c, size_t n)
{
	size_t	i;
	unsigned char	*str_copy;

	i = 0;
	str_copy = (unsigned char *)arr;
	while (i < n)
	{
		if (*str_copy == c)
			return (str_copy);
		str_copy++;
		i++;
	}
	return (0);
}
