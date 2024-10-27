/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agorski <agorski@student.42warsaw.pl>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 20:19:52 by tbogus            #+#    #+#             */
/*   Updated: 2024/10/27 14:38:17 by agorski          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	is_sorted(t_node **a)
{
	t_node	*tmp;

	tmp = *a;
	while (tmp->next)
	{
		if (tmp->rank > tmp->next->rank)
			return (0);
		tmp = tmp->next;
	}
	return (1);
}

void	radix_sort_stack_b(t_stacks *s, int b_size, int bit_size, int j)
{
	int	size;

	while (b_size-- && j <= bit_size && !is_sorted(s->a))
	{
		if ((((*s->b)->rank >> j) & 1) == 0)
			rb(s->b);
		else if (*(s->a))
			pa(s->a, s->b);
	}
	if (is_sorted(s->a))
	{
		size = ft_stcksize(*(s->b));
		while (size-- > 0 && *(s->a))
			pa(s->a, s->b);
	}
}

void	radix_sort(t_stacks *s)
{
	int	j;
	int	bit_size;
	unsigned int	size;

	bit_size = 0;
	size = ft_stcksize(*(s->a));
	while (size > 1 && ++bit_size)
		size /= 2;
	j = -1;
	while (++j <= bit_size)
	{
		size = ft_stcksize(*(s->a));
		while (size-- && !is_sorted(s->a))
		{
			if ((((*s->a)->rank >> j) & 1) == 0)
				pb(s->a, s->b);
			else
				ra(s->a);
		}
		radix_sort_stack_b(s, ft_stcksize(*(s->b)), bit_size, j + 1);
	}
	while (*(s->b))
		pb(s->a, s->b);
}

void	sort_stack(t_node **a, t_node **b)
{
	t_stacks	s;
	int			len;

	if (is_sorted(a))
		return ;
	s.a = a;
	s.b = b;
	len = ft_stcksize(*a);
	if (len == 3)
		sort_3(&s);
	else if (len == 4)
		sort_4(&s);
	else if (len == 5)
		sort_5(&s);
	else
		radix_sort(&s);
}
