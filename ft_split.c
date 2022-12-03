/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maddou <maddou@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 17:10:06 by maddou            #+#    #+#             */
/*   Updated: 2022/10/21 12:02:30 by maddou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static int	ft_nmb_string(const char *s, char c)
{
	int	i;
	int	j;

	i = 0;
	j = 1;
	while (s[i] == c)
		i++;
	while (s[i] != '\0')
	{
		while (s[i] == c && s[i + 1] != '\0' && s[i + 1] != c)
		{
			j++;
			i++;
		}
		i++;
	}
	return (j);
}

static char	*ft_copier(char const *s, int start, int end)
{
	char	*str;

	str = ft_substr(s, start, end);
	return (str);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		start;
	int		j;
	char	**resulting;

	if (!s)
		return (NULL);
	j = 0;
	i = 0;
	resulting = (char **)malloc((ft_nmb_string(s, c) + 1) * sizeof(char *));
	if (!resulting)
		return (NULL);
	while (s[i])
	{
		while (s[i] == c)
			i++;
		start = i;
		while (s[i] != c && s[i] != '\0')
			i++;
		if (i - start > 0)
			resulting[j++] = ft_copier(s, start, i - start);
	}
	resulting[j] = NULL;
	return (resulting);
}
