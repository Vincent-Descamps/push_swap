/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdescamp <vdescamp@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 15:33:50 by vdescamp          #+#    #+#             */
/*   Updated: 2022/06/27 20:19:58 by vdescamp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/push_swap.h"

int	parse_list_int(char **argv)
{
	t_list	*list_a;
	t_env	*env;
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
	move_sa(list_a);
	print_list(list_a);
	list_a = free_list(list_a);
	return (0);
}
/*probleme a regler avec la fonction ci dessous
des ints supplementaires sont inserés dans la liste
si l'int dépasse le digit... A REGLER*/
int	parse_list_str(char *str)
{
	t_list	*list_a;
	int		data;
	int		i;
	int		j;

	list_a = empty_list();
	i = 0;
	j = 0;
	while (str[i])
	{
		if (str[i] == ' ')
			i++;
		data = ft_atoi(&str[i]);
		if (str[i] == '-')
			i++;
		list_a = add_at(list_a, data, j);
		i++;
		j++;
	}
	print_list(list_a);
	list_a = free_list(list_a);
	return (0);
}
