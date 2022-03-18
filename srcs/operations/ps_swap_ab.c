/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_swap_ab.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjeuneje <sjeuneje@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 11:10:41 by sjeuneje          #+#    #+#             */
/*   Updated: 2022/01/24 11:10:46 by sjeuneje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

void	ft_swap_ab(t_stack stack_a, t_stack stack_b)
{
	if (stack_a.len < 2 || stack_b.len < 2)
		return ;
	ft_swap_a(stack_a);
	ft_swap_b(stack_b);
	ft_putstr_fd("ss\n", 1);
}
