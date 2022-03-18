/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_rev_rotate_b.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjeuneje <sjeuneje@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 11:07:27 by sjeuneje          #+#    #+#             */
/*   Updated: 2022/02/24 14:41:31 by sjeuneje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

void	ft_rev_rotate_b(t_stack stack_b)
{
	int	i;
	int	tmp;

	i = stack_b.len - 1;
	tmp = stack_b.stack[stack_b.len - 1];
	while (i > 0)
	{
		stack_b.stack[i] = stack_b.stack[i - 1];
		i--;
	}
	stack_b.stack[0] = tmp;
	ft_putstr_fd("rrb\n", 1);
}
