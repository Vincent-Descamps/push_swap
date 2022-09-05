/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdescamp <vdescamp@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 15:26:21 by vdescamp          #+#    #+#             */
/*   Updated: 2022/09/05 11:53:20 by vdescamp         ###   ########.fr       */
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
	check_algo(&list_a, &list_b);
	//execute(&list_a, &list_b, 1, "sa");
	//execute(&list_a, &list_b, 1, "sa");
	printf("list_a:\n");
	print_list(list_a);
	printf("list_b:\n");
	print_list(list_b);
	free_list2(&list_a);
	free_list2(&list_b);
	if (is_empty_list(list_a))
		printf("all good_a\n");
	if (is_empty_list(list_b))
		printf("all good_b\n");
	return (0);
}
