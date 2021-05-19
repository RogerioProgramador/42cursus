SRC = main_strlen.c

all:

ifeq (${BUILD},1)
	cd ../libft; make BUILD=1
else
	cd ../libft; make
endif

	gcc -static ${SRC} -L../libft -I/libft -lft

teste:
	gcc -Wall -Werror -Wextra ${SRC}