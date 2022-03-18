/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjeuneje <sjeuneje@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 16:42:33 by sjeuneje          #+#    #+#             */
/*   Updated: 2022/02/22 16:54:22 by sjeuneje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

static	int	ft_count_numbers(const char *str)
{
	int	count;

	count = 0;
	while (*str == '0')
		str++;
	while (*str)
	{
		if (ft_isdigit(*str))
			count++;
		str++;
	}
	return (count);
}

static int	ft_check_sign(const char *str)
{
	while (*str)
	{
		if (*str == '-')
			return (1);
		str++;
	}
	return (0);
}

static int	ft_atoi_helper(const char *str, int sign)
{
	unsigned long		nb;
	const unsigned long	min_int = 2147483648;
	const unsigned long	max_int = 2147483647;

	nb = 0;
	while (*str >= '0' && *str <= '9')
	{
		nb *= 10;
		nb += *str - '0';
		str++;
	}
	if (sign == 1 && nb > max_int)
		return (-1);
	else if (sign == -1 && nb > min_int)
		return (0);
	else
		return (nb * sign);
}

int	ft_atoi(const char *str)
{
	int	sign;

	sign = 1;
	if (ft_count_numbers(str) >= 20 && ft_check_sign(str))
		return (0);
	else if (ft_count_numbers(str) >= 20)
		return (-1);
	while ((*str >= 9 && *str <= 13) || *str == ' ')
		str++;
	if (*str == '+' || *str == '-')
	{
		if (*str == '-')
			sign = -1;
		str++;
	}
	return (ft_atoi_helper(str, sign));
}
