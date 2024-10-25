/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbogus <tbogus@student.42warsaw.pl>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/18 11:34:35 by tbogus            #+#    #+#             */
/*   Updated: 2024/08/28 23:34:40 by tbogus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft/libft.h"
# include <limits.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

typedef struct s_node
{
	int				value;
	int				rank;
	struct s_node	*next;
	struct s_node	*prev;
}					t_node;

typedef struct s_stacks
{
	t_node			**a;
	t_node			**b;
}					t_stacks;

typedef struct s_atol_result
{
	long			value;
	int				error;
}					t_atol_result;

void				parse_input(int argc, char **argv, t_node **a);
int					is_input_unique(t_node *a);
void				print_error(t_node **a, t_node **b);
void				sort_3(t_stacks *s);
void				sort_4(t_stacks *s);
void				sort_5(t_stacks *s);
void				sort_stack(t_node **a, t_node **b);
int					*sort_tab(int *tab, int len);
void				ft_assign_ranks(t_node *a);
void				ft_atol(const char *n, t_atol_result *result);
void				ft_free_list(t_node **head);
int					ft_stcksize(t_node *lst);

void				sa(t_node **a);
void				sb(t_node **b);
void				ss(t_node **a, t_node **b);
void				pa(t_node **a, t_node **b);
void				pb(t_node **a, t_node **b);
void				ra(t_node **a);
void				rb(t_node **b);
void				rr(t_node **a, t_node **b);
void				rra(t_node **a);
void				rrb(t_node **b);
void				rrr(t_node **a, t_node **b);

#endif
