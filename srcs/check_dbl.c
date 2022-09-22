/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_dbl.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdescamp <vdescamp@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 13:40:47 by vdescamp          #+#    #+#             */
/*   Updated: 2022/09/22 12:12:45 by vdescamp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/push_swap.h"

void	check_dbl(t_list **list)
{
	t_list	*tmp;
	t_list	*check;

	check = *list;
	while (check)
	{
		tmp = check->next;
		while (tmp)
		{
			if (check->data == tmp->data)
				ft_error();
			tmp = tmp->next;
		}
		check = check->next;
	}
}
