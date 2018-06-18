/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fill_tetris.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agoulas <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/01 12:30:03 by agoulas           #+#    #+#             */
/*   Updated: 2017/12/20 15:47:47 by agoulas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_function.h"

int			fill_tetris(t_etris **buf, int fd, char b[16], char tmp[16])
{
	int		res;
	int		res2;
	size_t	i;

	i = 0;
	res = read(fd, b, 5);
	if (res == 0 || b == '\0')
		return (-1);
	while (res != 0 && b[0] != '\0')
	{
		if (b[res - 1] != '\n')
			return (-1);
		ft_strncat(tmp, b, 4);
		i++;
		if (i % 4 == 0)
		{
			if (ft_add_tetris(buf, tmp) == -1
					|| ((res2 = read(fd, b, 1)) == 1 && b[0] != '\n'))
				return (-1);
		}
		res = read(fd, b, 5);
	}
	if (res2 != 0)
		return (-1);
	return (0);
}
