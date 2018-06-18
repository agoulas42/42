/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hashtag.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zyuan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/27 14:55:23 by zyuan             #+#    #+#             */
/*   Updated: 2017/12/20 15:22:52 by zyuan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_function.h"

int		ft_hashtag(char *str)
{
	int		i;
	int		counter;

	counter = 0;
	i = 0;
	if (str[i] == '\0')
		return (0);
	while (i < 16)
	{
		if (str[i] == '#')
		{
			if ((i % 4 != 0) && str[i - 1] == '#')
				counter++;
			if ((i - 4) >= 0 && str[i - 4] == '#')
				counter++;
			if ((i + 1) % 4 != 0 && str[i + 1] == '#')
				counter++;
			if ((i + 4) <= 16 && str[i + 4] == '#')
				counter++;
		}
		i++;
	}
	return (counter);
}
