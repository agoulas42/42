/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_handle_uoxx.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agoulas <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/27 15:08:42 by agoulas           #+#    #+#             */
/*   Updated: 2018/06/21 19:04:19 by agoulas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

static int	hand_u_prec_aux(char **buffer, char **num, t_conv *p,
		union u_uox value)
{
	int		size;

	size = size_value_uox(*num, p, value);
	if (p->precs < (int)ft_strlen(*num) && p->precs > -1)
		ft_fl_empty(buffer, (size - ft_strlen(*num)), ' ');
	else
		ft_fl_empty(buffer, (size - p->precs), ' ');
	if (p->precs == 0 && return_sign_uox(p, value) == 0)
		return (1);
	ft_fl_empty(buffer, (p->precs - ft_strlen(*num)), '0');
	ft_strcat(*buffer, *num);
	return (1);
}

static int	hand_u_prec(char **buffer, char **num, t_conv *p,
		union u_uox value)
{
	int		size;
	int		d;

	d = ft_strlen(*num);
	size = size_value_uox(*num, p, value);
	if (p->precs == -1)
		return (0);
	if (p->fl_minus == 1)
	{
		if (p->precs == 0 && return_sign_uox(p, value) == 0)
			return (1);
		if (p->precs > d && p->precs > 0)
			ft_fl_empty(buffer, (p->precs - d), '0');
		ft_strncat(*buffer, *num, d);
		ft_fl_empty(buffer, (size - ft_strlen(*buffer)), ' ');
	}
	else
		hand_u_prec_aux(buffer, num, p, value);
	return (1);
}

static int	hand_u_aux(char **num, t_conv *p, union u_uox value, char **buffer)
{
	size_t		size_flags;
	int			d;

	d = ft_strlen(*num);
	size_flags = size_value_uox(*num, p, value);
	if (p->fl_zero == 0 && p->width > d)
		ft_fl_empty(buffer, (p->width - d), ' ');
	if (p->fl_zero == 1)
		ft_fl_empty(buffer, (size_flags - d), '0');
	ft_strcat(*buffer, *num);
	return (1);
}

static int	hand_u(char **buffer, char **num, t_conv *p, union u_uox value)
{
	int		size;
	int		d;

	d = ft_strlen(*num);
	if (((size = size_value_uox(*num, p, value)) == 0)
			|| (*buffer == NULL && (*buffer = ft_strnew(size + 1)) == NULL))
		return (0);
	if (p->precs > -1)
		return (hand_u_prec(buffer, num, p, value));
	if (p->fl_minus == 1)
	{
		ft_strcat(*buffer, *num);
		ft_fl_empty(buffer, (size - d), ' ');
	}
	else
		return (hand_u_aux(num, p, value, buffer));
	return (1);
}

int			ft_handle_u(t_format **f, t_conv *p, va_list *ap)
{
	char			*num;
	char			*res;
	union u_uox		value;
	char			*s;
	int				size;

	s = NULL;
	num = NULL;
	res = NULL;
	if ((ft_init_union_uox(&value, p, ap) == 0)
		|| ((num = ft_itoa_union_uox(value, p)) == NULL)
		|| (size = size_value_uox(num, p, value) == 0)
		|| (ft_buffer_check(f, size) == 0)
		|| ((hand_u(&res, &num, p, value)) == 0))
		return (0);
	ft_strcat((*f)->buffer, res);
	(*f)->pos_b = ft_strlen((*f)->buffer);
	(*f)->lst_pourc = (*f)->pos_b;
	free(res);
	free(num);
	return (0);
}
