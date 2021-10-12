/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fooswyn <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 17:36:50 by fooswyn           #+#    #+#             */
/*   Updated: 2021/10/12 17:37:11 by fooswyn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_fill(char *elem, char const *s, int j, char c)
{
	int	k;

	k = 0;
	while (s[j] != 0 && s[j] != c)
	{
		elem[k] = s[j];
		k++;
		j++;
	}
	elem[k] = 0;
}

int	count(const char *s, char c)
{
	int	n;
	int	i;

	n = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] == c)
			n++;
		i++;
	}
	if (s[0] == c)
		n--;
	if (s[ft_strlen(s) - 1] == c)
		n--;
	return (n);
}

int	max_str(const char *s, char c)
{
	int	maxx;
	int	i;
	int	j;

	maxx = 0;
	i = 0;
	j = 0;
	while (s[i])
	{
		if (s[i] == c)
		{
			if (j > maxx)
				maxx = j;
			j = 0;
		}
		i++;
		j++;
	}
	if (j > maxx)
		maxx = j;
	return (maxx);
}

char	**ft_split2(char **matr, char c, int j, char *s)
{
	int	i;
	int	lenn;

	i = 0;
	lenn = 0;
	while (s[i])
	{
		if (s[i] == c && lenn != 0)
		{
			ft_fill(matr[j], s, i - lenn, c);
			j++;
			lenn = -1;
		}
		else if (s[i] == c)
			lenn = -1;
		lenn++;
		i++;
	}
	if (s[i - 1] != c)
	{
		ft_fill(matr[j], s, i - lenn, c);
		j++;
	}
	matr[j] = 0;
	return (matr);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	char	**matr;

	i = 0;
	matr = malloc((count(s, c) + 2) * sizeof(char *));
	if (!matr)
		return (matr);
	while (i < count(s, c) + 2)
	{
		matr[i] = (char *)malloc(max_str(s, c) + 1);
		if (!matr[i])
			return (0);
		i++;
	}
	return (ft_split2(matr, c, 0, ft_strdup(s)));
}
