/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lorenzo <lorenzo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 17:11:43 by lrenzett          #+#    #+#             */
/*   Updated: 2024/02/13 13:01:10 by lorenzo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

int	ft_lstsize(t_node **lst)
{
	int	i;
	t_node	*tmp;

	i = 0;
	if (*lst)
	{
		tmp = *lst;
		while (tmp->next != *lst && ++i)
			tmp = tmp->next;
		return (++i);
	}
	return (i);
}
