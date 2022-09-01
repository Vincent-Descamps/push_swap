/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   index.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdescamp <vdescamp@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 16:42:18 by vdescamp          #+#    #+#             */
/*   Updated: 2022/09/01 12:36:13 by vdescamp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/push_swap.h"

void	index_list(t_list	*list_a)
{
	t_list	*ptr;
	t_list	*decrease;
	int		min;
	int		len;

	len = list_len(list_a);
	printf("%d\n", len);
	while (--len > 0)
	{
		ptr = list_a;
		min = INT_MIN;
		while (ptr)
		{
			if (ptr->data > min && ptr->index == 0)
			{
				min = ptr->data;
				decrease = ptr;
				ptr = list_a;
			}
			else
				ptr = ptr->next;
		}
		if (!is_empty_list(decrease))
			decrease->index = len;
	}
}
/*
void	index_list(t_list	*list_a)
{
	int	min;
	int	len;

	min = INT_MIN;
	len = list_len(list_a);
	print_list(list_a);
	while (len > 0)
	{

	}
}*/
