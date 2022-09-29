/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   huge_algo.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdescamp <vdescamp@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 19:21:13 by vdescamp          #+#    #+#             */
/*   Updated: 2022/09/27 14:15:37 by vdescamp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/push_swap.h"

static void	chunk(t_list **list_a, t_list **list_b, int len, int x)
{
	int	last_index;
	int	med;
	int	chunk;
	int	frac;

	last_index = len;
	med = len / 2;
	frac = x * (len / 11);
	chunk = len - frac;
	while ((list_len(*list_b) < frac - 2))
	{
		while ((*list_a)->index >= chunk && (*list_a)->index != last_index)
			execute(list_a, list_b, 1, "pb");
		execute(list_a, list_b, 1, "ra");
	}
}

static void	finish(t_list **list_a, t_list **list_b)
{
	while ((*list_a)->index != 1)
		execute(list_a, list_b, 1, "ra");
}

static void	part_2(t_list **list_a, t_list **list_b)
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

void	huge_algo(t_list **list_a, t_list **list_b)
{
	int	med;
	int	len;
	int	last_index;
	int	x;

	len = list_len(*list_a);
	med = (len / 2);
	last_index = len;
	x = 0;
	index_list(*list_a);
	while (list_len(*list_a) > 3)
	{
		while (++x < 11)
			chunk(list_a, list_b, len, x);
		if ((*list_a)->index == 1 || (*list_a)->index == last_index)
			execute(list_a, list_b, 1, "ra");
		else
			execute(list_a, list_b, 1, "pb");
	}
	//small_algo(list_a, list_b);
	if ((*list_a)->data > (*list_a)->next->data)
		execute(list_a, list_b, 1, "sa");
	part_2(list_a, list_b);
	finish(list_a, list_b);
}
