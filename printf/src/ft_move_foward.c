#include "../ft_printf_lib.h"

int ft_move_forward(char *s)
{
    int i;
    //tenho que contar 1 do presicion
    i = 0;
    while (ft_occurrence(s[i], "cspdiuxX%") != 1)
        i++;
    return (i + 1);
}
