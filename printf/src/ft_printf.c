#include "../include/ft_printf_lib.h"

int ft_print_out(char *buffer, va_list args)
{
    int             i;
    int             char_count;
    printparameters parameters;

    i = -1;
    char_count = 0;
    while (buffer[++i])
    {
        if (buffer[i] == '%' && ft_isvalid(&parameters, &buffer[i + 1], args))
        {
            char_count += ft_convert(&parameters, args);
            i += ft_move_forward(&buffer[i]);
        }
        else
            char_count += ft_write_and_count(&buffer[i], 1, 0);
    }
    return (char_count);
}

int ft_printf(char *s, ...)
{
    va_list args;
    char    *buffer;
    int     printed;

    buffer = ft_strdup(s);
    va_start(args, s);
    printed = ft_print_out(buffer, args);
    va_end(args);
    free(buffer);
    return (printed);
}