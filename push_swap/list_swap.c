/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agorski <agorski@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 18:26:05 by agorski           #+#    #+#             */
/*   Updated: 2024/10/31 19:52:27 by agorski          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	list_swap(t_element **head)
{
	t_element	*temp;

	if (!*head || !(*head)->next_element)
		return ;
	temp = *head;
	*head = ((*head)->next_element);
	temp->next_element = (*head)->next_element;
	temp->previous_element = *head;
	(*head)->next_element = temp;
	if (temp->next_element)
		temp->next_element->previous_element = temp;
}

void	sa(t_element **a)
{
	list_swap(a);
	write(1, "sa\n", 3);
}

void	sb(t_element **b)
{
	list_swap(b);
	write(1, "sb\n", 3);
}

void	ss(t_element **a, t_element **b)
{
	list_swap(a);
	list_swap(b);
	write(1, "ss\n", 3);
}
