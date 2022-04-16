unsigned int	ft_len(char	*str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

unsigned int	ft_strlcat(char	*dest, char	*src, unsigned int	size)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	while (i < size && dest[i])
	{
		dest++;
		i++;
	}
	j = 0;
	while (src[j])
	{
		if (j < size - i - 1)
			*dest++ = src[j];
		j++;
	}
	*dest = 0;
	return (ft_len(dest) + ft_len(src));
}
