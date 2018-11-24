# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: amalsago <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/07/26 11:59:40 by amalsago          #+#    #+#              #
#    Updated: 2018/07/26 13:34:05 by amalsago         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC=gcc
CFLAGS=-Wall -Wextra -Werror
NAME=libft.a
SRC=srcs/ft_putchar.c\
	srcs/ft_putstr.c\
	srcs/ft_strcmp.c\
	srcs/ft_strlen.c\
	srcs/ft_swap.c
OBJ=ft_putchar.o\
	ft_putstr.o\
	ft_strcmp.o\
	ft_strlen.o\
	ft_swap.o
HEADERS=includes

all: $(NAME)
	ar -rc $(NAME) $(OBJ)
	ranlib $(NAME)

$(NAME):
	$(CC) $(CFLAGS) -I $(HEADERS) -c $(SRC)

clean:
	/bin/rm -f $(OBJ) 

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
