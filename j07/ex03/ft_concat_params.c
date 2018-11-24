/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amalsago <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/19 09:44:16 by amalsago          #+#    #+#             */
/*   Updated: 2018/07/19 11:57:13 by amalsago         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_total_length(int argc, char **argv);

char	*ft_concat_params(int argc, char **argv)
{
	int		i;
	int		j;
	int		k;
	char	*str;

	i = 1;
	k = 0;
	str = NULL;
	if (!(str = (char *)malloc(sizeof(char) * ft_total_length(argc, argv) + 1)))
		return (NULL);
	while (i < argc)
	{
		j = 0;
		while (argv[i][j] != '\0')
		{
			str[k] = argv[i][j];
			j++;
			k++;
		}
		str[k++] = '\n';
		i++;
	}
	str[--k] = '\0';
	return (str);
}

int		ft_total_length(int argc, char **argv)
{
	int		i;
	int		j;
	int		total_char;

	i = 1;
	total_char = 0;
	while (i < argc)
	{
		j = 0;
		while (argv[i][j] != '\0')
		{
			total_char++;
			j++;
		}
		i++;
	}
	return (total_char);
}
