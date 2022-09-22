/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_sorted.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdescamp <vdescamp@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 12:40:43 by vdescamp          #+#    #+#             */
/*   Updated: 2022/09/22 12:56:38 by vdescamp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/push_swap.h"

int	is_sorted(t_list **list_a, t_list **list_b)
{
	t_list	*a;

	a = *list_a;
	if (!(is_empty_list(*list_b)))
		return (1);
	while (a)
	{
		if (a->next == NULL)
			return (0);
		if (a->data < a->next->data)
			a = a->next;
		else
			return (1);
	}
	return (0);
}
