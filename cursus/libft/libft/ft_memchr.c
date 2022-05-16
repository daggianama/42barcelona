void *memchr(const void *s, int c, size_t n);
{	
	size_t	i;
	
	i = 0;
	while(*s && i < n)
	{
		if (*s == c)
			return ((void *)s);
		s++;
	}
	return (0);
}
/*
This function scans the first 'n' bytes of 's' for the first occurrence of
** 'c'.*/
