#include "ft_printf_lib.h"

void pointer_tester(char *pointer, int pointer_count)
{
    printf("test %i\n", pointer_count);
    ft_printf("ft_printf result: %p\n", pointer);
    printf("printf    result: %p\n", pointer);
    printf("------------------------------------------\n");
}

void ux_tester(unsigned int a, int pointer_count)
{
    printf("test %i\n", pointer_count);
    ft_printf("ft_printf result: %x\n", a);
    printf("printf    result: %x\n", a);
    printf("------------------------------------------\n");
}

void uX_tester(unsigned int a, int pointer_count)
{
    printf("test %i\n", pointer_count);
    ft_printf("ft_printf result: %X\n", a);
    printf("printf    result: %X\n", a);
    printf("------------------------------------------\n");
}

int main(void)
{
    //Char

    //String

    //Pointers
    printf("---------------POINTERS-------------------\n");
    int pointer_count = 1;
    pointer_tester("1", pointer_count++);
    pointer_tester("12", pointer_count++);
    pointer_tester("123", pointer_count++);
    pointer_tester("124", pointer_count++);

    //Unsigned to Hex
    pointer_count = 1;
    printf("---------------Unsigned to Hex-------------\n");
    ux_tester(1, pointer_count++);
    ux_tester(10, pointer_count++);
    ux_tester(11, pointer_count++);
    ux_tester(100, pointer_count++);
    ux_tester(1000, pointer_count++);

    printf("---------Unsigned to  toupper Hex----------\n");
    uX_tester(1, pointer_count++);
    uX_tester(10, pointer_count++);
    uX_tester(11, pointer_count++);
    uX_tester(100, pointer_count++);
    uX_tester(1000, pointer_count++);
}