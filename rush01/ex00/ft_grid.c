/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_grid.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loloria <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/14 23:41:20 by loloria           #+#    #+#             */
/*   Updated: 2018/07/15 05:19:46 by loloria          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int ft_isdigit(char arg)
{
	if (arg >= '0' && arg <= '9')
		return (1);
	else
		return (0);
}

int	main(int argc, char **argv)
{
	int **grid;
	int error;
	int i;
	int j;

	i = 0;
	error = 0;
	if (argc != 1 + 9)
		error = 1;
	else
	{
		grid = (int**)malloc(sizeof(int*)*9);
		while (i < 9)
		{
			i++;
			grid[i] = (int*)malloc(sizeof(int)*9);
			j = 0;
			while (j < 9)
			{
				if (ft_isdigit(argv[i][j]) && argv[i][j] != '0')
				{
					grid[i][j] = argv[i][j] - '0';
				}
				else if (argv[i][j] == '.')
				{
					grid[i][j] = 0;
				}
				else
					error = 1;
				printf("%d",grid[i][j]);
				j++;
			}
			printf("\n");
		}
		free(grid);
	}
	if (error)
		write(1, "Error\n", 5);
		return (1);
	i = 0;
	while (i < 9)
	{
		i++;
		j = 0;
		while (j< 9)
		{
			j++;
			ft_putchar(grid[i][j]);
		}
		ft_putchar('\n');
	}
	return (0);
}

