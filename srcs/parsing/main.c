/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trpham <trpham@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/20 13:57:54 by trpham            #+#    #+#             */
/*   Updated: 2025/03/20 15:25:52 by trpham           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "../includes/parser.h"
#include <stdio.h>
#include <stdlib.h>

int	main(int ac, char *av[], char *env[])
{
	if (ac != 2)
		return (EXIT_FAILURE);
	if (!*env)
		return (EXIT_FAILURE);
	(void) av;
	printf("%s\n", env[10]);	

	return (EXIT_SUCCESS);	
}