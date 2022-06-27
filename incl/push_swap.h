/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdescamp <vdescamp@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 15:28:21 by vdescamp          #+#    #+#             */
/*   Updated: 2022/06/27 18:05:44 by vdescamp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>
# include <stdlib.h>
# include <fcntl.h>
# include <math.h>
# include <string.h>

typedef struct s_list
{
	int				data;
	struct s_list	*next;
}	t_list;

int		parse_list_str(char *str);
int		parse_list_int(char **argv);
t_list	*empty_list(void);
int		is_empty_list(t_list *L);
t_list	*add_at(t_list *L, int data, int pos);
void	print_list(t_list *L);
void	print_list(t_list *L);
t_list	*free_list(t_list *L);
int		ft_atoi(const char *str);

#endif
