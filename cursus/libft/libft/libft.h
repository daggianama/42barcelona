/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmadrid- <dmadrid-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 17:23:51 by dmadrid-          #+#    #+#             */
/*   Updated: 2022/05/22 17:36:42 by dmadrid-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef  LIBFT_H
# define LIBFT_H

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

int				ft_isalpha(int a);
int				ft_isdigit(int a);
int				ft_isalnum(int a);
int				ft_isascii(int a);
int				ft_isprint(int a);
size_t			ft_strlen(const char *str);
void			*ft_memset(void *str, int c, size_t n);
void			*ft_bzero(void *str, size_t n);
void			*ft_memcpy(void *dst, const void *src, size_t n);
void			*ft_memmove(void *dst, const void *src, size_t len);
size_t			ft_strlcpy(char *dest, const char *src, size_t size);
size_t			ft_strlcat(char *dest, const char *src, size_t size);
int				ft_toupper(int a);
int				ft_tolower(int a);
char			*ft_strchr(const char *s, int a);
char			*ft_strrchr(const char *s, int a);
int				ft_strncmp(const char *s1, const char *s2, size_t n);
void			*ft_memchr(const void *s, int c, size_t n);
int				ft_memcmp(const void *s1, const void *s2, size_t n);
char			*ft_strnstr(const char *haystack, const char *needle,
				size_t len);
int				ft_atoi(const char *str);

void			*ft_calloc(size_t count, size_t s);
char			*ft_strdup(const char *s);

char			*ft_substr(char const *s, unsigned int start, size_t len);
char			*ft_strjoin(char const *s1, char const *s2);

#endif
