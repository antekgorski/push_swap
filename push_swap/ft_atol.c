/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atol.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agorski <agorski@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 18:53:45 by agorski           #+#    #+#             */
/*   Updated: 2024/10/31 19:23:12 by agorski          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sign_set(int *sign, const char *parsed_e, int *i)
{
	if (parsed_e[*i] == '-' || parsed_e[*i] == '+')
	{
		if (parsed_e[*i] == '-')
			*sign = -1;
		(*i)++;
	}
}

int	verify_digit_and_overflow(long res, int sign, int d,
		t_atol_conv_res *result)
{
	if ((res > 2147483648 && sign == -1) || (res > 2147483647 && sign == 1)
		|| !ft_isdigit(d))
	{
		result->error_handler = 1;
		return (1);
	}
	return (0);
}

int	verifi_overflow(long res, int sign, t_atol_conv_res *result)
{
	if ((res > 2147483648 && sign == -1) || (res > 2147483647 && sign == 1))
	{
		result->error_handler = 1;
		return (1);
	}
	return (0);
}

void	ft_atol(char *parsed_e, t_atol_conv_res *result)
{
	int		i;
	int		sign;
	long	res;

	res = 0;
	sign = 1;
	i = 0;
	while (parsed_e[i] == ' ' || (parsed_e[i] >= 9 && parsed_e[i] <= 23))
		i++;
	sign_set(&sign, parsed_e, &i);
	if (parsed_e[i] == '\0')
	{
		result->error_handler = 1;
		return ;
	}
	while (parsed_e[i])
	{
		if (verify_digit_and_overflow(res, sign, parsed_e[i], result))
			return ;
		res = res * 10 + (parsed_e[i++] - '0');
	}
	if (verifi_overflow(res, sign, result))
		return ;
	result->data = (int)(res * sign);
}
