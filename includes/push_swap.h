/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lorenzo <lorenzo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 12:39:18 by lorenzo           #+#    #+#             */
/*   Updated: 2024/03/26 09:55:03 by lorenzo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../libft/includes/libft.h"
# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include <limits.h>
# include <stddef.h>

int		main(int argc, char **argv);
void	error_syntax(t_node *a, char *n);
void	free_stack(t_node **stack);
void	free_matrix(char **argv);
void	init_stack(t_node **a, int argc, char **argv);
void	check_dup(t_node **a, int n);
void	error_free(t_node **a);// char **argv);
char	**sort_argv(char **argv);
t_node	*new_node(int n);
void	add_head(t_node **head, t_node *node);
void	add_tail(t_node **head, t_node *node);
void	del_head(t_node **head);
t_node	*find_min(t_node **stack);
t_node	*find_max(t_node **stack);
int		sorted(t_node **a);
void	sa(t_node *a);
void	sb(t_node *b);
void	ss(t_node *a, t_node *b);
void	ra(t_node **a);
void	rb(t_node **b);
void	rr(t_node **a, t_node **b);
void	rra(t_node **a);
void	rrb(t_node **b);
void	rrr(t_node **a, t_node **b);
void	push(t_node **src, t_node **dst, int f);
void	set_index(t_node **stack);
void	sort_3_n(t_node **a);
void	sort_4_n(t_node **a, t_node **b);
void	sort_5_n(t_node **a, t_node **b);
int		get_bits(t_node **stack);
void	radix_sort(t_node **a, t_node **b);
t_node	*next_min(t_node **stack);
void	right_place(t_node **stack);
//void	set_place(t_node **stack);
#endif