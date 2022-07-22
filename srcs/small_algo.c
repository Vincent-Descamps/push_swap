/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_algo.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdescamp <vdescamp@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 11:37:43 by vdescamp          #+#    #+#             */
/*   Updated: 2022/07/22 13:45:38 by vdescamp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/push_swap.h"

void	small_algo(t_list **list)
{
	if ((*list)->next->data < (*list)->data
		&& (*list)->data < (*list)->next->next->data)
		execute(list, 0, "sa");
	if ((*list)->next->next->data < (*list)->next->data
		&& (*list)->next->data < (*list)->data)
	{
		rotate(list);
		swap(list);
	}
	if ((*list)->next->data < (*list)->next->next->data
		&& (*list)->next->next->data < (*list)->data)
		rotate(list);
	if ((*list)->data < (*list)->next->next->data
		&& (*list)->next->next->data < (*list)->next->data)
	{
		swap(list);
		rotate(list);
	}
	if ((*list)->next->next->data < (*list)->data
		&& (*list)->data < (*list)->next->data)
		reverse_rotate(list);
}

/*void	algo_four(t_list **list)
{
	int	temp;
	int a, b, c, d;

	a = (*list)->data;
	b = (*list)->next->data;
	c = (*list)->next->next->data;
	d = (*list)->next->next->next->data;
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
