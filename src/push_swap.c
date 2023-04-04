/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rel-isma <rel-isma@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/29 22:04:28 by rel-isma          #+#    #+#             */
/*   Updated: 2023/04/04 08:12:04 by rel-isma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char *argv[])
{
	t_stacks	*stacks;

	stacks = init();
	error_push(argc, argv);
	creat_stack(argc, argv, stacks->a);
	if (a_is_sorted(stacks))
		return (free_stacks(stacks), 0);
	ft_main_sort(stacks);
	free_stacks(stacks);
	return (0);
}
