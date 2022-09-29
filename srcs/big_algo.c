/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   big_algo.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdescamp <vdescamp@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 15:51:22 by vdescamp          #+#    #+#             */
/*   Updated: 2022/09/26 18:16:39 by vdescamp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/push_swap.h"

void	chunk(t_list **list_a, t_list **list_b, int len, int x)
{
	int	last_index;
	int	med;
	int	chunk;
	int	frac;

	med = len / 2;
	last_index = len;
	/*if (len > 199)
		frac = x * (len / 11);
	else*/
		frac = x * (len / 5);
	chunk = len - frac;
	while (list_len(*list_b) < frac - 2)
	{
		while ((*list_a)->index >= chunk && (*list_a)->index != last_index
			&& (*list_a)->index != med)
			execute(list_a, list_b, 1, "pb");
		execute(list_a, list_b, 1, "ra");
	}
}

void	finish(t_list **list_a, t_list **list_b)
{
	while ((*list_a)->index != 1)
		execute(list_a, list_b, 1, "ra");
}

void	part_2(t_list **list_a, t_list **list_b)
{
	execute(list_a, list_b, 1, "ra");
	execute(list_a, list_b, 1, "pa");
	while ((*list_b) != NULL)
	{
		if ((*list_b)->index < (*list_a)->index)
		{
			if ((*list_b)->index > get_last_elem(*list_a)->index)
			{
				execute(list_a, list_b, 1, "pa");
			}
			else if ((*list_b)->index < get_last_elem(*list_a)->index)
				execute(list_a, list_b, 1, "rra");
		}
		else if ((*list_b)->index > (*list_a)->index)
		{
			while ((*list_b)->index > (*list_a)->index)
				execute(list_a, list_b, 1, "ra");
			execute(list_a, list_b, 1, "pa");
		}
	}
}

void	big_algo(t_list **list_a, t_list **list_b)
{
	int		med;
	int		len;
	int		last_index;
	int		x;

	len = list_len(*list_a);
	med = (len / 2);
	last_index = len;
	x = 0;
	index_list(*list_a);
	while (list_len(*list_a) > 3)
	{
		while (++x < 5)
			chunk(list_a, list_b, len, x);
		if ((*list_a)->index == 1 || (*list_a)->index == last_index
			|| (*list_a)->index == med)
			execute(list_a, list_b, 1, "ra");
		else
			execute(list_a, list_b, 1, "pb");
	}
	small_algo(list_a, list_b);
	part_2(list_a, list_b);
	finish(list_a, list_b);
}
