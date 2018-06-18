/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tetris_tab.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agoulas <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/17 13:05:03 by agoulas           #+#    #+#             */
/*   Updated: 2017/12/20 15:27:43 by zyuan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_function.h"

void	ft_init_tab_t(char ***tab, size_t x, size_t y)
{
	size_t i;
	size_t j;

	i = 0;
	if ((*tab = (char**)malloc(sizeof(char*) * x + 1)) == NULL)
	{
		tab = NULL;
		exit(EXIT_FAILURE);
	}
	while (i < x)
	{
		if (((*tab)[i] = (char*)malloc(sizeof(char) * y)) == NULL)
		{
			tab = NULL;
			exit(EXIT_FAILURE);
		}
		j = 0;
		while (j < y)
		{
			(*tab)[i][j] = '.';
			j++;
		}
		(*tab)[i][j] = '\0';
		i++;
	}
}

int		count_width(char *s)
{
	size_t i;
	size_t j;
	size_t minx;
	size_t maxx;

	i = 0;
	minx = 4;
	maxx = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			if (s[(i * 4) + j] == '#')
			{
				if (minx > j)
					minx = j;
				if (maxx < j)
					maxx = j;
			}
			j++;
		}
		i++;
	}
	return (maxx - minx + 1);
}

int		count_height(char *s)
{
	size_t		i;
	size_t		j;
	int			height;

	i = 0;
	height = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			if (s[(i * 4) + j] == '#')
			{
				height++;
				j = 4;
			}
			j++;
		}
		i++;
	}
	return (height);
}

size_t	ft_index_tab(char *tmp)
{
	size_t i;
	size_t j;
	size_t minx;
	size_t miny;

	i = 0;
	miny = 3;
	minx = 3;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			if (tmp[(i * 4) + j] == '#')
			{
				if (i < minx)
					minx = i;
				if (j < miny)
					miny = j;
			}
			j++;
		}
		i++;
	}
	return ((minx * 4) + miny);
}

void	free_tab_t(char ***tab, size_t x)
{
	size_t i;

	i = 0;
	while (i < x)
	{
		free((*tab)[i]);
		i++;
	}
	free(*tab);
	tab = NULL;
}
