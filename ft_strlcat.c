/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maddou <maddou@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 15:01:46 by maddou            #+#    #+#             */
/*   Updated: 2022/10/19 16:42:12 by maddou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	lend;
	size_t	lens;

	if (dst == 0 && src && dstsize == 0)
		return (ft_strlen(src));
	i = 0;
	lens = ft_strlen(src);
	lend = ft_strlen(dst);
	if (dstsize <= lend)
		return (lens + dstsize);
	while (src[i] && (lend + i) < (dstsize - 1))
	{
		dst[lend + i] = src[i];
		i++;
	}
	dst[lend + i] = '\0';
	return (lend + lens);
}
