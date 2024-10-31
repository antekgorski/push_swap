/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorter.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agorski <agorski@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 14:37:53 by agorski           #+#    #+#             */
/*   Updated: 2024/10/31 18:24:33 by agorski          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int static	sorted(t_element **a)
{
	t_element	*temp;

	temp = *a;
	while (temp->next_element)
	{
		if (temp->sorted_index > temp->next_element->sorted_index)
			return (0);
		temp = temp->next_element;
	}
	return (1);
}
void	radix_stack_b(t_stack_pair *s, int b_size, int size_in_bit, int j)
{
	int	size;

	while (b_size-- && j <= size_in_bit && !sorted(s->a))
	{
		if ((((*s->b)->sorted_index >> j) & 1) == 0)
			rb(s->b);
		else if (*(s->a))
			pa(s->a, s->b);
	}
	if (sorted(s->a))
	{
		size = ft_lstsize(*(s->b));
		while (size-- > 0 && *(s->a))
			pa(s->a, s->b);
	}
}

void	radix(t_stack_pair *p)
{
	int				j;
	int				size_in_bit;
	unsigned int	size;

	size_in_bit = 0;
	size = ft_lstsize(*(p->a));
	while (size > 1 && ++size_in_bit)
		size /= 2;
	j = -1;
	while (++j <= size_in_bit)
	{
		size = ft_lstsize(*(p->a));
		while (size-- && !sorted(p->a))
		{
			if ((((*p->a)->sorted_index >> j) & 1) == 0)
				pb(p->a, p->b);
			else
				ra(p->a);
		}
		radix_stack_b(p, ft_lstsize(*(p->b)), size_in_bit, j + 1);
	}
	while (*(p->b))
		pb(p->a, p->b);
}

sort(t_element **a, t_element **b)
{
	t_stack_pair	p;
	int				size;

	if (sorted(a))
		return ;
	p.a = a;
	p.b = b;
	size = ft_lstsize(*a);
	if (size == 3)
		sort_III(&p);
	else if (size == 4)
		sort_IV(&p);
	else if (size == 5)
		sort_V(&p);
	else
		radix(&p);
}
