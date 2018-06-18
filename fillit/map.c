/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agoulas <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/18 17:01:12 by agoulas           #+#    #+#             */
/*   Updated: 2017/12/20 15:28:06 by zyuan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_function.h"

t_map		*init_tmap(size_t line)
{
	t_map	*test;
	size_t	i;

	test = NULL;
	if ((test = (t_map*)malloc(sizeof(t_map))) == NULL)
		return (NULL);
	test->line = line;
	if (((test->tab) = (char**)malloc(sizeof(char*) * (line + 1))) == NULL)
		return (0);
	i = 0;
	while (i < line)
	{
		if ((test->tab[i] = (char*)malloc(sizeof(char) * (line + 1))) == NULL)
			return (0);
		i++;
	}
	test = init_tmap_tab(test);
	return (test);
}

t_map		*init_tmap_tab(t_map *test)
{
	size_t	i;
	size_t	j;
	t_map	*t;

	t = test;
	i = 0;
	while (i < test->line)
	{
		j = 0;
		while (j < test->line)
		{
			t->tab[i][j] = '.';
			j++;
		}
		t->tab[i][j] = '\0';
		i++;
	}
	t->tab[test->line] = 0;
	return (t);
}

void		free_tmap(t_map **test)
{
	if (test != NULL)
	{
		ft_delete_tab(&((*test)->tab), (*test)->line);
		(*test)->tab = NULL;
		free(*test);
		*test = NULL;
	}
}

int			reinit_tmap(t_map **test)
{
	size_t l;

	l = (*test)->line;
	free_tmap(test);
	if ((*test = init_tmap(l + 1)) == NULL)
		return (-1);
	return (1);
}

void		ft_print_tmap(t_map *p)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (p->tab[j])
	{
		while (p->tab[j][i])
		{
			ft_putchar(p->tab[j][i]);
			i++;
		}
		ft_putchar('\n');
		i = 0;
		j++;
	}
}
