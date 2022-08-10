/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   big_algo.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdescamp <vdescamp@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 15:51:22 by vdescamp          #+#    #+#             */
/*   Updated: 2022/08/10 14:10:29 by vdescamp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/push_swap.h"

void	big_algo(t_list **list_a, t_list **list_b)
{
	int		med;
	int		index;

	med = list_len(*list_a) / 2;
	index = 0;
	while (index < med * 2)
	{
		if (get_pos_index(*list_a, index) < med)
		{
			while ((*list_a)->index != index)
				execute(list_a, list_b, 1, "ra");
		}
		if (get_pos_index(*list_a, index) > med)
		{
			while ((*list_a)->index != index)
				execute(list_a, list_b, 1, "rra");
		}
		if ((*list_a)->index == index)
			execute(list_a, list_b, 1, "pb");
		index++;
	}
	while (!is_empty_list(*list_b))
		execute(list_a, list_b, 1, "pa");
}
