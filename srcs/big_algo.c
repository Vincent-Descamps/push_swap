/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   big_algo.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdescamp <vdescamp@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 15:51:22 by vdescamp          #+#    #+#             */
/*   Updated: 2022/09/13 15:15:33 by vdescamp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/push_swap.h"

void	finish(t_list **list_a, t_list **list_b)
{
	while ((*list_a)->index != 0)
		execute(list_a, list_b, 1, "ra");
}

void	part_2(t_list **list_a, t_list **list_b)
{
	int	len;
	int	med;

	len = list_len(*list_b) - 1;
	med = len / 2;
	execute(list_a, list_b, 1, "ra");
	execute(list_a, list_b, 1, "pa");
	while ((*list_b)->next != NULL)
	{
		if ((*list_b)->index < (*list_a)->index)
		{
			if ((*list_b)->index > get_last_elem(*list_a)->index)
			{
				execute(list_a, list_b, 1, "pa");
				//len--;
			}
			else if ((*list_b)->index < get_last_elem(*list_a)->index)
				execute(list_a, list_b, 1, "rra");
		}
		if ((*list_b)->index > (*list_a)->index)
		{
			while ((*list_b)->index > (*list_a)->index)
				execute(list_a, list_b, 1, "ra");
			execute(list_a, list_b, 1, "pa");
			//len--;
		}
	}
	if ((*list_b)->index > (*list_a)->index)
	{
		while ((*list_b)->index > (*list_a)->index)
			execute(list_a, list_b, 1, "ra");
	}
	else if ((*list_b)->index < (*list_a)->index)
	{
		while ((*list_b)->index < (*list_a)->index)
			execute(list_a, list_b, 1, "rra");
	}
	execute(list_a, list_b, 1, "pa");
}

void	big_algo(t_list **list_a, t_list **list_b)
{
	int		med;
	int		len;
	int		last_index;
	//t_list	*tmp;

	//tmp = *list_b;
	len = list_len(*list_a);
	med = (len / 2);
	last_index = len - 1;
	index_list(*list_a);
	while (len > 3)
	{
		while (len > med + 3)
		{
			if ((*list_a)->index == 0 || (*list_a)->index == med || (*list_a)->index == last_index)
				execute(list_a, list_b, 1, "ra");
			if ((*list_a)->index > med)
			{
				execute(list_a, list_b, 1, "pb");
				len--;
			}
			else if (((*list_a)->index < med))
				execute(list_a, list_b, 1, "ra");
		}
		if ((*list_a)->index == 0 || (*list_a)->index == med || (*list_a)->index == last_index)
			execute(list_a, list_b, 1, "ra");
		else
		{
			execute(list_a, list_b, 1, "pb");
			len--;
		}
	}
	small_algo(list_a, list_b);
	part_2(list_a, list_b);
	finish(list_a, list_b);
}
