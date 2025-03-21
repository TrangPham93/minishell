/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trpham <trpham@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/20 13:57:54 by trpham            #+#    #+#             */
/*   Updated: 2025/03/21 12:54:34 by trpham           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/shell.h"

void shell_interactive(void);
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
	int		i;
	// int		status = -1;

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
		args = ft_split(line, ' ');
		i = 0;
		while (args[i] != NULL)
		{
			printf("%s\n", args[i]);
			i++;
		}
		
		// printf("%s", input);
		free_string(line);
		line = NULL;
		free_array(args, array_size(args));
		args = NULL;
	}
}
