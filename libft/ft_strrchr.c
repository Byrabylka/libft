#include "libft.h"

char	*ft_strrchr(const char *str, int ch)
{
	int	i;
	int last_char;
	char *copy_str;

	i = 0;
	last_char = -1;
	copy_str = (char *)str;
	while (str[i])
	{
		if (str[i] == ch)
			last_char = i;
		i++;
	}
	if (last_char == -1)
		return (0);
	while (last_char)
	{
		copy_str++;
		last_char--;
	}
	return (copy_str);
}