/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpoyet <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/12 14:04:31 by bpoyet            #+#    #+#             */
/*   Updated: 2023/08/13 09:24:58 by bpoyet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_line(char left, char middle, char right, int size)
{
	if (size != 1)
	{
		ft_putchar(left);
	}
	while (size-- > 2)
	{
		ft_putchar(middle);
	}
	ft_putchar(right);
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	if (x < 1 || y < 1)
	{
		return ;
	}
	if (y != 1)
	{
		ft_print_line('o', '-', 'o', x);
	}
	while (y-- > 2)
	{
		ft_print_line('|', ' ', '|', x);
	}
	ft_print_line('o', '-', 'o', x);
}
/*
int	main(void)
{
	rush(10000, 10000);
	return (0); 
}*/
