/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjeuneje <sjeuneje@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 10:32:04 by sjeuneje          #+#    #+#             */
/*   Updated: 2022/02/24 12:39:45 by sjeuneje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/push_swap.h"

void	ml_args(char **argv)
{
	t_stack	stack_a;

	if (ft_check_ml_args(argv))
	{
		stack_a.stack = ft_create_stack(argv);
		stack_a.len = ft_count_array_numbers(argv);
		ft_push_swap(stack_a);
	}
	else
		ft_putstr_fd("Error\n", 2);
}

void	sp_arg(char **argv)
{
	t_stack	stack_a;

	if (ft_check_smp_arg(argv[1]))
	{
		stack_a.stack = ft_create_stack(argv);
		stack_a.len = ft_count_array_numbers(argv);
		ft_push_swap(stack_a);
	}
	else
		ft_putstr_fd("Error\n", 2);
}

int	main(int argc, char **argv)
{
	if (argc > 2)
		ml_args(argv);
	else if (argc == 2)
		sp_arg(argv);
	else
		ft_putstr_fd("Error\n", 2);
	return (1);
}
