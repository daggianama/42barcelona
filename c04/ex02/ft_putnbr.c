/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmadrid- <dmadrid-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 15:51:21 by dmadrid-          #+#    #+#             */
/*   Updated: 2022/04/19 15:57:56 by dmadrid-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdio.h>
#include <unistd.h>

void	ft_putchar(char i)
{
	write(1, &i, 1);
}

void	ft_cases(int nb)
{
	if (nb == 0)
	{
		write(1, "0", 1);
	}
	if (nb == -2147483648)
	{
		write (1, "-", 1);
		write (1, "2147483648", 10);
	}
}

void	ft_putnbr(int nb)
{
	char	i;

	i = nb + '0';
	ft_cases(nb);
	while (nb < 0 && nb > -2147483648)
	{
		write(1, "-", 1);
		nb = -1 * nb;
	}
	if (nb >= 10)
	{
		ft_putnbr (nb / 10);
		ft_putnbr (nb % 10);
	}
	else if (nb > 0)
	{
		ft_putchar(i);
	}
}

int	main(void)
{
	int	nb_1;
	int	nb_2;
	int nb_3;
	int nb_4;
	int nb_5;

	nb_1 = -2147483648;
	nb_2 = -5006;
	nb_3 = 0;
	nb_4 = 5;
	nb_5 = 2147483647;

	ft_putnbr(nb_1);
	printf("\n");
	ft_putnbr(nb_2);
	printf("\n");
	ft_putnbr(nb_3);
	printf("\n");
	ft_putnbr(nb_4);
	printf("\n");
	ft_putnbr(nb_5);
	printf("\n");
	return (0);
}
