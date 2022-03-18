/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_check_ml_args.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjeuneje <sjeuneje@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 10:32:41 by sjeuneje          #+#    #+#             */
/*   Updated: 2022/01/24 11:35:58 by sjeuneje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

char	**ft_extract_elements(char **numbers)
{
	int		i;
	char	*joiner;
	char	**elements_extracted;

	i = 1;
	joiner = ft_strdup(" ");
	while (i < ft_count_smp_elements(numbers))
	{
		joiner = ps_strjoin(joiner, numbers[i]);
		joiner = ps_strjoin(joiner, " ");
		i++;
	}
	elements_extracted = ft_split(joiner, ' ');
	free(joiner);
	return (elements_extracted);
}

static int	ft_check_ml_duplicates(char **numbers)
{
	int		i;
	char	**elements;

	elements = ft_extract_elements(numbers);
	if (ft_check_duplicates(elements))
		return (1);
	i = 0;
	while ((elements[i]))
	{
		free((elements[i]));
		i++;
	}
	free(elements);
	return (0);
}

int	ft_check_ml_args(char **args)
{
	int	i;

	i = 1;
	while (args[i])
	{
		if (!ft_check_smp_arg(args[i]))
			return (0);
		i++;
	}
	if (ft_check_ml_duplicates(args))
		return (0);
	return (1);
}
