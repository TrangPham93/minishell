/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_unsigned.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trpham <trpham@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 21:58:55 by trpham            #+#    #+#             */
/*   Updated: 2025/01/16 18:17:01 by trpham           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/ft_printf.h"

int	ft_putnbr_unsigned(unsigned int nb, int fd)
{
	int	count;

	count = 0;
	if (nb >= 10)
		count += ft_putnbr_printf(nb / 10, fd);
	ft_putchar_printf(nb % 10 + '0', fd);
	return (count + 1);
}
