# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dmadrid- <dmadrid-@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/08 16:57:45 by dmadrid-          #+#    #+#              #
#    Updated: 2022/08/08 17:01:38 by dmadrid-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #
CC = gcc
SRC = get
OBJ = ${SRC:.c=.o}
OBJB = ${BON:.c=.o}
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
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME) $(OBJB) bonus

re: fclean all

bonus: $(NAME) $(OBJB) $(DEP)
	ar r  $(NAME) $(OBJB)
	touch bonus

.PHONY: all clean fclean re

