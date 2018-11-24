/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndupraz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/08 13:56:06 by hmidoun           #+#    #+#             */
/*   Updated: 2018/07/22 16:01:49 by hmidoun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "func.h"

char	rush00(int width, int height, int y, int x)
{
	if (x == 1 && y == 1)
		return ('o');
	else if (x == width && y == 1)
		return ('o');
	else if (x == 1 && y == height)
		return ('o');
	else if (x == width && y == height)
		return ('o');
	else if (x == 1)
		return ('|');
	else if (x == width)
		return ('|');
	else if (y == 1)
		return ('-');
	else if (y == height)
		return ('-');
	else
		return (' ');
}

char	rush01(int width, int height, int y, int x)
{
	if (x == 1 && y == 1)
		return ('/');
	else if (x == width && y == 1)
		return ('\\');
	else if (x == 1 && y == height)
		return ('\\');
	else if (x == width && y == height)
		return ('/');
	else if (x == 1)
		return ('*');
	else if (x == width)
		return ('*');
	else if (y == 1)
		return ('*');
	else if (y == height)
		return ('*');
	else
		return (' ');
}

char	rush02(int width, int height, int y, int x)
{
	if (x == 1 && y == 1)
		return ('A');
	else if (x == width && y == 1)
		return ('A');
	else if (x == 1 && y == height)
		return ('C');
	else if (x == width && y == height)
		return ('C');
	else if (x == 1)
		return ('B');
	else if (x == width)
		return ('B');
	else if (y == 1)
		return ('B');
	else if (y == height)
		return ('B');
	else
		return (' ');
}

char	rush03(int width, int height, int y, int x)
{
	if (x == 1 && y == 1)
		return ('A');
	else if (x == width && y == 1)
		return ('C');
	else if (x == 1 && y == height)
		return ('A');
	else if (x == width && y == height)
		return ('C');
	else if (x == 1)
		return ('B');
	else if (x == width)
		return ('B');
	else if (y == 1)
		return ('B');
	else if (y == height)
		return ('B');
	else
		return (' ');
}

char	rush04(int width, int height, int y, int x)
{
	if (x == 1 && y == 1)
		return ('A');
	else if (x == width && y == 1)
		return ('C');
	else if (x == 1 && y == height)
		return ('C');
	else if (x == width && y == height)
		return ('A');
	else if (x == 1)
		return ('B');
	else if (x == width)
		return ('B');
	else if (y == 1)
		return ('B');
	else if (y == height)
		return ('B');
	else
		return (' ');
}
