/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set_cost_b_a.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rel-isma <rel-isma@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 17:24:52 by rel-isma          #+#    #+#             */
/*   Updated: 2023/03/26 22:05:57 by rel-isma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	set_cost_b_a(t_stacks *stacks)
{
	t_node	*tmp_b;
	int		med_b;
	int		med_a;

	stacks->b->top->cost_a = 0;
	stacks->b->top->cost_b = 0;
	tmp_b = stacks->b->top;
	med_b = stacks->b->size / 2;
	med_a = stacks->a->size / 2;
	while (tmp_b)
	{
		if (tmp_b->position <= med_b)
			tmp_b->cost_b = tmp_b->position;
		else
			tmp_b->cost_b = -(stacks->b->size - tmp_b->position);
		if (tmp_b->tar_pos <= med_a)
			tmp_b->cost_a = tmp_b->tar_pos;
		else
			tmp_b->cost_a = -(stacks->a->size - tmp_b->tar_pos);
		tmp_b = tmp_b->next;
	}
}
