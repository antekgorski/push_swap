/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agorski <agorski@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 14:14:17 by agorski           #+#    #+#             */
/*   Updated: 2024/10/30 18:21:31 by agorski          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft/libft.h"
# include <unistd.h>

typedef struct n_element
{
	int					element_data;
	int					sorted_index;
	struct n_element	*next_element;
	struct n_element	*previous_element;
}						t_element;

typedef struct s_stack_pair
{
	t_element			**a;
	t_element			**b;
}						t_stack_pair;

typedef struct s_atol_conv_res
{
	long				data;
	int					error_handler;
}						t_atol_conv_res;

void					parse_argument(int argc, char **argv, t_element **a);
void					ft_element_error(t_element **a, t_element **b);
void					ft_atol(char **parsed_elemend, t_atol_conv_res *result);
void					ft_element_error(t_element **a, t_element **b);
void					ft_free_stack(t_element **list_head);
int						ft_stackcount(t_element *stack);
int						*sort_for_index(int *holder, int size);
void					ft_set_index(t_element *stack);

void					pa(t_element **a, t_element **b);
void					pb(t_element **a, t_element **b);

void					ra(t_element **a);
void					rb(t_element **b);
void					rr(t_element **a, t_element **b);

void					sa(t_element **a);
void					sb(t_element **b);
void					ss(t_element **a, t_element **b);

void					rra(t_element **a);
void					rrb(t_element **b);
void					rrr(t_element **a, t_element **b);

#endif