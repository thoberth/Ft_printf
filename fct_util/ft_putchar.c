/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thoberth <thoberth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/08 12:04:45 by thoberth          #+#    #+#             */
/*   Updated: 2020/02/28 14:49:21 by thoberth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libftprintf.h"

void	ft_putchar(char c, t_list *arg)
{
	arg->to_return++;
	write(1, &c, 1);
}

void	ft_putchar_vr(char c)
{
	write(1, &c, 1);
}
