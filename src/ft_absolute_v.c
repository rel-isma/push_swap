/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_absolute_v.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rel-isma <rel-isma@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 17:32:11 by rel-isma          #+#    #+#             */
/*   Updated: 2023/03/26 21:58:20 by rel-isma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_absolute_v(int cost_a, int cost_b)
{
	int	sum;

	if (cost_a < 0)
		cost_a = (cost_a * (-1));
	if (cost_b < 0)
		cost_b = (cost_b * (-1));
	sum = cost_a + cost_b;
	return (sum);
}
