/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdescamp <vdescamp@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 15:26:21 by vdescamp          #+#    #+#             */
/*   Updated: 2022/06/27 19:18:06 by vdescamp         ###   ########.fr       */
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
	if (argc == 1)
		ft_error();
	if (argc == 2)
		parse_list_str(argv[1]);
	if (argc > 2)
		parse_list_int(argv);
	return (0);
}