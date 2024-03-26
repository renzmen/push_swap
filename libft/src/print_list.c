/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_list.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lorenzo <lorenzo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 12:43:26 by lorenzo           #+#    #+#             */
/*   Updated: 2024/03/26 09:15:25 by lorenzo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	print_list(t_node **h)
{
	t_node	*tmp;

	if (!*h)
	{
		write(1, "empty list\n", 11);
		return ;
	}
	tmp = *h;
	ft_printf("\n");
	while (tmp->next != *h)
	{
		ft_printf("value[%d] index [%d] place[%d] addres[%p] next[%p] prev[%p]\n",
		tmp->value, tmp->index, tmp->place, tmp, tmp->next, tmp->prev);
		tmp = tmp->next;
	}
	ft_printf("value[%d] index [%d] place[%d] addres[%p] next[%p] prev[%p]\n",
	tmp->value, tmp->index, tmp->place, tmp, tmp->next, tmp->prev);
}