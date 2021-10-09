#include "libft.h"

int ft_isalnum(int ch)
{
	return (ft_isdigit(ch) || ft_isalpha(ch));
}