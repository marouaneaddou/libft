/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maddou <maddou@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 12:44:22 by maddou            #+#    #+#             */
/*   Updated: 2022/10/20 12:31:15 by maddou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char		*d;
	char		*s;
	size_t		i;

	d = (char *)dst;
	s = (char *)src;
	i = 0;
	if (d < s)
		ft_memcpy(d, s, len);
	else if (d > s)
	{
		while (i < len)
		{
			d[len - 1] = s[len - 1];
			len--;
		}
	}
	return ((void *)d);
}
