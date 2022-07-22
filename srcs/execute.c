/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   execute.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdescamp <vdescamp@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/22 15:31:46 by vdescamp          #+#    #+#             */
/*   Updated: 2022/07/22 15:38:32 by vdescamp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/push_swap.h"

void	execute(t_list **list_a, t_list **list_b, int check, char *str)
{
	if (check == 1)
		printf("%s\n", str);
	if (ft_strcmp(str, "sa") == 0)
		swap(list_a);
	if (ft_strcmp(str, "sb") == 0)
		swap(list_b);
	if (ft_strcmp(str, "ra") == 0)
		rotate(list_a);
	if (ft_strcmp(str, "rb") == 0)
		rotate(list_b);
	if (ft_strcmp(str, "rra") == 0)
		reverse_rotate(list_a);
	if (ft_strcmp(str, "rrb") == 0)
		reverse_rotate(list_b);
	if (ft_strcmp(str, "pa") == 0)
		push(list_b, list_a);
	if (ft_strcmp(str, "pb") == 0)
		push(list_a, list_b);
}

void	execute_dbl(t_list **list_a, t_list **list_b, int check, char *str)
{
	if (check == 1)
		printf("%s\n", str);
	if (ft_strcmp(str, "ss") == 0)
	{
		swap(list_a);
		swap(list_b);
	}
	if (ft_strcmp(str, "rr") == 0)
	{
		rotate(list_a);
		rotate(list_b);
	}
	if (ft_strcmp(str, "rrr") == 0)
	{
		reverse_rotate(list_a);
		reverse_rotate(list_b);
	}
}
