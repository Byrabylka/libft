#include "libft.h"

char *ft_strchr(const char *str, int ch)
{
	char *str_copy;

	str_copy = (char *)str;
	while (*str_copy)
	{
		if (*str_copy == ch)
			return (str_copy);
		str_copy++;
	}
	return (0);
}
