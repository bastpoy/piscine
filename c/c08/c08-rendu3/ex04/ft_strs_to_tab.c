/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpoyet <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 20:33:06 by bpoyet            #+#    #+#             */
/*   Updated: 2023/08/29 13:10:30 by bpoyet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
//#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int	ft_length(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	int		lensrc;
	char	*mallocsrc;
	int		i;

	i = 0;
	lensrc = ft_length(src);
	mallocsrc = (char *)malloc((lensrc + 1) * sizeof(char));
	if (mallocsrc == 0)
		return (0);
	while (src[i])
	{
		mallocsrc[i] = src[i];
		i++;
	}
	mallocsrc[i] = '\0';
	return (mallocsrc);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int			i;
	t_stock_str	*ptrstruct;

	ptrstruct = (t_stock_str *)malloc(sizeof(t_stock_str) * (ac + 1));
	if (ptrstruct == 0)
		return (0);
	i = 0;
	while (i < ac)
	{
		ptrstruct[i].size = ft_length(av[i]);
		ptrstruct[i].str = av[i];
		ptrstruct[i].copy = ft_strdup(av[i]);
		i++;
	}
	ptrstruct[i].size = 0;
	ptrstruct[i].str = 0;
	ptrstruct[i].copy = 0;
	return (ptrstruct);
}

/*
int	main(void)
{
	char *tab[] = {"hello",
		"worldgffffggssssssssssssssssssssssssssssssssssssssss", "hello",
		"world", "hello"};
	t_stock_str *ptrstruct;
	ptrstruct = ft_strs_to_tab(5, tab);
	printf("%s\n", ptrstruct[0].str);
	printf("%s\n", ptrstruct[1].str);
	printf("%s\n", ptrstruct[2].str);
	printf("%s\n", ptrstruct[3].str);
	printf("%s\n", ptrstruct[4].str);
}*/
