#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t count)
{
	size_t	i;

	i = 0;
	while (dst[i])
		i++;
	while ((i + 1 < count) && src[i])
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = 0;
	return (ft_strlen(src) + ft_strlen(dst));
}
