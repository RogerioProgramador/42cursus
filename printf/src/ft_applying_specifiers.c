#include "../ft_printf_lib.h"

char    *ft_applying_specifiers(char specifier, va_list args)
{
    char *pointer;

    pointer = NULL;
    if (specifier == 'c')
        pointer = ft_applying_c(args);
    else if (specifier == 's')
        pointer = ft_applying_s(args);
    /*
    else if (specifier == 'p')
        pointer = ft_applying_p(args);
    */
    else if (specifier == 'd' || specifier == 'i')
        pointer = ft_applying_d(args);
    /*
    else if (specifier == 'u')
        pointer = ft_applying_u(args);
        */

     /*else if (specifier == 'x')
        pointer = ft_applying_x(args);
    else if (specifier == 'X')
        pointer = applying_X(args);*/
    return (pointer);
}