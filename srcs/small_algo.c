/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_algo.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdescamp <vdescamp@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 11:37:43 by vdescamp          #+#    #+#             */
/*   Updated: 2022/09/14 16:18:45 by vdescamp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/push_swap.h"

void	small_algo(t_list **list_a, t_list **list_b)
{
	if ((*list_a)->next->data < (*list_a)->data
		&& (*list_a)->data < (*list_a)->next->next->data)
		execute(list_a, list_b, 1, "sa");
	if ((*list_a)->next->next->data < (*list_a)->next->data
		&& (*list_a)->next->data < (*list_a)->data)
	{
		execute(list_a, list_b, 1, "ra");
		execute(list_a, list_b, 1, "sa");
	}
	if ((*list_a)->next->data < (*list_a)->next->next->data
		&& (*list_a)->next->next->data < (*list_a)->data)
		execute(list_a, list_b, 1, "ra");
	if ((*list_a)->data < (*list_a)->next->next->data
		&& (*list_a)->next->next->data < (*list_a)->next->data)
	{
		execute(list_a, list_b, 1, "sa");
		execute(list_a, list_b, 1, "ra");
	}
	if ((*list_a)->next->next->data < (*list_a)->data
		&& (*list_a)->data < (*list_a)->next->data)
		execute(list_a, list_b, 1, "rra");
}
