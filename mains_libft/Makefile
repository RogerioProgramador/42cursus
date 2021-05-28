SRC = main_strtrim.c

all:

ifeq (${BUILD},1)
	cd ../libft; make BUILD=1
else
	cd ../libft; make
endif

	gcc -g ${SRC} -L../libft -I/libft -lft -fsanitize=address

clean:

ifeq (${BUILD},1)
	cd ../libft; make BUILD=1 clean
else
	cd ../libft; make clean
endif

fclean: clean

	cd ../libft; rm -f libft.a

teste:
	gcc -Wall -Werror -Wextra ${SRC}
