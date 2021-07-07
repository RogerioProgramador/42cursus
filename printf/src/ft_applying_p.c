#include "../ft_printf_lib.h"

char    *ft_applying_p(va_list arg)
{
    char    *pointer;
    size_t  n;

    n = va_arg(arg, size_t);
    pointer = ft_hextoa(n);
    pointer = ft_ptr_prefix(pointer);
    return(pointer);
}