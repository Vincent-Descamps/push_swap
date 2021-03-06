/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdescamp <vdescamp@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 15:33:50 by vdescamp          #+#    #+#             */
/*   Updated: 2022/07/06 15:33:48 by vdescamp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/push_swap.h"

t_list	*parse_list_int(char **argv, t_list	*list_a)
{
	int		i;
	int		j;
	int		data;

	list_a = empty_list();
	i = -1;
	j = 0;
	while (argv[++i])
	{
		if (i == 0)
			i++;
		data = ft_atoi(argv[i]);
		list_a = add_at(list_a, data, j);
		j++;
	}
	print_list(list_a);
	printf("****************\n");
	return (list_a);
}

t_list	*parse_list_str(char *str, t_list *list_a)
{
	int		data;
	char	**tab;
	int		i;
	int		j;

	tab = ft_split(str, ' ');
	list_a = empty_list();
	i = -1;
	j = 0;
	while (tab[++i])
	{
		data = ft_atoi(tab[i]);
		list_a = add_at(list_a, data, j);
		j++;
	}
	print_list(list_a);
	printf("****************\n");
	return (list_a);
}
