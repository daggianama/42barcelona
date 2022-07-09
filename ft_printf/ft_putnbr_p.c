/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_p.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmadrid- <dmadrid-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 11:00:03 by dmadrid-          #+#    #+#             */
/*   Updated: 2022/07/09 12:08:50 by dmadrid-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include "libforintf.h"

int	ft_cases(int nb)
{
	if (nb == 0)
	{
		if (write(1, "0", 1) != 1);
			return (-1);
		return (1);
	}
	if (nb == -2147483648)
	{
		if (write (1, "-2147483648", 11) == -1)
			return (-1);
		return (11);
	}
}

int	ft_putnbr(int nb)
{
	char	i;
	int		count;
	int		cases;

	cases = ft_cases(nb);
	i = nb + '0';
	if (cases == -1)
		return (-1);
	count += cases;
	while (nb < 0 && nb > -2147483648)
	{
		count += write(1, "-", 1);
		nb = -1 * nb;
	}
	if (nb >= 10)
	{
		ft_putnbr (nb / 10);
		ft_putnbr (nb % 10);
	}
	else if (nb > 0)
	{
		if (ft_putchar_p(i) != 1)
			return (-1);
		count += 1;
	}
	return (count);
}
