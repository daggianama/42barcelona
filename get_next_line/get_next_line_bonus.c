/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmadrid- <dmadrid-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 17:13:35 by dmadrid-          #+#    #+#             */
/*   Updated: 2022/10/03 17:15:31 by dmadrid-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"
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
	if (storage[i] == '\0')
		i = 0;
	while (storage[i] != '\0' && storage[i] != '\n')
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
	{
		free(storage);
		return (NULL);
	}
	return (storage);
}

char	*get_next_line(int fd)
{
	static char	*storage[1024];
	char		*line;

	if (fd < 0)
		return (NULL);
	storage[fd] = addstorage(fd, storage[fd]);
	if (!storage[fd])
		return (NULL);
	line = separate_line(storage[fd]);
	if (line == NULL)
	{
		free (storage[fd]);
		return (0);
	}
	storage[fd] = clean_storage(storage[fd]);
	return (line);
}
