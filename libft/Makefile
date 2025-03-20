# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: trpham <trpham@student.hive.fi>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/30 15:05:22 by trpham            #+#    #+#              #
#    Updated: 2025/01/17 13:29:35 by trpham           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc
CFLAGS = -Wall -Wextra -Werror

SRC_DIR = sources
LIBFT_DIR = $(SRC_DIR)/libft
PRINTF_DIR = $(SRC_DIR)/ft_printf
GNL_DIR = $(SRC_DIR)/get_next_line

SRCS = $(LIBFT_DIR)/ft_isalpha.c \
       $(LIBFT_DIR)/ft_isdigit.c \
       $(LIBFT_DIR)/ft_isalnum.c \
       $(LIBFT_DIR)/ft_isascii.c \
       $(LIBFT_DIR)/ft_isprint.c \
       $(LIBFT_DIR)/ft_strlen.c \
       $(LIBFT_DIR)/ft_memset.c \
       $(LIBFT_DIR)/ft_bzero.c \
       $(LIBFT_DIR)/ft_memcpy.c \
       $(LIBFT_DIR)/ft_memmove.c \
       $(LIBFT_DIR)/ft_strlcat.c \
       $(LIBFT_DIR)/ft_strlcpy.c \
       $(LIBFT_DIR)/ft_toupper.c \
       $(LIBFT_DIR)/ft_tolower.c \
       $(LIBFT_DIR)/ft_strchr.c \
       $(LIBFT_DIR)/ft_strrchr.c \
       $(LIBFT_DIR)/ft_strncmp.c \
       $(LIBFT_DIR)/ft_strcmp.c \
       $(LIBFT_DIR)/ft_memchr.c \
       $(LIBFT_DIR)/ft_memcmp.c \
       $(LIBFT_DIR)/ft_strnstr.c \
       $(LIBFT_DIR)/ft_atoi.c \
       $(LIBFT_DIR)/ft_calloc.c \
       $(LIBFT_DIR)/ft_strdup.c \
       $(LIBFT_DIR)/ft_substr.c \
       $(LIBFT_DIR)/ft_strjoin.c \
       $(LIBFT_DIR)/ft_strtrim.c \
       $(LIBFT_DIR)/ft_split.c \
       $(LIBFT_DIR)/ft_itoa.c \
       $(LIBFT_DIR)/ft_strmapi.c \
       $(LIBFT_DIR)/ft_striteri.c \
       $(LIBFT_DIR)/ft_putchar_fd.c \
       $(LIBFT_DIR)/ft_putstr_fd.c \
       $(LIBFT_DIR)/ft_putendl_fd.c \
       $(LIBFT_DIR)/ft_putnbr_fd.c \
       $(PRINTF_DIR)/ft_printf.c \
       $(PRINTF_DIR)/ft_putchar_fd.c \
       $(PRINTF_DIR)/ft_putnbr_fd.c \
       $(PRINTF_DIR)/ft_puthex_fd.c \
       $(PRINTF_DIR)/ft_putnbr_unsigned.c \
       $(PRINTF_DIR)/ft_putptr_fd.c \
       $(PRINTF_DIR)/ft_putstr_fd.c \
       $(GNL_DIR)/get_next_line.c 

SRCS_BONUS = $(LIBFT_DIR)/ft_lstnew_bonus.c \
              $(LIBFT_DIR)/ft_lstadd_front_bonus.c \
              $(LIBFT_DIR)/ft_lstsize_bonus.c \
              $(LIBFT_DIR)/ft_lstlast_bonus.c \
              $(LIBFT_DIR)/ft_lstadd_back_bonus.c \
              $(LIBFT_DIR)/ft_lstdelone_bonus.c \
              $(LIBFT_DIR)/ft_lstiter_bonus.c \
              $(LIBFT_DIR)/ft_lstclear_bonus.c \
              $(LIBFT_DIR)/ft_lstmap_bonus.c

OBJ_DIR = objs
OBJS = $(patsubst $(SRC_DIR)/%.c, $(OBJ_DIR)/%.o, $(SRCS))
OBJS_BONUS = $(patsubst $(SRC_DIR)/%.c, $(OBJ_DIR)/%.o, $(SRCS_BONUS))

NAME = libft.a

# A marker file used to indicate whether bonus files were included.
BONUS_NAME = .bonus

# Creates the necessary directories for the object files
# compile the source files $< into object files $@
# If -o is not specified, the default is to put an executable file in a.out
$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c
	@mkdir -p $(@D) 
	$(CC) $(CFLAGS) -I$(SRC_DIR) -c $< -o $@
	
# Uses the ar command to create the archive ($@) from the object files $^
# Create the actual library
# ar maintain archive libraries, which is a collection of files, typically object files.
#  create a new library, add members to an existing library, delete members from a library,
#  extract members from a library, and print a table of contents for a library.
#  -r Replaces or adds file to archive.
#  -c Suppresses the message that is normally printed when ar creates a new archive file
#  -s Regenerates the external symbol table regardless of whether the command modifies the archive.
#  -rcs rcs can be seen to mean replace, create, sort
# $^ prequisite files, which mean the OBJECT
$(NAME): $(OBJS)
	ar rcs $(NAME) $^

all: $(NAME)

bonus: $(OBJ_DIR) $(BONUS_NAME) 

$(BONUS_NAME): $(OBJS) $(OBJS_BONUS)
	ar rcs $(NAME) $^
	touch $(BONUS_NAME)

clean:
	rm -rf $(OBJ_DIR)

fclean: clean
	rm -f $(NAME) $(BONUS_NAME)

re: fclean all

# The purpose of these commands is to compile the source files into object files and then link those object files into a shared library (libft.so).
# Shared libraries (.so files) can be dynamically loaded by programs at runtime, 
# which is different from static libraries (.a files) that are included at compile time.

# so:
# 	$(CC) -nostartfiles -fPIC $(CFLAGS) $(SRCS) $(SRCS_BONUS)
# 	gcc -nostartfiles -shared -o libft.so $(OBJS) $(OBJS_BONUS)

# Declares these targets as phony, meaning they do not represent files. 
# This prevents conflicts if files with these names exist.
.PHONY: all clean fclean re bonus



