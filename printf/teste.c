#include <stdio.h>
#include "ft_printf_lib.h"

int main(void)
{
    int contador;
	char a = 't';
	int b = 3000;
	contador = ft_printf("testando:%s");
	printf("%i\n", contador);
	ft_printf("\n");
	contador = printf("testando:%s");
    printf("%i\n", contador);
}
