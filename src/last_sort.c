/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_sort.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rel-isma <rel-isma@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/19 15:46:02 by rel-isma          #+#    #+#             */
/*   Updated: 2023/03/30 18:09:51 by rel-isma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	init_index(t_stacks *stacks)
{
	t_node	*tmp_a;

	stacks->a->top->index = 0;
	tmp_a = stacks->a->top;
	while (tmp_a)
	{
		tmp_a->index = -1;
		tmp_a = tmp_a->next;
	}
}

void	last_sort(t_stacks *stacks)
{
	int	min_a;
	int	med;

	med = stacks->a->size / 2;
	init_index(stacks);
	min_a = min_stack_a(stacks);
	if (stacks->a->top->index <= med)
	{
		while (stacks->a->top->data != min_a)
			ra(stacks->a, 1);
	}
	else
	{
		while (stacks->a->top->data != min_a)
			rra(stacks->a, 1);
	}
}
