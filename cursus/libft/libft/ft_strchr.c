char	*ft_strchr( const char *s, int c)
{
	while (*s)
	{
		if (*s == c)
			return ((char *)s);
		s++;
	}
	if (c == '\0')
		return ((char *)s);
}
/*
 The strchr() function locates the first occurrence
 of c (converted to a char) in the string pointed
to by s.  The terminating null character is considered
 to be part of the string; therefore if c is
 ‘\0’, the functions locate the terminating ‘\0’.
*/
