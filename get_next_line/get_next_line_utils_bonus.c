/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils_bonus.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmadrid- <dmadrid-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 17:09:22 by dmadrid-          #+#    #+#             */
/*   Updated: 2022/10/03 17:09:02 by dmadrid-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "get_next_line_bonus.h"

size_t	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	unsigned int	i;
	unsigned char	*pt1;
	unsigned char	*pt2;

	pt1 = (unsigned char *)dest;
	pt2 = (unsigned char *)src;
	if (size == 0)
		return (ft_strlen(src));
	i = 0;
	while (src[i] != '\0' && i < size - 1)
	{
		pt1[i] = pt2[i];
		i++;
	}
	pt1[i] = '\0';
	return (ft_strlen(src));
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*dst;
	size_t	i;
	size_t	size;

	i = 0;
	size = ft_strlen(s);
	if (start > size)
		start = size;
	if (size - start < len)
		len = size - start;
	dst = malloc(sizeof(unsigned char) * (len + 1));
	if (dst == NULL)
		return (NULL);
	ft_strlcpy(dst, &s[start], (len + 1));
	return (dst);
}

char	*ft_strjoin(char *s1, char const *s2)
{
	t_joinvar	x;

	if (!s1)
	{
		s1 = malloc (sizeof(char) + 1);
		if (!s1)
			return (0);
		s1[0] = 0;
	}
	x.str = (char *)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2)) + 1);
	if (!x.str || !s1 || !s2)
	{
		free (s1);
		return (NULL);
	}
	x.i = -1;
	x.c = -1;
	while (s1[++x.i])
		x.str[x.i] = s1[x.i];
	while (s2[++x.c])
		x.str[x.i + x.c] = (char)s2[x.c];
	x.str[x.i + x.c] = '\0';
	free (s1);
	return (x.str);
}

char	*ft_strchr(const char *s, int a)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == (char)a)
			return (&((char *)s)[i]);
		i++;
	}
	if ((char)a == '\0')
		if (s[i] == (char)a)
			return (&((char *)s)[i]);
	return (0);
}
