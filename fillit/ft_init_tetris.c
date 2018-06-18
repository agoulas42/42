/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init_tetris.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agoulas <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/05 16:14:54 by agoulas           #+#    #+#             */
/*   Updated: 2017/12/20 15:24:45 by zyuan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_function.h"
#include <fcntl.h>

int		ft_init_tetris(char *namefile, t_etris **buf)
{
	int		fd;
	int		i;
	char	b[16];
	char	tmp[16];

	i = 0;
	if ((fd = open(namefile, O_RDONLY)) == -1)
		return (-1);
	ft_init_stringtab(b);
	ft_init_stringtab(tmp);
	i = fill_tetris(buf, fd, b, tmp);
	if (buf == NULL)
		free_t(buf);
	close(fd);
	return (i);
}
