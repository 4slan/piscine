/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amalsago <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/10 11:47:42 by amalsago          #+#    #+#             */
/*   Updated: 2018/07/10 13:13:01 by amalsago         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);
void	ft_print_nb(char a, char b);

void	ft_print_combn(int n)
{
	if (n > 0 && n < 10)
	{
		int	i;
		int	j;

		i = 0;
		j = i + 1;
		while (i <= 8)
		{
			while (j <= 9)
			{
				ft_print_nb(i + '0', j + '0');
				j++;
			}
			i++;
			j = 0;
		}
	}
}

void	ft_print_nb(char a, char b)
{
	if (a != b)
	{
		if (a < b)
		{
			ft_putchar(a);
			ft_putchar(b);
			if (a != '8')
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
		}
	}
}
