/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_flag.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thoberth <thoberth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/11 18:40:56 by berthetthom       #+#    #+#             */
/*   Updated: 2020/03/02 11:59:31 by thoberth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libftprintf.h"

int		ft_flag(const char *format, int i, t_list *arg, va_list ap)
{
	if (format[i] == '-')
	{
		arg->flag = 1;
		i++;
		if (format[i] == '0')
			i++;
	}
	else if (format[i] == '0')
	{
		arg->flag = 2;
		i++;
		if (format[i] == '-')
		{
			i++;
			arg->flag = 1;
		}
	}
	i = ft_flag_suite(format, i, arg, ap);
	return (i);
}

int		ft_flag_suite(const char *format, int i, t_list *arg, va_list ap)
{
	if (format[i] == '*')
	{
		arg->width = va_arg(ap, int);
		i++;
	}
	else if (ft_is_number(format[i]) == 2)
	{
		arg->width = ft_atoi(&format[i]);
		while (ft_is_number(format[i]) == 2)
			i++;
	}
	i = ft_flag_fin(format, i, arg, ap);
	return (i);
}

int		ft_flag_fin(const char *format, int i, t_list *arg, va_list ap)
{
	if (format[i] == '.')
	{
		i++;
		arg->is_mod = 1;
		if (format[i] == '*')
		{
			arg->precision = va_arg(ap, int);
			i++;
		}
		else if (ft_is_number(format[i]) == 2)
		{
			arg->precision = ft_atoi(&format[i]);
			while (ft_is_number(format[i]) == 2)
				i++;
		}
	}
	return (i);
}
