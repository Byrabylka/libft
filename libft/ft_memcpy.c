/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fooswyn <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/10 18:56:55 by fooswyn           #+#    #+#             */
/*   Updated: 2021/10/10 19:25:23 by fooswyn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t count)
{
	unsigned char	*s1;
	unsigned char	*s2;
	size_t	i;

	i = 0;
	s1 = (unsigned char *)dest;
	s2 = (unsigned char *)src;
	if (!count)
		return (dest);
	while (i < count)
	{
		s1[i] = s2[i];
		i++;
	}
	return (dest);
}
