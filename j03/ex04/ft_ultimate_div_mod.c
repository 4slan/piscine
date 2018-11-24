/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amalsago <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/09 10:50:12 by amalsago          #+#    #+#             */
/*   Updated: 2018/07/09 11:18:02 by amalsago         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	res_div;
	int	res_mod;

	res_div = *a / *b;
	res_mod = *a % *b;
	*a = res_div;
	*b = res_mod;
}
