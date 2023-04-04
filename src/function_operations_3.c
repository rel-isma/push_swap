/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   function_operations_3.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rel-isma <rel-isma@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/26 14:59:00 by rel-isma          #+#    #+#             */
/*   Updated: 2023/04/04 11:45:27 by rel-isma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_empty(t_stack *stack_a)
{
	return (stack_a->top == NULL);
}

void	pa(t_stacks *stacks, int i)
{
	t_node	*top;
	t_node	*tmp;

	if (ft_empty(stacks->b))
		return ;
	stacks->a->size++;
	stacks->b->size--;
	top = stacks->b->top->next;
	if (ft_empty(stacks->a))
	{
		stacks->a->top = stacks->b->top;
		stacks->b->top->next = NULL;
	}
	else
	{
		tmp = stacks->a->top;
		stacks->a->top = stacks->b->top;
		stacks->b->top->next = tmp;
	}
	stacks->b->top = top;
	if (i == 1)
		write(1, "pa\n", 3);
}

void	pb(t_stacks *stacks, int i)
{
	t_node	*top;
	t_node	*tmp;

	if (ft_empty(stacks->a))
		return ;
	stacks->a->size--;
	stacks->b->size++;
	top = stacks->a->top->next;
	if (ft_empty(stacks->b))
	{
		stacks->b->top = stacks->a->top;
		stacks->a->top->next = NULL;
	}
	else
	{
		tmp = stacks->b->top;
		stacks->b->top = stacks->a->top;
		stacks->a->top->next = tmp;
	}
	stacks->a->top = top;
	if (i == 1)
		write(1, "pb\n", 3);
}
