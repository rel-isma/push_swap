/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prepartion_stack.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rel-isma <rel-isma@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 17:42:55 by rel-isma          #+#    #+#             */
/*   Updated: 2023/03/27 01:02:13 by rel-isma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_improve(t_stacks *stacks, t_cost *costs)
{
	if (costs->cost_s_b > 0 && costs->cost_s_a > 0)
	{
		while (costs->cost_s_b > 0 && costs->cost_s_a > 0)
		{
			rr(stacks, 1);
			costs->cost_s_b -= 1;
			costs->cost_s_a -= 1;
		}
	}
	else if (costs->cost_s_b < 0 && costs->cost_s_a < 0)
	{
		while (costs->cost_s_b < 0 && costs->cost_s_a < 0)
		{
			rrr(stacks, 1);
			costs->cost_s_b += 1;
			costs->cost_s_a += 1;
		}
	}
}

void	prepartion_stack_a(t_stacks *stacks, t_cost costs)
{
	while (costs.cost_s_a)
	{
		if (costs.cost_s_a > 0)
		{
			ra(stacks->a, 1);
			costs.cost_s_a -= 1;
		}
		else
		{
			rra(stacks->a, 1);
			costs.cost_s_a += 1;
		}
	}
}

void	prepartion_stack_b(t_stacks *stacks, t_cost costs)
{
	while (costs.cost_s_b)
	{
		if (costs.cost_s_b > 0)
		{
			rb(stacks->b, 1);
			costs.cost_s_b -= 1;
		}
		else
		{
			rrb(stacks->b, 1);
			costs.cost_s_b += 1;
		}
	}
}

void	prepartion_stack(t_stacks *stacks, t_cost costs)
{
	ft_improve(stacks, &costs);
	prepartion_stack_a(stacks, costs);
	prepartion_stack_b(stacks, costs);
	pa(stacks, 1);
}
