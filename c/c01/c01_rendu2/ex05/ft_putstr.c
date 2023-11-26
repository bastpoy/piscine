/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpoyet <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/11 11:41:27 by bpoyet            #+#    #+#             */
/*   Updated: 2023/08/12 10:53:40 by bpoyet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}
/*
int     main(void)
{
	char*     str;
	str = "salut les gars";
	
	ft_putstr(str);
	
	a = 14;
	b = 7;
	ft_ultimate_div_mod(&a, &b);
	printf(" %d %d ", a, b);
}*/
