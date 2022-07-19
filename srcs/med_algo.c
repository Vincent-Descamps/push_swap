/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   med_algo.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdescamp <vdescamp@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 10:24:40 by vdescamp          #+#    #+#             */
/*   Updated: 2022/07/19 12:17:46 by vdescamp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/push_swap.h"

void	med_algo(t_list **list_a, t_list **list_b)
{
	push(list_a, list_b);
	push(list_a, list_b);
	check_algo(list_a, list_b);
	push(list_b, list_a);
	check_algo(list_a, list_b);
}
