/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maddou <maddou@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 12:13:27 by maddou            #+#    #+#             */
/*   Updated: 2022/10/16 14:38:22 by maddou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long int	i;

	i = (long int)n;
	if (i < 0)
	{
		i = i * (-1);
		ft_putchar_fd('-', fd);
	}
	if (i > 9)
	{
		ft_putnbr_fd(i / 10, fd);
		ft_putnbr_fd(i % 10, fd);
	}
	if (i >= 0 && i <= 9)
	{
		ft_putchar_fd(i + 48, fd);
	}
}
