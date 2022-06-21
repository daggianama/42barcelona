# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dmadrid- <dmadrid-@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/21 16:15:37 by dmadrid-          #+#    #+#              #
#    Updated: 2022/06/21 16:19:52 by dmadrid-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #
CC = gcc
SRC = ft_isalpha.c 
OBJ = ${SRC:.c=.o}
OBJB = ${BON:.c=.o}
NAME = libftprintf.a
DEP = libftprintf.h
RM = rm -f
FLAGS = -Wall -Werror -Wextra -c -I $(DEP)

all: $(NAME)

$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)

$(OBJ): $(SRC) $(DEP)
	$(CC) $(FLAGS) $(SRC)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME) $(OBJB) bonus

re: fclean all

bonus: $(NAME) $(OBJB) $(DEP)
	ar r  $(NAME) $(OBJB)
	touch bonus

.PHONY: all clean fclean re
dmadrid-@cbr6s6 libft %

