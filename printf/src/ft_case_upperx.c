#include "../include/ft_printf.h"

char    *ft_case_upperx(va_list args)
{
    int     i;
    size_t  nb;
    char    *pointer;

    i = -1;
    nb = va_arg(args, size_t);
    if (nb == 0)
        return (ft_strdup(""));
    pointer = ft_hextoa(nb);
    while (pointer[++i])
        pointer[i] = ft_toupper(pointer[i]);
    return (pointer);
}
