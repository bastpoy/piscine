/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpoyet <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/11 10:15:01 by bpoyet            #+#    #+#             */
/*   Updated: 2023/08/11 12:22:12 by bpoyet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*
int	main(void)
{
	int	a;
	int	b;
	int	c;
	int	d;

	a = 14;
	b = 7;
	ft_div_mod(a, b, &c, &d);
	printf(" %d%d ", c,d);
}*/
