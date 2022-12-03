/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maddou <maddou@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 14:27:55 by maddou            #+#    #+#             */
/*   Updated: 2022/10/09 20:16:04 by maddou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	size_t	i;
	char	*p;
	size_t	s;

	i = 0;
	s = count * size;
	p = malloc(s);
	if (!p)
		return (NULL);
	while (i < s)
	{
		p[i] = 0;
		i++;
	}
	return ((void *)p);
}
