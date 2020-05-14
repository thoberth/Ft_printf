/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_u.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thoberth <thoberth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/01 13:23:08 by thoberth          #+#    #+#             */
/*   Updated: 2020/02/28 14:05:01 by thoberth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libftprintf.h"

/*
** FCT COUNT SE TROUVE DANS FT_PUTNBR.C
*/

void		ft_putnbr_u(unsigned int number, t_list *arg)
{
	int				i;
	unsigned int	nbr;

	if (number < 0)
	{
		number = 4294967295 - number;
	}
	i = count(number);
	while (number > 9)
	{
		nbr = number / i;
		ft_putchar(nbr + 48, arg);
		number -= nbr * i;
		i /= 10;
	}
	while (i > 1)
	{
		ft_putchar('0', arg);
		i /= 10;
	}
	ft_putchar(number + 48, arg);
}
