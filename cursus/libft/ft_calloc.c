#include "libft.h"
/*
** LIBRARY: <stdlib.h>
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
    
    ts = count * s;
    if(!(dst = (malloc(ts)))  //si es NULL
         return (0);
    ft_memset(dst, 0, ts);
    return dst;
}
