/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   creat_stack.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rel-isma <rel-isma@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/26 14:40:36 by rel-isma          #+#    #+#             */
/*   Updated: 2023/03/29 22:40:20 by rel-isma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push(t_stack *stack, int item)
{
	t_node	*node;

	node = (t_node *)malloc(sizeof(t_node));
	node->data = item;
	node->index = -1;
	node->next = stack->top;
	stack->top = node;
	stack->size++;
}

void	creat_stack(int argc, char *argv[], t_stack *a)
{
	int		i;
	int		number;
	int		j;
	char	**str;
	int		len;

	a->size = 0;
	len = 0;
	i = argc - 1;
	while (i > 0)
	{
		j = 0;
		str = ft_split(argv[i], ' ');
		while (str[len] != NULL)
			len++;
		while (str[j] != NULL)
		{
			number = ft_atoi(str[len - 1]);
			push(a, number);
			j++;
			len--;
		}
		ft_fr(str);
		i--;
	}
}
