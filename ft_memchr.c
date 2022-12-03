/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maddou <maddou@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 18:46:10 by maddou            #+#    #+#             */
/*   Updated: 2022/10/15 20:12:45 by maddou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*d;
	void			*p;

	i = 0;
	d = (unsigned char *)s;
	while (i < n)
	{
		if (d[i] == (unsigned char)c)
		{
			p = (void *)&s[i];
			return (p);
		}
		i++;
	}
	return (NULL);
}
