/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lorenzo <lorenzo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 17:05:22 by lorenzo           #+#    #+#             */
/*   Updated: 2024/03/26 09:33:38 by lorenzo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	sorted(t_node **a)
{
	t_node	*stack;

	stack = *a;
	while (stack->next != *a)
	{
		if (stack->value > stack->next->value)
			return(0);
		stack = stack->next;
	}
	return (1);
}

void	sort_3_n(t_node **a)
{
	print_list(a);
	if (!sorted(a))
	{
		if ((*a)->value > (*a)->next->value 
		&& (*a)->next->value > (*a)->next->next->value)
		{
			sa(*a);
			rra(a);
		}
		else if ((*a)->value > (*a)->next->value
		&& (*a)->next->next->value > (*a)->next->value)
		{
			if ((*a)->value > (*a)->next->next->value)
				ra(a);
			else
				sa(*a);
		}
		else if ((*a)->value < (*a)->next->value && (*a)->next->value > 
		(*a)->next->next->value && (*a)->value > (*a)->next->next->value)
			rra(a);
		else
		{
			rra(a);
			sa(*a);
		}
	}
}	

void	sort_4_n(t_node **a, t_node **b)
{
	t_node	*min;

	min = find_min(a);
	printf("\n\n sort 4 %d %d\n", min->value, min->index);
	if(!sorted(a))
	{
		if (min->index == 2)
			ra(a);
		else if (min->index == 3)
		{
			ra(a);
			ra(a);
		}
		else if (min->index == 4)
			rra(a);
		push(a, b, 1);
		print_list(a);
		sort_3_n(a);
		push(b, a, 0);
	}
}

void	sort_5_n(t_node **a, t_node **b)
{
	t_node	*min;

	min = find_min(a);
	printf("\n\nsort 5 %d %d\n", min->value, min->index);
	if(!sorted(a))
	{
		if (min->index == 2)
			ra(a);
		else if (min->index == 3)
		{
			ra(a);
			ra(a);
		}
		else if (min->index == 4)
		{
			rra(a);
			rra(a);
		}
		else if (min->index == 5)
			rra(a);
		push(a, b, 1);
		print_list(a);
		sort_4_n(a, b);
		push(b, a, 0);
	}
}


// void	sort_5_n(t_node **a, t_node **b)
// {
// 	int i = 0;
	
// 	printf("\nDIOCANE:\n");
// 	print_list(b);
// 	push(a, b, 1);
// 	push(a, b, 1);
// 	print_list(a);
// 	if ((*b)->value < (*b)->next->value)
// 		sb(*b);
// 	sort_3_n(a);
// 	print_list(a);
// 	if ((*b)->value > (*a)->prev->value)
// 	{
// 		push(b, a, 0);
// 		if ((*b)->value < (*a)->value && (*b)->value > (*a)->prev->value)
// 		{
// 			push(b, a, 0);
// 			ra(a);
// 		}
// 		ra(a);
// 	}
// 	while (*b && (*b)->value < (*a)->value)
// 		push(b, a, 0);
// 	printf("\n1a:\n");
// 	print_list(a);
// 	while (!sorted(a) || ft_lstsize(b) > 0)
// 	{
// 		printf("\nciao %d, lstsize : %d\n", i++, ft_lstsize(b));
// 		if (ft_lstsize(b) > 0)
// 		{
// 			if ((*b)->value < (*a)->value && (*b)->value > (*a)->prev->value)
// 				push (b, a, 0);
// 		}
// 		if ((*a)->value < (*a)->next->value && (*a)->value > (*a)->prev->value)
// 			rra(a);
// 		else
// 		ra(a);
// 		printf("\na:\n");
// 		print_list(a);
// 		printf("\nbbb:\n");
// 		print_list(b);
// 		if (i == 10)
// 			exit(0);
// 	 }
// 	printf("\nbbb:\n");
// 	print_list(b);
// }