/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_algo.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdescamp <vdescamp@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 11:08:56 by vdescamp          #+#    #+#             */
/*   Updated: 2022/07/20 10:48:19 by vdescamp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/push_swap.h"

int	check_algo(t_list **list_a, t_list **list_b)
{
	if (list_len(*list_a) == 2 && (*list_a)->data > (*list_a)->next->data)
		swap(list_a);
	if (list_len(*list_a) == 3)
		small_algo(list_a);
	if (list_len(*list_a) == 5)
		med_algo(list_a, list_b);
	return (0);
}