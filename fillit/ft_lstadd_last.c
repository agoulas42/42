/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_last.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agoulas <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/26 18:30:34 by agoulas           #+#    #+#             */
/*   Updated: 2017/12/20 15:25:46 by zyuan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_function.h"

void	ft_lstadd_last(t_etris **n, char *content)
{
	t_etris	*tmp;
	char	nb;

	tmp = *n;
	nb = 'A';
	if (*n == NULL)
		*n = ft_new_t(content, nb);
	else
	{
		nb++;
		while ((*n)->next != NULL)
		{
			nb++;
			*n = (*n)->next;
		}
		(*n)->next = ft_new_t(content, nb);
		if ((*n)->next == NULL)
			*n = NULL;
		else
			*n = tmp;
	}
}
