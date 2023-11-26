# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cponsson <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/27 17:01:45 by cponsson          #+#    #+#              #
#    Updated: 2023/08/27 17:10:46 by cponsson         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #
NAME	=	rush-02
CC	=	cc
CFLAGS	=	-Wall -Werror -Wextra
SRCS	=	./main.c		\
		./check_cond.c		\
		./input.c		\
		./lib1.c		\
		./lib2.c		\
		./file_handling.c
OBJS	=	$(SRCS:.c=.o)
HEADERS	=	lib.h		\
		input.h		\
		file_handling.h

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

%.o: %.c $(HEADERS)
	$(CC) $(CFLAGS) -c $< -o $@

all: $(NAME)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean all
