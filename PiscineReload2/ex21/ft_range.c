/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agoulas <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/07 16:22:09 by agoulas           #+#    #+#             */
/*   Updated: 2017/11/07 16:46:40 by agoulas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int *tab;
	int l;
	int i;

	l = max - min;
	if (min >= max)
		return (0);
	if ((tab = (int*)malloc(sizeof(int) * l)) == 0)
	{
		return (0);
	}
	i = 0;
	while ((min + i) < max)
	{
		tab[i] = min + i;
		i++;
	}
	return (tab);
}
