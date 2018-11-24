/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amalsago <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/23 22:43:02 by amalsago          #+#    #+#             */
/*   Updated: 2018/07/26 02:21:24 by amalsago         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		is_separator(char c)
{
	if (c == ' ' || c == '\t' || c == '\n')
		return (1);
	return (0);
}

int		ft_count_words(char *str)
{
	int		i;
	int		words;

	i = 0;
	words = 0;
	if (!is_separator(str[i]))
		words++;
	while (str[i] != '\0')
	{
		if (is_separator(str[i]))
		{
			while (is_separator(str[i]))
				i++;
			if (str[i] != '\0')
				words++;
		}
		else
			i++;
	}
	return (words);
}

char	*ft_word_length(char *str)
{
	int		i;
	char	*tab_temp;

	i = 0;
	while (!(is_separator(str[i])) && str[i] != '\0')
		i++;
	tab_temp = (char *)malloc(sizeof(char) * (i + 1));
	if (!(tab_temp))
		return (NULL);
	i = 0;
	while (!(is_separator(str[i])) && str[i] != '\0')
	{
		tab_temp[i] = str[i];
		i++;
	}
	tab_temp[i] = '\0';
	return (tab_temp);
}

char	**ft_split_whitespaces(char *str)
{
	int		i;
	int		k;
	int		nb_words;
	char	**tab;

	i = 0;
	k = 0;
	nb_words = ft_count_words(str);
	if (!(tab = (char **)malloc(sizeof(char *) * (nb_words + 1))))
		return (NULL);
	while (str[i] != '\0')
	{
		while (is_separator(str[i]))
			i++;
		if (!(is_separator(str[i])) && str[i] != '\0')
		{
			tab[k++] = ft_word_length(&str[i]);
			while (!(is_separator(str[i])) && str[i] != '\0')
				i++;
		}
	}
	tab[k] = 0;
	return (tab);
}
