/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lexer.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trpham <trpham@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/21 14:05:26 by trpham            #+#    #+#             */
/*   Updated: 2025/03/21 15:25:58 by trpham           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/shell.h"

int is_comment(char *s)
{
	int	i;

	i = 0;
	while(s[i])
	{
		if (s[i] == '#')
			return (0);
		i++;
	}
	return (-1);
}

/* Control operator: a token that performs a control function */
int	is_operator(char *s)
{
	char	*operators[] = {"||", "&&", "&", ";", ";;", ";&", ";;&", "|", "|&", "(", ")", "\n"};
	int		i;

	i = 0;
	while (operators[i])
	{
		if (ft_strcmp(operators[i], s) == 0)
			return (0);
		i++;	
	}
	return (-1);
}

/* Metacharacter: when unquoted, separates words */
int	is_separator(char *s)
{
	char	*metachar;
	int		i;
	// = {"|", "&", ";", "(", ")", "<", ">", " ", "\t", "\n"};
	
	metachar = "|&;()<>";
	i = 0;
	if (ft_strlen(s) == 1 && (*s == ' ' || *s == '\t' || *s == '\n'))
		return (0);
	while (metachar[i])
	{
		if (metachar[i] == *s)
			return (0);
		i++;
	}
	return (-1);
}
/* Shell reserves words */
int	is_keyword(char *s)
{
	char	*keywords[] = {"if", "then", "elif", "else", "fi", "time", "for",
			"in", "until", "while", "do", "done", "case", "esac", "coproc", "select",
			"function", "{", "}", "[[", "]]", "!"};
	int		i;

	i = 0;
	while (keywords[i])
	{
		if (ft_strcmp(keywords[i], s) == 0)
			return (0);
		i++;	
	}
	return (-1);
}

/* A word consisting solely of letters, numbers, and underscores,
	and beginning with a letter or underscore. 
	Names are used as shell variable and function names. 
	Also referred to as an identifier. */
int	is_identifier(char *s)
{
	printf("Is_identifier not working yet %s\n", s);
	return (0);
}
