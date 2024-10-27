/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_rotate.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agorski <agorski@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 18:18:11 by agorski           #+#    #+#             */
/*   Updated: 2024/10/27 22:52:16 by agorski          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rotate(t_element **head)
{
	t_element	*be_last;

	if (!(*head) || !(*head)->next_element)
		return ;
	be_last = *head;
	while (be_last->next_element)
		be_last = be_last->next_element;
    ??????????
}
