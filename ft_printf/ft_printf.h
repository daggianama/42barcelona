/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmadrid- <dmadrid-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 17:55:58 by dmadrid-          #+#    #+#             */
/*   Updated: 2022/08/02 17:11:08 by dmadrid-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef  FT_PRINTF_H
# define FT_PRINTF_H

# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>

int		ft_printf(char const *a, ...);
int		ft_putchar_p(char c);
int		ft_putstr_p(char *s);
int		ft_putnbr_p(unsigned long n, int base);
int		ft_putint(int i);
int		ft_putnbr_m(unsigned int n, int base);
int		ft_putnbr(unsigned int n, int base);

#endif
