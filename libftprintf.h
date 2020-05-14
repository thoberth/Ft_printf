/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thoberth <thoberth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/08 11:51:25 by thoberth          #+#    #+#             */
/*   Updated: 2020/03/02 12:08:57 by thoberth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H
# include <stdio.h>
# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>

/*
**	STRUCTURE CONTENANT LES PARAMETRES D'UN ARG
*/
typedef struct	s_list
{
	char		*value;
	long		value2;
	char		value3;
	char		specifier;
	int			sign;
	int			is_mod;
	int			width;
	int			precision;
	int			flag;
	int			width_value;
	int			to_return;
}				t_list;
/*
** FONCTIONS CLASSIQUES
*/
int				ft_strlen(char *str);
void			ft_putstr(char *str, int nb, t_list *arg);
void			ft_putchar(char c, t_list *arg);
int				ft_intlen(long int nbr, char *base_to, t_list *arg);
int				ft_atoi(const char *str);
long int		count(long int nb);
void			ft_putnbr_base_llong(unsigned long long nb, char *base,
				t_list *arg);
void			ft_putnbr_base(long int nb, char *base, t_list *arg);
void			ft_putnbr(int nb, t_list *arg);
void			ft_putnbr_u(unsigned int number, t_list *arg);
int				ft_is_number(char text);
/*
** FONCTIONS POUR FT_PRINTF
*/
int				ft_printf(const char *format, ...);
void			ft_putchar_vr(char c);
int				ft_aff_arg(const char *format, int i, va_list ap);
int				ft_test_specifier(char text);
int				ft_test_specifier2(char text);
void			ft_aff_final(t_list *arg, va_list ap);
void			ft_aff_final_suite(t_list *arg, va_list ap);
void			ft_init(t_list *arg);
void			ft_special(t_list *arg);
int				ft_flag(const char *format, int i, t_list *arg, va_list ap);
int				ft_flag_suite(const char *format, int i,
				t_list *arg, va_list ap);
int				ft_flag_fin(const char *format, int i,
				t_list *arg, va_list ap);
void			ft_flagbis(const char *format, int i, t_list *arg);
void			ft_specifier(const char *format, int i, t_list *arg);
int				ft_test_width(t_list *arg);
void			ft_do_printf(t_list *arg);
void			ft_printf_s(t_list	*arg);
void			ft_printf_p(t_list *arg);
void			ft_printf_other(t_list *arg);
void			ft_which_conv(t_list *arg);
void			ft_put_0_or_sp(char c, int nbr, t_list *arg);

#endif
