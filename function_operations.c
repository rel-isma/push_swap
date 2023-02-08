/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   function_operations.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rel-isma <rel-isma@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 15:42:18 by rel-isma          #+#    #+#             */
/*   Updated: 2023/02/06 16:14:57 by rel-isma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa(t_stacks *stacks)
{
    if (stacks->a->top == NULL || stacks->a->top->next == NULL)
    {
        return;
    }
    int temp = stacks->a->top->data;
    stacks->a->top->data = stacks->a->top->next->data;
    stacks->a->top->next->data = temp;
}

void	sb(t_stacks *stacks)
{
	if (stacks->b->top == NULL || stacks->b->top->next == NULL)
    {
        return;
    }
    int temp = stacks->b->top->data;
    stacks->b->top->data = stacks->b->top->next->data;
    stacks->b->top->next->data = temp;
}

void	ss(t_stacks *stacks)
{
	sa(stacks);
	sb(stacks);
}

void	ra(t_stacks *stacks)
{
    if (stacks->a->top == NULL || stacks->a->top->next == NULL)
        return;
    t_node *node = stacks->a->top;
    while (node->next != NULL)
        node = node->next;
    node->next = stacks->a->top;
    stacks->a->top = stacks->a->top->next;
    node->next->next = NULL;
}

void	rb(t_stacks *stacks)
{
    if (stacks->b->top == NULL || stacks->b->top->next == NULL)
        return;
    t_node *node = stacks->b->top;
    while (node->next != NULL)
    {
        node = node->next;
    }
    node->next = stacks->b->top;
    stacks->b->top = stacks->b->top->next;
    node->next->next = NULL;
}

void	rr(t_stacks *stacks)
{
	ra(stacks);
	rb(stacks);
}

void	rra(t_stacks *stacks)
{
    if (stacks->a->top == NULL || stacks->a->top->next == NULL)
    {
        return;
    }
    t_node *node = stacks->a->top;
    while (node->next->next != NULL)
    {
        node = node->next;
    }

    node->next->next = stacks->a->top;
    stacks->a->top = node->next;
    node->next = NULL;
}

void	rrb(t_stacks *stacks)
{
    if (stacks->b->top == NULL || stacks->b->top->next == NULL)
    {
        return;
    }
    t_node *node = stacks->b->top;
    while (node->next->next != NULL)
    {
        node = node->next;
    }
    node->next->next = stacks->b->top;
    stacks->b->top = node->next;
    node->next = NULL;
}

void	rrr(t_stacks *stacks)
{
	rra(stacks);
	rrb(stacks);
}

void	pa(t_stacks *stacks)
{
	if (stacks->b->top == NULL)
        return;
	int item = pop(stacks->b);
    push(stacks->a, item);
}

void	pb(t_stacks *stacks)
{
	if(stacks->a->top == NULL)
		return;
	int	item = pop(stacks->a);
	push(stacks->b,item);
}