/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmadrid- <dmadrid-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 18:40:14 by dmadrid-          #+#    #+#             */
/*   Updated: 2022/09/27 19:11:58 by dmadrid-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "get_next_line.h"

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
	size_t	i;
	char	*res;

	i = 0;
	if (!s)
		return (0);
	if (start > ft_strlen(s))
	{
		res = malloc(sizeof(char) * (1));
		if (!res)
			return (NULL);
		res[0] = '\0';
		return (res);
	}
	if (ft_strlen(s) - start < len)
		len = ft_strlen(s) - start;
	res = malloc(sizeof(char) * (len + 1));
	if (!res)
		return (NULL);
	while (start < ft_strlen(s) && i < len && s[start])
		res[i++] = s[start++];
	res[i] = '\0';
	return (res);
}
/*
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
*/
char	*ft_strjoin(char *s1, char const *s2)
{
	char	*str;
	size_t	i;
	size_t	c;

	if (!s1)
	{
		s1 = malloc (sizeof(char) + 1);
		if (!s1)
			return (0);
		s1[0] = 0;
	}
	str = (char *)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2)) + 1);
	if (!str)
	{
		free (s1);
		return (NULL);
	}
	i = -1;
	c = -1;
	while (s1[++i])
		str[i] = s1[i];
	while (s2[++c])
		str[i + c] = (char)s2[c];
	str[i + c] = '\0';
	free (s1);
	return (str);
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
