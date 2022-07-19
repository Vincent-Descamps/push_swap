/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moves.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdescamp <vdescamp@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 19:08:29 by vdescamp          #+#    #+#             */
/*   Updated: 2022/07/19 10:05:22 by vdescamp         ###   ########.fr       */
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
	if (!list_a)
		exit (0);
	*list_b = add_at(*list_b, (*list_a)->data, 0);
	*list_a = free_at(*list_a, 0);
}

void	rotate(t_list **list)
{
	int	temp;

	if (!list)
		exit (0);
	temp = ((*list)->data);
	*list = free_at(*list, 0);
	*list = add_at(*list, temp, list_len(*list));
	printf("rr\n");
}

void	reverse_rotate(t_list **list)
{
	int	temp;

	if (!list)
		exit (0);
	temp = get_elem(*list, list_len(*list) - 1);
	*list = free_at(*list, list_len(*list) - 1);
	*list = add_at(*list, temp, 0);
}
