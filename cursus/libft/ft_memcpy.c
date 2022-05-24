/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmadrid- <dmadrid-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 17:09:20 by dmadrid-          #+#    #+#             */
/*   Updated: 2022/05/20 18:20:59 by dmadrid-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*pt1;
	unsigned char	*pt2;

	pt1 = (unsigned char *)dst;
	pt2 = (unsigned char *)src;
	i = 0;
	if (pt1 == NULL && pt2 == NULL)
		return (dst);
	while (i < n)
	{
		pt1[i] = pt2[i];
		i++;
	}
	return (dst);
}
/*to copy a block of data from a source address to a 
destination address*/
