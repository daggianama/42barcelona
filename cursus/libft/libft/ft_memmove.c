/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmadrid- <dmadrid-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 12:38:42 by dmadrid-          #+#    #+#             */
/*   Updated: 2022/05/20 20:20:48 by dmadrid-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*pt1;
	unsigned char	*pt2;

	if (dst < src)
		return (ft_memcpy(dst, src, n));
	pt1 = (unsigned char *)src;
	pt2 = (unsigned char *)dst;
	i = 0;
	if (n == '\0' || pt1 == pt2)
		return (dst);
	while (n--)
	{
		pt2[n] = pt1[n];
	}
	return (dst);
}
/* A function to copy block of 'n' bytes from source
 address 'src' to destination address 'dest'. */
