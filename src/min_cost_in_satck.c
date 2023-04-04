/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   min_cost_in_satck.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rel-isma <rel-isma@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 17:29:03 by rel-isma          #+#    #+#             */
/*   Updated: 2023/03/27 00:43:47 by rel-isma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	min_cost_in_satck(t_stacks *stacks)
{
	t_cost	costs;
	t_node	*tmp;
	int		min_cost;
	int		i;
	int		data;

	i = INT_MAX;
	tmp = stacks->b->top;
	while (tmp)
	{
		min_cost = ft_absolute_v(tmp->cost_a, tmp->cost_b);
		if (min_cost < i)
		{
			data = tmp->data;
			i = min_cost;
			costs.cost_s_a = tmp->cost_a;
			costs.cost_s_b = tmp->cost_b;
		}
		tmp = tmp->next;
	}
	prepartion_stack(stacks, costs);
	return (0);
}
