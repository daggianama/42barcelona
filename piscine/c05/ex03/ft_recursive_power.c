/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmadrid- <dmadrid-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 18:30:27 by dmadrid-          #+#    #+#             */
/*   Updated: 2022/04/20 19:25:54 by dmadrid-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_recursive_power(int nb, int power)
{
	int	r;

	r = 1;
	if (power == 0)
		return (1);
	if (power < 1)
		return (0);
	return (nb * ft_recursive_power(nb, power - 1));
}
