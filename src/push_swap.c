/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lorenzo <lorenzo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 12:38:16 by lorenzo           #+#    #+#             */
/*   Updated: 2024/03/26 12:47:36 by lorenzo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int main(int argc, char **argv)
{
	t_node	*a;
	t_node	*b;

	a = NULL;
	b = NULL;
	if (argc > 1)
	{
		init_stack(&a, argc, argv);
		print_list(&a);
		//push(&a, &b, 1);
		if (!sorted(&a))
		{
			if (ft_lstsize(&a) == 3)
				sort_3_n(&a);
			else if (ft_lstsize(&a) == 4)
				sort_4_n(&a, &b);
			else if (ft_lstsize(&a) == 5)
				sort_5_n(&a, &b);
			else
				radix_sort(&a, &b);	
		}
		print_list(&a);
		printf("\nexitt!\n\n");
	}
}	
