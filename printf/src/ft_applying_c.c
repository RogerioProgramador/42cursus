#include "../ft_printf_lib.h"

char    *ft_applying_c(va_list args)
{
    char *pointer;

    pointer = (char *)malloc(sizeof(char) * 1 + 1);
    if (!pointer)
        return (NULL);
    pointer[1] = 0;
    pointer[0] = va_list(args, char);
    return (pointer);
}