/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moves.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdescamp <vdescamp@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 19:08:29 by vdescamp          #+#    #+#             */
/*   Updated: 2022/09/05 11:46:42 by vdescamp         ###   ########.fr       */
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

	a = (*list_a)->next;
	(*list_a)->next = *list_b;
	*list_b = *list_a;
	*list_a = a;
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
}

void	reverse_rotate(t_list **list)
{
	t_list	*a;
	t_list	*last;
	t_list	*bfl;

	last = get_last_elem(*list);
	bfl = elem_before_last(*list);
	a = *list;
	*list = last;
	(*list)->next = a;
	bfl->next = NULL;
}
