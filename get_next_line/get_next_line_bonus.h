/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmadrid- <dmadrid-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 17:25:59 by dmadrid-          #+#    #+#             */
/*   Updated: 2022/09/29 17:27:03 by dmadrid-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef  GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <fcntl.h>
# include <limits.h>

typedef struct s_joinvar
{
	char	*str;
	size_t	i;
	size_t	c;
}t_joinvar;

char	*ft_strchr(const char *s, int a);
char	*ft_substr(char const *s, unsigned int start, size_t len);
size_t	ft_strlen(const char *str);
char	*ft_strjoin(char *s1, char const *s2);
size_t	ft_strlcpy(char *dest, const char *src, size_t size);
char	*get_next_line(int fd);

#endif
