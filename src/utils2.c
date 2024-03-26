/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lorenzo <lorenzo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 17:13:19 by lorenzo           #+#    #+#             */
/*   Updated: 2024/03/26 09:32:49 by lorenzo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	set_index(t_node **stack)
{
	int		i;
	t_node	*tmp;

	i = 1;
	if (*stack)
	{
		tmp = *stack;
		while (tmp->next != *stack)
		{
			tmp->index = i++;
			tmp = tmp->next;
		}
		tmp->index = i;
	}
}

t_node	*find_min(t_node **stack)
{
	int	min_value;
	t_node	*tmp;
	t_node	*min;

	min_value = (*stack)->value;
	tmp = (*stack)->next;
	while (tmp->index != 1)
	{
		if (tmp->value < min_value)
		{
			min = tmp;
			min_value = tmp->value;
		}
		tmp = tmp->next;
	}
	printf("\n\nfind min %d %d\n", min->value, min->index);
	return (min);
}

t_node	*find_max(t_node **stack)
{
	int	max_value;
	t_node	*tmp;
	t_node	*max;

	max_value = (*stack)->value;
	tmp = (*stack)->next;
	while (tmp->index != 1)
	{
		if (tmp->value > max_value)
		{
			max = tmp;
			max_value = tmp->value;
		}
		tmp = tmp->next;
	}
	return (max);
}