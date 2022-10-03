/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_algo.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdescamp <vdescamp@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 11:08:56 by vdescamp          #+#    #+#             */
/*   Updated: 2022/10/03 10:46:53 by vdescamp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/push_swap.h"

void	for_four(t_list **list_a, t_list **list_b)
{
	execute(list_a, list_b, 1, "pb");
	small_algo(list_a, list_b);
	if ((*list_b)->data < (*list_a)->data)
		execute(list_a, list_b, 1, "pa");
	else if ((*list_b)->data > (*list_a)->data)
	{
		if ((*list_b)->data > get_last_elem(*list_a)->data)
		{
			execute(list_a, list_b, 1, "pa");
			execute(list_a, list_b, 1, "ra");
		}
		else
		{
			while ((*list_b)->data > (*list_a)->data)
				execute(list_a, list_b, 1, "ra");
			execute(list_a, list_b, 1, "pa");
		}
	}
	if (get_last_elem(*list_a)->data < (*list_a)->data)
	{
		while (get_last_elem(*list_a)->data < (*list_a)->data)
			execute(list_a, list_b, 1, "rra");
	}
}

int	check_algo(t_list **list_a, t_list **list_b)
{
	if (list_len(*list_a) == 2 && (*list_a)->data > (*list_a)->next->data)
		execute(list_a, list_b, 1, "sa");
	if (list_len(*list_a) == 4)
		for_four(list_a, list_b);
	if (list_len(*list_a) == 3)
		small_algo(list_a, list_b);
	if (list_len(*list_a) == 5)
		med_algo(list_a, list_b);
	if (list_len(*list_a) > 5)
		big_algo(list_a, list_b);
	return (0);
}
