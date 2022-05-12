# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dmadrid- <dmadrid-@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/12 13:32:14 by dmadrid-          #+#    #+#              #
#    Updated: 2022/05/12 19:00:34 by dmadrid-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #
# -*- Makefile -*-

CFNT = is_functions.c string_functions.c
BINARY = libft.a

FLAGS = -g -Wall -Werror -Wextra

libft.o: libft.h $(CFNT)
	gcc $(FLAGS) -c $(CFNT)

libft.a: libft.o
	ar rcs libft.a libft.o
clean:
	rm -f $(BINARY) $(OBJS)
