/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmadrid- <dmadrid-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 12:17:58 by dmadrid-          #+#    #+#             */
/*   Updated: 2022/05/22 14:04:49 by dmadrid-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	unsigned int	i;
	unsigned char	*pt1;
	unsigned char	*pt2;

	pt1 = (unsigned char *)dest;
	pt2 = (unsigned char *)src;
	if (size == 0)
		return (ft_strlen(src));
	i = 0;
	while (src[i] != '\0' && i < size - 1)
	{
		pt1[i] = pt2[i];
		i++;
	}
	pt1[i] = '\0';
	return (ft_strlen(src));
}
