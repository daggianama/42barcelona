/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_p.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmadrid- <dmadrid-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 11:00:03 by dmadrid-          #+#    #+#             */
/*   Updated: 2022/08/18 19:00:35 by dmadrid-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

int	ft_putnbr_p(unsigned long n, int base)
{
	char	*print_base;
	int		count;
	int		c;

	print_base = "0123456789abcdef";
	c = n % base;
	count = 0;
	if (n / base > 0)
	{
		count += ft_putnbr_p(n / base, base);
		if (count == -1)
			return (-1);
	}
	count += ft_putchar_p(print_base[c]);
	if (count == -1)
		return (-1);
	return (count);
}
