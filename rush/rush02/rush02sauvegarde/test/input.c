#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "file_handling.h"
#include "lib.h"
#include "input.h"

char *ft_strstr_size(char *buffer_size, char *to_find, int size)
{
    int i;
    int j;

    i = 0;
    if (*to_find == '\0')
    {
        return (buffer_size);
    }
    while (buffer_size[i])
    {
        j = 0;
        while ((buffer_size[i + j] == to_find[j]) && j < size)
        {
            j++;
        }
        if (j == size)
        {
            return (buffer_size + i);
        }
        i++;
    }
    return (0);
}

int ft_strlen_bsn(char *str)
{
    int i;

    i = 0;
    while (str[i] != '\n')
    {
        i++;
    }
    return (i);
}

int size_to_print(char *buffer_file, char *to_find)
{
    int i;
    int j;

    i = 0;
    j = 0;
    if (to_find[j] == '\0')
    {
        return (0);
    }
    while (buffer_file[i] != '\0')
    {
        printf("je return 1\n");
        while (buffer_file[j + i] == to_find[j] && buffer_file[j + i] != '\0')
        {
            j++;
        }
        if (to_find[j] == '\0')
            return (i);
        i++;
        j++;
    }
    return (0);
}

void delete_caracter(char *str, int index)
{
    while (str[index] != '\n')
    {
        str[index] = str[index + 1];
        index++;
    }
}

char *get_file_content(char *to_find, char *buffer_file, int *err)
{
    char *strfind;
    int i;
    int index_begin_word;
    int n;

    i = 0;
    n = size_to_print(buffer_file, to_find);
    strfind = (char *)malloc((file_size(buffer_file, err) - n) * sizeof(char) + 1);
    strfind = ft_strstr(buffer_file, to_find);
    while (strfind[i] != ':')
        i++;
    while (!(strfind[i] == ' ' && strfind[i + 1] > 32 && strfind[i + 1] < 127))
    {
        i++;
    }
    index_begin_word = i + 1;
    while (strfind[i] != '\n')
    {
        if (strfind[i] == ' ' && strfind[i + 1] == ' ')
        {
            delete_caracter(strfind, i);
        }
        else
            i++;
    }
    strfind[i] = '\0';
    return strfind + index_begin_word;
}

void new_input(char *buffer_file, char *new_str, int *err)
{
    char *buffer;
    int n;

    n = fill_size(buffer_file, err);
}