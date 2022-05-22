/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmadrid- <dmadrid-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/22 12:10:49 by dmadrid-          #+#    #+#             */
/*   Updated: 2022/05/22 14:09:55 by dmadrid-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include "libft.h"

/*
** SYNOPSIS: memory allocation
**
** DESCRIPTION:
** 		The calloc() function contiguously allocates enough space for count
**	objects that are size bytes of memory each and returns a pointer to the
**	allocated memory. The allocated memory is filled with bytes of value
**	zero.
*/
void *ft_calloc(size_t count, size_t s)
{
    void *dst;
    size_t  ts;
  
	ts = (count * s);
	dst = malloc(ts + 1);
    if (dst == NULL)           //si es NULL
         return (0);
	ft_memset(dst, 0, ts);
    return (dst);
  //  return (dst);
}
