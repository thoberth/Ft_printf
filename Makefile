# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: thoberth <thoberth@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/06/22 16:05:37 by thoberth          #+#    #+#              #
#    Updated: 2020/03/02 12:09:34 by thoberth         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	= 	fct_util/ft_atoi.c		\
			ft_printf.c		\
			fct_util/ft_aff_arg.c	\
			fct_util/ft_aff_final.c	\
			fct_util/ft_do_printf.c	\
			fct_util/ft_flag.c		\
			fct_util/ft_init.c		\
			fct_util/ft_intlen.c		\
			fct_util/ft_putchar.c	\
			fct_util/ft_putnbr_base.c	\
			fct_util/ft_putnbr_base_llong.c	\
			fct_util/ft_putnbr_u.c	\
			fct_util/ft_putnbr.c		\
			fct_util/ft_putstr.c		\
			fct_util/ft_specifier.c	\
			fct_util/ft_strlen.c		\
			fct_util/ft_test_specifier.c \
			fct_util/ft_which_conv.c	\
			fct_util/ft_is_number.c		\
			fct_util/ft_special.c	\
			fct_util/ft_fct_aff.c	\

OBJS	= ${SRCS:.c=.o}

HDR		= libftprintf.h

NAME	= libftprintf.a

RM		= rm -f

CFLAGS	= -Wall -Wextra -Werror

CC		= gcc

ARRC	= ar rcs ${NAME}

${NAME}: ${OBJS}
	${ARRC} ${OBJS}

all: ${NAME}

.c.o:
	${CC} ${CFLAGS} -c $< -o ${<:.c=.o} -I ${HDR}

clean:
	${RM} ${OBJS}

fclean: clean
	${RM} ${NAME}

re: fclean all

.PHONY:		all		clean	fclean	re
