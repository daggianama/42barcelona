/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmadrid- <dmadrid-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 17:55:58 by dmadrid-          #+#    #+#             */
/*   Updated: 2022/07/09 11:57:15 by dmadrid-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef  LIBFTPRINTF_H
# define LIBFTPRINTF_H

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>

int		ft_printf(char const *a, ...);
int		ft_putchar_p(char c);
int		ft_putstr(char *s);
int		ft_putnbr(int nb);

#endif
