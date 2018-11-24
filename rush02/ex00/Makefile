# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: namarido <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/07/21 13:50:51 by namarido          #+#    #+#              #
#    Updated: 2018/07/22 20:52:31 by hmidoun          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = "colle-2"
CC = gcc
CFLAG = -Wall -Wextra -Werror
LDFLAGS =
SRC = check_00.c rush00.c display.c functions.c interpreter.c free_liste.c main.c
HDR = func.h

OBJ = $(SRC:.c =.o)

all: $(NAME)

$(NAME): $(OBJ)
	@$(CC) -o $(NAME) $^ $(LDFLAGS)

$(OBJ): $(HDR)

%.o: %.c
	@$(CC) -o -c $^ $(CFLAG)

.Phony: clean fclean re

clean:
	@/bin/rm -f *.o

fclean: clean
	@/bin/rm -f $(NAME)

re: fclean all 
