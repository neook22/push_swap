/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_push_b.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjeuneje <sjeuneje@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 10:57:26 by sjeuneje          #+#    #+#             */
/*   Updated: 2022/01/24 10:58:25 by sjeuneje         ###   ########.fr       */
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

static void	move_elements_in(t_stack *s)
{
	size_t	i;

	i = (*s).len;
	while (i > 0)
	{
		ft_swap(&s->stack[i], &s->stack[i - 1]);
		i--;
	}
}

static void	move_elements_extr(t_stack *s)
{
	size_t	i;

	i = 0;
	while (i < (*s).len - 1)
	{
		ft_swap(&s->stack[i], &s->stack[i + 1]);
		i++;
	}
}

void	ft_push_b(t_stack *stack_a, t_stack *stack_b)
{
	if (stack_a->len == 0)
		return ;
	move_elements_in(stack_b);
	stack_b->stack[0] = stack_a->stack[0];
	move_elements_extr(stack_a);
	stack_a->len -= 1;
	stack_b->len += 1;
	ft_putstr_fd("pb\n", 1);
}
