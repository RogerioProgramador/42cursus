#include "../ft_printf_lib.h"

char    *ft_apply_specifiers(char specifier, va_list args)
{
    char *pointer;

    pointer = NULL;
    if (specifier == 'c')
        pointer = ft_case_c(args);
    else if (specifier == 's')
        pointer = ft_case_s(args);
    else if (specifier == 'p')
        pointer = ft_case_p(args);
    else if (specifier == 'd' || specifier == 'i')
        pointer = ft_case_d(args);
    else if (specifier == 'u')
        pointer = ft_case_u(args);
    else if (specifier == 'x')
        pointer = ft_case_x(args);
    else if (specifier == 'X')
        pointer = ft_case_X(args);
    else if (specifier == '%')
        pointer = ft_strdup("%");
    return (pointer);
}
