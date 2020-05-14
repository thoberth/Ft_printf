/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fct_aff.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thoberth <thoberth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/02 12:05:11 by thoberth          #+#    #+#             */
/*   Updated: 2020/03/02 12:05:40 by thoberth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libftprintf.h"

int		ft_test_width(t_list *arg)
{
	if (arg->precision > arg->width_value)
		return (arg->precision);
	else
		return (arg->width_value);
}

void	ft_put_0_or_sp(char c, int nbr, t_list *arg)
{
	while (nbr > 0)
	{
		ft_putchar(c, arg);
		nbr--;
	}
}
