/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   med_algo.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdescamp <vdescamp@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 10:24:40 by vdescamp          #+#    #+#             */
/*   Updated: 2022/07/25 12:07:25 by vdescamp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/push_swap.h"

int	check_elem(t_list **list_a)
{	if (list_len(*list_a) == 5)
	{
		if (((*list_a)->data > (*list_a)->next->next->data) ||
			((*list_a)->data > (*list_a)	->next->next->next->data) ||
			((*list_a)->data > (*list_a)	->next->next->next->next->data))
			return (1);
	}
	if (list_len(*list_a) == 4)
	{
		if (((*list_a)->data > (*list_a)->next->data) ||
			((*list_a)->data > (*list_a)->next->next->data) ||
			((*list_a)->data > (*list_a)->next->next->next->data))
			return (1);
	}
	return (0);
}

void	med_algo(t_list **list_a, t_list **list_b)
{
	while (!(*list_b))
	{
		if (check_elem(list_a))
			execute(list_a, list_a, 1, "ra");
		else
			execute(list_a, list_b, 1, "pb");
	}
	while (check_elem(list_a))
			execute(list_a, list_a, 1, "ra");
	execute(list_a, list_b, 1, "pb");
	check_algo(list_a, list_b);
	if ((*list_b)->data < (*list_b)->next->data)
		execute(list_a, list_b, 1, "sb");
	execute(list_a, list_b, 1, "pa");
	execute(list_a, list_b, 1, "pa");
}
