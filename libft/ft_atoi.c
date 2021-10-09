#include "libft.h"

int	ft_isspace(char ch)
{
	return ((ch >= 9 && ch <= 13) || ch == 32);
}
int	ft_atoi2(char *str)
{
	int	n;

	n = 0;
	while (ft_isdigit(*str))
	{
		n = n * 10 + (*str - 48);
		str++;
	}
	return (n);
}
int	ft_atoi(const char *str)
{
	char	*str2;
	int		minus;

	str2 = (char *)str;
	minus = -1;
	while (ft_isspace(*str2))
	{
		str2++;
	}
	if (!(ft_strncmp((const char *)str2, "-2147483648", 11)))
		return (-2147483648);
	if (*str2 == '-' || *str2 == '+')
	{
		*str2++;
		if (*str2 == '-')
			minus = -1;
	}
	return (ft_atoi2(*str) * minus);
}
