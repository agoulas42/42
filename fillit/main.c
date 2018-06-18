/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agoulas <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/24 11:53:05 by agoulas           #+#    #+#             */
/*   Updated: 2018/01/02 13:40:37 by agoulas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_function.h"

int		main(int ac, char **av)
{
	int			t;
	t_etris		*buffer;

	t = 0;
	buffer = NULL;
	if (ac == 2 && av[1] != NULL)
	{
		if ((t = ft_init_tetris(av[1], &buffer)) >= 0)
		{
			if (ft_resolution(buffer) == -1)
			{
				write(1, "error\n", 6);
				return (-1);
			}
		}
		else
			write(1, "error\n", 6);
		free_t(&buffer);
	}
	else
		write(1, "usage : fillit input_file\n", 26);
	return (0);
}
