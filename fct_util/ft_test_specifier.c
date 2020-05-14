/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_test_specifier.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thoberth <thoberth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/08 13:17:13 by thoberth          #+#    #+#             */
/*   Updated: 2020/02/27 12:39:28 by thoberth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libftprintf.h"

int		ft_test_specifier(char text)
{
	if (text == 'c' || text == 's' || text == 'p' ||
		text == 'd' || text == 'i' || text == 'u' ||
		text == 'x' || text == 'X' || text == '%')
		return (1);
	if (text == '-' || text == '.' || text == '*' ||
		text == '0')
		return (0);
	return (-1);
}

int		ft_test_specifier2(char text)
{
	if (text == 'd' || text == 'i' || text == 'u' ||
		text == 'x' || text == 'X' || text == 'p')
		return (2);
	return (-1);
}
