/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   index.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdescamp <vdescamp@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 16:42:18 by vdescamp          #+#    #+#             */
/*   Updated: 2022/09/05 10:38:20 by vdescamp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/push_swap.h"

void	index_list(t_list	*list_a)
{
	t_list	*a;
	t_list	*tmp;
	int		min;
	int		len;

	len = list_len(list_a);
	while (--len > 0)
	{
		a = list_a;
		min = INT_MIN;
		while (a)
		{
			if (a->data > min && a->index == 0)
			{
				min = a->data;
				tmp = a;
				a = list_a;
			}
			else
				a = a->next;
		}
		if (!is_empty_list(tmp))
			tmp->index = len;
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
