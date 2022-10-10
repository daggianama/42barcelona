/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_X.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmadrid- <dmadrid-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 15:26:00 by dmadrid-          #+#    #+#             */
/*   Updated: 2022/08/18 18:57:39 by dmadrid-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

int	ft_putnbr_m(unsigned int n, int base)
{
	char	*print_base;
	int		count;
	int		c;

	print_base = "0123456789ABCDEF";
	c = n % base;
	count = 0;
	if (n / base > 0)
		count += ft_putnbr_m(n / base, base);
	if (count == -1)
		return (-1);
	count += ft_putchar_p(print_base[c]);
	if (count == -1)
		return (-1);
	return (count);
}
