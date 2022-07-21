/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbru_p.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmadrid- <dmadrid-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 18:49:10 by dmadrid-          #+#    #+#             */
/*   Updated: 2022/07/18 17:07:59 by dmadrid-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_cases(unsigned int nb)
{
	if (nb == 0)
	{
		if (write(1, "0", 1) != 1)
			return (-1);
		return (1);
	}
	return (0);
}

int	ft_putnbru_p(unsigned int nb)
{
	char	i;
	int		count;
	int		cases;

	count = 0;
	cases = ft_cases(nb);
	i = nb + '0';
	if (cases == -1)
		return (-1);
	count += cases;
	if (nb >= 10)
	{
		ft_putnbr_p(nb / 10);
		ft_putnbr_p(nb % 10);
	}
	else if (nb > 0)
	{
		if (ft_putchar_p(i) != 1)
			return (-1);
		count += 1;
	}
	return (count);
}
