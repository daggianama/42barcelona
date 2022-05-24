/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmadrid- <dmadrid-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 13:28:05 by dmadrid-          #+#    #+#             */
/*   Updated: 2022/05/20 18:20:07 by dmadrid-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	int				differ;
	unsigned char	*pt1;
	unsigned char	*pt2;

	pt1 = (unsigned char *) s1;
	pt2 = (unsigned char *) s2;
	i = 0;
	while (i < n)
	{
		if (pt1[i] != pt2[i])
		{
			differ = (unsigned char)pt1[i] - (unsigned char)pt2[i];
			return (differ);
		}
		i++;
	}
	return (0);
}
