# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: trpham <trpham@student.hive.fi>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/12/13 10:30:26 by trpham            #+#    #+#              #
#    Updated: 2025/03/21 12:38:23 by trpham           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc 
CFLAGS = -Wall -Wextra -Werror

SRCS_DIR = ./srcs/parsing
SRCS = $(SRCS_DIR)/main.c \
		$(SRCS_DIR)/parser.c \
		$(SRCS_DIR)/lexer.c \
		$(SRCS_DIR)/helper.c
		

OBJS = $(SRCS:%.c=%.o)

NAME = minishell

LIBFT_DIR = ./libft
LIBFT_NAME = $(LIBFT_DIR)/libft.a

HEADERS_DIR = ./includes
HEADERS = $(HEADERS_DIR)/shell.h

LDFLAGS = -lreadline
	
all: $(NAME)

INCLUDES = -I$(LIBFT_DIR) 

%.o: %.c $(HEADERS)
	$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@

$(NAME): $(OBJS) $(LIBFT_NAME)
	$(CC) $(CFLAGS) $^ -o $@ $(LDFLAGS)

$(LIBFT_NAME):
	@make -C $(LIBFT_DIR)

clean:
	@make clean -C $(LIBFT_DIR)
	rm -f $(OBJS)

fclean: clean
	@make fclean -C $(LIBFT_DIR)
	rm -f  $(NAME)

re: fclean all

.PHONY: all clean fclean re
