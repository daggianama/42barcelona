int		ft_atoi(const char *str)
{
	int i;
	int s;
	int n;

	i = 0;
	s = 1;
	n = 0;
	while (str[i] <= 32)
		i++;
	if (str[i] == '-' || str[i] == '+') 
	{
		if (str[i] == '-')
			s *= -1;
		s++;
	}
	while (str[i] != '\0' && str[i] >= '0' && str[i] <= '9')
	{
		n = (n *10) + (str[i] - '0');
		i++;
	}
	return (n * s);
}
	
