/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmadrid- <dmadrid-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 13:22:02 by dmadrid-          #+#    #+#             */
/*   Updated: 2022/05/20 18:25:07 by dmadrid-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strrchr(const char *s, int a)
{	
	size_t	i;

	i = ft_strlen(s);
	if (s[i] == 0 && (char)a == 0)
		return (&((char *)s)[i]);
	while (i > 0)
	{	
		i--;
		if (s[i] == (char)a)
			return (&((char *)s)[i]);
	}
	return (0);
}
/*
The strrchr() function is identical to strchr(),
 except it locates the last occurrence of c.
It counts from back to beginning to find the last coincidential c.
*/
