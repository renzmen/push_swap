/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utlis.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lorenzo <lorenzo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 18:43:35 by lorenzo           #+#    #+#             */
/*   Updated: 2024/03/26 12:42:56 by lorenzo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	del_head(t_node **head)
{
	t_node	*temp;
	t_node	*next;

	if (*head == NULL)
		return ;
	if ((*head)->next == *head)
	{
		free(*head);
		*head = NULL;
	}
	else
	{
		temp = *head;
		next = temp->next;
		*head = next;
		next->prev = temp->prev;
		temp->prev->next = next;
		free(temp);
	}
	temp = NULL;
}

void	add_head(t_node **head, t_node *node)
{
	if (*head == NULL)
		*head = node;
	else
	{
		(*head)->prev->next = node;
		node->prev = (*head)->prev;
		node->next = (*head);
		(*head)->prev = node;
		(*head) = node;
	}
}

void	add_tail(t_node **head, t_node *node)
{
	if (*head == NULL)
		*head = node;
	else
	{
		(*head)->prev->next = node;
		node->prev = (*head)->prev;
		node->next = (*head);
		(*head)->prev = node;
	}
}

t_node	*new_node(int n)
{
	t_node	*tmp;

	tmp = (t_node*)malloc(sizeof(t_node));
	tmp->value = n;
	tmp->index = 0;
	tmp->place = -1;
	tmp->next = tmp;
	tmp->prev = tmp;
	return (tmp);
}

