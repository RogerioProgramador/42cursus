#include <stdio.h>
#include "ft_printf_lib.h"

int main(void)
{
    int i;
    int contador;
    unsigned int b;

    char *a ="teste";
	i = 10;
    b = 3000;
	contador = ft_printf("0printf=|%p|", a);
	printf("%i\n", contador);
	ft_printf("\n");
	contador = printf("1printf=|%p|", a);
    printf("%i\n", contador);
}
