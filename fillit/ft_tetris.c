/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tetris.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agoulas <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/15 17:58:01 by agoulas           #+#    #+#             */
/*   Updated: 2017/12/20 15:56:22 by agoulas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_function.h"

char		**ft_init_t_etris(char *tmp, size_t x, size_t y, size_t index)
{
	size_t	i;
	char	**t;
	size_t	j;

	i = 0;
	ft_init_tab_t(&t, x, y);
	while (i < x)
	{
		j = 0;
		while (j < y)
		{
			t[i][j] = tmp[index + j];
			j++;
		}
		index = index + 4;
		t[i][j] = '\0';
		i++;
	}
	t[i] = 0;
	return (t);
}

t_etris		*ft_new_t(char *tmp, char c)
{
	t_etris		*new;
	size_t		i;

	i = 0;
	if ((new = (t_etris*)malloc(sizeof(t_etris))) == NULL)
		return (NULL);
	new->x = count_height(tmp);
	new->y = count_width(tmp);
	new->te = ft_init_t_etris(tmp, new->x, new->y, ft_index_tab(tmp));
	new->value = c;
	new->next = NULL;
	return (new);
}

void		free_t(t_etris **p)
{
	if (*p == NULL)
		return ;
	free_tab_t(&((*p)->te), (*p)->x);
	free(*p);
	*p = NULL;
}

size_t		strlen_t_etris(t_etris *t)
{
	size_t	i;

	i = 0;
	if (i < t->x)
		i = t->x;
	if (i < t->y)
		i = t->y;
	return (i);
}
