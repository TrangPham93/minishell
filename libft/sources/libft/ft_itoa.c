/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trpham <trpham@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 12:38:57 by trpham            #+#    #+#             */
/*   Updated: 2025/01/16 12:34:30 by trpham           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

static int	ft_count_number(int i)
{
	int	count;

	count = 0;
	if (i <= 0)
		count++;
	while (i)
	{
		i = i / 10;
		count++;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	char		*s;
	int			len;
	long long	nl;

	len = ft_count_number(n);
	s = malloc(len + 1);
	if (!s)
		return (NULL);
	s[len] = '\0';
	if (n == 0)
		s[0] = '0';
	nl = (long long)n;
	if (n < 0)
	{
		s[0] = '-';
		nl = -nl;
	}
	while (nl)
	{
		s[--len] = nl % 10 + '0';
		nl = nl / 10;
	}
	return (s);
}
