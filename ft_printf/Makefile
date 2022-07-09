# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dmadrid- <dmadrid-@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/21 16:15:37 by dmadrid-          #+#    #+#              #
#    Updated: 2022/07/09 11:51:43 by dmadrid-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #
CC = gcc
SRC = ft_putchar_p.c ft_putstr_p.c ft_printf.c ft_putnbr_p.c
OBJ = ${SRC:.c=.o}
OBJB = ${BON:.c=.o}
DEP = libprintf.h
RM = rm -f
FLAGS = -Wall -Werror -Wextra -c -I $(DEP)

all: $(OBJ)

$(OBJ): $(SRC) $(DEP)
	$(CC) $(FLAGS) $(SRC)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME) $(OBJB) bonus

re: fclean all

.PHONY: all clean fclean re
