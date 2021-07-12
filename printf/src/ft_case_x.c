#include "../include/ft_printf.h"

char    *ft_case_x(va_list args)
{
    size_t  nb;

    nb = va_arg(args, size_t);
    if (nb == 0)
        return (ft_strdup(""));
    return (ft_hextoa(nb));
}
