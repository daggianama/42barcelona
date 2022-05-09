/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maintest.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmadrid- <dmadrid-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 19:30:53 by dmadrid-          #+#    #+#             */
/*   Updated: 2022/05/09 20:17:07 by dmadrid-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <ctype.h>

int	main()
{
	char	c; 
	char	ascii;

	ascii = 0;
	c = '\0';
	while (c <= 177)
	{
		if (isalpha(c) != '0')
			printf ("%c is alpha \n", c);
		if (isdigit(c) != '0')
			printf ("%c is digit \n", c);
		c++;
	}
}
