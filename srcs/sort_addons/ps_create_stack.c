/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_create_stack.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjeuneje <sjeuneje@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 11:13:09 by sjeuneje          #+#    #+#             */
/*   Updated: 2022/01/24 13:12:58 by sjeuneje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

static int	count_array_numbers_helper(char **elements, int i, int j, int count)
{
	while (elements[i])
	{
		j = 0;
		while (elements[i][j])
		{
			while (elements[i][j] == ' ')
				j++;
			if (elements[i][j] == '+' || elements[i][j] == '-')
			{
				j++;
				count++;
				while (ft_isalnum(elements[i][j]))
					j++;
			}
			else if (ft_isalnum(elements[i][j]))
			{
				count++;
				while (ft_isalnum(elements[i][j]))
					j++;
			}
		}
		i++;
	}
	return (count);
}

int	ft_count_array_numbers(char **elements)
{
	int	i;
	int	j;
	int	count;

	i = 1;
	j = 0;
	count = 0;
	return (count_array_numbers_helper(elements, i, j, count));
}

int	*ft_create_stack(char **elements)
{
	int		i;
	int		*stack;
	char	**extracted_numbers;

	i = 0;
	extracted_numbers = ft_extract_elements(elements);
	stack = malloc(ft_count_array_numbers(elements) * sizeof(int));
	if (!stack)
		return (NULL);
	while (extracted_numbers[i])
	{
		stack[i] = ft_atoi(extracted_numbers[i]);
		i++;
	}
	i = 0;
	while (extracted_numbers[i])
	{
		free(extracted_numbers[i]);
		i++;
	}
	free(extracted_numbers);
	return (stack);
}
