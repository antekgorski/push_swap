/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agorski <agorski@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 14:12:52 by agorski           #+#    #+#             */
/*   Updated: 2024/10/30 18:26:20 by agorski          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_element	*a;
	t_element	*b;

	if (argc < 2)
		return (0);
	a = NULL;
	b = NULL;
	parse_arguments(argc, argv, &a);
	if (ft_stackcount(a) < 2)
	{
		ft_free_stack(&a);
		return (0);
	}
	if (!check_duplicate_number(a))
		ft_element_error(&a, NULL);
	ft_set_index(a);
	// sorting algorytm
	ft_free_stack(&a);
	ft_free_stack(&b);
	return (0);
}
