#include "../ft_printf_lib.h"

int ft_set_number(va_list args, char *s)
{
    if (*s == '*')
        return(va_arg(args, int));
    else
        return(ft_atoi(s));
}