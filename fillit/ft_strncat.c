/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agoulas <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/10 10:24:46 by agoulas           #+#    #+#             */
/*   Updated: 2017/12/20 15:27:06 by zyuan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_function.h"

char	*ft_strncat(char *dst, const char *src, size_t n)
{
	size_t	dest_l;
	size_t	i;

	dest_l = ft_strlen(dst);
	i = 0;
	while (i < n && src[i] != '\0')
	{
		dst[dest_l + i] = src[i];
		i++;
	}
	dst[dest_l + i] = '\0';
	return (dst);
}
