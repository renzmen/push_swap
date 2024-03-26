/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lorenzo <lorenzo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 19:00:59 by lrenzett          #+#    #+#             */
/*   Updated: 2024/02/01 14:04:10 by lorenzo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

t_node	*ft_lstlast(t_node *lst)
{
	t_node	*last;

	if (!lst)
		return (lst);
	last = lst;
	while (last->next)
		last = last->next;
	return (last);
}
