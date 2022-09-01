/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moves.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdescamp <vdescamp@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 19:08:29 by vdescamp          #+#    #+#             */
/*   Updated: 2022/09/01 16:50:04 by vdescamp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/push_swap.h"

void	swap(t_list **list)
{
	int	temp;

	if ((*list)->data && (*list)->next)
	{
		temp = (*list)->data;
		(*list)->data = (*list)->next->data;
		(*list)->next->data = temp;
	}
}

void	push(t_list **list_a, t_list **list_b)
{
	t_list	*a;
	t_list	*b;

	a = *list_a;
	*list_b = a;
	*list_a = a->next;
	b = *list_b;
	b->next = NULL;
/*
	if (!list_a)
		exit (0);
	*list_b = add_at(*list_b, (*list_a)->data, 0);
	*list_a = free_at(*list_a, 0);*/
}

void	rotate(t_list **list)
{
	t_list	*a;
	t_list	*last;

	a = *list;
	*list = (*list)->next;
	last = get_last_elem(*list);
	a->next = NULL;
	last->next = a;
	/*
	*list = free_at(*list, 0);
	*list = add_at(*list, temp, list_len(*list));
	*/
}

void	reverse_rotate(t_list **list)
{
	t_list	*a;
	t_list	*tmp;

	a = *list;
	tmp = get_last_elem(*list);
	a->next = a;
/*
	temp = get_elem(*list, list_len(*list) - 1);
	*list = free_at(*list, list_len(*list) - 1);
	*list = add_at(*list, temp, 0);*/
}
