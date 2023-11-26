#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "file_handling.h"
#include "lib.h"
#include "input.h"

char *ft_strstrr(char *str, char *to_find)
{
    int i;
    int j;

    i = 0;
    if (*to_find == '\0')
        return (str);
    while (str[i])
    {
        j = 0;
        if (str[i + j] == to_find[j])
        {
            while ((str[i + j] == to_find[j]) && to_find[j])
            {
                j++;
            }
            if (to_find[j] == '\0')
            {
                return (str + i);
            }
        }
        i++;
    }
    return (0);
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

char *list_first_number(char *buffer_file, char *buffer_number)
{
    int i;
    int j;

    buffer_number = (char *)malloc(sizeof(char) * 1000);
    i = 0;
    j = 0;
    while (buffer_file[i])
    {
        if (i == 0 && buffer_file[i] > 47 && buffer_file[i] < 58)
        {
            while (buffer_file[i] > 47 && buffer_file[i] < 58)
            {
                buffer_number[j] = buffer_file[i];
                i++;
                j++;
            }
            buffer_number[j] = '|';
            j++;
        }
        i++;
    }
    return (buffer_number);
}

char *list_next_number(char *buffer_file, char *buffer_number)
{
    int i;
    int j;

    buffer_number = list_first_number(buffer_file, buffer_number);
    j = ft_strlen(buffer_number);
    i = 0;
    while (buffer_file[i])
    {
        if (buffer_file[i] > 47 && buffer_file[i] < 58 && buffer_file[i - 1] == '\n')
        {
            while (buffer_file[i] > 47 && buffer_file[i] < 58)
            {
                buffer_number[j] = buffer_file[i];
                i++;
                j++;
            }
            buffer_number[j] = '|';
            j++;
        }
        i++;
    }
    buffer_file[j] = '\0';
    return (buffer_number);
}

char *get_file_content(char *to_find, char *buffer_file, int *err)
{
    char *strfind;
    int i;
    int index_begin_word;
    int n;

    *err = 1;
    i = 0;
    n = ft_strlen(buffer_file);
    strfind = (char *)malloc((n) * sizeof(char) + 1);
    strfind = ft_strstrr(buffer_file, to_find);
    while (strfind[i] != ':')
        i++;
    while (!(strfind[i] == ' ' && strfind[i + 1] > 32 && strfind[i + 1] < 127))
        i++;
    index_begin_word = i + 1;
    while (strfind[i] != '\n')
    {
        if (strfind[i] == ' ' && strfind[i + 1] == ' ')
            delete_caracter(strfind, i);
        else
            i++;
    }
    strfind[i] = '\0';
    return (strfind + index_begin_word);
}
