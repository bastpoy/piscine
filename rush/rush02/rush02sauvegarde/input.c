#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

char *ft_strstr(char *str, char *to_find)
{
    int i;
    int j;

    i = 0;
    if (*to_find == '\0')
    {
        return (str);
    }
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

void delete_caracter(char *str, int index)
{
    while (str[index] != '\n')
    {
        str[index] = str[index + 1];
        index++;
    }
}

char *get_file_content(char *to_find)
{
    int filesize;
    char *file;
    char *strfind;
    int fd;
    int i;
    int indexbeginword;

    i = 0;
    filesize = file_size();
    fd = open(FILENAME, O_RDONLY);
    file = malloc((filesize + 1) * sizeof(char));
    read(fd, file, filesize);
    strfind = ft_strstr(file, to_find);
    while (strfind[i] != ':')
        i++;
    while (!(strfind[i] == ' ' && strfind[i + 1] > 32 && strfind[i + 1] < 127))
    {
        i++;
    }
    indexbeginword = i + 1;
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
    return strfind + indexbeginword;
}

int main(int argc, char **argv)
{
    (void)argc;
    printf("%s", get_file_content(argv[1]));

    return (0);
}