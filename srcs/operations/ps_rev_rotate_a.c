/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_rev_rotate_a.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjeuneje <sjeuneje@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 10:58:43 by sjeuneje          #+#    #+#             */
/*   Updated: 2022/02/24 17:20:09 by sjeuneje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

void	ft_rev_rotate_a(t_stack stack_a)
{
	int	i;
	int	tmp;

	i = stack_a.len - 1;
	tmp = stack_a.stack[stack_a.len - 1];
	while (i > 0)
	{
		stack_a.stack[i] = stack_a.stack[i - 1];
		i--;
	}
	stack_a.stack[0] = tmp;
	ft_putstr_fd("rra\n", 1);
}
