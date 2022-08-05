/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   big_algo.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdescamp <vdescamp@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 15:51:22 by vdescamp          #+#    #+#             */
/*   Updated: 2022/08/05 12:48:38 by vdescamp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/push_swap.h"

//put the data in list_a with index 0 on top of the list

void	big_algo(t_list **list_a, t_list **list_b)
{
	int		med;
	int		data;
	int		index;
	int		len;

	len = list_len(*list_a);
	med = list_len(*list_a) / 2;
	index = 0;
	printf("===>%d\n", len);
	while (index < len)
	{
		while ((*list_a)->index != index)
			execute(list_a, list_b, 1, "ra");
		if ((*list_a)->index == index)
			execute(list_a, list_b, 1, "pb");
		index++;
	}
	while (!is_empty_list(*list_b))
		execute(list_a, list_b, 1, "pa");
}