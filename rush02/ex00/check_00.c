/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_00.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmidoun <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/21 15:20:06 by hmidoun           #+#    #+#             */
/*   Updated: 2018/07/22 19:16:55 by hmidoun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "func.h"

int		call_rush(int lim[], int colle[], int ind, char c)
{
	char	(*f[5])(int, int, int, int);
	int		i;
	int		sol;

	f[0] = rush00;
	f[1] = rush01;
	f[2] = rush02;
	f[3] = rush03;
	f[4] = rush04;
	i = 0;
	sol = 0;
	while (i < 5)
	{
		if (colle[i])
		{
			if (c != f[i](lim[1], lim[0], ind / lim[1] + 1, ind % lim[1] + 1))
				colle[i] = 0;
			else
				sol++;
		}
		i++;
	}
	return (sol);
}

void	check_all(int *limit, t_list *t, int *colle)
{
	int		index;
	t_list	*tmp;

	tmp = t;
	index = 0;
	while (index < limit[0] * limit[1])
	{
		if (!call_rush(limit, colle, index, tmp->data))
			return ;
		tmp = tmp->next;
		index++;
	}
}
