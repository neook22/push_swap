/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_rotate_a.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjeuneje <sjeuneje@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 11:08:58 by sjeuneje          #+#    #+#             */
/*   Updated: 2022/02/24 17:19:14 by sjeuneje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

static void	ft_swap(int *a, int *b)
{
	int	tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

void	ft_rotate_a(t_stack stack_a)
{
	size_t	i;

	i = 0;
	while (i < stack_a.len - 1)
	{
		ft_swap(&stack_a.stack[i], &stack_a.stack[i + 1]);
		i++;
	}
	ft_putstr_fd("ra\n", 1);
}
