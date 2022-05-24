/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmadrid- <dmadrid-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/18 18:47:56 by dmadrid-          #+#    #+#             */
/*   Updated: 2022/05/20 18:16:51 by dmadrid-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_atoi(const char *str)
{
	int				i;
	int				n;
	int				s;
	unsigned char	*pt;

	pt = (unsigned char *)str;
	s = 1;
	n = 0;
	i = 0;
	while (pt[i] == '\f' || pt[i] == '\t' || pt[i] == '\v'
		|| pt[i] == '\r' || pt[i] == ' ' || pt[i] == '\n')
		i++;
	if (pt[i] == '+' || pt[i] == '-')
	{
		if (pt[i] == '-')
			s = s * -1;
		i++;
	}
	while (pt[i] >= '0' && pt[i] <= '9')
	{
		n = (n * 10) + (pt[i] - '0');
		i++;
	}
	return (n * s);
}
