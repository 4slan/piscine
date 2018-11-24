/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   interpreter.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namarido <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/21 20:04:22 by namarido          #+#    #+#             */
/*   Updated: 2018/07/22 19:34:50 by hmidoun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "func.h"

int		ft_nbr_one(int *tab)
{
	int cpt;
	int nbr_1;

	cpt = 0;
	nbr_1 = 0;
	while (cpt < 5)
	{
		if (tab[cpt])
			nbr_1++;
		cpt++;
	}
	return (nbr_1);
}

void	ft_interpretation_res(int *tab, int height, int weidth)
{
	int cpt;
	int nbr_1;

	cpt = 0;
	nbr_1 = ft_nbr_one(tab);
	if (!nbr_1)
	{
		ft_display_error();
		return ;
	}
	while (cpt < 5)
	{
		if (tab[cpt])
		{
			ft_display_result(cpt, height, weidth);
			if (nbr_1 > 1)
				ft_putstr(" || ");
			else
				ft_putchar('\n');
			nbr_1--;
		}
		cpt++;
	}
}
