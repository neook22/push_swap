/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_rotate_b.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjeuneje <sjeuneje@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 11:11:19 by sjeuneje          #+#    #+#             */
/*   Updated: 2022/01/24 11:11:40 by sjeuneje         ###   ########.fr       */
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

void	ft_rotate_b(t_stack stack_b)
{
	size_t	i;

	i = 0;
	while (i < stack_b.len - 1)
	{
		ft_swap(&stack_b.stack[i], &stack_b.stack[i + 1]);
		i++;
	}
	ft_putstr_fd("rb\n", 1);
}
