/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmadrid- <dmadrid-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/22 12:14:39 by dmadrid-          #+#    #+#             */
/*   Updated: 2022/05/22 14:15:26 by dmadrid-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stdlib.h>

/*
** SYNOPSIS: save a copy of a string (with malloc, size-bounded)
**
** DESCRIPTION:
** 		The strdup() function allocates sufficient memory for a copy of the
**	string s1, does the copy, and returns a pointer to it.  The pointer may
**	subsequently be used as an argument to the function free(3).
** 		The strndup() function is similar, but only copies at most n bytes.  If
**	s is longer than n, only n bytes are copied, and a terminating null byte
**	('\0') is added.
*/
char *ft_strdup (const char *s)
{
    char	*dst;
	size_t	size;

	size = (ft_strlen(s) + 1);
	dst = malloc(sizeof(char) * size);         // allocate memory
    if (dst == NULL)
		return (NULL);
    ft_strlcpy(dst, s, size);                    // copy string
    return (dst);                            // return the memory
}
