/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thoberth <thoberth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/08 11:45:13 by thoberth          #+#    #+#             */
/*   Updated: 2020/03/02 11:40:34 by thoberth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int		ft_printf(const char *format, ...)
{
	int		i;
	int		a;
	va_list ap;

	i = 0;
	a = 0;
	va_start(ap, format);
	while (format[i])
	{
		if (format[i] == '%')
		{
			a += ft_aff_arg(format, ++i, ap);
			while (ft_test_specifier(format[i]) != 1 ||
				ft_is_number(format[i]) == 2)
				i++;
			i++;
		}
		else
		{
			ft_putchar_vr(format[i++]);
			a++;
		}
	}
	va_end(ap);
	return (a);
}
