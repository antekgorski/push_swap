# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tbogus <tbogus@student.42warsaw.pl>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/08/17 18:42:19 by tbogus            #+#    #+#              #
#    Updated: 2024/08/28 23:23:08 by tbogus           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap
SRCS = push_swap.c parser.c swap.c push.c reverse_rotate.c rotate.c ft_atol.c utils.c sort.c sort_small.c libft/libft.a
OBJS = $(SRCS:.c=.o)
CC = gcc
CFLAGS = -Wall -Wextra -Werror

%.o: %.c
	@$(CC) $(CFLAGS) -c $< -o $@

all: $(NAME)

$(NAME): 
	make all -C libft
	$(CC) $(CFLAGS) $(SRCS) -o $(NAME)

fclean: clean
	rm -f $(NAME)
	make fclean -C libft

clean:
	rm -f $(OBJS)
	make clean -C libft

re: fclean all

.PHONY: all clean fclean re