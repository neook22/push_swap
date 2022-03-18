/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_sort.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjeuneje <sjeuneje@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 11:24:12 by sjeuneje          #+#    #+#             */
/*   Updated: 2022/01/24 11:24:53 by sjeuneje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

int	ft_is_sorted(t_stack stack_a)
{
	size_t	i;

	i = 0;
	while (i < stack_a.len - 1)
	{
		if (stack_a.stack[i] > stack_a.stack[i + 1])
			return (0);
		i++;
	}
	return (1);
}

void	ft_push_swap(t_stack stack_a)
{
	t_stack	stack_b;
	t_stack	index_array;

	if (ft_is_sorted(stack_a))
		return ;
	stack_b.stack = malloc(stack_a.len * sizeof(int));
	if (!stack_b.stack)
		return ;
	stack_b.len = 0;
	index_array.stack = ft_index_array(stack_a);
	index_array.len = stack_a.len;
	free(stack_a.stack);
	if (stack_a.len <= 5)
		ft_short_sort(&index_array, stack_b);
	else
		ft_radix_sort(&index_array, stack_b);
	free(stack_b.stack);
	free(index_array.stack);
}
