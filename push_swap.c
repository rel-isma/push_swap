/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rel-isma <rel-isma@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/29 22:04:28 by rel-isma          #+#    #+#             */
/*   Updated: 2023/02/08 19:04:40 by rel-isma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

#include <stdio.h>
#include <stdlib.h>

void ft_free(char ***p, int oldi, int oldj)
{
  int i, j;

  i = 0;
  j = 0;
  while (i <= oldi)
  {
    while (j <= oldj)
    {
      free(p[i][j]);
      p[i][j] = 0;
      j++;
    }
    free(p[i]);
    p[i] = 0;
    j = 0;
    i++;
  }
  free(p);
}

int    chek_no_nbr(char *str)
{
  int i;

  i = 0;
  while (str[i] != '\0')
  {
    if (!ft_isdigit(str[i]))
      return 1;
    i++;
  }
  return 0;
}

void error_push(int argc, char *argv[])
{
  char ***str;
  int i = 1;
  int j = 0;
  
  str = malloc(sizeof(char **) * (argc));
  while (i < argc) 
  {
    str[i - 1] = ft_split(argv[i], ' ');
    while (str[i - 1][j] != NULL)
    {
      if (chek_no_nbr(str[i - 1][j]))
      {
        ft_free(str, i - 1, j);
        write(2, "Error\n", 6);
        exit(1);
      }
      j++;
    }
    j = 0;
    i++;
  }
}

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
    exit(1);
  }
  t_node *node = a->top;
  a->top = node->next;
  int item = node->data;
  free(node);
  return item;
}

void fun()
{
  system("leaks push_swap");
}

int main(int argc, char *argv[]) 
{
  atexit(fun);
  char  **str;
  if (argc == 1) 
  {
     write(2, "Error\n", 6);
    return 1;
  }
  int i, number, j;
  i = 1;
  j = 0;
  error_push(argc, argv);
  t_stacks *stacks = createStacks();
  while (i < argc) 
  {
    str = ft_split(argv[i], ' ');
    
    while (str[j] != NULL)
    {
      number = ft_atoi(str[j]);
      push(stacks->a, number);
      free(str[i]);
      stacks->a->size++;
      j++;
    }
    j=0;
    i++;
  }
  while (stacks->a->size > 0) 
  {
    printf("%d\n", pop(stacks->a));
    stacks->a->size--;
  }
  
  return 0;
}

