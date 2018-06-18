/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_add_tetris.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agoulas <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/07 12:02:41 by agoulas           #+#    #+#             */
/*   Updated: 2017/12/20 15:22:36 by zyuan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_function.h"

int			ft_add_tetris(t_etris **buf, char *content)
{
	int		res_hashtag;
	size_t	i;
	size_t	n;

	n = 0;
	i = 0;
	while (i < 16)
	{
		if (content[i] != '.' && content[i] != '#')
			return (-1);
		if (content[i] == '#')
			n++;
		i++;
	}
	if (n != 4)
		return (-1);
	res_hashtag = ft_hashtag(content);
	if ((res_hashtag != 6 && res_hashtag != 8))
		return (-1);
	ft_lstadd_last(buf, content);
	ft_init_stringtab(content);
	return (1);
}
