/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   function_operations_1.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rel-isma <rel-isma@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/26 14:48:00 by rel-isma          #+#    #+#             */
/*   Updated: 2023/03/27 00:49:40 by rel-isma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa(t_stack *stack_a, int i)
{
	t_node	*temp;

	if (stack_a->top == NULL || stack_a->top->next == NULL)
		return ;
	temp = stack_a->top->next;
	stack_a->top->next = temp->next;
	temp->next = stack_a->top;
	stack_a->top = temp;
	if (i == 1)
		write(1, "sa\n", 3);
}

void	sb(t_stack *stack_b, int i)
{
	t_node	*temp;

	if (stack_b->top == NULL || stack_b->top->next == NULL)
		return ;
	temp = stack_b->top->next;
	stack_b->top->next = temp->next;
	temp->next = stack_b->top;
	stack_b->top = temp;
	if (i == 1)
		write(1, "sb\n", 3);
}

void	ss(t_stacks *stacks, int i)
{
	sa(stacks->a, 0);
	sb(stacks->b, 0);
	if (i == 1)
		write(1, "ss\n", 3);
}

void	rb(t_stack *stack_b, int i)
{
	t_node	*node;

	if (stack_b->top == NULL || stack_b->top->next == NULL)
		return ;
	node = stack_b->top;
	while (node->next != NULL)
		node = node->next;
	node->next = stack_b->top;
	stack_b->top = stack_b->top->next;
	node->next->next = NULL;
	if (i == 1)
		write(1, "rb\n", 3);
}

void	ra(t_stack *stack_a, int i)
{
	t_node	*node;

	if (stack_a->top == NULL || stack_a->top->next == NULL)
		return ;
	node = stack_a->top;
	while (node->next != NULL)
		node = node->next;
	node->next = stack_a->top;
	stack_a->top = stack_a->top->next;
	node->next->next = NULL;
	if (i == 1)
		write(1, "ra\n", 3);
}
