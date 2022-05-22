/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmadrid- <dmadrid-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 13:23:25 by dmadrid-          #+#    #+#             */
/*   Updated: 2022/05/20 18:22:14 by dmadrid-         ###   ########.fr       */
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
/*
 The strchr() function locates the first occurrence
 of c (converted to a char) in the string pointed
to by s.  The terminating null character is considered
 to be part of the string; therefore if c is
 ‘\0’, the functions locate the terminating ‘\0’.
*/
