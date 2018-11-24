/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amalsago <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/18 23:59:09 by amalsago          #+#    #+#             */
/*   Updated: 2018/07/23 22:58:23 by amalsago         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_ultimate_range(int **range, int min, int max)
{
	int		i;
	int		*temp;
	int		size;

	i = 0;
	temp = NULL;
	size = max - min;
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	if (!(temp = (int *)malloc(sizeof(int) * size)))
		return (0);
	while (i < size)
	{
		temp[i] = min + i;
		i++;
	}
	*range = temp;
	return (i);
}
