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

    err = &error;
    *err = 1;
    buffer_file = NULL;
    n = file_size(buffer_file, err);
    printf("size: %d,error: %d\n", n, *err);
    // printf("%s", get_file_content("30", buffer_file, err));
}