/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amalsago <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/21 12:22:25 by amalsago          #+#    #+#             */
/*   Updated: 2018/07/22 20:50:26 by hmidoun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "func.h"

int		main(void)
{
	char	c;
	t_list	*head;
	int		limit[2];
	int		colle[5];

	init_tab(colle);
	head = NULL;
	while (read(0, &c, 1))
	{
		ft_list_push_back(&head, c);
		if (!head)
			return (0);
	}
	if (!ft_check_dimension(head, limit))
	{
		ft_display_error();
		return (0);
	}
	ft_delete_node(&head, '\n');
	check_all(limit, head, colle);
	ft_interpretation_res(colle, limit[1], limit[0]);
	free_list(&head);
	return (0);
}
