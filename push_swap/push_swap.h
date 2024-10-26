/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agorski <agorski@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 14:14:17 by agorski           #+#    #+#             */
/*   Updated: 2024/10/26 16:48:58 by agorski          ###   ########.fr       */
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

#endif