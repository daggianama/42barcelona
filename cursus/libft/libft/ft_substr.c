/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmadrid- <dmadrid-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/22 13:07:29 by dmadrid-          #+#    #+#             */
/*   Updated: 2022/05/22 17:35:32 by dmadrid-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*dst;
	size_t	i;
	size_t 	size;

	i = 0;
	dst = (char *)malloc(sizeof(unsigned char) * (len + 1));
	size = ft_strlen(s);
	if (dst == NULL)
		return (NULL);
	if (start > size)
		return (dst);
	ft_strlcpy(dst, &s[start], (len + 1));
	return (dst);
	free(dst);
}
