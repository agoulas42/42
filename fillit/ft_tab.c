/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tab.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agoulas <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/08 19:25:14 by agoulas           #+#    #+#             */
/*   Updated: 2017/12/20 15:48:47 by agoulas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_function.h"

void		ft_delete_tab(char ***tab, size_t line)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (j < line && (*tab)[i])
	{
		free((*tab)[j]);
		(*tab)[j] = NULL;
		i++;
	}
	free(*tab);
	*tab = NULL;
}

void		delete_c(char ***tab, size_t line, char c)
{
	size_t	i;
	size_t	j;
	char	**t;

	i = 0;
	j = 0;
	t = *tab;
	while (i < line && t[i] != 0)
	{
		j = 0;
		while (j < line && t[i][j])
		{
			if (t[i][j] == c)
				t[i][j] = '.';
			j++;
		}
		i++;
	}
}
