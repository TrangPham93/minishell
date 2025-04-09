/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validate_input.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trpham <trpham@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/25 14:25:27 by trpham            #+#    #+#             */
/*   Updated: 2025/04/09 07:29:22 by trpham           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/shell.h"

int	is_valid_quote(t_token *token)
{
	t_token	*temp;

	temp = token;
	while (temp)
	{
		if (check_double_quote(temp->value) == FALSE)
		{
			return (FALSE);
		}
		temp = temp->next;
	}
	return (TRUE);
}

int	check_double_quote(char *str)
{
	int	i;
	// char	open_quote;
	char	current_quote;
	
	if (!str)
		return (FALSE);
	// open_quote = '0';
	current_quote = '0';
	i = 0;
	while (str[i])
	{
		if (str[i] == '\'' || str[i] == '\"')
		{
			if (current_quote == '0')
			{
				current_quote = str[i];
				// open_quote = current_quote;
			}
			else if (current_quote == str[i])
				current_quote = '0';
			// else if (open_quote != str[i])
			// 	open_quote = '1';
		}
		i++;
	}
	if (current_quote != '0')
	{
		print_syntax_error("Unclosed quote\n");
		return (FALSE);
	}
	// else if (open_quote == '1')
	// {
	// 	print_syntax_error("Invalid syntax\n");
	// 	return (FALSE);
	// }
	return (TRUE);
}

void	validate_token(t_token *token)
{
	if (is_valid_pipe(token) == FALSE)
		return ;
	if (is_valid_quote(token) == FALSE)
		return ;
	
	
	// printf("Validate token %s\n", token->value);
 }
 
 int	is_valid_pipe(t_token *token)
 {
	t_token	*temp;

	temp = token;
	if (temp->type == PIPE)
	{
		print_syntax_error("Pipe at start\n");
		return (FALSE);
	}
	while (temp)
	{
		if (temp->type == PIPE && temp->next == NULL)
		{
			print_syntax_error("Pipe at the end\n");
			return (FALSE);
		}
		if (ft_strcmp(temp->value, "||") == 0)
		{
			print_syntax_error("Double pipe\n");
			return (FALSE);
		}
		temp = temp->next;
	}
	return (TRUE);
 }