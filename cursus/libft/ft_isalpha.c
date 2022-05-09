/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmadrid- <dmadrid-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 17:28:20 by dmadrid-          #+#    #+#             */
/*   Updated: 2022/05/09 20:26:34 by dmadrid-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_isalpha(int a)
{	
	if (a >= 'A' && a <= 'Z')
		return (1);
	else if (a >= 'a' && a <= 'z')
		return (1);
	else
		return (0);
}
//verificar si el carácter es un alfabeto o no.
// Devuelve un valor distinto de cero si es un alfabeto; de lo contrario, devuelve 0.
// Por ejemplo, devuelve valores distintos de cero para 'a' a 'z' y 'A' a 'Z' y ceros para otros caracteres.
