/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validate_input.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trpham <trpham@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/25 14:25:27 by trpham            #+#    #+#             */
/*   Updated: 2025/03/25 15:18:37 by trpham           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/shell.h"

int	validate_input(char *str)
{
	int	is_open_quote;
	int	i;
	
	is_open_quote = -1;
	i = 0;
	if (!str)
		return (-1);
	// if (str[i] == '"')
	// 	is_open_quote = 0;
	while (str[i])
	{
		if (i == 0 && str[i] == '"')
			is_open_quote = 0;
		
		i++;
	}
	
	
	return (0);
}

int	check_double_quote(char *line)
{
	
	return (0);
}