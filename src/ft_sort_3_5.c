/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_3_5.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rel-isma <rel-isma@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 17:59:02 by rel-isma          #+#    #+#             */
/*   Updated: 2023/03/26 22:00:31 by rel-isma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_sort_3_5(t_stacks *stacks)
{
	if (stacks->a->size == 2
		&& stacks->a->top->data > stacks->a->top->next->data)
		sa(stacks->a, 1);
	else if (stacks->a->size <= 3)
		ft_sort_3(stacks);
	else if (stacks->a->size <= 5)
		ft_sort_5(stacks);
}
