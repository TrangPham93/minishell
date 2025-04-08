/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   helper.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trpham <trpham@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/21 12:37:07 by trpham            #+#    #+#             */
/*   Updated: 2025/04/08 19:35:23 by trpham           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/shell.h"

void	free_string(char *s)
{
	if (s)
	{
		free(s);
		s = NULL;
	}
}

void free_array(char **arr, int i)
{
	int	j;

	j = 0;
	while (j < i)
	{
		free_string(arr[j]);
		j++;
	}
	free(arr);
}

int	array_size(char **arr)
{
	int	i;

	i = 0;
	while (arr[i])
	{
		i++;
	}
	return (i);
}

void	print_linked_list(t_token *head)
{
	t_token	*temp;

	temp = head;
	while (temp)
	{
		if (temp)
		{
			printf("Value of input tokens %s type %d\n", temp->value, temp->type);
		}
		temp = temp->next;
	}
}

int	calculate_linked_list_size(t_token *head)
{
	t_token	*temp;
	int		len;

	temp = head;
	len = 0;
	while (temp)
	{
		len++;
		temp = temp->next;
	}
	return (len);
}

void	print_syntax_error(char *msg)
{
	if (msg)
		ft_putstr_fd(msg, 2);
}