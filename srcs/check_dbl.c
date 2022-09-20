/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_dbl.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdescamp <vdescamp@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 13:40:47 by vdescamp          #+#    #+#             */
/*   Updated: 2022/09/20 09:51:26 by vdescamp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/push_swap.h"

void	check_dbl(t_list **list)
{
	t_list	*tmp;
	t_list	*chk;

	chk = *list;
	while (chk)
	{
		tmp = chk->next;
		while (tmp)
		{
			if (chk->data == tmp->data)
				ft_error();
			tmp = tmp->next;
		}
		chk = chk->next;
	}
}
