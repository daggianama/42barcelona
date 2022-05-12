/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmadrid- <dmadrid-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 19:13:16 by dmadrid-          #+#    #+#             */
/*   Updated: 2022/05/11 15:39:20 by dmadrid-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_isprint(unsigned char c)
{
	if (c >= 40 && c <= 176)
		return (1);
	else
		return (0);
}
/*
retorna 0 si es que el caracter es
printable */
