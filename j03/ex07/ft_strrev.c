/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amalsago <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/09 11:34:13 by amalsago          #+#    #+#             */
/*   Updated: 2018/07/09 17:36:19 by amalsago         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strrev(char *str)
{
	int		i;
	int		a;
	char	tmp;

	i = 0;
	a = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	i--;
	while (a < i)
	{
		tmp = str[i];
		str[i] = str[a];
		str[a] = tmp;
		a++;
		i--;
	}
	return (str);
}
