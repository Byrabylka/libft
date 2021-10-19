#include "libft.h"

void	*ft_calloc(size_t num, size_t size)
{
	char			*str;
	unsigned int	memor;
	unsigned int	i;

	memor = num * size;
	i = 0;
	str = malloc(memor);
	if (!str)
		return (0);
	while (memor)
	{
		str[i] = 0;
		i++;
		memor--;
	}
	return ((void *)str);
}
