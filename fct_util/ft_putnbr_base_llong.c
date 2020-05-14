/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base_llong.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thoberth <thoberth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/01 14:41:57 by thoberth          #+#    #+#             */
/*   Updated: 2020/02/28 14:04:16 by thoberth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libftprintf.h"

void	ft_putnbr_base_llong(unsigned long long nb, char *base, t_list *arg)
{
	unsigned long long		i;

	i = ft_strlen(base);
	if (nb < 0)
	{
		nb = 18446744073709551615U - nb;
	}
	if (nb >= i)
	{
		ft_putnbr_base_llong(nb / i, base, arg);
	}
	ft_putchar(base[nb % i], arg);
}
