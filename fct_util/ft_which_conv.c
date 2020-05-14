/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_which_conv.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thoberth <thoberth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/17 12:57:27 by thoberth          #+#    #+#             */
/*   Updated: 2020/03/02 11:54:42 by thoberth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libftprintf.h"

void	ft_which_conv(t_list *arg)
{
	if (arg->specifier == 'c' || arg->specifier == '%')
		ft_putchar(arg->value3, arg);
	if (arg->specifier == 's')
		ft_putstr(arg->value, arg->width_value, arg);
	if (arg->specifier == 'p' && arg->width_value > 2)
		ft_putnbr_base_llong(arg->value2, "0123456789abcdef", arg);
	if ((arg->specifier == 'i' || arg->specifier == 'd')
		&& arg->width_value > 0)
		ft_putnbr(arg->value2, arg);
	if (arg->specifier == 'u' && arg->width_value > 0)
		ft_putnbr_u(arg->value2, arg);
	if (arg->specifier == 'x' && arg->width_value > 0)
		ft_putnbr_base(arg->value2, "0123456789abcdef", arg);
	if (arg->specifier == 'X' && arg->width_value > 0)
		ft_putnbr_base(arg->value2, "0123456789ABCDEF", arg);
}
