/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_union_uoxx.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agoulas <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/27 14:58:33 by agoulas           #+#    #+#             */
/*   Updated: 2018/06/25 14:42:46 by agoulas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"
#include <limits.h>

int				specifier_uox(char c)
{
	if (c == 'u' || c == 'U' || c == 'o' || c == 'O' || c == 'x' || c == 'X')
		return (1);
	return (0);
}

int				size_value_uox(char *num, t_conv *p, union u_uox value)
{
	signed int	size;
	int			d;

	size = 0;
	d = ft_strlen(num);
	if ((p->precs == 0 && return_sign_uox(p, value) != 0)
			|| p->precs == -1 || p->precs <= d)
		size = d;
	else if ((p->precs > d && p->precs > -1) || p->precs > p->width)
		size = p->precs;
	if (p->fl_diese == 1 && return_sign_uox(p, value) != 0)
	{
		size++;
		if (p->specifier == 'x' || p->specifier == 'X')
			size++;
	}
	if (p->width != 0 && p->width > size && p->width > p->precs && p->width > d)
		size = p->width;
	if (size < -1)
		size = 0;
	return (size);
}

int				ft_init_union_uox(union u_uox *value, t_conv *p, va_list *ap)
{
	if (p->length == none)
		value->none = (unsigned int)(va_arg(*ap, unsigned int));
	else if (p->length == h)
		value->h = (unsigned short int)(va_arg(*ap, unsigned int));
	else if (p->length == hh)
		value->hh = (unsigned char)(va_arg(*ap, unsigned int));
	else if (p->length == l)
		value->l = (va_arg(*ap, unsigned long int));
	else if (p->length == ll)
		value->ll = (va_arg(*ap, unsigned long long int));
	else if (p->length == z)
		value->z = (size_t)(va_arg(*ap, size_t));
	else if (p->length == j)
		value->j = (uintmax_t)(va_arg(*ap, uintmax_t));
	else if (p->length == t)
		value->t = (ptrdiff_t)(va_arg(*ap, ptrdiff_t));
	else
		return (0);
	return (1);
}

static char		*ft_union_uox_aux(uintmax_t n, t_conv *p)
{
	char *s;

	s = NULL;
	if (p->specifier == 'u' || p->specifier == 'U')
		s = ft_itoa_base_uox(n, 10);
	if (p->specifier == 'o' || p->specifier == 'O')
		s = ft_itoa_base_uox(n, 8);
	if (p->specifier == 'x' || p->specifier == 'X')
	{
		s = ft_itoa_base_uox(n, 16);
		if (p->specifier == 'x')
			ft_strtolower_rea(&s);
	}
	return (s);
}

char			*ft_itoa_union_uox(union u_uox value, t_conv *p)
{
	char		*s;
	uintmax_t	n;

	s = NULL;
	if (p->length == none)
		n = (uintmax_t)value.none;
	else if (p->length == h)
		n = (uintmax_t)value.h;
	else if (p->length == hh)
		n = (uintmax_t)value.hh;
	else if (p->length == l)
		n = (uintmax_t)value.l;
	else if (p->length == ll)
		n = (uintmax_t)value.ll;
	else if (p->length == z)
		n = (uintmax_t)value.z;
	else if (p->length == j)
		n = (uintmax_t)value.j;
	else if (p->length == t)
		n = (uintmax_t)value.t;
	else
		return (NULL);
	return (ft_union_uox_aux(n, p));
}
