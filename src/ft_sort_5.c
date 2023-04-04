/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_5.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rel-isma <rel-isma@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 18:03:53 by rel-isma          #+#    #+#             */
/*   Updated: 2023/03/26 04:09:39 by rel-isma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	get_index_a(t_stacks *stacks, int nbr)
{
	t_node	*stack_a_5;
	int		i;

	i = 0;
	stack_a_5 = stacks->a->top;
	while (stack_a_5)
	{
		if (stack_a_5->data == nbr)
			return (i);
		i++;
		stack_a_5 = stack_a_5->next;
	}
	return (i);
}

void	ft_sort_5(t_stacks *stacks)
{
	int	i;
	int	min_a;

	init_index(stacks);
	i = 0;
	while (i < 2)
	{
		min_a = min_stack_a(stacks);
		if (stacks->a->top->data == min_a)
		{
			pb(stacks, 1);
			i++;
		}
		else if (get_index_a(stacks, min_a) > stacks->a->size / 2)
			rra(stacks->a, 1);
		else
			ra(stacks->a, 1);
	}
	if (!a_is_sorted(stacks))
		ft_sort_3_5(stacks);
	pa(stacks, 1);
	pa(stacks, 1);
}
