/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lorenzo <lorenzo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 12:17:46 by lorenzo           #+#    #+#             */
/*   Updated: 2024/03/26 13:38:53 by lorenzo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	free_matrix(char **argv)
{
	int	i;

	i = 0;
	if (argv == NULL || *argv == NULL )
		return ;
	while (argv[i])
		free(argv[i++]);
	free(argv - 1);
}

void	free_stack(t_node **stack)
{
	t_node	*tmp;
	t_node	*current;

	if (stack == NULL)
		return ;
	current = *stack;
	while (current->next != *stack)
	{
		tmp = current->next;
		free(current);
		current = tmp;
	}
	*stack = NULL;
}

void	error_free(t_node **a) //char **argv)
{
	free_stack(a);
	/*if (flag_argc_2)
		free_matrix(argv);*/
	ft_printf("yyyyyyorco\n");
	exit(1);
}
