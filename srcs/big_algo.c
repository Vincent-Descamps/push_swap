/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   big_algo.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdescamp <vdescamp@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 15:51:22 by vdescamp          #+#    #+#             */
/*   Updated: 2022/08/10 16:11:12 by vdescamp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/push_swap.h"

void	big_algo(t_list **list_a, t_list **list_b)
{
	int		med;
	int		index;
	int		len;

	len = list_len(*list_a);
	med = list_len(*list_a) / 2;
	index_list(*list_a);
	index = 0;
	while (index < len)
	{
		if (get_pos_index(*list_a, index) < med)
		{
			while ((*list_a)->index != index)
				execute(list_a, list_b, 1, "ra");
		}
		else if (get_pos_index(*list_a, index) > med)
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
