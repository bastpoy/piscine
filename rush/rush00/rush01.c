/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpoyet <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/12 14:04:31 by bpoyet            #+#    #+#             */
/*   Updated: 2023/08/13 15:40:12 by bpoyet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

extern	void	ft_putchar(char c);

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
		ft_print_line('/', '*', '\\', x);
	}
	while (y-- > 2)
	{
		ft_print_line('*', ' ', '*', x);
	}
	ft_print_line('\\', '*', '/', x);
}