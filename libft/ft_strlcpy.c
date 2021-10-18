#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t count)
{
	size_t	i;

	i = 0;
	if (!dst && !src)
		return (ft_strlen(src));
	while ((i < count - 1) && src[i])
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = 0;
	return (ft_strlen(src));
}
