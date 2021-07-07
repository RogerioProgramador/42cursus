#include "../ft_printf_lib.h"

char    *ft_applying_s(va_list args)
{
    char    *s_string;
    char    *pointer;
    int     i;

    s_string = va_arg(args, char *);
    i = ft_strlen(s_string);
    pointer = (char *)malloc(sizeof(char) * (i + 1));
    pointer[i] = 0;
    i = -1;
    while (s_string[++i])
        pointer[i] = s_string[i];
    return (pointer);
}