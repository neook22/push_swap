/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_index_array.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjeuneje <sjeuneje@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 11:24:07 by sjeuneje          #+#    #+#             */
/*   Updated: 2022/01/24 11:36:30 by sjeuneje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

static int	ft_search_last_index(int *index_array)
{
	int	i;

	i = 0;
	while (index_array[i] != 0)
		i++;
	return (i);
}

static int	ft_search_index_max(t_stack array, int *index_array)
{
	size_t	i;
	int		max;
	int		pos_max;

	i = 0;
	max = 0;
	pos_max = 0;
	while (i < array.len)
	{
		if (index_array[i] == 0)
		{
			if (array.stack[i] > max)
			{
				max = array.stack[i];
				pos_max = i;
			}
		}
		i++;
	}
	return (pos_max);
}

int	*ft_index_array(t_stack array)
{
	size_t	i;
	int		len;
	int		max_index;
	int		*index_array;

	i = 0;
	len = array.len;
	max_index = 0;
	index_array = malloc(sizeof(int) * array.len);
	if (!index_array)
		return (NULL);
	while (i < array.len)
		index_array[i++] = 0;
	while (len > 1)
	{
		max_index = ft_search_index_max(array, index_array);
		index_array[max_index] = len;
		len--;
	}
	index_array[ft_search_last_index(index_array)] = len;
	return (index_array);
}
