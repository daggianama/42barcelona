/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmadrid- <dmadrid-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/22 17:36:01 by dmadrid-          #+#    #+#             */
/*   Updated: 2022/05/24 17:03:52 by dmadrid-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stdlib.h>

char *ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	size_t	size;
	size_t	i;
	size_t	c;

	size = (ft_strlen(s1) + ft_strlen(s2));
	str = (char *)malloc(sizeof(char) * size + 1);
	if (!str)
		return(NULL);	
	i = 0;
	c = 0;	
	while (i < ft_strlen(s1))
	{
		str[i] = (char)s1[i];
		i++;
	}
	while (c < ft_strlen(s2) && *s2)
	{
		str[i] = (char)s2[c];
		c++;
		i++;
	}
	str[i] = '\0';
	return (str);
}
/*
 * Reserva con malloc(3) una nueva string, basada en
la unión de las dos strings dadas como parámetros.
*/
