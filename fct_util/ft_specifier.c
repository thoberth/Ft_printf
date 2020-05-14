/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_specifier.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thoberth <thoberth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/11 19:15:32 by berthetthom       #+#    #+#             */
/*   Updated: 2020/02/28 14:45:04 by thoberth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libftprintf.h"

void	ft_specifier(const char *format, int i, t_list *arg)
{
	if (ft_test_specifier(format[i]) == 1)
		arg->specifier = format[i];
	else
		ft_putchar(format[i], arg);
}
