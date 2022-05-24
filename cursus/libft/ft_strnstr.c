/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmadrid- <dmadrid-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 14:13:01 by dmadrid-          #+#    #+#             */
/*   Updated: 2022/05/20 21:29:26 by dmadrid-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t			i;
	size_t			j;
	unsigned char	*h;
	unsigned char	*n;

	h = (unsigned char *)haystack;
	n = (unsigned char *)needle;
	i = 0;
	if (n[0] == 0)
		return ((char *)haystack);
	while (h[i])
	{	
		j = 0;
		while (h[i + j] == n[j] && i + j < len)
		{
			if (n[j + 1] == 0)
				return ((char *)&h[i]);
			j++;
		}
		i++;
	}
	return (0);
}
