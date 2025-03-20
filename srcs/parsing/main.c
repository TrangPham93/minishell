/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trpham <trpham@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/20 13:57:54 by trpham            #+#    #+#             */
/*   Updated: 2025/03/20 16:16:46 by trpham           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/parser.h"
#include <stdio.h>
#include <readline/readline.h>
#include <readline/history.h>


int	main(int ac, char *av[], char *env[])
{
	char *prompt_name;

	if (ac <= 0)
		return (EXIT_FAILURE);
	if (!*env)
		return (EXIT_FAILURE);
	(void) av;
	prompt_name = "minishell";
	// signal(SIGUSR1, )
	while (1)
	{
		// printf("%s>", prompt_name);	
		// wait();
		fputs("minishell>", stdout);
		char *input = readline("minishell>");
		add_history(input);
		printf("%s", input);
		free(input);
	}
	
	

	return (0);	
}