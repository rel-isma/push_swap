/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   function_operations_2.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rel-isma <rel-isma@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/26 14:51:31 by rel-isma          #+#    #+#             */
/*   Updated: 2023/03/27 00:50:15 by rel-isma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rra(t_stack *stack_a, int i)
{
	t_node	*head;
	t_node	*tmp;

	if (stack_a->top == NULL || stack_a->top->next == NULL)
		return ;
	tmp = stack_a->top;
	head = stack_a->top;
	while (tmp->next->next)
		tmp = tmp->next;
	stack_a->top = tmp->next;
	tmp->next = NULL;
	stack_a->top->next = head;
	if (i == 1)
		write(1, "rra\n", 4);
}

void	rrb(t_stack *stack_b, int i)
{
	t_node	*head;
	t_node	*tmp;

	if (stack_b->top == NULL || stack_b->top->next == NULL)
		return ;
	head = stack_b->top;
	tmp = stack_b->top;
	while (tmp->next->next != NULL)
		tmp = tmp->next;
	stack_b->top = tmp->next;
	tmp->next = NULL;
	stack_b->top->next = head;
	if (i == 1)
		write(1, "rrb\n", 4);
}

void	rrr(t_stacks *stacks, int i)
{
	rra(stacks->a, 0);
	rrb(stacks->b, 0);
	if (i == 1)
		write(1, "rrr\n", 4);
}

void	rr(t_stacks *stacks, int i)
{
	ra(stacks->a, 0);
	rb(stacks->b, 0);
	if (i == 1)
		write(1, "rr\n", 3);
}
