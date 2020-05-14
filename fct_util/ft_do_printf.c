/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_do_printf.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thoberth <thoberth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/17 15:30:13 by thoberth          #+#    #+#             */
/*   Updated: 2020/03/02 12:16:52 by thoberth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libftprintf.h"

void	ft_do_printf(t_list *arg)
{
	if (arg->sign == 1)
	{
		arg->value2 *= -1;
		if (arg->width > ft_test_width(arg) && arg->flag != 1)
			arg->width--;
	}
	if (arg->precision != 0 && arg->flag == 2)
		arg->flag = 0;
	if (arg->precision == 0 && arg->flag == 2 && arg->is_mod == 1 &&
		arg->specifier != 's')
		arg->flag = 0;
	if (arg->precision == 0 && arg->is_mod == 1 &&
		ft_test_specifier2(arg->specifier) == 2 && arg->value2 == 0)
		arg->width_value--;
	if (arg->specifier == 's')
		ft_printf_s(arg);
	else if (arg->specifier == 'p')
		ft_printf_p(arg);
	else
		ft_printf_other(arg);
}

void	ft_printf_s(t_list *arg)
{
	if (arg->flag == 1)
	{
		ft_which_conv(arg);
		if (arg->to_return < arg->width)
			ft_put_0_or_sp(' ', arg->width - arg->to_return, arg);
	}
	else
	{
		if (arg->width > ft_test_width(arg))
		{
			if (arg->flag == 2)
				ft_put_0_or_sp('0', arg->width - arg->width_value, arg);
			else
				ft_put_0_or_sp(' ', arg->width - arg->width_value, arg);
		}
		ft_which_conv(arg);
	}
}

void	ft_printf_p(t_list *arg)
{
	if (arg->flag == 1)
	{
		ft_putstr("0x", 2, arg);
		if (arg->precision > arg->width_value)
			ft_put_0_or_sp('0', arg->precision - arg->width_value, arg);
		ft_which_conv(arg);
		if (arg->to_return < arg->width)
			ft_put_0_or_sp(' ', arg->width - arg->to_return, arg);
	}
	else
	{
		if (arg->width > ft_test_width(arg))
		{
			if (arg->flag == 2)
				ft_put_0_or_sp('0', arg->width - arg->width_value, arg);
			else
				ft_put_0_or_sp(' ', arg->width - arg->width_value, arg);
		}
		ft_putstr("0x", 2, arg);
		if (arg->precision > arg->width_value)
			ft_put_0_or_sp('0', arg->precision - arg->width_value, arg);
		ft_which_conv(arg);
	}
}

void	ft_printf_other(t_list *arg)
{
	if (arg->flag == 1)
	{
		if (arg->sign == 1)
			ft_putchar('-', arg);
		if (arg->precision > arg->width_value)
			ft_put_0_or_sp('0', arg->precision - arg->width_value, arg);
		ft_which_conv(arg);
		if (arg->to_return < arg->width)
			ft_put_0_or_sp(' ', arg->width - arg->to_return, arg);
	}
	else
	{
		if (arg->flag == 2)
		{
			arg->sign == 1 ? ft_putchar('-', arg) : 0;
			ft_put_0_or_sp('0', arg->width - ft_test_width(arg), arg);
		}
		else
			ft_put_0_or_sp(' ', arg->width - ft_test_width(arg), arg);
		if (arg->sign == 1 && arg->flag != 2)
			ft_putchar('-', arg);
		if (arg->precision > arg->width_value)
			ft_put_0_or_sp('0', arg->precision - arg->width_value, arg);
		ft_which_conv(arg);
	}
}
