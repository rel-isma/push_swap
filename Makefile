# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rel-isma <rel-isma@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/03 20:03:15 by rel-isma          #+#    #+#              #
#    Updated: 2023/02/04 00:00:25 by rel-isma         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc
CFLAGS = -Wall -Wextra -Werror

SERVER_SOURCES = function_operations.c push_swap.c
SERVER_OBJECTS = $(SERVER_SOURCES:.c=.o)
NAME = push_swap

LIBFT_PATH  = ./libft
LIBFT_NAME  = ft.a
all: libft $(NAME)

libft:
	make -C $(LIBFT_PATH)

%.o: %.c push_swap.h
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME): $(SERVER_OBJECTS)
	$(CC) ./libft/libft.a $(SERVER_OBJECTS) -o $(NAME)
	
clean:
	rm -f $(SERVER_OBJECTS)
	make clean -C $(LIBFT_PATH)

fclean: clean
	rm -f $(NAME)
	make fclean -C $(LIBFT_PATH)

re: fclean all

.PHONY : libft