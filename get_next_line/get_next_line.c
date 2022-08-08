/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmadrid- <dmadrid-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 14:52:27 by dmadrid-          #+#    #+#             */
/*   Updated: 2022/08/08 18:49:49 by dmadrid-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <sys/type.h>
#include <sys/stat.h>
#include <fcntl.h>
#include "get_next_line.h"

char readbuffer(int fd, char *storage)  //utiliza read y reserva mem malloc
{

}

char get_next_line(int fd) 
{
	static char	*saved;
	char		*line;

	if (fd < 0)
		return (NULL);
	if (!ft_strchr(saved, '\n')
			storage = readbuf(fd, storage);
}
