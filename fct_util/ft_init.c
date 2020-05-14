/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thoberth <thoberth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/08 15:12:10 by thoberth          #+#    #+#             */
/*   Updated: 2020/02/26 18:30:15 by thoberth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libftprintf.h"

void	ft_init(t_list *arg)
{
	arg->value = "0";
	arg->value2 = 0;
	arg->value3 = '0';
	arg->specifier = '0';
	arg->sign = 0;
	arg->flag = 0;
	arg->is_mod = 0;
	arg->precision = 0;
	arg->width = 0;
	arg->width_value = 0;
	arg->to_return = 0;
}
