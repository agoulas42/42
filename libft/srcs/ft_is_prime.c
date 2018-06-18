/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zyuan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/30 16:28:03 by zyuan             #+#    #+#             */
/*   Updated: 2018/01/12 16:59:45 by agoulas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

int		ft_is_prime(int nb)
{
	int i;

	i = 0;
	if (nb <= 0 || nb == 1 || nb == 0)
		return (0);
	if (nb == 2)
		return (1);
	while (nb > 0 && i < nb && nb < 2147483647)
	{
		if (nb % i == 0)
			return (0);
		else
			i++;
	}
	return (1);
}
