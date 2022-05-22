/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmadrid- <dmadrid-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 17:15:28 by dmadrid-          #+#    #+#             */
/*   Updated: 2022/05/17 17:41:49 by dmadrid-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	ld;

	ld = ft_strlen(dest);
	i = ft_strlen(dest);
	j = 0;
	if (size == 0)
		return (ft_strlen(src));
	while (src[j] != '\0' && i < size - 1)
	{
		((unsigned char *)dest)[i] = ((unsigned char *)src)[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	if (size < ft_strlen(dest))
		return (size + ft_strlen(src));
	else
		return (ld + ft_strlen(src));
}
