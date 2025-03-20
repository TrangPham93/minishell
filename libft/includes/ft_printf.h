/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trpham <trpham@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 11:27:58 by trpham            #+#    #+#             */
/*   Updated: 2025/01/16 18:11:34 by trpham           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdint.h>

int	ft_printf(const char	*str, ...);
int	ft_putchar_printf(char c, int fd);
int	ft_putstr_printf(char *s, int fd);
int	ft_putnbr_printf(int n, int fd);
int	ft_putnbr_unsigned(unsigned int n, int fd);
int	ft_puthex_fd(unsigned long nbr, int fd, char b);
int	ft_putptr_fd(void *ptr, int fd);

#endif