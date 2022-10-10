/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmadrid- <dmadrid-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 16:12:36 by dmadrid-          #+#    #+#             */
/*   Updated: 2022/08/24 18:14:57 by dmadrid-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"
#include <stdio.h>
#include <sys/stat.h>
#include <fcntl.h>

int	ft_typeholder(const char c, va_list arg)
{
	if (c == 'c')
		return (ft_putchar_p(va_arg(arg, int)));
	if (c == 's')
		return (ft_putstr_p(va_arg(arg, char *)));
	if (c == 'p')
	{
		if (ft_putstr_p("0x") != 2)
			return (-1);
		return (ft_putnbr_p(va_arg(arg, unsigned long), 16) + 2);
	}
	if (c == 'd' || c == 'i')
		return (ft_putint(va_arg(arg, int)));
	if (c == 'u')
		return (ft_putnbr(va_arg(arg, unsigned int), 10));
	if (c == 'x')
		return (ft_putnbr(va_arg(arg, unsigned int), 16));
	if (c == 'X')
		return (ft_putnbr_m(va_arg(arg, unsigned int), 16));
	return (0);
}

int	ft_percent(int count, char const *a, va_list arg, int i)
{
	if (a[i + 1] == '%')
		count += ft_putchar_p(a[i + 1]);
	else
		count += ft_typeholder(a[i + 1], arg);
	if (count == -1)
		return (-1);
	return (count);
}

int	ft_printf(char const *a, ...)
{
	va_list	arg;
	int		i;
	int		count;

	i = 0;
	count = 0;
	va_start(arg, a);
	while (a[i])
	{
		if (a[i] == '%')
		{
			count = ft_percent(count, a, arg, i);
		i++;
		}
		else
			count += ft_putchar_p(a[i]);
		if (count == -1)
			return (-1);
		i++;
	}
	va_end(arg);
	return (count);
}

/*
int	main(void)
{
	int a;
	int c;
	int c2;

	a = 55;
	c2 = printf("%% %d\n", a);
	c = ft_printf("%% %d\n", a);

	printf("%d\n", c2);
	printf("%d\n", c);
}
*/
