/*
Assignment name  : ft_itoa
Expected files   : ft_itoa.c
Allowed functions: malloc
--------------------------------------------------------------------------------

Write a function that takes an int and converts it to a null-terminated string.
The function returns the result in a char array that you must allocate.

Your function must be declared as follows:

char	*ft_itoa(int nbr);
*/

#include <stdlib.h>
#include <stdio.h>

int		nbr_len(int nbr)
{
	int i;

	i = 1;
	if (nbr < 0)
	{
		i++;
		nbr *= -1;
	}
	while (nbr > 9)
	{
		nbr /= 10;
		i++;
	}
	return (i);
}

int		ft_div(int len)
{
	int i;

	i = 1;
	if (len == 1)
		return (1);
	while (len > 1)
	{
		i *= 10;
		len--;
	}
	return (i);
}

char	*ft_itoa(int nbr)
{
	int i;
	int len;
	int len2;
	char *result;

	i = 0;
	len = nbr_len(nbr);
	len2 = len;
	if ((result = (char*)malloc(sizeof(char) * (len + 1))) == NULL)
		return (NULL);
	if (nbr == -2147483648)
		return ("-2147483648\0");
	if (nbr < 0)
	{
		nbr *= -1;
		result[0] = '-';
		i++;
		len--;
	}
	while (i < len2)
	{
		result[i] = ((nbr / ft_div(len)) % 10) + 48;
		len--;
		i++;
	}
	result[i] = '\0';
	return (result);
}

int main(void)
{
	int	nbr;

	nbr = 479997;
	printf("%s", ft_itoa(nbr));
	return (0);
}
