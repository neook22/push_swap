/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_radix_sort.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjeuneje <sjeuneje@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 10:46:12 by sjeuneje          #+#    #+#             */
/*   Updated: 2022/01/24 10:47:32 by sjeuneje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

static size_t	calc_max_shift(t_stack stack)
{
	size_t	i;
	int		max;
	int		shift;

	i = 0;
	max = 0;
	while (i < stack.len)
	{
		if (stack.stack[i] > max)
		{
			max = stack.stack[i];
		}
		i++;
	}
	shift = sizeof(int) * 8 - 1;
	while (((max >> shift) & 1) == 0)
		shift--;
	return (shift);
}

void	ft_radix_sort(t_stack *stack_a, t_stack stack_b)
{
	size_t			i;
	size_t			shift;
	const size_t	max_shift = calc_max_shift(*stack_a);
	const size_t	nb_elements = stack_a->len;

	shift = -1;
	while (++shift < max_shift + 1)
	{
		i = -1;
		while (++i < nb_elements)
		{
			if (((stack_a->stack[0] >> shift) & 1) == 0)
				ft_push_b(stack_a, &stack_b);
			else if (((stack_a->stack[0] >> shift) & 1) == 1)
				ft_rotate_a(*stack_a);
		}
		while (stack_b.len)
			ft_push_a(stack_a, &stack_b);
	}
}
