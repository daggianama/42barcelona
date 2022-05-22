/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maintest.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmadrid- <dmadrid-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 19:30:53 by dmadrid-          #+#    #+#             */
/*   Updated: 2022/05/16 13:14:14 by dmadrid-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include "libft.h"

int	main()
{
// ALL FUNCTIONS IS...
/*	char	c; 

	c = '\0';

	while (c <= '~')
	{
//		if (isalpha(c) != 0)
//			printf ("%c is alpha \n", c);
//		if (ft_isalpha(c) != 0)
//			printf ("%c IS MY ALPHA \n", c);
//		if (isdigit(c) != 0)
//			printf ("%c is digit \n", c);
//		if (ft_isdigit(c) != 0)
//			printf ("%c IS MY DIGIT \n", c);
//		if (isascii(c) != 0)
//			printf ("%c is ascii \n", c);
//		if (ft_isascii(c) != 0)
//			printf ("%c IS MY ASCII \n", c);
		if (isprint(c) != 0)
			printf ("%c is print \n", c);
		if (ft_isprint(c) != 0)
			printf ("%c IS MY PRINT \n", c);
		c++;
	} */

char str[17] = "count this string";
char copy[8] = "12345678";

//FT_STRLEN
/*
	printf ("The lenght of character in the string is: %lu \n", strlen(str));
	printf ("MY LENGHT of character in the string is: %lu \n", ft_strlen(str));
	*/

//MEMSET
	
	memset(str, '$', sizeof(char) * 3);
	printf ("%s\n", str);
	ft_memset(str, '$', sizeof(char) * 3);
	printf ("%s my memset\n", str);


//BZERO
/*
	bzero(str, sizeof(char) * 2);
	printf ("%s\n", str);
	ft_bzero(str, sizeof(char) * 3 );
	printf ("%s \n", str);
	return (0);
*/
//MEMCPY

	memcpy(str+2, copy, sizeof(char) * 4);
	printf ("%s \n", str);
	ft_memcpy(str+2, copy, sizeof(char) * 4);
	printf ("%s my memcpy \n", str);
	return (0);
	return (0);
}
//MEMMMOVE
	
	


