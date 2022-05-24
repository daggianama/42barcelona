# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dmadrid- <dmadrid-@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/13 16:25:39 by dmadrid-          #+#    #+#              #
#    Updated: 2022/05/24 18:07:26 by dmadrid-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #
CC = gcc
SRC = ft_isalpha.c ft_isdigit.c	ft_isalnum.c ft_isascii.c ft_isprint.c ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c ft_strlcpy.c ft_strlcat.c ft_toupper.c ft_tolower.c ft_strchr.c ft_strrchr.c ft_strncmp.c ft_memchr.c ft_memcmp.c ft_strnstr.c ft_atoi.c ft_calloc.c ft_strdup.c ft_substr.c ft_strjoin.c ft_strtrim.c
OBJ = ${SRC:.c=.o}
NAME = libft.a
DEP = libft.h
RM = rm -f
FLAGS = -Wall -Werror -Wextra -c -I $(DEP)

all: $(NAME)

$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)

$(OBJ): $(SRC) $(DEP)
	$(CC) $(FLAGS) $(SRC)

clean:
	$(RM)  $(OBJ)

fclean: clean
		$(RM) $(NAME)

re: fclean all

.PHONY: all clean  fclean re
