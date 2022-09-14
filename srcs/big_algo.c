/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   big_algo.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdescamp <vdescamp@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 15:51:22 by vdescamp          #+#    #+#             */
/*   Updated: 2022/09/14 15:53:52 by vdescamp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/push_swap.h"

void	chunk_1(t_list **list_a, t_list **list_b, int last_index, int med, int len, int x)
{
	int	chunk;
	int	frac;

	frac = len / 5;
	frac = x * frac;
	chunk = len - (frac);
	while ((list_len(*list_b) < frac - 2))
	{
		while ((*list_a)->index >= chunk && (*list_a)->index != last_index && (*list_a)->index != med)
			execute(list_a, list_b, 1, "pb");
		execute(list_a, list_b, 1, "ra");
	}
}

void	finish(t_list **list_a, t_list **list_b)
{
	while ((*list_a)->index != 0)
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
	/*if ((*list_b)->index > (*list_a)->index)
	{
		while ((*list_b)->index > (*list_a)->index)
			execute(list_a, list_b, 1, "ra");
	}
	else if ((*list_b)->index < (*list_a)->index)
	{
		while ((*list_b)->index < (*list_a)->index)
			execute(list_a, list_b, 1, "rra");
	}
	execute(list_a, list_b, 1, "pa");*/
}

void	big_algo(t_list **list_a, t_list **list_b)
{
	int		med;
	int		len;
	int		last_index;
	int		x = 1;

	len = list_len(*list_a);
	med = (len / 2);
	last_index = len - 1;
	index_list(*list_a);
	/*chunk_1(list_a, list_b, last_index, len, 1);
	chunk_1(list_a, list_b, last_index, len, 2);
	chunk_1(list_a, list_b, last_index, len, 3);
	chunk_1(list_a, list_b, last_index, len, 4);*/
	while (list_len(*list_a) > 3)
	{
		while(x < 5)
		{
			chunk_1(list_a, list_b, last_index, med, len, x);
			x++;
		}
		if ((*list_a)->index == 0 || (*list_a)->index == last_index || (*list_a)->index == med)
			execute(list_a, list_b, 1, "ra");
		else
			execute(list_a, list_b, 1, "pb");
	}
	//chunk_1(list_a, list_b, last_index, 3);
	//chunk_1(list_a, list_b, last_index, len, 2);
	/*while (list_len(*list_a) > 3)
	{
		if (!((*list_a)->index == 0 || (*list_a)->index == med || (*list_a)->index == last_index))
			execute(list_a, list_b, 1, "pb");
		execute(list_a, list_b, 1, "ra");
	}*/
	small_algo(list_a, list_b);
	part_2(list_a, list_b);
	finish(list_a, list_b);
}
