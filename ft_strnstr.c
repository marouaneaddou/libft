/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maddou <maddou@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 14:43:31 by maddou            #+#    #+#             */
/*   Updated: 2022/10/17 15:04:28 by maddou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	count;

	i = 0;
	if (!s1 && !len)
		return (0);
	if (s2[i] == '\0' || s1 == s2)
		return ((char *)s1);
	while (s1[i] && i < len)
	{
		j = i;
		count = 0;
		while (s1[j] == s2[count] && j < len && s2[count])
		{
			j++;
			count++;
		}
		if (s2[count] == '\0')
			return ((char *)&s1[i]);
		i++;
	}
	return (0);
}
