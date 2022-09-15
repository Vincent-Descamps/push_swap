/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   big_algo.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdescamp <vdescamp@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 15:51:22 by vdescamp          #+#    #+#             */
/*   Updated: 2022/09/15 16:48:02 by vdescamp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/push_swap.h"

void	chunk(t_list **list_a, t_list **list_b, int last_index, int med, int len, int x)
{
	int	chunk;
	int	frac;
	//int chunk_size;
	//int	index;

	frac = x * (len / 5);
	//chunk_size = len / 5;
	chunk = len - frac;
	//index = chunk;
	//med = (chunk + chunk_size) / 2;
	//printf("frac : %d----chunk : %d\n", frac, chunk);
	//printf("med------------------>%d\n", med);
	/*while ((list_len(*list_b) < frac))
	{
		while ((*list_a)->index != index && index < chunk + chunk_size)
		{
			if (get_pos_index(*list_a, index) <= med)
				execute(list_a, list_b, 1, "ra");
			if (get_pos_index(*list_a, index) > med)
				execute(list_a, list_b, 1, "rra");
		}
		execute(list_a, list_b, 1, "pb");
		index++;
	}*/
	//**********First Algo**************
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
}

void	big_algo(t_list **list_a, t_list **list_b)
{
	int		med;
	int		len;
	int		last_index;
	int		x;

	len = list_len(*list_a);
	med = (len / 2);
	last_index = len - 1;
	x = 1;
	index_list(*list_a);
	/*chunk(list_a, list_b, last_index, med, len, x);
	chunk(list_a, list_b, last_index, med, len, x + 1);
	chunk(list_a, list_b, last_index, med, len, x + 2);
	chunk(list_a, list_b, last_index, med, len, x + 3);
	chunk(list_a, list_b, last_index, med, len, x + 4);*/
	//execute(list_a, list_b, 1, "pb");
	while (list_len(*list_a) > 3)
	{
		while (x < 5)
		{
			chunk(list_a, list_b, last_index, med, len, x);
			x++;
		}
		if ((*list_a)->index == 0 || (*list_a)->index == last_index || (*list_a)->index == med)
			execute(list_a, list_b, 1, "ra");
		else
			execute(list_a, list_b, 1, "pb");
	}
	small_algo(list_a, list_b);
	part_2(list_a, list_b);
	finish(list_a, list_b);
}
