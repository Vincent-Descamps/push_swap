/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_1_3.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdescamp <vdescamp@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 10:50:18 by vdescamp          #+#    #+#             */
/*   Updated: 2022/09/19 11:32:19 by vdescamp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/push_swap.h"

/*Note : Not all functions are used as i left those when i was trying different
 things at the beginning of the project. ie : print_list
 They are kept in case they are needed for future improvement */
int	get_pos(t_list *L, int data)
{
	int	i;

	i = 1;
	while (data != L->data)
	{
		i++;
		L = L->next;
	}
	return (i);
}

int	get_pos_index(t_list *L, int index)
{
	int	i;

	i = 1;
	while (index != L->index)
	{
		i++;
		L = L->next;
	}
	return (i);
}

void	print_list(t_list *L)
{
	if (is_empty_list(L))
		printf("NULL\n");
	while (L)
	{
		printf("data : %d -- index : %d\n", L->data, L->index);
		L = L->next;
	}
}
