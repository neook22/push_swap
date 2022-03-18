/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjeuneje <sjeuneje@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 10:40:13 by sjeuneje          #+#    #+#             */
/*   Updated: 2022/01/24 13:28:55 by sjeuneje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

char	*ps_strjoin(char *s1, char *s2)
{
	char	*joiner;
	size_t	i;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	joiner = malloc(((ft_strlen(s1) + ft_strlen(s2)) + 1) * sizeof(char));
	if (joiner == NULL)
		return (NULL);
	i = 0;
	while (i < ft_strlen(s1))
	{
		joiner[i] = s1[i];
		i++;
	}
	free(s1);
	while (*s2)
	{
		joiner[i] = *s2;
		i++;
		s2++;
	}
	joiner[i] = '\0';
	return (joiner);
}
