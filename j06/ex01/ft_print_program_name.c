/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amalsago <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/16 12:26:06 by amalsago          #+#    #+#             */
/*   Updated: 2018/07/16 13:52:40 by amalsago         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);
void	ft_print_program_name(char *argv[]);

int		main(int argc, char *argv[])
{
	if (argc > 0)
		ft_print_program_name(argv);
	return (0);
}

void	ft_print_program_name(char *argv[])
{
	int		i;

	i = 0;
	while (argv[0][i] != '\0')
	{
		ft_putchar(argv[0][i]);
		i++;
	}
	ft_putchar('\n');
}
