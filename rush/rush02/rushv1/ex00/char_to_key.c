/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   char_to_key.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bboissen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 19:44:22 by bboissen          #+#    #+#             */
/*   Updated: 2023/08/27 18:29:28 by bboissen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib.h"
#include <stdio.h>
#include <stdlib.h>

void	decompose_hun(char *nbr, char *str, char *buff, int len)
{
	ft_strncpy(buff, "\0", len);
	ft_strncpy(buff, nbr, 1);
	if (nbr[0] != '1')
		printf("%s\n", buff);
	ft_strncpy(buff, str, 3);
	printf("%s\n", buff);
}

void	decompose_ten(char *nbr, char *buff, int len)
{
	if (nbr[0] != '1')
	{
		ft_strncpy(buff, "\0", len);
		ft_strncpy(buff, nbr, 1);
		ft_strncat(buff, "0", 1);
		printf("%s\n", buff);
	}
	else
	{
		ft_strncpy(buff, "\0", len);
		ft_strncpy(buff, nbr, 2);
		printf("%s\n", buff);
	}
}

void	decompose_unit(char *nbr, char *buff, int len)
{
	ft_strncpy(buff, "\0", len);
	ft_strncpy(buff, nbr, 1);
	printf("%s\n", buff);
}

void	decompose_modulo(char *nbr, char *buff, int len)
{
	if (mod == 1)
	{
		if (nbr[0] != '0')
			decompose_unit(nbr, buff, len);
		if (i < len / 3 - 1)
		{
			ft_strncpy(buff, "\0", len);
			ft_strncpy(buff, str, len - (3 * i));
			printf("%s\n", buff);
		}
	}
	if (mod == 2)
	{
		if (nbr[0] != '0')
			decompose_ten(nbr, buff, len);
		nbr++;
		if (nbr[0] != '0' && nbr[-1] != '1')
			decompose_unit(nbr, buff, len);
		if (i < len / 3 - 1)
		{
			ft_strncpy(buff, "\0", len);
			ft_strncpy(buff, str, len - (3 * i));
			printf("%s\n", buff);
		}
	}
}

void	char_to_key(char *nbr, char *str, char *buff, int len)
{
	int	i;
	int	mod;

	i = 0;
	mod = len % 3;
	while (i < len / 3)
	{
		if (nbr[0] != '0')
			decompose_hun(nbr, str, buff, len);
		nbr++;
		if (nbr[0] != '0')
			decompose_ten(nbr, buff, len);
		nbr++;
		if (nbr[0] != '0' && nbr[-1] != '1')
			decompose_unit(nbr, buff, len);
		if (i < len / 3 - 1)
		{
			ft_strncpy(buff, "\0", len);
			ft_strncpy(buff, str, len - (3 * i) - 2 - mod);
			printf("%s\n", buff);
		}
		nbr++;
		i++;
	}
}

char	*max_number(char *str, int len, int *err)
{
	str = malloc(len * sizeof(char) + 1);
	if (!str)
	{
		*err = -1;
		return (NULL);
	}
	ft_strncat(str, "1", 1);
	while (len > 0)
	{
		ft_strncat(str, "0", 1);
		len--;
	}
	return (str);
}
/*
int	main(void)
{
	char	*nbr = "321322121111";
	char	*buff = NULL;
	char	*str = NULL;
	int	len;
	int	error = 1;
	int	*err; 
	
	err = &error;
	len = ft_strlen(nbr);
	buff = malloc(len * sizeof(char) + 1);
	if (!buff)
	{
		*err = -1;
		return (0);
	}
	str = max_number(str, len, err);
	char_to_key(nbr, str, buff, len);
}*/
