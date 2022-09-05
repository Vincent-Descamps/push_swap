/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_algo.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdescamp <vdescamp@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 11:37:43 by vdescamp          #+#    #+#             */
/*   Updated: 2022/09/05 12:42:53 by vdescamp         ###   ########.fr       */
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

/*void	algo_four(t_list_a **list_a)
{
	int	temp;
	int a, b, c, d;

	a = (*list_a)->data;
	b = (*list_a)->next->data;
	c = (*list_a)->next->next->data;
	d = (*list_a)->next->next->next->data;
	while (!(a < b && b < c && c < d))
	{
		if (a > b)
		{
			temp = a;
			a = b;
			b = temp;
		}
	}
}*/
