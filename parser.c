/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parser.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agorski <agorski@student.42warsaw.pl>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/18 11:48:58 by tbogus            #+#    #+#             */
/*   Updated: 2024/10/24 15:14:40 by agorski          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	add_node(t_node **head, int value)
{
	t_node	*new;
	t_node	*last;

	new = (t_node *)malloc(sizeof(t_node));
	if (!new)
		print_error(head, NULL);
	new->value = value;
	new->next = NULL;
	if (*head == NULL)
	{
		new->prev = NULL;
		*head = new;
	}
	else
	{
		last = *head;
		while (last->next)
			last = last->next;
		last->next = new;
		new->prev = last;
	}
}

void	free_and_print_error(t_node **a, char **split, int j)
{
	while (split != NULL)
	{
		if (split[j] == NULL)
			break ;
		free(split[j]);
		++j;
	}
	free(split);
	split = NULL;
	print_error(a, NULL);
}

void	parse_input(int argc, char **argv, t_node **a)
{
	int				i;
	int				j;
	char			**split;
	t_atol_result	result;

	result = (t_atol_result){0, 0};
	i = 1;
	while (i < argc)
	{
		split = ft_split(argv[i], ' ');
		j = 0;
		while (split[j])
		{
			ft_atol(split[j], &result);
			if (result.error)
				free_and_print_error(a, split, j);
			add_node(a, result.value);
			free(split[j]);
			++j;
		}
		++i;
		free(split);
	}
}

void	ft_assign_ranks_to_nodes(t_node *a, int *tab)
{
	t_node	*tmp;
	int		i;

	tmp = a;
	i = 0;
	while (tmp)
	{
		i = 0;
		while (tmp->value != tab[i])
			++i;
		tmp->rank = i;
		tmp = tmp->next;
	}
}

void	ft_assign_ranks(t_node *a)
{
	t_node	*tmp;
	int		len;
	int		*tab;
	int		i;

	len = ft_stcksize(a);
	tab = malloc(sizeof(int) * len);
	if (!tab)
		print_error(&a, NULL);
	i = 0;
	tmp = a;
	while (i < len)
	{
		tab[i++] = tmp->value;
		tmp = tmp->next;
	}
	tab = sort_tab(tab, len);
	ft_assign_ranks_to_nodes(a, tab);
	free(tab);
}
