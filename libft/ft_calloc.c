#include "libft.h"

void *ft_calloc(size_t num, size_t size)
{
	void	*arr;
	
	arr = malloc(num * size);
	if (arr)
		ft_bzero(arr, num);
	return (arr);
}
