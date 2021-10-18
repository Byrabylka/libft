#include "libft.h"

void	*ft_calloc(size_t num, size_t size)
{
	size_t	count;
	void	*arr;
	
	count = num * size;
	arr = malloc(num * size);
	if (arr)
		ft_memset(arr, 0, num);
	return (arr);
}
