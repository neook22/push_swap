/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_swap_a.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjeuneje <sjeuneje@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 11:09:50 by sjeuneje          #+#    #+#             */
/*   Updated: 2022/01/24 11:10:26 by sjeuneje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

void	ft_swap_a(t_stack stack_a)
{
	int	tmp;

	tmp = 0;
	if (stack_a.len < 2)
		return ;
	tmp = stack_a.stack[0];
	stack_a.stack[0] = stack_a.stack[1];
	stack_a.stack[1] = tmp;
	ft_putstr_fd("sa\n", 1);
}
