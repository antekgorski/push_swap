/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_small.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbogus <tbogus@student.42warsaw.pl>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 20:31:32 by tbogus            #+#    #+#             */
/*   Updated: 2024/08/28 22:42:07 by tbogus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_3(t_stacks *s)
{
	if ((*s->a)->next->next->rank != 2)
	{
		if ((*s->a)->rank == 2)
			ra(s->a);
		else
			rra(s->a);
	}
	if ((*s->a)->rank > (*s->a)->next->rank)
		sa(s->a);
}

void	sort_4(t_stacks *s)
{
	while (ft_stcksize(*s->b) < 2)
	{
		if ((*s->a)->rank < 2)
			pb(s->a, s->b);
		else
			ra(s->a);
	}
	if ((*s->b)->rank == 0)
		sb(s->b);
	if ((*s->a)->rank > (*s->a)->next->rank)
		sa(s->a);
	pa(s->a, s->b);
	pa(s->a, s->b);
}

void	sort_5(t_stacks *s)
{
	while (ft_stcksize(*s->b) < 2)
	{
		if ((*s->a)->rank < 2)
			pb(s->a, s->b);
		else
			ra(s->a);
	}
	if ((*s->b)->rank == 0)
		sb(s->b);
	if ((*s->a)->next->next->rank != 4)
	{
		if ((*s->a)->rank == 4)
			ra(s->a);
		else
			rra(s->a);
	}
	if ((*s->a)->rank > (*s->a)->next->rank)
		sa(s->a);
	pa(s->a, s->b);
	pa(s->a, s->b);
}
