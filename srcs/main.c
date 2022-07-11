/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdescamp <vdescamp@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 15:26:21 by vdescamp          #+#    #+#             */
/*   Updated: 2022/07/11 15:23:05 by vdescamp         ###   ########.fr       */
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
	printf("--->%d\n", list_len(list_a));
	push(&list_a, &list_b);
	swap(&list_a);
	push(&list_a, &list_b);
	rotate(&list_a);
	printf("list_a:\n");
	print_list(list_a);
	printf("list_b:\n");
	print_list(list_b);
	return (0);
}
