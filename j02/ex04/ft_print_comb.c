/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amalsago <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/07 12:45:05 by amalsago          #+#    #+#             */
/*   Updated: 2018/07/08 19:43:49 by amalsago         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);
void	ft_print_nb(char a, char b, char c);

void	ft_print_comb(void)
{
	char	a;
	char	b;
	char	c;

	a = '0';
	b = '0';
	c = '0';
	while (a <= '9')
	{
		while (b <= '9')
		{
			while (c <= '9')
			{
				ft_print_nb(a, b, c);
				c++;
			}
			c = '0';
			b++;
		}
		b = '0';
		a++;
	}
}

void	ft_print_nb(char a, char b, char c)
{
	if (a != b && a != c && b != c)
	{
		if (a < b && b < c)
		{
			ft_putchar(a);
			ft_putchar(b);
			ft_putchar(c);
			if (a != '7')
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
		}
	}
}
