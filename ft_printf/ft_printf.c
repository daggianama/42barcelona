/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmadrid- <dmadrid-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 16:12:36 by dmadrid-          #+#    #+#             */
/*   Updated: 2022/06/21 17:50:26 by dmadrid-         ###   ########.fr       */
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
			if (a[i + 1] == "%")
			count += ft_putchar(a[i]);
			else
			count += ft_typeholder(arg, a);
		else
			count += ft_putchar(a[i]);
	}
	va_end(arg);
	return (count);
}

int ft_typeholder(char c, va_list arg)
{
	int count;

	while (c == i)
	count = (va_arg(arg, int));
	while (c == s)
