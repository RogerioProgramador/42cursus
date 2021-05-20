# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rsiqueir <rsiqueir@student.42sp.org.br     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/05/18 16:21:52 by rsiqueir          #+#    #+#              #
#    Updated: 2021/05/20 19:56:52 by rsiqueir         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CC = gcc
CFLAGS = -c -Wall -Werror -Wextra
AR = ar rcs
LIB = ranlib
RM = rm -f
RMDIR = rmdir

SRCS =	ft_memset.c		\
		ft_bzero.c		\
		ft_memcpy.c		\
		ft_memccpy.c	\
		ft_memmove.c	\
		ft_memchr.c		\
		ft_memcmp.c		\
		ft_strlen.c		\
		ft_strlcpy.c	\
		ft_strlcat.c	\
		ft_strchr.c		\
		ft_strrchr.c	\
		ft_strnstr.c	\
		ft_strncmp.c	\
		ft_atoi.c		\
		ft_isalpha.c	\
		ft_isdigit.c	\
		ft_isalnum.c	\
		ft_isascii.c	\
		ft_isprint.c	\
		ft_toupper.c	\
		ft_tolower.c	\
		ft_calloc.c		\
		ft_strdup.c		\
		ft_substr.c		\
		ft_strtrim.c
#.c to .o
ifeq (${BUILD},1)
OBJ =		${SRCS:%.c=build/%.o}
else
OBJ =		${SRCS:%.c=%.o}
endif

all:		${NAME}

${NAME}:	${OBJ}
			${AR}	${NAME}		${OBJ}
			${LIB}	${NAME}

ifeq (${BUILD},1)
build/%.o:		%.c
			@mkdir -p build
			${CC}	${CFLAGS}	$< -o $@
else
%.o:		%.c
			${CC}	${CFLAGS}	$< -o $@
endif

clean:
			${RM}	${OBJ}
ifeq (${BUILD},1)
			${RMDIR} build
endif

fclean:		clean
			${RM}	${NAME}

re: fclean all

.PHONY: all clean fclean re
