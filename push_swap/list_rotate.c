/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_rotate.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agorski <agorski@student.42warsaw.pl>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 18:18:11 by agorski           #+#    #+#             */
/*   Updated: 2024/10/28 13:34:43 by agorski          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rotate(t_element **head)
{
	t_element	*shift_up;

	if (!(*head) || !(*head)->next_element)
		return ;
	shift_up = *head;
	while (shift_up->next_element)
		shift_up = shift_up->next_element;
	shift_up->next_element = *head
    
}
