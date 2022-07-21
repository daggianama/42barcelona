/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_p.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmadrid- <dmadrid-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 11:00:03 by dmadrid-          #+#    #+#             */
/*   Updated: 2022/07/19 17:12:16 by dmadrid-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

int	ft_putnbr_p(unsigned  n, int base)
{
	char	*print_base;
	int		count;
	int		c;

	print_base = "0123456789abcdef";
	c = n % base;
	count = 0;
	if (n / base > 0)
		count += ft_putnbr(n / base, base);	
	count += ft_putchar( print_base[c]);
	return (count);
}
