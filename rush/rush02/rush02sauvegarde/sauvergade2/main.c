/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpoyet <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 18:00:55 by bpoyet            #+#    #+#             */
/*   Updated: 2023/08/26 18:01:03 by bpoyet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "lib.h"
#include "file_handling.h"
#include "input.h"

int main(void)
{
    int *err;
    int error;
    int n;
    char *buffer_file;
    char *buffer_number;
    char **splitchain;

    n = 0;
    err = &error;
    *err = 1;
    buffer_number = NULL;
    buffer_file = NULL;
    n = file_size(err);
    buffer_file = file_buffer(buffer_file, err);
    // printf("buffer :\n\n: %s", buffer_file);
    printf("%s\n", buffer_file);
    // printf("%s\n", get_file_content("40", buffer_file, err));
    buffer_number = list_next_number(buffer_file, buffer_number);
    printf("%s\n", buffer_number);
}