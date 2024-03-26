/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operation2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lorenzo <lorenzo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 12:04:02 by lorenzo           #+#    #+#             */
/*   Updated: 2024/03/26 12:46:29 by lorenzo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	rr(t_node **a, t_node **b)
{
	*a = (*a)->next;
	*b = (*b)->next;
	set_index(a);
	set_index(b);
	ft_printf("rr\n");
}

void	rra(t_node **a)
{
	*a = (*a)->prev;
	set_index(a);
	ft_printf("rra\n");
}

void	rrb(t_node **b)
{
	*b = (*b)->prev;
	set_index(b);
	ft_printf("rrb\n");
}

void	rrr(t_node **a, t_node **b)
{
	*a = (*a)->prev;
	*b = (*b)->prev;
	set_index(a);
	set_index(b);
	ft_printf("rrr\n");
}

void	push(t_node **src, t_node **dst, int f)
{
	int	plc;
	
	if (!src)
		return ;
	plc = (*src)->place;
	add_head(dst, new_node((*src)->value));
	del_head(src);
	(*dst)->place = plc;
	set_index(src);
	set_index(dst);
	if (f == 0)
		ft_printf("pa\n");
	else if (f == 1)
		ft_printf("pb\n");
}


// if (tmp_d == NULL) 
// 	{
// 		printf("tmp_s:\n");
// 		print_list(&tmp_s);
// 		printf("tmp_d:\n");
// 		print_list(&tmp_d);
		
// 		tmp_d = tmp_s;
		
// 		printf("src:\n");
// 		print_list(src);
// 		printf("dst:\n");
// 		print_list(dst);
// 		printf("\n\n");
		
		
// 		printf("ciao\nsrc:\n");
// 		tmp_s = tmp_s->next;
// 		tmp_s->prev = tmp_s->prev->prev;
// 		tmp_s->prev->next = tmp_s;
// 		tmp_d->next = NULL;
// 		tmp_d->prev = NULL;
		
// 		print_list(src);
// 		printf("dst:\n");
// 		print_list(dst);
// 	}
	// else
	// {
	// 	printf("e qui??\n\n");
	// 	(*dst)->prev->next = *tmp;
	// 	(*dst)->next->prev = *tmp;
	// 	(*src)->prev->next = (*tmp)->next;
	// 	(*src)->next->prev = (*tmp)->prev;
	// 	(*tmp)->next = (*dst)->next;
	// 	(*tmp)->prev = (*dst)->prev;
	// }