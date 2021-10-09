#include "libft.h"

void ft_bzero(void	*dest, size_t count)
{
	size_t	i;

	i = 0;
	while (i < count)
	{
		((char *)dest)[i] = 0;
		i++;
	}
}
