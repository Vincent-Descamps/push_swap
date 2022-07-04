/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moves.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdescamp <vdescamp@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 19:08:29 by vdescamp          #+#    #+#             */
/*   Updated: 2022/06/28 09:07:16 by vdescamp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/push_swap.h"

int	move_sa(t_list	*list_a)
{
	int	temp;

	if (list_a->data && list_a->next)
	{
		temp = list_a->data;
		list_a->data = list_a->next;
		list_a->next = temp;
	}
	return (0);
}
