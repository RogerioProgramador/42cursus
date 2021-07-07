#include "../ft_printf_lib.h"

char    *ft_applying_x(va_list args)
{
    size_t  nb;

    nb = va_arg(args, size_t);
    return (ft_hextoa(nb));
}