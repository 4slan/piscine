/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amalsago <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/15 03:50:57 by amalsago          #+#    #+#             */
/*   Updated: 2018/07/17 19:39:36 by amalsago         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_isalpha(char c);
int		ft_isspecial(char c);
char	ft_toupper(char *c);
char	ft_tolower(char *c);

char	*ft_strcapitalize(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_tolower(&str[i]);
		ft_toupper(&str[0]);
		if (ft_isalpha(str[i]) && (ft_isspecial(str[i - 1]) ||
					str[i - 1] == ' '))
			ft_toupper(&str[i]);
		if (ft_isalpha(str[i] && !ft_isspecial(str[i - 1])))
			ft_toupper(&str[i]);
		i++;
	}
	return (str);
}

int		ft_isalpha(char c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	return (0);
}

int		ft_isspecial(char c)
{
	if ((c >= 0 && c <= 47) || (c >= 58 && c <= 64) ||
			(c >= 91 && c <= 96) || (c >= 123 && c <= 127))
		return (1);
	return (0);
}

char	ft_tolower(char *c)
{
	if (*c >= 'A' && *c <= 'Z')
		*c = *c + 32;
	return (*c);
}

char	ft_toupper(char *c)
{
	if (*c >= 'a' && *c <= 'z')
		*c = *c - 32;
	return (*c);
}
