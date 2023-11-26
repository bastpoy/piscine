/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpoyet <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 12:35:56 by bpoyet            #+#    #+#             */
/*   Updated: 2023/08/17 15:53:43 by bpoyet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int check_base(char *base)
{
	int i;
	int j;

	i = 0;
	if (base[0] == '\0' || base[1] == '\0')
		return (0);
	while (base[i])
	{
		j = i + 1;
		if (base[i] == '+' || base[i] == '-')
			return (0);
		if (base[i] > 126 || base[i] < 32)
			return (0);
		while (base[j])
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (i);
}
int check_char_in_base(char *base, char c)
{
	int i;

	i = 0;
	while (base[i])
	{
		if (base[i] == c)
			return (i);
		i++;
	}
	return (-1);
}
int ft_atoi(char *str, int *ptri)
{
	int sign;
	int i;

	i = 0;
	sign = 1;
	while (str[i] != '\0' && (str[i] == ' ' || str[i] == '\n' || str[i] == '\t'))
	{
		i++;
	}
	while (str[i] != '\0' && (str[i] == '+' || str[i] == '-'))
	{
		if (str[i] == '-')
		{
			sign *= -1;
		}
		i++;
	}
	*ptri = i;
	return sign;
}
int ft_atoi_base(char *str, char *base)
{
	int resultat;
	int i;
	int sign;
	int mybase;
	int indexc;

	resultat = 0;
	mybase = check_base(base);
	if (!mybase)
		return (0);
	sign = ft_atoi(str, &i);
	indexc = check_char_in_base(base, str[i]);
	while (indexc != -1)
	{
		resultat = (resultat * mybase) + indexc;
		printf("%d\n", resultat);
		i++;
		indexc = check_char_in_base(base, str[i]);
	}
	return resultat *= sign;
}
int main(int argc, char **argv)
{
	(void)argc;

	printf("%d", ft_atoi_base(argv[1], argv[2]));
}
