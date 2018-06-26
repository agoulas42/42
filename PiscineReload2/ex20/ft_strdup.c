/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agoulas <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/07 16:07:28 by agoulas           #+#    #+#             */
/*   Updated: 2017/11/07 18:02:04 by agoulas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		i = i + 1;
	}
	return (i);
}

char	*ft_strdup(char *src)
{
	char	*c;
	int		l;
	int		i;

	l = ft_strlen(src);
	if ((c = malloc(sizeof(char) * l + 1)) == NULL || src == NULL)
		return (NULL);
	else
	{
		i = 0;
		while (i < l && src[i] != '\0')
		{
			c[i] = src[i];
			i++;
		}
		c[i] = '\0';
		return (c);
	}
}
