/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amalsago <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/12 13:32:17 by amalsago          #+#    #+#             */
/*   Updated: 2018/07/12 16:21:55 by amalsago         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_find_next_prime(int nb)
{
	while (ft_is_prime(++nb) == 0)
		nb = 1 * nb;
	return (nb);
}

int	ft_is_prime(int nb)
{
	int i;
	int count;

	i = 1;
	count = 0;
	while (i <= nb)
	{
		if ((nb % i) == 0)
			count++;
		i++;
	}
	if (count == 2)
		return (1);
	else
		return (0);
}
