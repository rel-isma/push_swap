/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_main_sort.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rel-isma <rel-isma@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 17:19:36 by rel-isma          #+#    #+#             */
/*   Updated: 2023/03/30 00:02:17 by rel-isma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	set_rank(t_stacks *stacks)
{
	t_node	*stack_index;
	int		min_a;
	int		i;

	i = 1;
	while (i <= stacks->a->size)
	{
		stack_index = stacks->a->top;
		min_a = min_stack_a(stacks);
		while (stack_index)
		{
			if (stack_index->data == min_a)
				stack_index->index = i++;
			stack_index = stack_index->next;
		}
	}
}

void	ft_main_sort(t_stacks *stacks)
{
	if (stacks->a->size <= 5)
		ft_sort_3_5(stacks);
	else
	{
		set_rank(stacks);
		ft_push_b(stacks);
		while (stacks->b->size)
		{
			set_tar_pos(stacks);
			set_cost_b_a(stacks);
			min_cost_in_satck(stacks);
		}
		last_sort(stacks);
	}
}
