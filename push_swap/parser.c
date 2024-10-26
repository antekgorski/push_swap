/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parser.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agorski <agorski@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 18:25:56 by agorski           #+#    #+#             */
/*   Updated: 2024/10/26 16:56:44 by agorski          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	add_element(t_element **list_head, int element_data)
{
	t_element	*new_element;
	t_element	*last_element;

	new_element = (t_element *)malloc(sizeof(t_element));
	if (!new_element)
		ft_element_error(list_head, NULL);
	new_element->element_data = element_data;
	new_element->next_element = NULL;
	if (*list_head == NULL)
	{
		new_element->previous_element = NULL;
		*list_head = new_element;
	}
	else
	{
		last_element = *list_head;
		while (last_element->next_element)
			last_element = last_element->next_element;
		last_element->next_element = new_element;
		new_element->previous_element = last_element;
	}
}

void	print_error_and_free(t_element **a, char **split, int j)
{
	while (split != NULL)
	{
		if (split[j] == NULL)
			break ;
		free(split[j]);
		j++;
	}
	free(split);
	split = NULL;
	ft_element_error(a, NULL);
}

void	parse_argument(int argc, char **argv, t_element **a)
{
	int							i;
	int							j;
	char						**split;
	t_atol_conv_res	result;

	result = (t_atol_conv_res){0, 0};
	i = 1;
	while (i < argc)
	{
		split = ft_split(argv[i], ' ');
		j = 0;
		while (split[j])
		{
			ft_atol(split[j], &result);
			if (result.error_handler)
				print_error_and_free(a, split, j);
			add_element(a, result.data);
			free(split[j]);
			j++;
		}
		i++;
		free(split);
	}
}
