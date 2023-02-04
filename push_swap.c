/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rel-isma <rel-isma@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/29 22:04:28 by rel-isma          #+#    #+#             */
/*   Updated: 2023/02/04 01:02:42 by rel-isma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

#include <stdio.h>
#include <stdlib.h>

t_stacks *createStacks()
{
  t_stacks *stacks = (t_stacks*) malloc(sizeof(t_stacks));
  stacks->a = (t_stack*) malloc(sizeof(t_stack));
  stacks->b = (t_stack*) malloc(sizeof(t_stack));
  stacks->a->top = NULL;
  stacks->b->top = NULL;
  return stacks;
}

int isEmpty(t_stack *stack_a) 
{
  return stack_a->top == NULL;
}

void  push(t_stack *stack_p, int item) 
{
  t_node *node = (t_node*) malloc(sizeof(t_node));
  node->data = item;
  node->next = stack_p->top;
  stack_p->top = node;
}

int   pop(t_stack *a) 
{
  if (isEmpty(a)) 
  {
    printf("Empty stack\n");
    exit(1);
  }
  t_node *node = a->top;
  a->top = node->next;
  int item = node->data;
  free(node);
  return item;
}

int main(int argc, char *argv[]) 
{
  if (argc == 1) 
  {
    printf("Error\n");
    return 1;
  }
  t_stacks *stacks = createStacks();
  int i, number, j;
  i = 1;
  j = 1; 
  while (i < argc) 
  {
    number = atoi(argv[i]);
    push(stacks->a, number);
    i++;
  }
  while (j < argc)
  {
    printf("%d\n", pop(stacks->a));
    j++;
  }

  return 0;
}

