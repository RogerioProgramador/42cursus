#include "../ft_printf_lib.h"

void pointer_tester(char *pointer, int pointer_count)
{
    int i;

    printf("test %i\n", pointer_count);
    i = ft_printf("ft_printf result: %p", pointer);
    ft_printf(" return %i\n", i);
    i = printf("printf    result: %p", pointer);
    printf(" return %i\n", i);
    printf("------------------------------------------\n");
}

void ux_tester(unsigned int a, int pointer_count)
{
    int i;

    printf("test %i\n", pointer_count);
    i = ft_printf("ft_printf result: %x", a);
    ft_printf(" return %i\n", i);
    i = printf("printf    result: %x", a);
    printf(" return %i\n", i);
    printf("------------------------------------------\n");
}

void uX_tester(unsigned int a, int pointer_count)
{
    int i;

    printf("test %i\n", pointer_count);
    i = ft_printf("ft_printf result: %X", a);
    ft_printf(" return %i\n", i);
    i = printf("printf    result: %X", a);
    printf(" return %i\n", i);
    printf("------------------------------------------\n");
}

void percent_tester(unsigned int a, int pointer_count)
{
    int i;

    printf("test %i\n", pointer_count);
    i = ft_printf("ft_printf result: %%%%", a);
    ft_printf(" return %i\n", i);
    i = printf("printf    result: %%%%", a);
    printf(" return %i\n", i);
    printf("------------------------------------------\n");
}

int main(void)
{
    //Char

    //String

    //Pointers
    printf("\n---------------POINTERS-------------------\n");
    int pointer_count = 1;
    pointer_tester("1", pointer_count++);
    pointer_tester("12", pointer_count++);
    pointer_tester("123", pointer_count++);
    pointer_tester("124", pointer_count++);

    //Unsigned to Hex
    printf("\n---------------Unsigned to Hex-------------\n");
    ux_tester(1, pointer_count++);
    ux_tester(10, pointer_count++);
    ux_tester(11, pointer_count++);
    ux_tester(100, pointer_count++);
    ux_tester(1000, pointer_count++);

    printf("\n---------Unsigned to  toupper Hex----------\n");
    uX_tester(1, pointer_count++);
    uX_tester(10, pointer_count++);
    uX_tester(11, pointer_count++);
    uX_tester(100, pointer_count++);
    uX_tester(1000, pointer_count++);

    //Percent
    printf("\n----------Percent as specifier------------\n");
    percent_tester(1, pointer_count++);
}
