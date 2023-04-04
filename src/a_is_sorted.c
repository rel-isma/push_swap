/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   a_is_sorted.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rel-isma <rel-isma@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/26 14:43:07 by rel-isma          #+#    #+#             */
/*   Updated: 2023/03/29 18:00:05 by rel-isma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	a_is_sorted(t_stacks *stacks)
{
	t_node	*a;
	int		n;

	if (stacks && stacks->a && stacks->a->top)
	{
		a = stacks->a->top;
		while (a)
		{
			n = a->data;
			a = a->next;
			if (a && n > a->data)
				return (0);
		}
	}
	return (1);
}
