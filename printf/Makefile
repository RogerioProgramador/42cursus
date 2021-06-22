# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rogeriorslf <rogeriorslf@student.42.fr>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/06/11 05:54:15 by rogeriorslf       #+#    #+#              #
#    Updated: 2021/06/11 07:35:45 by rogeriorslf      ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
FLAGS = -Wall -Werror -Wextra -g
OBJ = ft_printf.c
LIBFT = libft/libft.a
FUNCTIONS_OBJS =
CONVERSION_OBJS =

all: make
	${CC} ${FLAGS} ${FUNCTIONS_OBJS} ${CONVERSION_OBJS} ${OBJ} ${LIBFT}

make:
	cd libft; make; make clean
