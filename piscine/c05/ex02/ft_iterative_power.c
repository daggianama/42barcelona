/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmadrid- <dmadrid-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 17:21:15 by dmadrid-          #+#    #+#             */
/*   Updated: 2022/04/20 18:29:02 by dmadrid-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_iterative_power(int nb, int power)
{
	int	r;

	r = 1;
	if (power == 0)
		return (1);
	if (power < 1)
		return (0);
	while (power > 0)
	{
		r *= nb;
		power--;
	}
	return (r);
}
