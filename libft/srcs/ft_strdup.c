/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agoulas <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/07 16:07:28 by agoulas           #+#    #+#             */
/*   Updated: 2018/01/12 17:11:43 by agoulas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"
#include <stdlib.h>

char	*ft_strdup(const char *src)
{
	char	*c;
	int		l;
	int		i;

	l = ft_strlen(src) + 1;
	if ((c = (char*)malloc(sizeof(char) * (l))) == NULL
			|| src == NULL)
		return (NULL);
	else
	{
		i = 0;
		while (i < (l - 1) && src[i] != '\0')
		{
			c[i] = src[i];
			i++;
		}
		c[i] = '\0';
		return (c);
	}
}
