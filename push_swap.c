/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agorski <agorski@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 14:12:52 by agorski           #+#    #+#             */
/*   Updated: 2024/10/24 13:23:00 by agorski          ###   ########.fr       */
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
}
