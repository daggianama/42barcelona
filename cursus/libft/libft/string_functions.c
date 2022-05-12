/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   string_functions.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmadrid- <dmadrid-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 17:32:54 by dmadrid-          #+#    #+#             */
/*   Updated: 2022/05/12 19:01:43 by dmadrid-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned long	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

void	*ft_memset(void *str, int c, unsigned int n)
{
	unsigned int		i;
	char	*p;

	i = 0;
	p = (char *)str;
	while (i < n)
	{
		p[i] = c;
		i++;
	}
	return (str);
}

void	*ft_bzero(char *str, unsigned int n)
{
	unsigned int		i;
	char	*p;

	i = 0;
	p = str;
	while (i < n)
	{
		p[i] = '\0';
		i++;
	}
	return (str);
}

void	*ft_memcpy(char *dst, char *src, unsigned int n)
{
	unsigned int		i;

	i = 0;
	while (i < n)
	{
		dst[i] = src[i];
		i++;
	}
	return (dst);
}
