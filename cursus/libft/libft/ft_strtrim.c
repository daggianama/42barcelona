#include "libft.h"

int	ft_setchar(char c, char const *set)   //encuentra coincidencia entre un char del string y el set
{
	size_t	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char  *ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	size_t	i;
	size_t	i;      //para recorrer desde el inicio
	size_t	f;      //para recorrer desde el final

	start = 0;
	while (s1[i] && ft_setchar(s1[i], set))       //cuenta en i numero de coincidencias desde inicio
		i++;
	f = ft_strlen(s1);
	while (f > i && ft_setchar(s1[f - 1], set))    //resta del len total coincidencias desde el final
		f--;
	str = (char*)malloc(sizeof(*s1) * (f - i + 1));    //f +1 es el sixe del string reservado
	if (!str)
		return (NULL);
	c = 0;               //define contador
	while (i < f)       //si queda string luego de las coincidencias del inicio y final
		str[c++] = s1[i++];
	str[c] = 0;         //inc;luye null al final
	return (str);
}    
/*
**Reserva con malloc(3) y devuelve una copia de ’s1’
**con los caracteres dados en ’set’ eliminados tanto
**del principio como del final
*/
