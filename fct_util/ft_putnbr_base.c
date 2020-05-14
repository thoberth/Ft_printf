/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thoberth <thoberth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/10 18:06:20 by thoberth          #+#    #+#             */
/*   Updated: 2020/02/28 14:05:16 by thoberth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libftprintf.h"

void	ft_putnbr_base(long int nb, char *base, t_list *arg)
{
	int		i;

	i = ft_strlen(base);
	if (nb < 0)
	{
		nb *= -1;
		nb = 4294967295 - nb;
	}
	if (nb >= i)
	{
		ft_putnbr_base(nb / i, base, arg);
	}
	ft_putchar(base[nb % i], arg);
}
