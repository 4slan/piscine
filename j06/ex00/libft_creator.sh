#!/bin/sh
LIB_NAME="libft.a"
gcc -c ft_putchar.c ft_putstr.c ft_strcmp.c ft_strlen.c ft_swap.c
ar -rc $LIB_NAME ft_putchar.o ft_putstr.o ft_strcmp.o ft_strlen.o ft_swap.o
ranlib $LIB_NAME
rm *.o
