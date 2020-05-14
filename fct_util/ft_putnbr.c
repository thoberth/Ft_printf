/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thoberth <thoberth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/05 12:11:42 by thoberth          #+#    #+#             */
/*   Updated: 2020/02/28 14:04:49 by thoberth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libftprintf.h"

long int	count(long int nb)
{
	int		i;

	i = 1;
	while (nb > 9)
	{
		nb /= 10;
		i *= 10;
	}
	return (i);
}

void		ft_putnbr(int nb, t_list *arg)
{
	int			i;
	int			nbr;
	long int	number;

	number = nb;
	if (number < 0)
		number *= -1;
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
