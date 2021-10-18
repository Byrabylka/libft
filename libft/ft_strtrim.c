#include "libft.h"

int	ft_include(char c, char const *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

int	ft_count(char const *s1, char const *set)
{
	int	i;
	int	j;
	int	n;

	i = 0;
	j = 0;
	n = 0;
	while (s1[i])
	{
		if (ft_include(s1[i], set))
			n++;
		i++;
	}
	return (n);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	int		i;
	int		j;

	str = malloc(ft_strlen(s1) - ft_count(s1, set) + 1);
	if (!str)
		return (str);
	i = 0;
	j = 0;
	while (s1[i])
	{
		if (!ft_include(s1[i], set))
		{
			str[j] = s1[i];
			j++;
		}
		i++;
	}
	str[j] = 0;
	return (str);
}