/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maddou <maddou@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 19:29:34 by maddou            #+#    #+#             */
/*   Updated: 2022/10/16 14:23:34 by maddou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	nmb_int(long n)
{
	int	i;

	i = -1;
	if (n < 0)
		n = n * -1;
	while (n > 0)
	{
		n = n / 10;
		i++;
	}
	if (i == -1)
		return (0);
	return (i);
}

static int	nmb_divise(int d)
{
	int	i;
	int	num;

	i = 0;
	num = 1;
	while (i < d)
	{
		num = num * 10;
		i++;
	}
	return (num);
}

static char	*resultf(long n, char *result, int divise)
{
	int	i;

	i = 0;
	if (n < 0)
	{
		result[i++] = '-';
		n = n * -1;
	}
	while (divise != 0)
	{
		result[i++] = (n / divise) + 48;
		n = n % divise;
		divise = divise / 10;
	}
	result[i] = '\0';
	return (result);
}

char	*ft_itoa(int n)
{
	int		divise;
	int		d;
	char	*result;
	long	k;

	k = n;
	k = k * -1;
	d = nmb_int(k);
	divise = nmb_divise(d);
	if (k <= 0)
		result = malloc(d + 2);
	if (k > 0)
		result = malloc(d + 3);
	if (!result)
		return (0);
	result = resultf(-k, result, divise);
	return (result);
}
