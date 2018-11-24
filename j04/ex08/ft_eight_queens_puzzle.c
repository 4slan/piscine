/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_eight_queens_puzzle.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amalsago <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/12 14:25:28 by amalsago          #+#    #+#             */
/*   Updated: 2018/07/12 15:55:22 by amalsago         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int		board[8][8];
int		ft_eight_queens_puzzle(void)
{
	int	i;
	int	j;
}

void	set_queen(int i, int j)
{
	int x;
	int foo;
	
	x = 0;
	foo = 0;
	while (x < 9)
	{
		++board[x][j];
		++board[i][x];
		foo = j - i + x;
		if (foo >= 0 && foo < 8)
			++board[x][foo];	
		foo = j + i - x;
		if (foo >= 0 && foo < 8)
			++board[x][foo];	
	}
	board[i][j] == -1;
}
void	reset_queen(int i, int j)
{
	int x;
	int foo;
	
	x = 0;
	foo = 0;
	while (x < 9)
	{
		--board[x][j];
		--board[i][x];
		foo = j - i + x;
		if (foo >= 0 && foo < 8)
			--board[x][foo];	
		foo = j + i - x;
		if (foo >= 0 && foo < 8)
			--board[x][foo];	
	}
	board[i][j] == 0;
}

int		try_queen(int i)
{
	int	j;
	int	result;

	j = 0;
	result = 0;
	while (j < 9)
	{
		if (board[i][j] == 0)
		{
			set_queen(i, j);
			if (i == 7)
			{
				result = 1;
			}
			else
			{
				if (!(try_queen(i + 1)))
						reset_queen(i, j);
			}
		}
	if (result == 1)
		break;
	}
	return (result);
}
