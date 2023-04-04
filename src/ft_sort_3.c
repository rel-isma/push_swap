/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_3.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rel-isma <rel-isma@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 18:02:43 by rel-isma          #+#    #+#             */
/*   Updated: 2023/03/26 02:14:37 by rel-isma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_sort_3(t_stacks *stacks)
{
	int	a;
	int	b;
	int	c;

	a = stacks->a->top->data;
	b = stacks->a->top->next->data;
	c = stacks->a->top->next->next->data;
	if (a > b && c > b && a > c)
		ra(stacks->a, 1);
	else if (a > b && c > a)
		sa(stacks->a, 1);
	else if (a > b && b > c)
	{
		sa(stacks->a, 1);
		rra(stacks->a, 1);
	}
	else if (b > a && b > c && c > a)
	{
		sa(stacks->a, 1);
		ra(stacks->a, 1);
	}
	else
		rra(stacks->a, 1);
}
