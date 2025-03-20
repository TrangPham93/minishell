/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trpham <trpham@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 14:46:09 by trpham            #+#    #+#             */
/*   Updated: 2025/01/16 17:59:06 by trpham           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*s;
	size_t	s1_len;
	size_t	s2_len;

	if (!s1 && !s2)
		return (NULL);
	s1_len = 0;
	s2_len = 0;
	if (s1)
		s1_len = ft_strlen(s1);
	if (s2)
		s2_len = ft_strlen(s2);
	s = malloc(s1_len + s2_len + 1);
	if (!s)
		return (NULL);
	if (s1)
		ft_memcpy(s, s1, s1_len);
	if (s2)
		ft_memcpy(s + s1_len, s2, s2_len);
	s[s1_len + s2_len] = '\0';
	return (s);
}
