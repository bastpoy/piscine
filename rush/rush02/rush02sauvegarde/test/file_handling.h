/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   file_handling.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bboissen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 14:09:37 by bboissen          #+#    #+#             */
/*   Updated: 2023/08/26 17:02:27 by bboissen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILE_HANDLING_H
# define FILE_HANDLING_H

# include <fcntl.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

# define FILENAME "numbers.dict"
# define MIN_SIZE_F 458
# define CHAR_STEP 50

int	file_size(char *buffer_file, int *err);
int	file_buffer(int size, char *buffer_file, int *err);

#endif /* FILE_HANDLING_H */
