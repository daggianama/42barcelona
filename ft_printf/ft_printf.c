/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmadrid- <dmadrid-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 16:12:36 by dmadrid-          #+#    #+#             */
/*   Updated: 2022/07/18 17:26:42 by dmadrid-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

int ft_typeholder(const char c, va_list arg)
{
	if (c == 'c')
		return (ft_putchar_p(va_arg(arg, int)));
	if (c == 's')
		return (ft_putstr_p(va_arg(arg, char *)));
//	if (c == 'p')
//		return = (va_arg(arg, void));
	if (c == 'd' || c == 'i')
		return (ft_putnbr_p(va_arg(arg, int)));
	if (c == 'u')
		return (ft_putnbru_p(va_arg(arg, unsigned int)));
/*	if (c == 'x')
		return (va_arg(arg, unsigned int));
	if (c == 'X')
		return (va_arg(arg, unsigned int));*/
	return (0);
}

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
		if (a[i] == '%')
		{
			if (a[i + 1] == '%')
				count += ft_putchar_p(a[i++]);
			else
				count += ft_typeholder(a[i + 1], arg);
			i++;
		}
		else
			count += ft_putchar_p(a[i]);
		i++;
	}
	va_end(arg);
	return (count);
}

