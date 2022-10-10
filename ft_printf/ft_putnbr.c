/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmadrid- <dmadrid-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 18:20:47 by dmadrid-          #+#    #+#             */
/*   Updated: 2022/08/18 18:47:44 by dmadrid-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

int	ft_putnbr(unsigned int n, int base)
{
	char	*print_base;
	int		count;
	int		c;

	print_base = "0123456789abcdef";
	c = n % base;
	count = 0;
	if (n / base > 0)
	{	
		count += ft_putnbr(n / base, base);
		if (count == -1)
			return (-1);
	}
	count += ft_putchar_p(print_base[c]);
	if (count == -1)
		return (-1);
	return (count);
}
