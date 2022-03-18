/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjeuneje <sjeuneje@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 10:40:58 by sjeuneje          #+#    #+#             */
/*   Updated: 2022/02/24 12:38:36 by sjeuneje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <limits.h>
# include <stdlib.h>

# include "libft.h"

/* structs */
typedef struct s_stack
{
	int		*stack;
	size_t	len;
}				t_stack;

/* check simple arg */
int		ft_check_smp_arg(char *arg);
int		ft_contains_numbers(char *str);
int		ft_contains_not_numbers(char *str);
int		ft_check_signs(char *str);
int		ft_check_duplicates(char **numbers);
void	free_elements(char	**elements);

/* check ml args */
int		ft_check_ml_args(char **args);
char	**ft_extract_elements(char **numbers);
int		check_limites(char *numbers);

/* count elements */
int		ft_count_smp_elements(char **elements);
int		ft_count_full_elements(char **elements);

/* create stack */
int		*ft_create_stack(char **elements);
int		ft_count_array_numbers(char **elements);

/* sort */
void	ft_push_swap(t_stack stack_a);
int		ft_is_sorted(t_stack stack_a);

/* operations */
void	ft_swap_a(t_stack stack_a);
void	ft_swap_b(t_stack stack_b);
void	ft_swap_ab(t_stack stack_a, t_stack stack_b);

void	ft_push_a(t_stack *stack_a, t_stack *stack_b);
void	ft_push_b(t_stack *stack_a, t_stack *stack_b);

void	ft_rotate_a(t_stack stack_a);
void	ft_rotate_b(t_stack stack_b);
void	ft_rotate_ab(t_stack stack_a, t_stack stack_b);

void	ft_rev_rotate_a(t_stack stack_a);
void	ft_rev_rotate_b(t_stack stack_b);
void	ft_rev_rotate_ab(t_stack stack_a, t_stack stack_b);

/* index stack */
int		*ft_index_array(t_stack array);

/* algorithms */
void	ft_radix_sort(t_stack *stack_a, t_stack stack_b);
void	ft_short_sort(t_stack *stack_a, t_stack stack_b);

#endif