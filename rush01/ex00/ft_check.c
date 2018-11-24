/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loloria <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/15 02:42:29 by loloria           #+#    #+#             */
/*   Updated: 2018/07/15 18:27:03 by htorres          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_check_row(int grid[][], int row, int num)
{
	int col;

	col = 0;
	while (col < 9)
	{
		if(grid[row][col] == num)
			return(1);
			col++;
	}
	return (0);

}

void	ft_check_col(int grid[][], int col, int num)
{
	int row;

	row = 0;
	while (row < 9)
	{
		if(grid[row][col] == num)
			return(1);
			row++;
	}
	return (0);
}

void	ft_check_square(int grid[][], int num)
{
	int row;
	row = 0;
	while (row < 3)
	{
		int col;
		col = 0;
		while (col < 3)
		{
		if(grid[row++][col++] == num)  // Je ne sais pas comment incrementer ces row/col
		return(1);
		col++;
		}
	row++;
	}
}
