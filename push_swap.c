/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agorski <agorski@student.42warsaw.pl>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/18 11:34:39 by tbogus            #+#    #+#             */
/*   Updated: 2024/10/22 18:23:22 by agorski          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_node	*a;
	t_node	*b;

	if (argc < 2)
		return (0);
	a = NULL;
	b = NULL;
	parse_input(argc, argv, &a);
	if (ft_stcksize(a) < 2)
	{
		ft_free_list(&a);
		return (0);
	}
	if (!is_input_unique(a))
		print_error(&a, NULL);
	ft_assign_ranks(a);
	sort_stack(&a, &b);
	ft_free_list(&a);
	ft_free_list(&b);
	return (0);
}
