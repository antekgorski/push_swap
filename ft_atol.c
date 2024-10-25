/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atol.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agorski <agorski@student.42warsaw.pl>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 23:10:08 by tbogus            #+#    #+#             */
/*   Updated: 2024/10/22 18:25:10 by agorski          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	set_sign(long *sign, const char *n, int *i)
{
	if (n[*i] == '-' || n[*i] == '+')
	{
		if (n[*i] == '-')
			*sign = -1;
		++(*i);
	}
}

int	check_overflow_and_digit(long long res, int sign, int c,
		t_atol_result *result)
{
	if ((res > 2147483648 && sign == -1) || (res > 2147483647 && sign == 1)
		|| !ft_isdigit(c))
	{
		result->error = 1;
		return (1);
	}
	return (0);
}

int	check_overflow(long long res, int sign, t_atol_result *result)
{
	if ((res > 2147483648 && sign == -1) || (res > 2147483647 && sign == 1))
	{
		result->error = 1;
		return (1);
	}
	return (0);
}

void	ft_atol(const char *n, t_atol_result *result)
{
	int			i;
	long		sign;
	long long	res;

	res = 0;
	sign = 1;
	i = 0;
	while (n[i] == ' ' || (n[i] >= 9 && n[i] <= 13))
		++i;
	set_sign(&sign, n, &i);
	if (n[i] == '\0')
	{
		result->error = 1;
		return ;
	}
	while (n[i])
	{
		if (check_overflow_and_digit(res, sign, n[i], result))
			return ;
		res = res * 10 + (n[i++] - '0');
	}
	if (check_overflow(res, sign, result))
		return ;
	result->value = (int)(res * sign);
}
