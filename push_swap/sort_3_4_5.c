/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_3_4_5.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agorski <agorski@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 14:02:45 by agorski           #+#    #+#             */
/*   Updated: 2024/10/31 18:03:47 by agorski          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_III(t_stack_pair *p)
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
void	sort_IV(t_stack_pair *p)
{
	while (ft_stcksize(*p->b) < 2)
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
void	sort_V(t_stack_pair *p)
{
while (ft_stcksize(*p->b) < 2)
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
