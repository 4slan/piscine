/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   functions.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amalsago <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/21 20:08:58 by amalsago          #+#    #+#             */
/*   Updated: 2018/07/22 19:17:14 by hmidoun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "func.h"

t_list	*ft_create_elem(char data)
{
	t_list	*temp;

	if (!(temp = (t_list *)malloc(sizeof(t_list))))
		return (NULL);
	temp->data = data;
	temp->next = NULL;
	return (temp);
}

void	ft_list_push_back(t_list **head, char data)
{
	t_list		*temp;

	temp = *head;
	if (temp == NULL)
		*head = ft_create_elem(data);
	else
	{
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = ft_create_elem(data);
	}
}

void	ft_delete_node(t_list **head, char data)
{
	t_list *temp;
	t_list *prev;

	temp = *head;
	prev = *head;
	if (temp != NULL && temp->data == data)
	{
		*head = temp->next;
		free(temp);
		temp = *head;
	}
	while (temp != NULL)
	{
		while (temp != NULL && temp->data != data)
		{
			prev = temp;
			temp = temp->next;
		}
		if (temp == NULL)
			return ;
		prev->next = temp->next;
		free(temp);
		temp = prev->next;
	}
}

int		ft_check_dimension(t_list *head, int *dimension)
{
	int			height;
	int			width;
	t_list		*temp;

	height = 0;
	temp = head;
	dimension[0] = 0;
	dimension[1] = 0;
	width = 0;
	while (temp != NULL && head->data != '\n' && !(width = 0))
	{
		while (temp->data != '\n')
		{
			width++;
			temp = temp->next;
		}
		if (dimension[1] == 0)
			dimension[1] = width;
		if (width != dimension[1])
			return (0);
		height++;
		temp = temp->next;
		dimension[0] = height;
	}
	return (1);
}

void	init_tab(int *t)
{
	int i;

	i = 0;
	while (i < 5)
	{
		t[i] = 1;
		i++;
	}
}
