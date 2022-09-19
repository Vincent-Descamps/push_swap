/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_1_2.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdescamp <vdescamp@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 10:49:01 by vdescamp          #+#    #+#             */
/*   Updated: 2022/09/19 11:32:11 by vdescamp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/push_swap.h"

/*Note : Not all functions are used as i left those when i was trying different
 things at the beginning of the project. ie print_elem / get_elem
 They are kept in case they are needed for future improvement */
void	free_list2(t_list **list)
{
	t_list	*tmp;

	if (!list || !(*list))
		return ;
	while (*list)
	{
		tmp = (*list)->next;
		free(*list);
		*list = tmp;
	}
	*list = NULL;
}

void	print_elem(t_list *L, int pos)
{
	int		i;

	i = 0;
	if (pos > list_len(L))
	{
		printf("print_elem : position given higher than length of list...\n");
		exit (0);
	}
	while (i < pos)
	{
		i++;
		L = L->next;
	}
	printf("***%d***\n", L->data);
}

int	get_elem(t_list *L, int pos)
{
	int	i;

	i = 0;
	if (pos > list_len(L))
	{
		printf("print_elem : position given higher than length of list...\n");
		exit (0);
	}
	while (i < pos)
	{
		i++;
		L = L->next;
	}
	return (L->data);
}
