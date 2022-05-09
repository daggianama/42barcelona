/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmadrid- <dmadrid-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 15:51:21 by dmadrid-          #+#    #+#             */
/*   Updated: 2022/04/20 19:38:47 by dmadrid-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char i)
{
	write (1, &i, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		ft_putchar('-');
		ft_putchar('2');
		nb = 147483648;
	}
	if (nb < 0)
	{
		ft_putchar('-');
		nb *= -1;
	}
	if (nb > 9)
	{
		ft_putnbr (nb / 10);
		ft_putnbr (nb % 10);
	}
	if (nb < 10)
		ft_putchar(nb + 48);
}
/*
int	main(void)
{
	int	nb_1;
	int	nb_2;
	int nb_3;
	int nb_4;
	int nb_5;

	nb_1 = -2147483648;
	nb_2 = -506;
	nb_3 = 0;
	nb_4 = 42;
	nb_5 = 217483647;

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
}*/
