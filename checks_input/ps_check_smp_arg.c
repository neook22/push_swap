/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_check_smp_arg.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjeuneje <sjeuneje@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 10:34:18 by sjeuneje          #+#    #+#             */
/*   Updated: 2022/03/14 16:22:10 by sjeuneje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	ft_contains_numbers(char *str)
{
	while (*str)
	{
		if (ft_isalnum(*str))
			return (1);
		str++;
	}
	return (0);
}

int	ft_contains_not_numbers(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!ft_isalnum(str[i]))
		{
			if ((str[i] == '+' || str[i] == '-') && !ft_isalnum(str[i + 1]))
				return (1);
			if ((str[i] == '+' || str[i]
					== '-') && (i == 0 || str[i - 1] != ' '))
			{
				if (str[0] != '+' && str[0] != '-')
					return (1);
			}
			else if (str[i] != '+' && str[i] != '-' && str[i] != ' ')
				return (1);
		}
		i++;
	}
	return (0);
}

int	ft_check_signs(char *str)
{
	int	count;
	int	i;

	i = 0;
	count = 0;
	while (str[i])
	{
		if (str[i] == '+' || str[i] == '-')
			count++;
		i++;
	}
	if (count > 1)
		return (1);
	return (0);
}

int	ft_check_duplicates(char **numbers)
{
	int	i;
	int	j;

	i = 0;
	while (i < ft_count_smp_elements(numbers))
	{
		j = i + 1;
		while (j < ft_count_smp_elements(numbers))
		{
			if (!ft_strcmp(numbers[i], numbers[j]))
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

int	ft_check_smp_arg(char *arg)
{
	char	**numbers;
	int		flag_error;
	int		i;

	i = 0;
	flag_error = 1;
	numbers = ft_split(arg, ' ');
	while (numbers[i])
	{
		if (ft_contains_not_numbers(arg) || ft_check_signs(numbers[i]))
				flag_error = 0;
		if (!check_limites(numbers[i]))
			flag_error = 0;
		i++;
	}
	if (ft_check_duplicates(numbers))
		flag_error = 0;
	free_elements(numbers);
	return (flag_error);
}
