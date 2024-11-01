# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: agorski <agorski@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/31 18:39:06 by agorski           #+#    #+#              #
#    Updated: 2024/10/31 19:59:02 by agorski          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap
SRCS = ft_atol.c helpers.c list_push.c list_rotate.c list_rrotate.c list_swap.c parser.c push_swap.c sort_3_4_5.c sorter.c
OBJS = $(SRCS:.c=.o)
LIBFT_DIR = libft
LIBFT = $(LIBFT_DIR)/libft.a
CC = gcc
CFLAGS = -Wall -Wextra -Werror

%.o: %.c
	@$(CC) $(CFLAGS) -c $< -o $@

all: $(LIBFT) $(NAME)

$(LIBFT):
	$(MAKE) -C $(LIBFT_DIR)

$(NAME): 
	make all -C libft
	$(CC) $(CFLAGS) $(SRCS) -o $(NAME) $(LIBFT)

fclean: clean
	rm -f $(NAME)
	make fclean -C libft

clean:
	rm -f $(OBJS)
	make clean -C libft

re: fclean all

.PHONY: all clean fclean re