/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   index.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdescamp <vdescamp@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 16:42:18 by vdescamp          #+#    #+#             */
/*   Updated: 2022/09/26 16:55:28 by vdescamp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/push_swap.h"

void	index_list(t_list	*list_a)
{
	t_list	*a;
	t_list	*tmp;
	int		min;
	int		len;

	len = list_len(list_a) + 1;
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
