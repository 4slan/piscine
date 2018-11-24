# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: amalsago <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/07/22 23:27:23 by amalsago          #+#    #+#              #
#    Updated: 2018/07/22 23:42:19 by amalsago         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC=gcc
NAME=eval_expr
CFLAGS=-Wall -Wextra -Werror
SRC=main.c functions.c operations.c

all: $(NAME)

$(NAME):
	$(CC) $(CFLAGS) -o $(NAME) $(SRC)

clean:
	rm -rf *.o

fclean: clean
	/bin/rm -f $(NAME)

re:	fclean all
