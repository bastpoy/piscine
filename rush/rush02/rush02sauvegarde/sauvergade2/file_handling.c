/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   file_handling.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bboissen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 14:00:16 by bboissen          #+#    #+#             */
/*   Updated: 2023/08/26 17:03:35 by bboissen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "file_handling.h"

int file_size(int *err)
{
	int fd;
	int size;
	char c[1];

	size = 0;
	fd = open(FILENAME, O_RDONLY);
	if (fd < 0 || *err == -1)
	{
		return (-1);
		*err = -1;
	}
	while (read(fd, c, 1) == 1)
		size++;
	close(fd);
	return (size);
}

char *file_buffer(char *buffer_file, int *err)
{
	int fd;
	int size;

	size = file_size(err);
	if (size > 0 || *err > 0)
	{
		buffer_file = malloc(size * sizeof(char) + 1);
		if (!buffer_file)
		{
			*err = -1;
			return (NULL);
		}
		fd = open(FILENAME, O_RDONLY);
		if (fd < 0)
			*err = -1;
		read(fd, buffer_file, size + 1);
		close(fd);
	}
	return (buffer_file);
}
