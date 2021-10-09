#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t count)
{
	size_t	i;

	i = 1;
	while ((i < count) && src[i])
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = 0;
	return (ft_strlen(src));
}
