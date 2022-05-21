#include "libft.h"
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
    char *pt = malloc (strlen (s) + 1);   // allocate memory
    if (pt != NULL)
        strcpy (pt,s);                    // copy string
    return pt;                            // return the memory
}
