/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_swap_b.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjeuneje <sjeuneje@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 11:10:55 by sjeuneje          #+#    #+#             */
/*   Updated: 2022/01/24 11:11:01 by sjeuneje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

void	ft_swap_b(t_stack stack_b)
{
	int	tmp;

	tmp = 0;
	if (stack_b.len < 2)
		return ;
	tmp = stack_b.stack[0];
	stack_b.stack[0] = stack_b.stack[1];
	stack_b.stack[1] = tmp;
	ft_putstr_fd("sb\n", 1);
}
