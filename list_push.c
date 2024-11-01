/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_push.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agorski <agorski@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 18:26:11 by agorski           #+#    #+#             */
/*   Updated: 2024/10/31 19:52:12 by agorski          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	list_push(t_element **from_stack, t_element **to_stack)
{
	t_element	*temp;

	if (!*from_stack)
		return ;
	temp = *from_stack;
	*from_stack = (*from_stack)->next_element;
	if (*from_stack)
		(*from_stack)->previous_element = NULL;
	temp->next_element = *to_stack;
	temp->previous_element = NULL;
	if (*to_stack)
		(*to_stack)->previous_element = temp;
	*to_stack = temp;
}

void	pa(t_element **a, t_element **b)
{
	list_push(b, a);
	write(1, "pa\n", 3);
}

void	pb(t_element **a, t_element **b)
{
	list_push(a, b);
	write(1, "pb\n", 3);
}
