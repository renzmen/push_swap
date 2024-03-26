/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operation.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lorenzo <lorenzo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 19:42:15 by lorenzo           #+#    #+#             */
/*   Updated: 2024/03/14 17:53:02 by lorenzo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	sa(t_node *a)
{
	int	tmp;

	if (!a || !a->next)
		return ;
	tmp = a->value;
	a->value = a->next->value;
	a->next->value = tmp;
	set_index(&a);
	ft_printf("sa\n");
}

void	sb(t_node *b)
{
	int	tmp;

	if (!b || !b->next)
		return ;
	tmp = b->value;
	b->value = b->next->value;
	b->next->value = tmp;
	set_index(&b);
	ft_printf("sb\n");
}

void	ss(t_node *a, t_node *b)
{
	int	tmp;
	
	if (!b || !b->next || !a || !a->next)
		return ;
	tmp = a->value;
	a->value = a->next->value;
	a->next->value = tmp;
	tmp = b->value;
	b->value = b->next->value;
	b->next->value = tmp;
	set_index(&a);
	set_index(&b);
	ft_printf("ss\n");
}

void	ra(t_node **a)
{
	*a = (*a)->next;
	set_index(a);
	ft_printf("ra\n");
}

void	rb(t_node **b)
{
	*b = (*b)->next;
	set_index(b);
	ft_printf("rb\n");
}