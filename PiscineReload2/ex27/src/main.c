/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agoulas <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/07 19:17:28 by agoulas           #+#    #+#             */
/*   Updated: 2017/11/08 11:09:49 by agoulas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_fonction.h"

int		main(int ac, char **av)
{
	if (ac == 1)
	{
		ft_putstr_error("File name missing.\n");
		return (0);
	}
	if (ac > 2)
	{
		ft_putstr_error("Too many arguments.\n");
		return (0);
	}
	ft_display_file(av[1]);
	return (0);
}
