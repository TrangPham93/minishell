/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trpham <trpham@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/20 13:57:54 by trpham            #+#    #+#             */
/*   Updated: 2025/03/21 15:47:03 by trpham           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/shell.h"

void	shell_interactive(void);
void	convert_user_input_to_token(char *line);


int	main(int ac, char *av[], char *env[])
{

	if (ac != 1 || !env || !*env)
		return (EXIT_FAILURE);
	(void) av;
	shell_interactive();
	
	return (0);	
}

/* Print promt to stdout, readlline to get the text after promt and remove \n at the end.
	Call split function to separate words and operators.
	Type exit to exit the prompt.
 */

void	shell_interactive(void)
{
	char	*line;

	while (1)
	{
		line =	readline("minishell$ ");
		add_history(line);
		// printf("%s\n", line);
		if (ft_strcmp(line, "exit") == 0)
		{
			free_string(line);
			return;
		}
		if (ft_strcmp(line, "history") == 0)
			print_working_history();
		else
		{
			convert_user_input_to_token(line);
		}
		free_string(line);
		line = NULL;
	}
}

void	print_working_history(void)
{
	printf("Add working history function here\n");
}

/* 
	Split user input by space and categorize the input type.
	Each token includes string value and its type (command, operators, etc.)
	-> tokenization
 */
void	convert_user_input_to_token(char *line)
{
	int		i;
	char	**args;
	t_token	*new_token;
	t_token	*token_input;
	t_token *temp;


	if (is_comment(line) == 0)
		return ;
	args = ft_split(line, ' ');
	i = 0;
	while (args[i])
	{
		printf("%s\n", args[i]);
		i++;
	}
	i = 0;
	while (args[i])
	{
		if (is_operator(args[i]) == 0)
			new_token = create_token(args[i], 1);
		else if (is_separator(args[i]) == 0)
			new_token = create_token(args[i], 2);
		else if (is_keyword(args[i]) == 0)
			new_token = create_token(args[i], 3);
		else if (is_identifier(args[i]) == 0)
			new_token = create_token(args[i], 4);
		else
			new_token = create_token(args[i], 5);
		if (!new_token)
		{
			printf("Failed to malloc \n");
			return ;
		}
		if (i == 0)
		{
			token_input = new_token;
			temp = token_input;
		}
		else
		{
			temp->next = new_token;
			new_token->prev = temp;
			temp = temp->next;
		}
		i++;
	}
	free_array(args, array_size(args));
	// args = NULL; args goes out of scope, no longer accessible at the end of function, no need to set NULL
	print_linked_list(token_input);
}
