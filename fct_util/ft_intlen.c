/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_intlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thoberth <thoberth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/12 16:03:08 by thoberth          #+#    #+#             */
/*   Updated: 2020/02/24 14:59:03 by thoberth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libftprintf.h"

int		ft_intlen(long int nbr, char *base_to, t_list *arg)
{
	int		i;

	i = 0;
	if (nbr < 0)
	{
		nbr *= -1;
		arg->sign = 1;
	}
	while (nbr > (ft_strlen(base_to) - 1))
	{
		nbr /= ft_strlen(base_to);
		i++;
	}
	if (nbr >= 1 && nbr <= (ft_strlen(base_to) - 1))
		i++;
	return (i);
}
