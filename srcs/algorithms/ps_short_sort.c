/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_short_sort.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjeuneje <sjeuneje@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 10:47:54 by sjeuneje          #+#    #+#             */
/*   Updated: 2022/01/24 10:53:23 by sjeuneje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

static void	shortest_sort(t_stack *stack_a)
{
	if (stack_a->stack[0] > stack_a->stack[1] && stack_a->stack[0]
		> stack_a->stack[2] && stack_a->stack[1] > stack_a->stack[2])
	{
		ft_swap_a(*stack_a);
		ft_rev_rotate_a(*stack_a);
	}
	else if (stack_a->stack[0] > stack_a->stack[1] && stack_a->stack[0]
		> stack_a->stack[2] && stack_a->stack[1] < stack_a->stack[2])
		ft_rotate_a(*stack_a);
	else if (stack_a->stack[2] > stack_a->stack[1] && stack_a->stack[2]
		> stack_a->stack[0] && stack_a->stack[0] > stack_a->stack[1])
		ft_swap_a(*stack_a);
	else if (stack_a->stack[1] > stack_a->stack[0] && stack_a->stack[1]
		> stack_a->stack[2] && stack_a->stack[2] > stack_a->stack[0])
	{
		ft_rev_rotate_a(*stack_a);
		ft_swap_a(*stack_a);
	}
	else if (stack_a->stack[1] > stack_a->stack[0] && stack_a->stack[1]
		> stack_a->stack[2] && stack_a->stack[0] > stack_a->stack[2])
	{
		ft_rev_rotate_a(*stack_a);
	}
}

static void	short_sort_helper(t_stack *stack_a)
{
	if (stack_a->len == 2)
		ft_swap_a(*stack_a);
	if (stack_a->len == 3)
		shortest_sort(stack_a);
	return ;
}

void	ft_short_sort(t_stack *stack_a, t_stack stack_b)
{
	if (stack_a->len == 2 || stack_a->len == 3)
		short_sort_helper(stack_a);
	else
	{
		while (stack_a->len > 3)
		{
			if (stack_a->stack[0] == 4 || stack_a->stack[0] == 5)
				ft_push_b(stack_a, &stack_b);
			else
				ft_rotate_a(*stack_a);
		}
		shortest_sort(stack_a);
		if (stack_b.stack[0] != 5)
			ft_swap_b(stack_b);
		while (stack_b.len)
			ft_push_a(stack_a, &stack_b);
		while (stack_a->stack[0] != 1)
			ft_rotate_a(*stack_a);
	}
}
