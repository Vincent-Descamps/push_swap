/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdescamp <vdescamp@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 15:57:02 by vdescamp          #+#    #+#             */
/*   Updated: 2022/07/06 16:20:02 by vdescamp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/push_swap.h"

t_list	*create_cell(int data)
{
	t_list	*cell;

	cell = malloc(sizeof(t_list));
	if (!cell)
		return (NULL);
	cell->data = data;
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

t_list	*free_at(t_list *L, int pos)
{
	t_list	*prec;
	t_list	*cur;
	t_list	*cell;
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

void	print_list(t_list *L)
{
	while (L)
	{
		printf("%d\n", L->data);
		L = L->next;
	}
	printf("\n");
}
