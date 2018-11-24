/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_param_to_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amalsago <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/24 16:39:58 by amalsago          #+#    #+#             */
/*   Updated: 2018/07/26 02:08:40 by amalsago         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_par.h"

int					ft_param_length(char *str)
{
	int		length;

	length = 0;
	while (str[length] != '\0')
		length++;
	return (length);
}

char				*ft_strcpy(char *dest, char *src)
{
	int		i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

struct s_stock_par	*ft_param_to_tab(int ac, char **av)
{
	int				i;
	int				nb_arg;
	char			*copy;
	t_stock_par		*tab_result;

	i = 0;
	nb_arg = 0;
	if (!(tab_result = (t_stock_par *)malloc(sizeof(t_stock_par) * ac + 1)))
		return (0);
	while (i < ac)
	{
		tab_result[i].size_param = ft_param_length(av[i]);
		tab_result[i].str = av[i];
		copy = (char *)malloc(sizeof(char) * ft_param_length(av[i]));
		tab_result[i].copy = ft_strcpy(copy, av[i]);
		tab_result[i].tab = ft_split_whitespaces(av[i]);
		i++;
	}
	tab_result[i].str = 0;
	return (tab_result);
}
