/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_handle_uoxx.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agoulas <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/27 15:08:42 by agoulas           #+#    #+#             */
/*   Updated: 2018/06/25 14:49:22 by agoulas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

static int	hand_prec_aux(char **buffer, char **num, t_conv *p,
		union u_uox value)
{
	size_t		size;
	int			i;
	int			d;

	d = (return_sign_uox(p, value) == 0 && p->precs == 0) ? 0 : ft_strlen(*num);
	size = size_value_uox(*num, p, value);
	i = (p->fl_diese == 1 && return_sign_uox(p, value) != 0) ? 2 : 0;
	if (p->precs < d && p->precs != -1)
		ft_fl_empty(buffer, (size - d - i), ' ');
	else
		ft_fl_empty(buffer, (size - p->precs - i), ' ');
	if (p->precs == 0 && return_sign_uox(p, value) == 0)
		return (1);
	if (i == 2)
		ft_strcat(*buffer, "0X");
	ft_fl_empty(buffer, (p->precs - d), '0');
	ft_strncat(*buffer, *num, d);
	return (1);
}

static int	hand_prec(char **buffer, char **num, t_conv *p, union u_uox value)
{
	size_t		size;
	int			i;
	int			d;

	d = (return_sign_uox(p, value) == 0 && p->precs == 0) ? 0 : ft_strlen(*num);
	i = (p->fl_diese == 1 && return_sign_uox(p, value) != 0) ? 2 : 0;
	size = size_value_uox(*num, p, value);
	if (p->precs == -1)
		return (0);
	if (p->width == 0 && d == 0)
		return (1);
	if (p->fl_minus == 1)
	{
		if (i == 2)
			ft_strcat(*buffer, "0X");
		if (p->precs > d && p->precs > -1)
			ft_fl_empty(buffer, (p->precs - d - i), '0');
		if (d == 0)
			return (1);
		ft_strncat(*buffer, *num, d);
		ft_fl_empty(buffer, (size - ft_strlen(*buffer) - i), ' ');
	}
	else
		hand_prec_aux(buffer, num, p, value);
	return (1);
}

static int	hand_aux(char **num, t_conv *p, union u_uox value, char **buffer)
{
	size_t		size_flags;
	int			i;
	int			d;

	i = (p->fl_diese == 1 && (return_sign_uox(p, value) != 0)) ? 2 : 0;
	d = ft_strlen(*num);
	size_flags = size_value_uox(*num, p, value);
	if (p->fl_zero == 0 && p->width > d)
		ft_fl_empty(buffer, (p->width - d - i), ' ');
	if (i == 2)
		ft_strcat(*buffer, "0X");
	if (p->fl_zero == 1)
		ft_fl_empty(buffer, (size_flags - d - i), '0');
	ft_strcat(*buffer, *num);
	return (1);
}

static int	hand_x(char **buffer, char **num, t_conv *p, union u_uox value)
{
	size_t		size;
	int			i;
	int			d;

	d = ft_strlen(*num);
	i = (p->fl_diese == 1 && (return_sign_uox(p, value)) != 0) ? 2 : 0;
	size = size_value_uox(*num, p, value);
	if (size == 0 || (*buffer == NULL && (*buffer = ft_strnew(size)) == NULL))
		return (0);
	if (hand_prec(buffer, num, p, value) == 1)
		return (1);
	if (p->fl_minus == 1)
	{
		if (i == 2)
			ft_strcat(*buffer, "0X");
		ft_strcat(*buffer, *num);
		if (p->width > d)
			ft_fl_empty(buffer, (size - d - i), ' ');
	}
	else
		hand_aux(num, p, value, buffer);
	return (1);
}

int			ft_handle_x(t_format **f, t_conv *p, va_list *ap)
{
	char			*num;
	char			*res;
	union u_uox		value;
	int				size;

	num = NULL;
	res = NULL;
	if ((ft_init_union_uox(&value, p, ap) == 0)
			|| ((num = ft_itoa_union_uox(value, p)) == NULL)
			|| (size = size_value_uox(num, p, value) == 0)
			|| (ft_buffer_check(f, size) == 0)
			|| ((hand_x(&res, &num, p, value)) == 0))
		return (0);
	if (p->specifier == 'x')
		ft_strtolower_rea(&res);
	ft_strcat((*f)->buffer, res);
	(*f)->pos_b = ft_strlen((*f)->buffer);
	(*f)->lst_pourc = (*f)->pos_b;
	free(res);
	free(num);
	return (0);
}
