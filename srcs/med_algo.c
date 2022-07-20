/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   med_algo.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdescamp <vdescamp@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 10:24:40 by vdescamp          #+#    #+#             */
/*   Updated: 2022/07/20 12:24:01 by vdescamp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/push_swap.h"

void	check_elem(t_list **list_a, t_list **list_b)
{
	int	temp;
	int	i;
	
	if ((*list_a)->data > (*list_a)->next->data)
	{
		i = 1;
		temp = (*list_a)->data;
		while (temp > get_elem(*list_a, i) || i == list_len(*list_a))
		{
			i++;
			if (i == list_len(*list_a))
				break ;
		}
		*list_a = free_at(*list_a, 0);
		*list_a = add_at(*list_a, temp, i - 1);
	}
}

void	med_algo(t_list **list_a, t_list **list_b)
{
	push(list_a, list_b);
	push(list_a, list_b);
	check_algo(list_a, list_b);
	push(list_b, list_a);
	check_elem(list_a, list_b);
	push(list_b, list_a);
	check_elem(list_a, list_b);
}
