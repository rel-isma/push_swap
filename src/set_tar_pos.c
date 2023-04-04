/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set_tar_pos.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rel-isma <rel-isma@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 17:15:18 by rel-isma          #+#    #+#             */
/*   Updated: 2023/03/26 22:06:32 by rel-isma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_helper(t_stack *a, int rank_b, int min_rank, int *pos)
{
	t_node	*tmp_a;

	tmp_a = a->top;
	while (tmp_a)
	{
		if (tmp_a->index > rank_b && tmp_a->index < min_rank)
		{
			min_rank = tmp_a->index;
			*pos = tmp_a->position;
		}
		tmp_a = tmp_a->next;
	}
	if (min_rank != INT_MAX)
		return ;
	tmp_a = a->top;
	while (tmp_a)
	{
		if (tmp_a->index < min_rank)
		{
			min_rank = tmp_a->index;
			*pos = tmp_a->position;
		}
		tmp_a = tmp_a->next;
	}
}

void	set_tar_pos(t_stacks *stacks)
{
	t_node	*tmp_b;
	int		pos;

	init_position(stacks->a);
	init_position(stacks->b);
	stacks->b->top->tar_pos = 0;
	tmp_b = stacks->b->top;
	while (tmp_b)
	{
		ft_helper(stacks->a, tmp_b->index, INT_MAX, &pos);
		tmp_b->tar_pos = pos;
		tmp_b = tmp_b->next;
	}
}
