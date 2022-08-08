/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmadrid- <dmadrid-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 16:57:10 by dmadrid-          #+#    #+#             */
/*   Updated: 2022/08/08 16:57:22 by dmadrid-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strchr(const char *s, int a)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == (char)a)
			return (&((char *)s)[i]);
		i++;
	}
	if ((char)a == '\0')
		if (s[i] == (char)a)
			return (&((char *)s)[i]);
	return (0);
}
