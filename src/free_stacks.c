/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_stacks.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rel-isma <rel-isma@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 02:10:34 by rel-isma          #+#    #+#             */
/*   Updated: 2023/03/29 21:51:24 by rel-isma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	free_stacks(t_stacks *stacks)
{
	t_node	*tmp;

	while (stacks && stacks->a && stacks->a->top)
	{
		tmp = stacks->a->top->next;
		free(stacks->a->top);
		stacks->a->top = tmp;
	}
	while (stacks && stacks->b && stacks->b->top)
	{
		tmp = stacks->b->top->next;
		free(stacks->b->top);
		stacks->b->top = tmp;
	}
	free(stacks->a);
	free(stacks->b);
	free(stacks);
}
