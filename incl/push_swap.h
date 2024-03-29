/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdescamp <vdescamp@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 15:28:21 by vdescamp          #+#    #+#             */
/*   Updated: 2022/09/22 19:33:23 by vdescamp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <limits.h>

typedef struct s_list
{
	int				data;
	int				index;
	struct s_list	*next;
}	t_list;

typedef struct s_stack
{
	t_list	*stack_a;
	t_list	*stack_b;
}	t_stack;

t_list	*parse_list_str(char *str, t_list *list_a);
t_list	*parse_list_int(char **argv, t_list *list_b);
void	check_dbl(t_list **list);
int		is_sorted(t_list **list_a, t_list **list_b);
/**utIls To mAniPulaTe LinKEd cHaiNs**/
t_list	*empty_list(void);
t_list	*add_at(t_list *L, int data, int pos);
t_list	*free_at(t_list *L, int pos);
t_list	*free_list(t_list *L);
void	free_list2(t_list **list);
t_list	*create_cell(int data);
t_list	*get_last_elem(t_list *L);
t_list	*elem_before_last(t_list *L);
int		is_empty_list(t_list *L);
int		list_len(t_list *L);
int		get_elem(t_list *L, int pos);
int		get_pos(t_list *L, int data);
int		get_pos_index(t_list *L, int index);
void	print_list(t_list *L);
void	print_elem(t_list *L, int pos);
void	index_list(t_list *list_a);
int		check_elem(t_list **list_a);
/****************LIBFT***************/
int		ft_atoi(const char *str);
char	**ft_split(char const *s, char c);
char	*ft_error(void);
int		ft_strcmp(const char *s1, const char *s2);
/*********AvAilAble MOVES************/
void	swap(t_list	**list_a);
void	push(t_list	**list_a, t_list	**list_b);
void	rotate(t_list	**list);
void	reverse_rotate(t_list **list);
/***********AlgOriThMs****************/
int		check_algo(t_list **list_a, t_list **list_b);
void	execute(t_list **list_a, t_list **list_b, int check, char *str);
void	execute_dbl(t_list **list_a, t_list **list_b, int check, char *str);
void	small_algo(t_list **list_a, t_list **list_b);
void	med_algo(t_list **list_a, t_list **list_b);
void	big_algo(t_list **list_a, t_list **list_b);
void	huge_algo(t_list **list_a, t_list **list_b);

#endif
