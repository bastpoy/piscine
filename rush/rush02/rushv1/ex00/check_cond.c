#include "lib.h"
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	while (*str)
		ft_putchar (*str++);
}

int     ft_is_numeric(char c)
{
        if (c >= '0' && c <= '9')
                return (1);
        return (0);
}

int     ft_is_space(char c)
{
        if (c == '\f' || c == '\t' || c == '\n')
                return (1);
        if (c == '\r' || c == '\v' || c == ' ')
                return (1);
        return (0);
}

int check_cond(char *str)
{
    char num = 0;
    int i = 0;

    while (ft_is_space(str[i]))
    i++;
    if (str[i] == '+')
        i++;
    while (str[i] == '0')
    {
        if (!ft_is_numeric(str[i] + 1))
            break;
        i++;
    }
    while (str[i] && ft_is_numeric(str[i]))
    {
        num ++;
        i++;
    }
    while (str[i])
    {
        if(!ft_is_space(str[i]))
            return (0);
        i++;
    }
    if (num == '0')
        return (0);
    return (1);
}  

int main (int argc, char **argv)
{
   if (argc < 2 || argc > 3)
        ft_putstr("ERROR\n");
    if (check_cond (argv[1]))
   	 printf("La chaine est valide\n");
    else
   	 printf("La chaine n'est pas valide \n");
    return (0);
}
