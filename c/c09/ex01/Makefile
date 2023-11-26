# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bpoyet <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/30 13:15:52 by bpoyet            #+#    #+#              #
#    Updated: 2023/08/30 15:58:50 by bpoyet           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CC = gcc
CFLAGS += -Wall-Werror-Wextra

SRC_DIR := srcs

SRC =	$(addprefix srcs/ , ft_putchar.c ft_swap.c ft_putstr.c ft_strlen.c ft_strcmp.c)

OBJs = $(SRC:.c=.o)

HEADERS = includes/ft.h

$(NAME): $(0BJ)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

all: $(NAME)

clean:
	rm -f $(OBJ)
fclean:
	rm -f $(NAME)
re:
	fclean all	


