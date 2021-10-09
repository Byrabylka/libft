#include "libft.h"

void	*ft_memset(void *dest, int ch, size_t count)
{
	size_t	i;

	i = 0;
	while (i < count)
	{
		((char *)dest)[i] = ch;
		i++;
	}
	return (dest);
}