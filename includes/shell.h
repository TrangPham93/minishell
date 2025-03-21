/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   shell.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trpham <trpham@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/19 16:41:06 by trpham            #+#    #+#             */
/*   Updated: 2025/03/21 16:18:00 by trpham           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHELL_H
# define SHELL_H

# include "../libft/includes/libft.h"
# include <signal.h>
# include <stdio.h>
# include <readline/readline.h>
# include <readline/history.h>

# define OPERATOR 1
# define SEPARATOR 2
# define KEYWORD 3
# define IDENTIFIER 4
# define LITERAL 5

typedef struct s_shell
{
	
}	t_shell;

typedef struct s_token
{
	char	*value;
	int		type; 
	struct s_token	*next;
	struct s_token	*prev;
}	t_token;

/* Tokenization */
int		is_comment(char *s);
int		is_operator(char *s);
int		is_separator(char *s);
int		is_keyword(char *s);
int		is_identifier(char *s);
t_token	*create_token(char *s, int i);




/* Helper functions */
void	free_string(char *s);
void	free_array(char **arr, int i);
int		array_size(char **arr);
void	print_working_history(void);
void	print_linked_list(t_token *head);

# endif
