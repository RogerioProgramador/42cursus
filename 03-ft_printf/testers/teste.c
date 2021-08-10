#include "../include/ft_printf.h"
#include <stdio.h>


int main(void)
{
//    char b = 'a';
//    char *a = &b;
//    char *c = &a[0];
//    int c = -30000;
//	printf("%i\n", b);
//	printf("%0030s", "teste");
int b = 3000;
//	printf("\n");
    /* cspdiuxX% */
//    printf("resultado: |%.1f|\n", 392.654); //esse aqui é o bonus amigo, vai fazer mesmo?
   printf("resultado: |%p|\n", b);
   ft_printf("resultado: |%p|\n", b);

    // // ft_printf(" printf fake: %x ", LONG_MIN);
    // ft_printf("\n printf fake: %x\n ", 4294967295);
    // ft_printf(" printf fake: %x\n ", 18446744073709551615);
    // ft_printf(" printf fake: %x\n ", 9223372036854775807LL);
    // // ft_printf(" printf fake: %x %x %x %x %x %x %x", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42));

	// // printf(" printf original: %x ", LONG_MIN);
    // printf(" printf original: %x\n ", 4294967295);
    // printf(" printf original: %x\n ", 18446744073709551615);
    // printf(" printf original: %x\n ", 9223372036854775807LL);
    // printf(" printf original: %x %x %x %x %x %x %x", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42));

// ft_printf("|%-10.5d|\n", -5000);
//     printf("|%-10.5d|\n", -5000);

//    ft_printf("|%020d|\n", -42000);
//    printf("|%020d|\n", -42000);
// 	printf("resultado: |%042d|\n", b);
// 	ft_printf("resultado: |%042d|\n", b);

//     printf("resultado: |%.28d|\n", b);
//     ft_printf("resultado: |%.28d|\n", b);

//    printf("|%-0*.10u*0 0*%-0*.0u*0 |\n", 21, 2022, 21, -1011);
//    ft_printf("|%-0*.10u*0 0*%-0*.0u*0 |\n", 21, 2022, 21, -1011);
//
//    printf("|%.4d|\n", -1234);
//    ft_printf("|%.4d|\n", -1234);

//    printf("resultado: |testando %-10.7ua %.3s %50.42i|\n", c, a, c);
//    ft_printf("resultado: |testando %-10.7ua %.3s %50.42i|\n", c, a, c);
//    ft_printf("resultado: %.0s", a);
	//ft_printf("%c", a);
//	printf("\n");
//	printf("%i\n", ft_atoi("0350"));
}

