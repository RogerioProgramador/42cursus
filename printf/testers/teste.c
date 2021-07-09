#include "../ft_printf_lib.h"

int main(void)
{
	char *a = "teste";
    int b = 3000;
    unsigned int c = 30000;
//	printf("%i\n", b);
//	printf("%0030s", "teste");
//	printf("\n");
    /* cspdiuxX% */
    printf("resultado: |testando %-10.7ua %.3s %i|\n", c, a, b);
    ft_printf("resultado: |testando %-10.7ua %.3s %i|\n", c, a, b);
//    ft_printf("resultado: %.0s", a);
	//ft_printf("%c", a);
//	printf("\n");
//	printf("%i\n", ft_atoi("0350"));
}

