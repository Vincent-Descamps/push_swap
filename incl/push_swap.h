/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdescamp <vdescamp@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 15:28:21 by vdescamp          #+#    #+#             */
/*   Updated: 2022/07/04 10:15:53 by vdescamp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <fcntl.h>
# include <math.h>
# include <string.h>

typedef struct s_list
{
	int				data;
	struct s_list	*next;
}	t_list;

typedef struct s_env
{
	t_list	*list_a;
	t_list	*list_b;
}	t_env;

int		parse_list_str(char *str);
int		parse_list_int(char **argv);
t_list	*empty_list(void);
int		is_empty_list(t_list *L);
t_list	*add_at(t_list *L, int data, int pos);
void	print_list(t_list *L);
t_list	*free_list(t_list *L);
int		ft_atoi(const char *str);
char	*ft_error(void);
int		move_sa(t_list	*list_a);
char	**ft_split(char const *s, char c);

#endif
