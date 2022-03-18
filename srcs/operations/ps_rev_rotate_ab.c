/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_rev_rotate_ab.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjeuneje <sjeuneje@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 10:59:06 by sjeuneje          #+#    #+#             */
/*   Updated: 2022/01/24 11:07:16 by sjeuneje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

void	ft_rev_rotate_ab(t_stack stack_a, t_stack stack_b)
{
	ft_rev_rotate_a(stack_a);
	ft_rev_rotate_b(stack_b);
	ft_putstr_fd("rrr\n", 1);
}
