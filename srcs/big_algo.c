/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   big_algo.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdescamp <vdescamp@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 15:51:22 by vdescamp          #+#    #+#             */
/*   Updated: 2022/09/09 12:59:48 by vdescamp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/push_swap.h"

void	big_algo(t_list **list_a, t_list **list_b)
{
	int		med;
	int		len;
	int		last_index;
	int		index;
	t_list	*tmp;

	len = list_len(*list_a);
	med = len / 2;
	last_index = len - 1;
	index = len / 5;
	//printf("len : %d\n", len);
	//printf("med : %d\n", med);
	index_list(*list_a);
	tmp = *list_b;
	/*
	while ((*list_a)->next != NULL)
	{
		while (!((*list_a)->index <= index))
		{
			if (get_pos_index(*list_a, index) < med)
				execute(list_a, list_b, 1, "ra");
			else if (get_pos_index(*list_a, index) >= med)
				execute(list_a, list_b, 1, "rra");
		}
		execute(list_a, list_b, 1, "pb");
		index++;
	}
	while (!(is_empty_list(*list_b)))
		execute(list_a, list_b, 1, "pa");
	*/
	while (len > 3)
	{
		while (len > med)
		{
			if ((*list_a)->index >= med - 1)
			{
				execute(list_a, list_b, 1, "pb");
				len--;
			}
			if (((*list_a)->index < med))
				execute(list_a, list_b, 1, "ra");
		}
		execute(list_a, list_b, 1, "pb");
		len--;
	}
	small_algo(list_a, list_b);
}

/*
void	big_algo(t_list **list_a, t_list **list_b)
{
	int		med;
	int		index;
	int		len;
	int		tmp;

	len = list_len(*list_a) - 1;
	tmp = len;
	med = (list_len(*list_a) / 2);
	index_list(*list_a);
	index = 0;
	while (index <= len)
	{
		if ((*list_a)->index < med)
			execute(list_a, list_b, 1, "pb");
		else if ((*list_a)->index >= med)
			execute(list_a, list_b, 1, "ra");
		index++;
	}
	len = list_len(*list_a) - 1;
	med = (list_len(*list_a));
	index = 0;
	while (index < len - 2)
	{
		execute(list_a, list_b, 1, "pb");
		index++;
	}
	small_algo(list_a, list_b);
	index = 0;

	while (index < list_len(*list_b))
	{
		if ((*list_b)->index < (*list_a)->index)
			execute(list_a, list_b, 1, "pa");
		else if ((*list_b)->index > (*list_a)->index)
		{
			while ((*list_b)->index > (*list_a)->index)
			{
				if ((*list_b)->index == tmp)
				{
					execute(list_a, list_b, 1, "pa");
					execute(list_a, list_b, 1, "ra");
				}
				execute(list_a, list_b, 1, "ra");
				break ;
			}
			execute(list_a, list_b, 1, "pa");
			execute(list_a, list_b, 1, "rra");
		}
		index++;
	}
}
***************First algo... to long...*****************
	while (index <= len)
	{
		if (get_pos_index(*list_a, index) < med)
		{
			while ((*list_a)->index != index)
				execute(list_a, list_b, 1, "ra");
		}
		if (get_pos_index(*list_a, index) >= med)
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

void	big_algo(t_list **list_a, t_list **list_b)
{
	int		index;
	int		len;

	len = list_len(*list_a);
	index = 0;
	index_list(*list_a);
	while (--len > 2)
	{
		execute(list_a, list_b, 1, "pb");
	}
}
*/
