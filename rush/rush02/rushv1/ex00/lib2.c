/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lib2.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cponsson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 16:44:15 by cponsson          #+#    #+#             */
/*   Updated: 2023/08/26 20:48:14 by cponsson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "lib.h"

int	ft_atoi(char *str)
{
	int	nbr;
	int	par;

	par = 0;
	nbr = 0;
	while ((*str >= 9 && *str <= 13) || *str == ' ')
		str++;
	while (*str == '+' || *str == '-')
	{
		if (*str == '-')
			par++;
		++str;
	}
	while (*str >= 48 && *str <= 57)
	{
		nbr *= 10;
		nbr += *str - 48;
		++str;
	}
	if (par % 2)
		return (-nbr);
	return (nbr);
}

char	*ft_strdup(char *src)
{
	char	*tab;
	int		i;

	i = 0;
	tab = malloc(sizeof(char) * (ft_strlen(src) + 1));
	if (!tab)
		return (0);
	while (src[i])
	{
		tab[i] = src[i];
		i++;
	}
	tab[i] = '\0';
	return (tab);
}

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (to_find[j] == '\0')
		return (str);
	while (str[i] != '\0')
	{
		while (str[j + i] == to_find[j] && str[j + i] != '\0')
		{
			j++;
		}
		if (to_find[j] == 0)
			return (str + i);
		i++;
		j++;
	}
	return (0);
}

char	*ft_strcat(char *dest, char *src)
{
	unsigned int	i;
	unsigned int	j;

	j = 0;
	while (dest[j] != '\0')
	{
		j++;
	}
	i = 0;
	while (src[i] != '\0')
	{
		dest[j] = src[i];
		j++;
		i++;
	}
	dest[j] = '\0';
	return (dest);
}
