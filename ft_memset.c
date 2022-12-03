/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maddou <maddou@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 15:38:51 by maddou            #+#    #+#             */
/*   Updated: 2022/10/19 15:30:17 by maddou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*k;
	size_t			i;

	k = b;
	i = 0;
	while (i < len)
	{
		k[i] = (unsigned char)c;
		i++;
	}
	return (k);
}
