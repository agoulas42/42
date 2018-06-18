/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   place.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zyuan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/19 19:04:29 by zyuan             #+#    #+#             */
/*   Updated: 2017/12/20 15:28:18 by zyuan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_function.h"

t_map		**place(t_map **test, t_etris *input, int x, int y)
{
	t_map	**t;
	int		line;
	size_t	i;
	size_t	j;

	t = test;
	line = (*test)->line;
	i = 0;
	while (i < input->x)
	{
		j = 0;
		while (j < input->y)
		{
			if ((*t)->tab[x + i][y + j] == '.' && input->te[i][j] == '#')
				(*t)->tab[x + i][y + j] = input->value;
			j++;
		}
		i++;
	}
	(*t)->line = line;
	return (t);
}

int			is_place(t_map *test, t_etris *input, int x, int y)
{
	int		line;
	size_t	i;
	size_t	j;

	line = test->line;
	i = 0;
	if (line - x - (int)(input->x) < 0 || line - y - (int)(input->y) < 0)
		return (0);
	while (i < input->x)
	{
		j = 0;
		while (j < input->y)
		{
			if (test->tab[x + i][j + y] != '.' && input->te[i][j] == '#')
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}
