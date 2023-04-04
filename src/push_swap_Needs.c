/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_Needs.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rel-isma <rel-isma@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 17:50:47 by rel-isma          #+#    #+#             */
/*   Updated: 2023/03/30 15:56:41 by rel-isma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stacks	*init(void)
{
	t_stacks	*stacks;

	stacks = (t_stacks *)malloc(sizeof(t_stacks));
	if (!stacks)
		exit(1337);
	stacks->a = (t_stack *)malloc(sizeof(t_stack));
	if (!stacks->a)
		exit(1337);
	stacks->b = (t_stack *)malloc(sizeof(t_stack));
	if (!stacks->b)
		exit(1337);
	stacks->a->top = NULL;
	stacks->b->top = NULL;
	stacks->a->size = 0;
	stacks->b->size = 0;
	return (stacks);
}

void	ft_fr(char **p)
{
	int	i;

	i = 0;
	while (p[i])
		free(p[i++]);
	free(p);
	p = 0;
}

void	ft_free(char ***p)
{
	int	i;

	i = 0;
	while (p[i])
		ft_fr(p[i++]);
	free(p);
}

void	init_position(t_stack *stack)
{
	t_node	*tmp;
	int		i;

	stack->top->position = 0;
	tmp = stack->top;
	i = 0;
	while (tmp)
	{
		tmp->position = i++;
		tmp = tmp->next;
	}
}

int	min_stack_a(t_stacks *stacks)
{
	int		temp;
	t_node	*hed;

	temp = INT_MAX;
	hed = stacks->a->top;
	while (hed)
	{
		if (hed->data <= temp && hed->index == -1)
			temp = hed->data;
		hed = hed->next;
	}
	return (temp);
}
