#include "../ft_printf_lib.h"

void ft_structstart(printparameters *x)
{
    x->flags = 'x';
    x->width = 0;
    x->presicion = 0;
}