/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   helpers.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agorski <agorski@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 16:17:28 by agorski           #+#    #+#             */
/*   Updated: 2024/10/30 18:09:17 by agorski          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_element_error(t_element **a, t_element **b)
{
	ft_free_stack(a);
	ft_free_stack(b);
	write(2, "Error\n", 6);
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
			next = next->next_element;
		}
		curent = curent->next_element;
	}
	return (1);
}
int	*sort_for_index(int *holder, int size)
{
	int	i;
	int	j;
	int	temp;

	i = 0;
	while (i < size)
	{
		j = 0;
		while (j < size - 1)
		{
			if (holder[j] > holder[j + 1])
			{
				temp = holder[j];
				holder[j] = holder[j + 1];
				holder[j + 1] = temp;
			}
			j++;
		}
		i++;
	}
	return (holder);
}
