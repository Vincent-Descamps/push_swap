/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_algo.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdescamp <vdescamp@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 11:08:56 by vdescamp          #+#    #+#             */
/*   Updated: 2022/07/22 14:36:01 by vdescamp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/push_swap.h"

int	check_algo(t_list **list_a, t_list **list_b)
{
	if (list_len(*list_a) == 2 && (*list_a)->data > (*list_a)->next->data)
		execute(list_a, list_b, 1, "sa");
	if (list_len(*list_a) == 3)
		small_algo(list_a, list_b);
	if (list_len(*list_a) == 5)
		med_algo(list_a, list_b);
	return (0);
}
