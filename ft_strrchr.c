/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maddou <maddou@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 15:31:33 by maddou            #+#    #+#             */
/*   Updated: 2022/10/15 20:30:17 by maddou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*p;
	int		len;

	len = ft_strlen(s) - 1;
	if (c == '\0')
		return ((char *)&s[len + 1]);
	while (0 <= len && s[len])
	{
		if (s[len] == c)
		{
			p = (char *)&s[len];
			return (p);
		}
		len--;
	}
	return (NULL);
}
