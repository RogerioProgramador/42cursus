#include "../ft_printf_lib.h"

char    *ft_case_u(va_list args)
{
    unsigned int n;

    n = va_arg(args, int);
    return (ft_utoa(n));
}