/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trpham <trpham@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 14:07:11 by trpham            #+#    #+#             */
/*   Updated: 2025/01/16 18:14:49 by trpham           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/ft_printf.h"

int	ft_putnbr_printf(int n, int fd)
{
	long	nb;
	int		count;

	count = 0;
	nb = n;
	if (nb < 0)
	{
		ft_putchar_printf('-', fd);
		nb = -nb;
		count++;
	}
	if (nb >= 10)
		count += ft_putnbr_printf(nb / 10, fd);
	ft_putchar_printf(nb % 10 + '0', fd);
	return (count + 1);
}
