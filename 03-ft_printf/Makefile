# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rogerio <rogerio@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/06/11 05:54:15 by rogeriorslf       #+#    #+#              #
#    Updated: 2021/08/05 11:05:13 by rogerio          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
LIBPATH = ./libft
CC = gcc
CFLAGS =
AR = ar rcs
RM = rm -f
TESTER = testers/teste.c

SRCS =	src/ft_apply_flag.c				\
		src/ft_apply_precision.c		\
		src/ft_apply_specifiers.c		\
		src/ft_case_c.c					\
		src/ft_case_d.c					\
		src/ft_case_p.c					\
		src/ft_case_s.c					\
		src/ft_case_u.c					\
		src/ft_case_upperx.c			\
		src/ft_case_x.c					\
		src/ft_convert.c				\
		src/ft_hextoa.c					\
		src/ft_uitoa.c					\
		src/ft_isvalid.c				\
		src/ft_utils.c					\
		src/ft_utoa.c					\
		src/ft_printf.c

OBJS = 		${SRCS:%.c=%.o}

all:		${NAME}

${NAME}:	${OBJS}
			make -C ${LIBPATH}
			cp 		./libft/libft.a ./libftprintf.a
			${AR}	${NAME}		${OBJS}

clean:
			${RM}	${OBJS}
			make -C ${LIBPATH} clean

fclean:		clean
			${RM} 	${NAME}
			make -C ${LIBPATH} fclean

tester:		${NAME}
			${CC} 	${CFLAGS}  ${TESTER} ${NAME}
git:		
	git add .
	git commit -m"update"
	git push
	
bonus:		all