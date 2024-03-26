/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   new.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lorenzo <lorenzo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/26 09:32:36 by lorenzo           #+#    #+#             */
/*   Updated: 2024/03/26 11:26:21 by lorenzo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

t_node	*next_min(t_node **stack)
{
	t_node	*tmp;
	t_node	*min;
	int		flag;
	int		j;

	min = NULL;
	flag = 0;
	tmp = *stack;
	j = 0;
	if (tmp)
	{
		while (j++ < ft_lstsize(stack))
		{
			if ((!flag || tmp->value < min->value) && tmp->place == -1)
			{
				min = tmp;
				flag = 1;
			}
			tmp = tmp->next;
		}
	}
	return (min);
}

void	right_place(t_node **stack)
{
	t_node	*tmp;
	int		i;

	i = 0;
	tmp = next_min(stack);
	while (i != ft_lstsize(stack) - 1)
	{
		tmp->place = i++;
		tmp = next_min(stack);
	}
	tmp->place = i;
}

// void	set_place(t_node **stack)
// {
// 	t_node	*tmp;
// 	int		i;

// 	i = 0;
// 	tmp = next_min(stack);
// 	while (tmp)
// 	{
// 		tmp->place = i++;
// 		tmp = get_next_min(stack);
// 	}
// }

int	get_bits(t_node **stack)
{
	t_node	*tmp;
	int		max;
	int		bits;
	int		i;

	i = 0;
	tmp = *stack;
	max = tmp->place;
	printf("qq %d\n", tmp->place);
	bits = 0;
	while (i++ != ft_lstsize(stack))
	{
		printf("entro nel while %d\n", i);
		if (tmp->place > max)
			max = tmp->place;
		tmp = tmp->next;
	}
	while ((max >> bits) != 0)
		bits++;
	return (bits);
}

void	radix_sort(t_node **a, t_node **b)
{
	t_node	*tmp;
	int		i;
	int		j;
	int		size;
	int		bits;

	i = 0;
	tmp = *a;
	size = ft_lstsize(a);
	bits = get_bits(a);
	printf("bits\n %d\n", bits);
	while (i < bits)
	{
		j = 0;
		while (j++ < size)
		{
			tmp = *a;
			if (((tmp->place >> i) & 1) == 1)
				ra(a);
			else
				push(a, b, 1);
		}
		while (ft_lstsize(b) != 0)
			push(b, a, 0);
		i++;
	}
}