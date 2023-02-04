/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rel-isma <rel-isma@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 15:15:41 by rel-isma          #+#    #+#             */
/*   Updated: 2023/02/03 20:47:25 by rel-isma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP
# define  PUSH_SWAP

# include <stdio.h>
# include <stdlib.h>
# include "libft/libft.h"

typedef struct s_node 
{
  int data;
  struct s_node *next;
}	t_node;

typedef struct s_stack
{
  t_node *top;
  int	size;
}	t_stack;

typedef struct s_stacks
{
	t_stack *a;
	t_stack *b;
}	t_stacks;

void	sa(t_stacks *stacks);
void	sb(t_stacks *stacks);
void	ss(t_stacks *stacks);
void	ra(t_stacks *stacks);
void	rb(t_stacks *stacks);
void	rr(t_stacks *stacks);
void	pb(t_stacks *stacks);
void	pa(t_stacks *stacks);
void	rrb(t_stacks *stacks);
void	rrr(t_stacks *stacks);
void	rra(t_stacks *stacks);
void	push(t_stack *a, int item);
int		pop(t_stack *a);

#endif