/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amalsago <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/26 18:09:11 by amalsago          #+#    #+#             */
/*   Updated: 2018/07/26 20:07:13 by amalsago         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int		i;
	int		inc;
	int		dec;

	i = 0;
	inc = 1;
	dec = 1;
	while (i < (length - 1))
	{
		if (f(tab[i], tab[i + 1]) > 0)
			inc = 0;
		i++;
	}
	while (i > 0)
	{
		if (f(tab[i], tab[i - 1]) > 0)
			dec = 0;
		i--;
	}
	return (inc || dec);
}
