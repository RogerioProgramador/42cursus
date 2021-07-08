#include "../ft_printf_lib.h"

int ft_move_forward(char *s)
{
    int i;

    i = 1;
    while (ft_strchr("cspdiuxX%", s[i]) == 0)
        i++;
    return (i);
}

void ft_struct_start(printparameters *x)
{
    x->flags = 'x';
    x->width = 0;
    x->presicion = 0;
}