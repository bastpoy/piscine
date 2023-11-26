/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lib.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cponsson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 20:48:55 by cponsson          #+#    #+#             */
/*   Updated: 2023/08/26 20:52:03 by cponsson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIB_H
# define LIB_H

# include <fcntl.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

int		ft_atoi(char *s);
int		size_num(int nb);
char	*ft_strdup(char *src);
char	*ft_strstr(char *str, char *need);
int		ft_strlen(char *str);
int		is_space(char c);
int		is_num(char c);
void	ft_putchar(char c);
void	ft_putstr(char *str);
#endif
