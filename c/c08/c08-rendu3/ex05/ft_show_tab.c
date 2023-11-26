/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpoyet <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 20:36:34 by bpoyet            #+#    #+#             */
/*   Updated: 2023/08/24 23:08:43 by bpoyet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
// #include <stdio.h>
#include "ft_stock_str.h"
#include <unistd.h>

/*
int	ft_length(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
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
		ptrstruct[i].str = av[i];
		ptrstruct[i].copy = av[i];
		ptrstruct[i].size = ft_length(av[i]);
		i++;
	}
	ptrstruct[i].str = 0;
	ptrstruct[i].copy = 0;
	ptrstruct[i].size = 0;
	return (ptrstruct);
}
*/
void	writenbr(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	unsigned int	absolut;

	if (nb < 0)
	{
		absolut = -nb;
		writenbr('-');
	}
	else
		absolut = nb;
	if (absolut > 9)
	{
		ft_putnbr(absolut / 10);
	}
	writenbr(absolut % 10 + '0');
}

void	print_number(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		writenbr(str[i]);
		i++;
	}
}

void	ft_show_tab(struct s_stock_str *par)
{
	int	i;

	i = 0;
	while (par[i].copy != 0)
	{
		print_number(par[i].str);
		write(1, "\n", 1);
		ft_putnbr(par[i].size);
		write(1, "\n", 1);
		print_number(par[i].copy);
		write(1, "\n", 1);
		i++;
	}
}

/*
int	main(void)
{
	char *tab[] = {"puti", "tagueule", "passe", "pluse", "moins"};
	t_stock_str *ptrstruct;
	ptrstruct = ft_strs_to_tab(5, tab);
	ft_show_tab(ptrstruct);
}*/
