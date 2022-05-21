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
void *ft_calloc(size_t n, size_t s)
{
    void *s;
  
    s = malloc(num * s);
    if(s != NULL)
        memset(s, 0, num * s);
    return s;
}
