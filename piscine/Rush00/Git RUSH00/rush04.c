/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmadrid- <dmadrid-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/03 21:22:37 by dmadrid-          #+#    #+#             */
/*   Updated: 2022/04/03 21:52:32 by dmadrid-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(int c);
void	fisrt_line(int y, int x);
void	last_line(int y, int x);
void	pattern(int x, int y, int a, int b);

void	rush(int x, int y)
{
	int	a;
	int	b;

	if (x <= 0 || y <= 0)
		write(1, "Negative number not allowed", 27);
	else
		pattern(a, b, x, y);
}

void	first_line(int a, int x)
{
	if (a == 1)
		ft_putchar(65);
	else if (a == x)
		ft_putchar(67);
	else
		ft_putchar(66);
}

void	last_line(int a, int x)
{
	if (a == 1)
		ft_putchar(67);
	else if (a == x)
		ft_putchar(65);
	else
		ft_putchar(66);
}

void	pattern(int a, int b, int x, int y)
{
	b = 1;
	while (b <= y)
	{
		a = 1;
		while (a <= x)
		{
			if (b == 1)
				first_line(a, x);
			else if (b == y)
				last_line(a, x);
			else
			{
				if (a == 1 || a == x)
					ft_putchar(66);
				else
					ft_putchar(32);
			}
			a++;
		}
		ft_putchar(10);
		b++;
	}
}
