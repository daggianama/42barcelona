# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dmadrid- <dmadrid-@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/21 16:15:37 by dmadrid-          #+#    #+#              #
#    Updated: 2022/08/02 17:08:52 by dmadrid-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #
CC = gcc
SRC = ft_putchar_p.c ft_putstr_p.c ft_printf.c ft_putnbr_p.c ft_putnbr_m.c ft_putint.c ft_putnbr.c
OBJ = ${SRC:.c=.o}
OBJB = ${BON:.c=.o}
NAME = libftprintf.a
DEP = ft_printf.h
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

.PHONY: all clean fclean re
