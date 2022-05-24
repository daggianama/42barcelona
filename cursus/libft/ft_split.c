/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmadrid- <dmadrid-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 18:13:07 by dmadrid-          #+#    #+#             */
/*   Updated: 2022/05/24 18:56:16 by dmadrid-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stdlib.h>

int ft_countstr(char *s, char c)   //cuenta divisores = c/strings
{	
	int	i;

	i = 0;
	while (*s)
	{
		if(str[i] == c)
			i++;
		s++;
	}
	return((i +=) * 2);			//numero de arrays	
}

char	ft_farray(char *s, char num)    //recibe el array principal y el numero de arrays
{
	int		i;
	char	*str;

	str = 
	i = 0;
	if(str[i] == c)

		return
	while (s[j] &)
	{
		if(s[i]
	}

}

int	ft_fillarray
char **ft_split(char const *s, char c)
{
	char	**str;
	int		num;

  	str = (char **)malloc(sizeof() * );
	if (!str)
	return (NULL);
	num = ft_countstr(s, c);
	ft_farray(s, num)
}

/*Reserva con malloc(3) y devuelve un array de
strings obtenido al separar ’s’ con el caracter ’c’
como delimitador. El array debe terminar en NULL.
*/
