/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   helpers.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agorski <agorski@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 16:17:28 by agorski           #+#    #+#             */
/*   Updated: 2024/10/24 17:50:55 by agorski          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_element_error(t_element **a, t_element **b)
{
	ft_free_stack(a);
	ft_free_stack(b);
	write(2, "element error\n", 14);
	exit(1);
}
void	ft_free_stack(t_element **list_head)
{
	t_element	*temporary;

	if (!list_head)
		return ;
	while (*list_head)
	{
		temporary = *list_head;
		*list_head = (*list_head)->next_element;
		free(temporary);
	}
}
