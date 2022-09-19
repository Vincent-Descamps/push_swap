/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_1_1.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdescamp <vdescamp@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 10:46:54 by vdescamp          #+#    #+#             */
/*   Updated: 2022/09/19 11:31:59 by vdescamp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/push_swap.h"

/*Note : Not all functions are used as i left those when i was trying different
 things at the beginning of the project. ie : free_at / free_list
 They are kept in case they are needed for future improvement */
t_list	*free_at(t_list *L, int pos)
{
	t_list	*prec;
	t_list	*cur;
	int		i;

	prec = L;
	cur = L;
	if (is_empty_list(L))
		return (NULL);
	if (pos == 0)
	{
		L = L->next;
		free(cur);
		return (L);
	}
	i = 0;
	while (i++ < pos)
	{
		prec = cur;
		cur = cur->next;
	}
	prec->next = cur->next;
	free(cur);
	return (L);
}

t_list	*free_list(t_list *L)
{
	t_list	*tmp;

	tmp = NULL;
	while (L)
	{
		tmp = L->next;
		free(L);
		L = tmp;
	}
	return (L);
}

t_list	*get_last_elem(t_list *L)
{
	while (L && L->next != NULL)
		L = L->next;
	return (L);
}

t_list	*elem_before_last(t_list *L)
{
	while (L->next && L->next->next != NULL)
		L = L->next;
	return (L);
}
