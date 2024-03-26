/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lorenzo <lorenzo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 17:35:44 by lrenzett          #+#    #+#             */
/*   Updated: 2024/02/05 22:20:17 by lorenzo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	ft_lstadd_back(t_node **lst, t_node *new)
{
	t_node	*i;

	if (!lst || !new)
		return ;
	if (*lst)
	{
		i = ft_lstlast(*lst);
		i->next = new;
	}
	else
	{
		*lst = new;
		printf("werty\n");
	}
}
