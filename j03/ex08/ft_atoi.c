/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amalsago <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/11 03:55:21 by amalsago          #+#    #+#             */
/*   Updated: 2018/07/11 05:11:18 by amalsago         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** 	9	horz.tab
** 	10	\n
**	11	vert.tab
**	12	form feed
**	13	\r
**	32	space
**	43	plus (+)
**	45	minus (-)
**	48-57	0-9
*/

int		ft_atoi(char *str)
{
	int		i;
	int		resultat;
	int		negative;

	i = 0;
	negative = 1;
	while ((str[i] >= 9 && str[i] < 13) || str[i] == 32)
		i++;
	if (str[i] == 45 || str[i] == 43)
	{
		if (str[i] == 45)
			negative = -1;
		i++;
	}
	while (str[i] >= 48 && str[i] <= 57)
	{
		resultat = resultat * 10 + str[i] - 48;
		i++;
	}
	return (resultat * negative);
}
