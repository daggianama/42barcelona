/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmadrid- <dmadrid-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 18:46:40 by dmadrid-          #+#    #+#             */
/*   Updated: 2022/05/09 18:51:41 by dmadrid-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_isalnum (char a)
{
	if (a <= '9' && a >= '0')
		return (1);
	else if (a <= 'Z' && a >= 'A')
		return (1);
	else
		return (0);
}
