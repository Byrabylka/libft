/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fooswyn <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 20:05:14 by fooswyn           #+#    #+#             */
/*   Updated: 2021/10/19 20:12:40 by fooswyn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	minn(size_t a, size_t b)
{
	if (a <= b)
		return (a);
	else
		return (b);
}

size_t	ft_strlcat(char *dst, const char *src, size_t count)
{
	size_t	i;
	size_t	j;
	size_t	r;

	i = 0;
	j = 0;
	while (dst[i])
		i++;
	r = ft_strlen(src) + minn(i, count);
	while ((i + 1 < count) && src[j])
	{
		dst[i] = src[j];
		i++;
		j++;
	}
	dst[i] = 0;
	return (r);
}
