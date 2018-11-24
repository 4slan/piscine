/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_takes_place.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amalsago <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/12 20:00:26 by amalsago          #+#    #+#             */
/*   Updated: 2018/07/13 01:12:23 by amalsago         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int		ft_convert_clock_system(int hour);
void	ft_print_message(int hour);

void	ft_takes_place(int hour)
{
	ft_print_message(hour);
}

int		ft_convert_clock_system(int hour)
{
	if (hour == 0 || hour == 24)
		return (12);
	else if (hour == 12)
		return (12);
	else if (hour >= 1 && hour < 24)
		return (hour % 12);
	else
		return (0);
}

void	ft_print_message(int hour)
{
	char	*period[] = { "A.M.", "P.M." };
	int		converted;

	converted = ft_convert_clock_system(hour);
	if (hour >= 0 && hour <= 24)
	{
		printf("THE FOLLOWING TAKES PLACE BETWEEN ");
		if (hour > 0 && hour < 12)
			printf("%d.00 %s AND %d.00 %s\n", converted, period[0],
					converted + 1, period[0]);
		else if (hour == 0)
			printf("%d.00 %s AND %d.00 %s\n", converted, period[0],
					(converted % 12) + 1, period[0]);
		else if (hour >= 12 && hour < 24)
			printf("%d.00 %s AND %d.00 %s\n", converted, period[1],
					converted + 1, period[1]);
		else
			printf("%d.00 %s AND %d.00 %s\n", converted, period[1],
					converted, period[1]);
	}
	else
		printf("This range is don't exist");
}
