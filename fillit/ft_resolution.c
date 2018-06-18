/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_resolution.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agoulas <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/01 18:19:50 by agoulas           #+#    #+#             */
/*   Updated: 2017/12/20 16:13:58 by agoulas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_function.h"

int			resolve(t_map **test, t_etris *input)
{
	size_t	i;
	size_t	j;

	i = 0;
	while (i < (*test)->line)
	{
		j = 0;
		while (j < (*test)->line)
		{
			if (is_place(*test, input, i, j) == 1)
			{
				test = place(test, input, i, j);
				if (input->next == NULL || resolve(test, input->next) == 1)
					return (1);
				else
					delete_c(&((*test)->tab),
							(*test)->line, input->value);
			}
			j++;
		}
		i++;
	}
	return (-1);
}

int			ft_resolution(t_etris *input)
{
	t_map *test;

	if ((test = init_tmap(strlen_t_etris(input))) == NULL)
		return (-1);
	while (resolve(&test, input) == -1)
	{
		reinit_tmap(&test);
	}
	ft_print_tmap(test);
	free_tmap(&test);
	return (0);
}
