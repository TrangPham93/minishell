/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trpham <trpham@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/20 13:57:54 by trpham            #+#    #+#             */
/*   Updated: 2025/03/21 13:11:35 by trpham           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/shell.h"

void shell_interactive(void);
void	convert_user_input_to_token(char **args);


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

void shell_interactive(void)
{
	char	*line;
	char	**args;

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
			args = ft_split(line, ' ');
			convert_user_input_to_token(args);
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
 */
void	convert_user_input_to_token(char **args)
{
	int		i;

	i = 0;
	while (args[i] != NULL)
	{
		printf("%s\n", args[i]);
		i++;
	}
	free_array(args, array_size(args));
	args = NULL;
}