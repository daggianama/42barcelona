/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmadrid- <dmadrid-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 18:59:44 by dmadrid-          #+#    #+#             */
/*   Updated: 2022/05/24 19:09:53 by dmadrid-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.c"
#include <stdlib.h>

char *ft_itoa(int n)
{
	int		size;
	char	*str;

	size = ft_strlen(n + '0');       
	c = (char *)malloc(sizeof(char) * size + 1)
	
}

/*
 * Reserva con malloc(3) y devuelve una string que
representa el número dado como argumento. Los
números negativos deben gestionarse correctamente.
*/
