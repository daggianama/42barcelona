/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmadrid- <dmadrid-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 14:52:27 by dmadrid-          #+#    #+#             */
/*   Updated: 2022/08/18 19:49:21 by dmadrid-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "get_next_line.h"

char readbuffer(int fd, char *storage)  //utiliza read y reserva mem malloc
{
	
}

char get_next_line(int fd) 
{
	static char	*storage;
	char		*line;

	if (fd < 0) //fd = filedescriptor
		return (NULL);
	if (storage && !ft_strchr(storage, '\n') || !storage)
		storage = readbuf(fd, storage);
}
