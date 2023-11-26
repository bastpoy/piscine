/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpoyet <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/11 11:18:45 by bpoyet            #+#    #+#             */
/*   Updated: 2023/08/11 12:53:08 by bpoyet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	buffer1;
	int	buffer2;

	buffer1 = *a;
	buffer2 = *b;
	*a = buffer1 / buffer2;
	*b = buffer1 % buffer2;
}
/*
int     main(void)
{
        int     a;
        int     b;

        a = 14;
        b = 7;
        ft_ultimate_div_mod(&a, &b);
        printf(" %d %d ", a, b);
}*/
