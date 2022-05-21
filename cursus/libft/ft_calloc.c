#include "libft.h"

** SYNOPSIS: save a copy of a string (with malloc, size-bounded)
/*
** DESCRIPTION:
** 		The strdup() function allocates sufficient memory for a copy of the
**	string s1, does the copy, and returns a pointer to it.  The pointer may
**	subsequently be used as an argument to the function free(3).
** 		The strndup() function is similar, but only copies at most n bytes.  If
**	s is longer than n, only n bytes are copied, and a terminating null byte
**	('\0') is added.
*/
void *ft_calloc(size_t n, size_t s)
{
    void *s;
  
    s = malloc(num * s);
    if(s != NULL)
        memset(s, 0, num * s);
    return s;
}
