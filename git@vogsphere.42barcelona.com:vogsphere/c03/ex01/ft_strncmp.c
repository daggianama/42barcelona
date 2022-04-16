/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmadrid- <dmadrid-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/14 12:25:59 by dmadrid-          #+#    #+#             */
/*   Updated: 2022/04/14 13:38:02 by dmadrid-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_strncmp(char *s1, char *s2, unsigned int n)
{	
	unsigned int	i;
	int				differ;

	i = 0;
	while ((s1[i] != '\0') < n || (s2[i] != '\0') < n)
	{
		if (s1[i] != s2[i])
		{
			differ = s1[i] - s2[i];
			return (differ);
		}
		i++;
	}
	return (0);
}
