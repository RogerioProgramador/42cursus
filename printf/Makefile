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

all: make
	gcc -Wall -Werror -Wextra -g libft/*.c src/*.c ft_printf.c testers/teste.c

b: make
	gcc -g libft/*.c src/*.c ft_printf.c testers/teste.c

tester: make
	gcc -g libft/*.c src/*.c ft_printf.c testers/printf_tester.c

make:
	cd libft; make; make clean

clean:
	@rm a.out;
