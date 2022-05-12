/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmadrid- <dmadrid-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 15:50:25 by dmadrid-          #+#    #+#             */
/*   Updated: 2022/05/12 15:57:47 by dmadrid-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
//#include <string.h>

char	*ft_memset(char *str, int c, size_t n)
{
	int	i;
	char *p;

	i = 0;
	p = (char*)str;
	while (i < n)
	{
		p[i] = c;
		i++;
	}
	return (str);
}

int main()
{
	char str[10] = "Hola mundo";

	ft_memset(str, '$', 6);
//	memset(str, '$', 6);
	printf("%s", str);
	return (0);
}
