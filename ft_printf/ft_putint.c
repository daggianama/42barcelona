/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putint.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmadrid- <dmadrid-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 17:08:59 by dmadrid-          #+#    #+#             */
/*   Updated: 2022/08/18 18:45:59 by dmadrid-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"
#include <stdio.h>

int	ft_putint(int i)
{
	int	count;

	count = 0;
	if (i < 0)
	{
		count += ft_putchar_p('-');
		i *= -1;
		if (count == -1)
			return (-1);
	}
	count += ft_putnbr(i, 10);
	if (count == -1)
		return (-1);
	return (count);
}
