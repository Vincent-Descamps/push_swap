/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdescamp <vdescamp@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 15:26:21 by vdescamp          #+#    #+#             */
/*   Updated: 2022/09/26 16:55:38 by vdescamp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/push_swap.h"

int	main(int argc, char **argv)
{
	t_list	*list_a;
	t_list	*list_b;

	list_a = empty_list();
	list_b = empty_list();
	if (argc > 1)
	{
		if (argc == 2)
			list_a = parse_list_str(argv[1], list_a);
		if (argc > 2)
			list_a = parse_list_int(argv, list_a);
		if (is_sorted(&list_a, &list_b) == 0)
			return (0);
		check_dbl(&list_a);
		check_algo(&list_a, &list_b);
		/*printf("list a:");
		print_list(list_a);
		printf("list b:");
		print_list(list_b);*/
		free_list2(&list_a);
		free_list2(&list_b);
	}
	return (0);
}
