/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpoyet <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/11 21:11:54 by bpoyet            #+#    #+#             */
/*   Updated: 2023/08/11 21:30:31 by bpoyet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	buffer;

	i = 0;
	j = i + 1;
	buffer = 0;
	while (i < size - 1)
	{
		while (j < size)
		{
			if (tab[i] > tab[j])
			{
				buffer = tab[i];
				tab[i] = tab[j];
				tab[j] = buffer;
			}
			j++;
		}
		i++;
		j = i + 1;
	}
}
/*
int main(void)
{
	int tab[] = {0,10,6,15,5,4,7,9};
	int i = 0;
	ft_sort_int_tab(tab, 8);
	while (i <8)
	{
		printf("%d", tab[i]);
		printf(" ");
		i++;
	}
	printf("\n");

}*/
