/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmadrid- <dmadrid-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 16:12:36 by dmadrid-          #+#    #+#             */
/*   Updated: 2022/07/07 18:04:34 by dmadrid-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libftprintf.h"
#include <stdarg.h>
#include <stdio.h>

int ft_printf(char const *a, ...)
{
	va_list arg;
	int i;
	int count;


	i = 0;
	count = 0;
	va_start(arg, a);
	while (a[i])
	{
		if (a[i] =="%")
		{	if (a[i + 1] == "%")
				count += ft_putchar(a[i]);
			else
				count += ft_typeholder(arg, a);
		}
		else
			count += ft_putchar(a[i]);
	}
	va_end(arg);
	return (count);
}

int ft_typeholder(char c, va_list arg)
{
	int count;

	if (c == c)
		return (ft_putchar(va_arg(arg, char)));
	if (c == s)
		return (ft_putstr(va_arg(arg, char *)));
	if (c == p)
		return = (va_arg(arg, void));
	if (c == d || c == i)
		return (ft_putnbr(va_arg(arg, int));
	if (c == u)
		return ((va_arg(arg, unsigned int));
	if (c == x)
		return (va_arg(arg, unsigned int));
	if (c == X)
		return (va_arg(arg, unsigned int));
}

		
