/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_special.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thoberth <thoberth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/27 16:57:25 by thoberth          #+#    #+#             */
/*   Updated: 2020/03/02 11:56:36 by thoberth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libftprintf.h"

void	ft_special(t_list *arg)
{
	if (arg->width < 0)
	{
		arg->width *= -1;
		arg->flag = 1;
	}
	if (arg->precision < 0)
	{
		arg->precision = 0;
		arg->is_mod = 0;
	}
}
