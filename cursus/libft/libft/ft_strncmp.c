/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmadrid- <dmadrid-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/14 12:25:59 by dmadrid-          #+#    #+#             */
/*   Updated: 2022/04/19 16:54:34 by dmadrid-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_strncmp(const char *s1, const char *s2, size_t n)
{	
	size_t	i;
	
	i = 0;
	if (size == 0)
		return (0);
	while (s1[i] && s2[i] && s1[i] == s2[i] && i < n - 1)
		i++;	}
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}
/*
 The strcmp() and strncmp() functions lexicographically 
compare the null-terminated strings s1 and
     s2.*/
