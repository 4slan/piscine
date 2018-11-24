/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namarido <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/21 15:50:48 by namarido          #+#    #+#             */
/*   Updated: 2018/07/22 19:36:41 by hmidoun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "func.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int cpt;

	cpt = 0;
	while (str[cpt] != '\0')
	{
		ft_putchar(str[cpt]);
		cpt++;
	}
}

void	ft_putnbr(int nb)
{
	char nbr_char;

	if (nb == -2147483648)
	{
		ft_putchar('-');
		ft_putchar('2');
		nb = 147483648;
	}
	if (nb < 0)
	{
		ft_putchar('-');
		nb *= -1;
	}
	if (nb < 10)
	{
		nbr_char = nb + 48;
		ft_putchar(nbr_char);
		return ;
	}
	ft_putnbr(nb / 10);
	ft_putnbr(nb % 10);
}

void	ft_display_result(int nb_colle, int height, int width)
{
	char *name_colle;

	name_colle = "[colle-0";
	ft_putstr(name_colle);
	ft_putnbr(nb_colle);
	ft_putstr("] ");
	ft_putchar('[');
	ft_putnbr(height);
	ft_putstr("] ");
	ft_putchar('[');
	ft_putnbr(width);
	ft_putchar(']');
}

void	ft_display_error(void)
{
	char *msg_error;

	msg_error = "aucune\n";
	ft_putstr(msg_error);
}
