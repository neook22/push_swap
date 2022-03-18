/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_rotate_ab.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjeuneje <sjeuneje@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 11:09:08 by sjeuneje          #+#    #+#             */
/*   Updated: 2022/01/24 11:09:15 by sjeuneje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

void	ft_rotate_ab(t_stack stack_a, t_stack stack_b)
{
	ft_rotate_a(stack_a);
	ft_rotate_b(stack_b);
	ft_putstr_fd("rr\n", 1);
}
