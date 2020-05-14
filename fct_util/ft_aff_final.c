/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_aff_final.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thoberth <thoberth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/12 15:56:28 by thoberth          #+#    #+#             */
/*   Updated: 2020/03/02 12:03:48 by thoberth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libftprintf.h"

void	ft_aff_final(t_list *arg, va_list ap)
{
	if (arg->specifier == '%')
	{
		arg->value3 = '%';
		arg->width_value = 1;
	}
	if (arg->specifier == 'c')
	{
		arg->value3 = va_arg(ap, int);
		arg->width_value = 1;
	}
	if (arg->specifier == 's')
	{
		arg->value = va_arg(ap, char*);
		if (!(arg->value))
			arg->value = "(null)";
		arg->width_value = ft_strlen(arg->value);
		if (arg->precision < arg->width_value && arg->is_mod == 1)
			arg->width_value = arg->precision;
		else if (arg->precision > arg->width_value)
			arg->precision = arg->width_value;
	}
	ft_aff_final_suite(arg, ap);
}

void	ft_aff_final_suite(t_list *arg, va_list ap)
{
	if (arg->specifier == 'i' || arg->specifier == 'd')
	{
		arg->value2 = (long)va_arg(ap, int);
		arg->width_value = ft_intlen(arg->value2, "0123456789", arg);
	}
	if (arg->specifier == 'x' || arg->specifier == 'X')
	{
		arg->value2 = (long)va_arg(ap, unsigned int);
		arg->width_value = ft_intlen(arg->value2, "0123456789abcdef", arg);
	}
	if (arg->specifier == 'u')
	{
		arg->value2 = (long)va_arg(ap, unsigned int);
		arg->width_value = ft_intlen(arg->value2, "0123456789", arg);
	}
	if (arg->specifier == 'p')
	{
		arg->value2 = (long)va_arg(ap, unsigned long);
		arg->width_value = ft_intlen(arg->value2, "0123456789abcdef", arg) + 2;
	}
	if (ft_test_specifier2(arg->specifier) == 2 && arg->value2 == 0)
		arg->width_value++;
}
