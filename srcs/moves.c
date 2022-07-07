/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moves.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdescamp <vdescamp@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 19:08:29 by vdescamp          #+#    #+#             */
/*   Updated: 2022/07/07 12:15:22 by vdescamp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/push_swap.h"

void	move_sa(t_list	*list)
{
	int	temp;

	if (list->data && list->next)
	{
		temp = list->data;
		list->data = list->next->data;
		list->next->data = temp;
	}
}

void	move_pb(t_list	**list_a, t_list	**list_b)
{
	t_list	*temp;

	if (!*list_a)
		exit (0);
	temp->data = (*list_a)->data;
	printf("%d", (*list_a)->data);
	//(*list_a)->data = (*list_a)->next;
	/**list_b = add_at(*list_b, &list_a->data, 0);
	*list_a = free_at(*list_a, 0);*/
	printf("---------\n");
	//print_list(*list_a);
	printf("---------\n");
	//print_list(*list_b);
	printf("---------\n");
}
