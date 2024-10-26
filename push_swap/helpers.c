/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   helpers.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agorski <agorski@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 16:17:28 by agorski           #+#    #+#             */
/*   Updated: 2024/10/26 17:23:54 by agorski          ###   ########.fr       */
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
int	ft_stackcount(t_element *stack)
{
	int	count;

	count = 0;
	while (stack)
	{
		stack = stack->next_element;
		count++;
	}
	return (count);
}
int	check_duplicate_number(t_element *a)
{
	t_element	*curent;
	t_element	*next;

	curent = a;
	while (curent)
	{
		next = curent->next_element;
		while (next)
		{
			if (curent->element_data == next->element_data)
				return (0);
			next = next->next_element
		}
		curent = curent->next_element;
	}
	return (1);
}
