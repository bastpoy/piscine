/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpoyet <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/11 20:56:40 by bpoyet            #+#    #+#             */
/*   Updated: 2023/08/11 21:08:03 by bpoyet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	buffersize;
	int	i;
	int	tampon;

	buffersize = size;
	i = 0;
	tampon = 0;
	while (i != (size / 2))
	{
		tampon = tab[i];
		tab[i] = tab[buffersize - 1];
		tab[buffersize - 1] = tampon;
		i++;
		buffersize --;
	}
}
/*
int	main (void)
{	
	int toto[] = {-1,-62,1, 2, 6, 5, 2, 1, 9, 8, 1, 5};
	int i=0;
	ft_rev_int_tab(toto,12);
	while(i!=12)
	{
		printf("%d", toto[i]);
		printf("-");
		i++;
	}
}*/
