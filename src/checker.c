/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rel-isma <rel-isma@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 18:12:00 by rel-isma          #+#    #+#             */
/*   Updated: 2023/04/04 07:17:46 by rel-isma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_checker_sort(char *action, t_stacks *stacks)
{
	if (ft_strcmp(action, "sa\n") == 0)
		sa(stacks->a, 2);
	else if (ft_strcmp(action, "sb\n") == 0)
		sb(stacks->b, 2);
	else if (ft_strcmp(action, "ss\n") == 0)
		ss(stacks, 2);
	else if (ft_strcmp(action, "rb\n") == 0)
		rb(stacks->b, 2);
	else if (ft_strcmp(action, "ra\n") == 0)
		ra(stacks->a, 2);
	else if (ft_strcmp(action, "rrb\n") == 0)
		rrb(stacks->b, 2);
	else if (ft_strcmp(action, "rr\n") == 0)
		rr(stacks, 2);
	else if (ft_strcmp(action, "rra\n") == 0)
		rra(stacks->a, 2);
	else if (ft_strcmp(action, "rrr\n") == 0)
		rrr(stacks, 2);
	else if (ft_strcmp(action, "pa\n") == 0)
		pa(stacks, 2);
	else if (ft_strcmp(action, "pb\n") == 0)
		pb(stacks, 2);
	else
		return (write(1, "Error\n", 6), exit(1));
}

void	ft_read_operations(t_stacks *stacks)
{
	char	*action;

	action = get_next_line(0);
	while (action)
	{
		ft_checker_sort(action, stacks);
		free(action);
		action = get_next_line(0);
	}
	free (action);
	if (stacks->b->top == NULL)
	{
		if (a_is_sorted(stacks) == 1)
			write(1, "OK\n", 3);
		else if (a_is_sorted(stacks) == 0)
			write(1, "KO\n", 3);
	}
	else
		write(1, "KO\n", 3);
}

int	main(int argc, char *argv[])
{
	t_stacks	*stacks;

	stacks = init();
	error_push(argc, argv);
	creat_stack(argc, argv, stacks->a);
	ft_read_operations(stacks);
	free_stacks(stacks);
}
