/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agorski <agorski@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 14:14:17 by agorski           #+#    #+#             */
/*   Updated: 2024/10/23 15:34:53 by agorski          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>

typedef struct n_element
{
    int element_data;
    int sorted_index;
    struct n_element *next_element;
    struct n_element *previous_element;
} t_element;

#endif 