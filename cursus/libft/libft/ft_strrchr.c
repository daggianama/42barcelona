char	*ft_strrchr(const char *s, int c)
{	
	const	*str;

	str = s;
	while (*s)
		s++;
	if (str > 
	if (c == 0)
		return (char *(s));
	while (s >= str)
	{
		if (*s == c)
			return (char *(s));
		s--;
	}
	return (0);
}
/*
The strrchr() function is identical to strchr(),
 except it locates the last occurrence of c.
It counts from back to beginning to find the last coincidential c.
+/
