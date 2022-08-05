/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdescamp <vdescamp@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 15:26:21 by vdescamp          #+#    #+#             */
/*   Updated: 2022/08/05 10:21:49 by vdescamp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/push_swap.h"

char	*ft_error(void)
{
	write(1, "Error\n", 6);
	exit (0);
}

int	main(int argc, char **argv)
{
	t_list	*list_a;
	t_list	*list_b;

	list_a = empty_list();
	list_b = empty_list();
	if (argc == 1)
		ft_error();
	if (argc == 2)
		list_a = parse_list_str(argv[1], list_a);
	if (argc > 2)
		list_a = parse_list_int(argv, list_a);
	index_list(list_a);
	printf("data : %d, index : %d\n", list_a->data, list_a->index);
	printf("data : %d, index : %d\n", list_a->next->data, list_a->next->index);
	printf("data : %d, index : %d\n", list_a->next->next->data, list_a->next->next->index);
	printf("data : %d, index : %d\n", list_a->next->next->next->data, list_a->next->next->next->index);
	check_algo(&list_a, &list_b);
	printf("list_a:\n");
	print_list(list_a);
	printf("list_b:\n");
	print_list(list_b);
	free_list(list_a);
	free_list(list_b);
	return (0);
}
