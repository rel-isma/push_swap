# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rel-isma <rel-isma@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/03 20:03:15 by rel-isma          #+#    #+#              #
#    Updated: 2023/04/04 09:25:28 by rel-isma         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc
CFLAGS = -Wall -Wextra -Werror

SOURCES = push_swap.c print_error.c ft_absolute_v.c ft_main_sort.c chek_no_nbr.c \
				error_push.c free_stacks.c ft_push_b.c  last_sort.c set_tar_pos.c ft_sort_3_5.c ft_sort_3.c \
				ft_sort_5.c min_cost_in_satck.c prepartion_stack.c push_swap_Needs.c set_cost_b_a.c a_is_sorted.c creat_stack.c \
				function_operations_1.c function_operations_2.c function_operations_3.c

OBJECTS = $(SOURCES:%.c=obj/%.o)

SOURCES_CHECKER = checker.c print_error.c chek_no_nbr.c error_push.c creat_stack.c a_is_sorted.c free_stacks.c \
					function_operations_1.c function_operations_2.c function_operations_3.c push_swap_Needs.c  \

OBJECTS_CHECKER = $(SOURCES_CHECKER:%.c=obj/%.o)

NAME = push_swap
NAME_CH = checker

LIBFT_PATH  = ./libft
LIBFT_NAME  = ft
all: libft $(NAME)

libft:
	make -C $(LIBFT_PATH)

obj/%.o: src/%.c src/push_swap.h | obj
	$(CC) $(CFLAGS) -c $< -o $@ -g

obj:
	mkdir obj

bonus: libft $(NAME_CH)

$(NAME): $(OBJECTS)
	$(CC) -L$(LIBFT_PATH) -l$(LIBFT_NAME) $(OBJECTS) -o $(NAME) -g

$(NAME_CH): $(OBJECTS_CHECKER)
	$(CC) -L$(LIBFT_PATH) -l$(LIBFT_NAME) $(OBJECTS_CHECKER) -o $(NAME_CH) -g

clean:
	rm -rf obj
	make clean -C $(LIBFT_PATH)

fclean: clean
	rm -rf $(NAME) $(NAME_CH)
	make fclean -C $(LIBFT_PATH)

re: fclean all

.PHONY : libft
