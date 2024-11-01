/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_rotate.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agorski <agorski@student.42warsaw.pl>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 18:18:11 by agorski           #+#    #+#             */
/*   Updated: 2024/11/01 13:35:46 by agorski          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	list_rotate(t_element **head)
{
	t_element	*shift_up;

	if (!(*head) || !(*head)->next_element)
		return ;
	shift_up = *head;
	while (shift_up->next_element)
		shift_up = shift_up->next_element;
	shift_up->next_element = *head;
	*head = (*head)->next_element;
	(*head)->previous_element = NULL;
	shift_up->next_element->previous_element = shift_up;
	shift_up->next_element->next_element = NULL;
}

void	ra(t_element **a)
{
	list_rotate(a);
	write(1, "ra\n", 3);
}

void	rb(t_element **b)
{
	list_rotate(b);
	write(1, "rb\n", 3);
}

void	rr(t_element **a, t_element **b)
{
	list_rotate(a);
	list_rotate(b);
	write(1, "rr\n", 3);
}
