/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_dbl.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdescamp <vdescamp@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 13:40:47 by vdescamp          #+#    #+#             */
/*   Updated: 2022/09/19 13:52:40 by vdescamp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/push_swap.h"

void	check_dbl(t_list **list)
{
	t_list	*tmp;

	tmp = (*list)->next;
	while (*list)
	{
		while ((!is_empty_list(tmp)))
		{
			if (*list = tmp)
				ft_error();
			tmp = tmp->next;
		}
	}
}
