/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isfunctions.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmadrid- <dmadrid-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 17:29:38 by dmadrid-          #+#    #+#             */
/*   Updated: 2022/05/12 17:30:11 by dmadrid-         ###   ########.fr       */
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

int	ft_isdigit(int a)
{
	if (a >= '0' && a <= '9')
		return (1);
	else
		return (0);
}

int	ft_isalnum(int a)
{
	if (a <= '9' && a >= '0')
		return (1);
	else if (a <= 'Z' && a >= 'A')
		return (1);
	else
		return (0);
}

int	ft_isascii(int a)
{
	if (a >= 0 && a <= 127)
		return (1);
	else
		return (0);
}

int	ft_isprint(unsigned char c)
{
	if (c >= 32 && c <= 176)
		return (1);
	else
		return (0);
}
