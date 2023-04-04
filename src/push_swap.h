/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rel-isma <rel-isma@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 15:15:41 by rel-isma          #+#    #+#             */
/*   Updated: 2023/04/04 08:36:10 by rel-isma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../libft/libft.h"
# include <stdio.h>
# include <stdlib.h>

typedef struct s_cost
{
	int				cost_s_a;
	int				cost_s_b;
}					t_cost;

typedef struct s_node
{
	int				data;
	int				index;
	int				position;
	int				tar_pos;
	int				cost_a;
	int				cost_b;
	struct s_node	*next;
}					t_node;

typedef struct s_stack
{
	t_node			*top;
	int				size;
}					t_stack;

typedef struct s_stacks
{
	t_stack			*a;
	t_stack			*b;
}					t_stacks;

void				sa(t_stack *stack_a, int i);
void				sb(t_stack *stack_a, int i);
void				ss(t_stacks *stacks, int i);
void				pa(t_stacks *stacks, int i);
void				pb(t_stacks *stacks, int i);
void				ra(t_stack *stack_a, int i);
void				rb(t_stack *stack_b, int i);
void				rr(t_stacks *stacks, int i);
void				rra(t_stack *stack_a, int i);
void				rrb(t_stack *stack_b, int i);
void				rrr(t_stacks *stacks, int i);

void				push(t_stack *stack, int data);
int					ft_empty(t_stack *stack);

void				ft_free(char ***p);
void				ft_fr(char **p);
void				print_error(void);
void				error_push(int argc, char *argv[]);
int					chek_no_nbr(char *str);
void				free_stacks(t_stacks *stacks);
int					a_is_sorted(t_stacks *stacks);
void				ft_sort_3_5(t_stacks *stacks);
void				set_rank(t_stacks *stacks);
int					min_stack_a(t_stacks *stacks);
t_stacks			*init(void);
void				init_index(t_stacks *stacks);
void				init_position(t_stack *stack);
void				ft_push_b(t_stacks *stacks);
int					min_cost_in_satck(t_stacks *stacks);
void				ft_main_sort(t_stacks *stacks);
void				last_sort(t_stacks *stacks);
void				set_cost_b_a(t_stacks *stacks);
void				set_tar_pos(t_stacks *stacks);
int					ft_absolute_v(int cost_a, int cost_b);
void				prepartion_stack(t_stacks *stacks, t_cost costs);
void				ft_improve(t_stacks *stacks, t_cost *costs);
void				ft_sort_5(t_stacks *stacks);
void				ft_sort_3(t_stacks *stacks);
void				creat_stack(int argc, char *argv[], t_stack *a);

#endif
