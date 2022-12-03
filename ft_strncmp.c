/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maddou <maddou@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 17:54:12 by maddou            #+#    #+#             */
/*   Updated: 2022/10/16 13:49:38 by maddou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			i;
	unsigned char	*str;
	unsigned char	*str1;

	str = (unsigned char *)s1;
	str1 = (unsigned char *)s2;
	i = 0;
	while ((str[i] || str1[i]) && i < n)
	{
		if (str[i] > str1[i])
			return (str[i] - str1[i]);
		if (str[i] < str1[i])
			return (str[i] - str1[i]);
		i++;
	}
	return (0);
}
