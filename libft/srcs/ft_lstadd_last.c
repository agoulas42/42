/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_last.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agoulas <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/21 13:24:14 by agoulas           #+#    #+#             */
/*   Updated: 2018/01/22 12:48:46 by agoulas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"
#include <stdlib.h>

void	ft_lstadd_last(t_list **alst, t_list *n)
{
	t_list *tmp;

	tmp = (*alst);
	if ((*alst)->content == NULL)
	{
		free(*alst);
		(*alst) = n;
		(*alst)->next = NULL;
	}
	else
	{
		while ((*alst)->next != NULL)
			(*alst) = (*alst)->next;
		(*alst)->next = n;
		(*alst) = tmp;
	}
}
