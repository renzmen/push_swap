/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ctrl_input.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lorenzo <lorenzo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 13:08:40 by lorenzo           #+#    #+#             */
/*   Updated: 2024/03/26 13:43:03 by lorenzo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	check_dup(t_node **a, int n)
{
	t_node	*ctrl;

	if (!*a)
		error_free(a);
	ctrl = *a;
	while (ctrl->next != *a)
	{
		if (ctrl->value == n)
			error_free(a);
		ctrl = ctrl->next;
	}
}

void	init_stack(t_node **a, int argc, char **argv)
{
	int		i;
	long	n;
	char	**av;
		
	i = 0;
	if (argc == 2)
		av = ft_split(argv[1], 32);
	else if (argc > 2)
		av = sort_argv(argv);
	while (av[i])
	{
		error_syntax(*a, av[i]);
		n = ft_atol(av[i]);
		if (n > INT_MAX || n < INT_MIN)
			error_free(a);
		if (i > 0)
			check_dup(a, (int)n);
		add_tail(a, new_node((int)n));
		i++;
	}
	set_index(a);
	right_place(a);
}

char	**sort_argv(char **argv)
{
	char	**nbr;
	int	i;

	i = 0;
	nbr = argv;
	while (nbr[i + 1] != 0)
	{
		nbr[i] = nbr[i + 1];
		i++;
	}
	nbr[i] = NULL;
	return (nbr);
}

void	error_syntax(t_node *a, char *n)
{
	int i;
	i = 1;
	if (!(n[0] >= '0' && n[0] <= '9') && n[0] != '-' && n[0] != '+')
		error_free(&a);
	while (n[i])
	{
		if (!(n[i] >= '0' && n[i] <= '9'))
			error_free(&a);
		i++;
	}
}
