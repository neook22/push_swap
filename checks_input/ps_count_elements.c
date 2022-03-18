/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_count_elements.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjeuneje <sjeuneje@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 10:38:39 by sjeuneje          #+#    #+#             */
/*   Updated: 2022/02/22 16:59:32 by sjeuneje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	check_limites(char *numbers)
{
	if (numbers[0] == '-')
	{
		if (ft_strlen(numbers) >= 11
			&& (ft_atoi(numbers) == 0 || ft_atoi(numbers) == -1))
			return (0);
	}
	else
	{
		if (ft_strlen(numbers) >= 10
			&& (ft_atoi(numbers) == 0 || ft_atoi(numbers) == -1))
			return (0);
	}
	return (1);
}

int	ft_count_smp_elements(char **elements)
{
	int	i;

	i = 0;
	while (elements[i])
		i++;
	return (i);
}
