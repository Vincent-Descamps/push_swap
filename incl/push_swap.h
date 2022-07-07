/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdescamp <vdescamp@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 15:28:21 by vdescamp          #+#    #+#             */
/*   Updated: 2022/07/06 17:07:27 by vdescamp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

typedef struct s_list
{
	int				data;
	struct s_list	*next;
}	t_list;

typedef struct s_stack
{
	t_list	*stack_a;
	t_list	*stack_b;
}	t_stack;

t_list	*parse_list_str(char *str, t_list *list_a);
t_list	*parse_list_int(char **argv, t_list *list_b);
t_list	*empty_list(void);
t_list	*add_at(t_list *L, int data, int pos);
t_list	*free_at(t_list *L, int pos);
t_list	*free_list(t_list *L);
t_list	*create_cell(int data);
int		is_empty_list(t_list *L);
void	print_list(t_list *L);
int		ft_atoi(const char *str);
char	*ft_error(void);
int		move_sa(t_list	*list_a);
void	move_pa(t_list	*list_a, t_list	*list_b);
char	**ft_split(char const *s, char c);

#endif
