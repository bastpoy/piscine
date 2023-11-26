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

int file_buffer(int size, char *buffer_file, int *err)
{
	int fd;
	int n;

	n = 0;
	buffer_file = malloc(size * sizeof(char) + 1);
	if (!buffer_file)
	{
		*err = -1;
		return (0);
	}
	fd = open(FILENAME, O_RDONLY);
	if (fd < 0)
		*err = -1;
	n = read(fd, buffer_file, size);
	close(fd);
	printf("%s\n", buffer_file);
	return (n);
}

int file_size(char *buffer_file, int *err)
{
	int size;
	int n;
	int i;

	size = MIN_SIZE_F;
	n = size + CHAR_STEP;
	i = n;
	while (size < n)
	{
		size = file_buffer(i, buffer_file, err);
		free(buffer_file);
		i += CHAR_STEP;
		n = file_buffer(i, buffer_file, err);
		free(buffer_file);
	}
	file_buffer(size, buffer_file, err);
	printf("%s\n", buffer_file);
	return (size);
}
