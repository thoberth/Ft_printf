/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thoberth <thoberth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/08 12:02:26 by thoberth          #+#    #+#             */
/*   Updated: 2020/02/28 14:03:58 by thoberth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libftprintf.h"

void	ft_putstr(char *str, int nb, t_list *arg)
{
	int		i;

	i = 0;
	while (str[i] && i < nb)
	{
		ft_putchar(str[i], arg);
		i++;
	}
}
