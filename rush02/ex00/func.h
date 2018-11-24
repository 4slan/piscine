/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   func.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmidoun <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/22 15:55:42 by hmidoun           #+#    #+#             */
/*   Updated: 2018/07/22 20:49:55 by hmidoun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FUNC_H
# define FUNC_H

# include <unistd.h>
# include <stdlib.h>

typedef struct	s_list
{
	char			data;
	struct s_list	*next;
}				t_list;

void			ft_putchar(char c);

void			ft_putstr(char *str);

void			ft_putnbr(int nb);

void			ft_display_result(int nb_colle, int height, int width);

void			ft_display_error(void);

int				ft_nbr_one(int *tab);

void			ft_interpretation_res(int *tab, int height, int weidth);

t_list			*ft_create_elem(char data);

void			ft_list_push_back(t_list **head, char data);

void			ft_delete_node(t_list **head, char data);

int				ft_check_dimension(t_list *head, int *dimension);

int				call_rush(int lim[], int colle[], int ind, char c);

void			check_all(int *limit, t_list *t, int *colle);

char			rush00(int width, int height, int y, int x);

char			rush01(int width, int height, int y, int x);

char			rush02(int width, int height, int y, int x);

char			rush03(int width, int height, int y, int x);

char			rush04(int width, int height, int y, int x);

void			init_tab(int *t);

void			free_list(t_list    **begin);
#endif
