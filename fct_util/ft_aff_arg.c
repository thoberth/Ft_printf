/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_aff_arg.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thoberth <thoberth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/08 12:09:59 by thoberth          #+#    #+#             */
/*   Updated: 2020/03/02 12:02:58 by thoberth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libftprintf.h"

int		ft_aff_arg(const char *format, int i, va_list ap)
{
	t_list arg;

	ft_init(&arg);
	i = ft_flag(format, i, &arg, ap);
	ft_specifier(format, i, &arg);
	ft_special(&arg);
	ft_aff_final(&arg, ap);
	ft_do_printf(&arg);
	return (arg.to_return);
}
