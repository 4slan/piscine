/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_integer_table.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amalsago <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/10 18:32:31 by amalsago          #+#    #+#             */
/*   Updated: 2018/07/11 14:39:00 by amalsago         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_putchar(char c);

void	ft_swap(int *a, int *b)
{
	int	tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

void	ft_sort_integer_table(int *tab, int size)
{
	int	i;
	int	j;
	int	counter;

	i = 0;
	counter = 0;
	while (counter < size - 1)
	{
		while (i < size - 1)
		{
			j = i + 1;
			while (j < size)
			{
				if (tab[i] > tab[j])
					ft_swap(&tab[i], &tab[j]);
				i++;
				j++;
			}
		}
		counter++;
		i = 0;
		j = 1;
	}
}
