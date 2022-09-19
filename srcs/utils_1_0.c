/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_1_0.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdescamp <vdescamp@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 10:45:30 by vdescamp          #+#    #+#             */
/*   Updated: 2022/09/19 11:31:41 by vdescamp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/push_swap.h"

/*Note : Not all functions are used as i left those when i was trying different
 things at the beginning of the project. ie : empty_list
 They are kept in case they are needed for future improvement */
t_list	*create_cell(int data)
{
	t_list	*cell;

	cell = malloc(sizeof(t_list));
	if (!cell)
		return (NULL);
	cell->data = data;
	cell->index = 0;
	cell->next = NULL;
	return (cell);
}

t_list	*empty_list(void)
{
	return (NULL);
}

int	is_empty_list(t_list *L)
{
	return (L == NULL);
}

int	list_len(t_list *L)
{
	int	i;

	i = 0;
	while (L)
	{
		i++;
		L = L->next;
	}
	return (i);
}

t_list	*add_at(t_list *L, int data, int pos)
{
	t_list	*prec;
	t_list	*cur;
	t_list	*cell;
	int		i;

	prec = L;
	cur = L;
	cell = create_cell(data);
	if (is_empty_list(L))
		return (cell);
	if (pos == 0)
	{
		cell->next = L;
		return (cell);
	}
	i = 0;
	while (i++ < pos)
	{
		prec = cur;
		cur = cur->next;
	}
	prec->next = cell;
	cell->next = cur;
	return (L);
}
