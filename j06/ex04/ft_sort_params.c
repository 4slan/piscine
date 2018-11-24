/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amalsago <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/16 17:03:47 by amalsago          #+#    #+#             */
/*   Updated: 2018/07/16 18:40:30 by amalsago         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);
void	ft_sort_params(int argc, char *argv[]);
int		ft_strcmp(char *s1, char *s2);
void	ft_swap_params(char *p1, char *p2);
void	ft_print_params(int argc, char *argv[]);

int		main(int argc, char *argv[])
{
	if (argc > 1)
	{
		ft_sort_params(argc, argv);
		ft_print_params(argc, argv);
	}
	return (0);
}

void	ft_sort_params(int argc, char *argv[])
{
	int		i;
	int		j;

	i = 1;
	while (i < argc)
	{
		j = 1;
		while (j < argc - 1 - (i - 1))
		{
			if (ft_strcmp(argv[j], argv[j + 1]) > 0)
				ft_swap_params(argv[j], argv[j + 1]);
			j++;
		}
		i++;
	}
}

int		ft_strcmp(char *s1, char *s2)
{
	int		i;

	i = 0;
	while ((s1[i] != '\0' && s2[i] != '\0') && s1[i] == s2[i])
		i++;
	if (s1[i] != s2[i])
		return (s1[i] - s2[i]);
	return (0);
}

void	ft_swap_params(char *p1, char *p2)
{
	char temp;

	temp = *p1;
	*p1 = *p2;
	*p2 = temp;
}

void	ft_print_params(int argc, char *argv[])
{
	int		i;
	int		j;

	i = 0;
	while (i < argc)
	{
		j = 0;
		while (argv[i][j] != '\0')
		{
			ft_putchar(argv[i][j]);
			j++;
		}
		ft_putchar('\n');
		i++;
	}
}
