/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: berthetthomas <berthetthomas@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/22 01:46:02 by thoberth          #+#    #+#             */
/*   Updated: 2020/03/01 17:20:12 by berthetthom      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int main ()
{
	int i = 0;
	unsigned int xu = 1955;
	void *p;
	char c = 'c';
	char *s = "salut";
	int r00 = 0;
	char *test = "%5.3p'";

	printf("--le mien%d", ft_printf("%8.5i", 34));
	printf("\n\n");
	printf("--le vrai%d", printf("%8.5i", 34));
	return (0);
}