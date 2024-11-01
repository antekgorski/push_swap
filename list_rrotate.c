/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_rrotate.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agorski <agorski@student.42warsaw.pl>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 18:18:25 by agorski           #+#    #+#             */
/*   Updated: 2024/11/01 13:27:42 by agorski          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	list_rrotte(t_element **head)
{
	t_element	*last_to_new_head;

	if (!*head || !(*head)->next_element)
		return ;
	last_to_new_head = *head;
	while (last_to_new_head->next_element)
		last_to_new_head = last_to_new_head->next_element;
	last_to_new_head->previous_element->next_element = NULL;
	last_to_new_head->previous_element = NULL;
	last_to_new_head->next_element = *head;
	*head = last_to_new_head;
	last_to_new_head->next_element->previous_element = last_to_new_head;
}

void	rra(t_element **a)
{
	list_rrotte(a);
	write(1, "rra\n", 4);
}

void	rrb(t_element **b)
{
	list_rrotte(b);
	write(1, "rrb\n", 4);
}

void	rrr(t_element **a, t_element **b)
{
	list_rrotte(a);
	list_rrotte(b);
	write(1, "rrr\n", 4);
}
