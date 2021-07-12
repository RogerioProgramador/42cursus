#include "../include/ft_printf.h"

char    *ft_case_d(va_list args, int precision)
{
    int n;

    n = va_arg(args, int);
    if (n == 0 && precision)
        return (ft_strdup(""));
    return (ft_itoa(n));
}
