/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amalsago <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/16 13:07:06 by amalsago          #+#    #+#             */
/*   Updated: 2018/07/16 18:42:33 by amalsago         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);
void	ft_sort_params(int argc, char *argv[]);

int		main(int argc, char *argv[])
{
	ft_sort_params(argc, argv);
	return (0);
}

void	ft_sort_params(int argc, char *argv[])
{
	int		j;

	while (argc > 1)
	{
		j = 0;
		while (argv[argc - 1][j] != '\0')
		{
			ft_putchar(argv[argc - 1][j]);
			j++;
		}
		ft_putchar('\n');
		argc--;
	}
}
