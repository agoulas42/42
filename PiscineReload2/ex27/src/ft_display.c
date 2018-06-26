/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agoulas <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/07 19:10:14 by agoulas           #+#    #+#             */
/*   Updated: 2017/11/08 11:08:47 by agoulas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_fonction.h"

int		ft_display_file(char *namefichier)
{
	int		fd;
	int		rest;
	char	buffer[4096];

	if ((fd = open(namefichier, O_RDONLY, 0)) == -1)
	{
		return (-1);
	}
	rest = read(fd, buffer, BUFFSIZE);
	while (rest != 0)
	{
		write(1, buffer, rest);
		rest = read(fd, buffer, BUFFSIZE);
	}
	close(fd);
	return (0);
}
