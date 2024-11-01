/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_3_4_5.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agorski <agorski@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 14:02:45 by agorski           #+#    #+#             */
/*   Updated: 2024/10/31 19:51:03 by agorski          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_3(t_stack_pair *p)
{
	if ((*p->a)->next_element->next_element->sorted_index != 2)
	{
		if ((*p->a)->sorted_index == 2)
			ra(p->a);
		else
			rra(p->a);
	}
	if ((*p->a)->sorted_index > (*p->a)->next_element->sorted_index)
		sa(p->a);
}

void	sort_4(t_stack_pair *p)
{
	while (ft_stackcount(*p->b) < 2)
	{
		if ((*p->a)->sorted_index < 2)
			pb(p->a, p->b);
		else
			ra(p->a);
	}
	if ((*p->b)->sorted_index == 0)
		sb(p->b);
	if ((*p->a)->sorted_index > (*p->a)->next_element->sorted_index)
		sa(p->a);
	pa(p->a, p->b);
	pa(p->a, p->b);
}

void	sort_5(t_stack_pair *p)
{
	while (ft_stackcount(*p->b) < 2)
	{
		if ((*p->a)->sorted_index < 2)
			pb(p->a, p->b);
		else
			ra(p->a);
	}
	if ((*p->b)->sorted_index == 0)
		sb(p->b);
	if ((*p->a)->next_element->next_element->sorted_index != 4)
	{
		if ((*p->a)->sorted_index == 4)
			ra(p->a);
		else
			rra(p->a);
	}
	if ((*p->a)->sorted_index > (*p->a)->next_element->sorted_index)
		sa(p->a);
	pa(p->a, p->b);
	pa(p->a, p->b);
}
