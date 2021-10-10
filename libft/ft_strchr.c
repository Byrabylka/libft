/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fooswyn <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/10 18:32:22 by fooswyn           #+#    #+#             */
/*   Updated: 2021/10/10 18:32:29 by fooswyn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int ch)
{
	char	*str_copy;

	str_copy = (char *)str;
	while (*str_copy)
	{
		if (*str_copy == ch)
			return (str_copy);
		str_copy++;
	}
	if (*str_copy == ch)
		return (str_copy);
	return (0);
}
