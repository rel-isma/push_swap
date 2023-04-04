/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_b.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rel-isma <rel-isma@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 20:38:42 by rel-isma          #+#    #+#             */
/*   Updated: 2023/03/30 18:18:20 by rel-isma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_push_b(t_stacks *stacks)
{
	int	size;
	int	medium;
	int	i;

	size = stacks->a->size;
	medium = size / 2;
	i = 0;
	while (i < size)
	{
		if (stacks->a->top->index <= medium)
			pb(stacks, 1);
		else
			ra(stacks->a, 1);
		i++;
	}
	while (stacks->a->size > 3)
		pb(stacks, 1);
	if (!a_is_sorted(stacks))
		ft_sort_3(stacks);
}
