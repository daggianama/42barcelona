/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmadrid- <dmadrid-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 17:23:51 by dmadrid-          #+#    #+#             */
/*   Updated: 2022/05/12 18:37:03 by dmadrid-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

int				ft_isalpha(int a);
int				ft_isdigit(int a);
int				ft_isalnum(int a);
int				ft_isascii(int a);
int				ft_isprint(unsigned char c);
unsigned long	ft_strlen(char *str);
void			*ft_memset(void *str, int c, unsigned int n);
void			*ft_bzero(void *str, unsigned int n);
void			*ft_memcpy(char *dst, char *src, unsigned int n);
#endif
