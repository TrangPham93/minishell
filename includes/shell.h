/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   shell.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trpham <trpham@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/19 16:41:06 by trpham            #+#    #+#             */
/*   Updated: 2025/04/08 19:35:32 by trpham           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHELL_H
# define SHELL_H

# include "../libft/includes/libft.h"
# include <signal.h>
# include <stdio.h>
# include <readline/readline.h>
# include <readline/history.h>


// # define OPERATOR 1
// # define SEPARATOR 2
// # define IDENTIFIER 4
// # define PIPE 1
// # define REDIRECTION 2
// # define QUOTE 3
// # define KEYWORD 4
// # define WORD 5

typedef enum	e_token_type
{
	REDIRECTION,
	QUOTE,
	KEYWORD,
	WORD,
	PIPE,
	IN, //<
	OUT, //>
	HEREDOC, // <<
	APPEND // >>
}	t_token_type;

typedef struct	s_token
{
	char			*value;
	t_token_type	type; 
	struct s_token	*next;
	struct s_token	*prev;
}	t_token;

typedef enum	e_error_type
{
	ERR_NONE,
	ERR_MALLOC,
	ERR_PIPE
}	t_error_type;

typedef struct s_shell
{
	char			**envp;
	char			*pwd;
	char			*old_pwd;
	char			*path;
	t_error_type	err_type;
	t_token			*tokens;
}	t_shell;

/* Validate input */
int	validate_input(char *str);


/* Tokenization */
int		is_comment(char *s);
int		is_keyword(char *s);
int	is_quote(char *s);
int	is_pipe(char *s);

int		is_redirection(char *s);
int		is_operator(char *s);
int		is_separator(char *s);
int		is_identifier(char *s);

t_token	*create_token(char *s, t_token_type i);
void	validate_token(t_token *token);



/* Helper functions */
void	free_string(char *s);
void	free_array(char **arr, int i);
int		array_size(char **arr);
void	print_working_history(void);
void	print_linked_list(t_token *head);
void	print_syntax_error(char *msg);


# endif
