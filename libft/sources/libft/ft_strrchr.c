/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trpham <trpham@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 19:30:22 by trpham            #+#    #+#             */
/*   Updated: 2025/01/16 12:36:25 by trpham           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

char	*ft_strrchr(const char *s, int c)
{
	const char	*p;

	p = (NULL);
	while (*s)
	{
		if ((unsigned char)*s == (unsigned char)c)
			p = s;
		s++;
	}
	if (c == '\0')
		return ((char *)s);
	return ((char *)p);
}
