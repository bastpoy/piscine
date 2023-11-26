/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpoyet <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 18:04:10 by bpoyet            #+#    #+#             */
/*   Updated: 2023/08/26 18:04:22 by bpoyet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INPUT_H
#define INPUT_H

char *list_first_number(char *buffer_file, char *buffer_number);
char *list_next_number(char *buffer_file, char *buffer_number);
void delete_caracter(char *str, int index);
char *get_file_content(char *to_find, char *buffer_file, int *err);

#endif
