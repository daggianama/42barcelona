/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmadrid- <dmadrid-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 14:52:27 by dmadrid-          #+#    #+#             */
/*   Updated: 2022/09/27 19:24:40 by dmadrid-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "get_next_line.h"
#include <stdlib.h>

char	*clean_storage(char *storage)
{
	char	*ptr;
	char	*new_storage;
	int		len;

	if (!ft_strchr(storage, '\n'))
	{
		free (storage);
		new_storage = NULL;
		return (NULL);
	}
	else
	{
		ptr = ft_strchr(storage, '\n');
		len = (ptr - storage) + 1;
	}
	if (!ptr)
	{
		free (storage);
		return (NULL);
	}
	new_storage = ft_substr(storage, len, (ft_strlen(storage) - len));
	if (!new_storage)
		return (NULL);
	free (storage);
	return (new_storage);
}

char	*separate_line(char *storage)
{
	char	*line;
	int		i;
	
	i = 0;
	if (!storage[0])
		return (NULL);
	while(storage[i] != '\n' && storage[i] != '\0')
		i++;
	line = ft_substr(storage, 0, i + 1);
	return (line);
}

char	*addstorage(int fd, char *storage)
{
	char	*buffer;
	int		byte;

	byte = 1;
	buffer = malloc (sizeof(char) * (BUFFER_SIZE + 1));
	if (!buffer)
		return (0);
	buffer[0] = '\0';
	while (byte > 0 && !ft_strchr(buffer, '\n'))
	{
		byte = read(fd, buffer, BUFFER_SIZE);
		if (byte > 0)
		{
			buffer[byte] = '\0';
			storage = ft_strjoin(storage, buffer);
		}
	}
	free(buffer);
	if (byte == -1)
		return (NULL);
	return (storage);
}

char	*get_next_line(int fd)
{
	static char	*storage;
	char		*line;

	if (fd < 0)
		return (NULL);
	storage = addstorage(fd, storage);
	if (!storage)
		return (NULL);
	line = separate_line(storage);
	if (line == NULL)
	{
		free (storage);
		return (0);
	}
	storage = clean_storage(storage);
	return (line);
}
