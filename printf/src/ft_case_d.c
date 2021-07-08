#include "../ft_printf_lib.h"

char    *ft_case_d(va_list args)
{
    int n;

    n = va_arg(args, int);
    return(ft_itoa(n));
}