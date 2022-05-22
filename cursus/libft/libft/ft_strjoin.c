/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmadrid- <dmadrid-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/22 17:36:01 by dmadrid-          #+#    #+#             */
/*   Updated: 2022/05/22 17:46:06 by dmadrid-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strjoin(char const *s1, char const *s2)
{
	unsigned char	*pt1;
	unsigned char	*pt2;
	size_t			
	pt1 = (unsigned char *)s1;
	pt2 = (unsigned char *)s2;
	while (pt1[i] || pt2[i])
	{
		pt1[i] = pt2[i];
		i++;
	}
	pt1[i] = '\0';
}
