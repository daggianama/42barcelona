/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmadrid- <dmadrid-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 17:55:58 by dmadrid-          #+#    #+#             */
/*   Updated: 2022/07/14 18:54:35 by dmadrid-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef  FT_PRINTF_H
# define FT_PRINTF_H

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>

int		ft_printf(char const *a, ...);
int		ft_typeholder(const char c, va_list arg);
int		ft_putchar_p(char c);
int		ft_putstr_p(char *s);
int		ft_putnbr_p(int nb);
int		ft_putnbru_p(unsigned int nb);

#endif
