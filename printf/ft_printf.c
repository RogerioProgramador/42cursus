#include "ft_printf_lib.h"

int ft_convert(printparameters *params, va_list args, int char_count)
{
    char *pointer;

    pointer = ft_applying_specifiers(params->specifier, args);
    pointer = ft_applying_flag(pointer, params);
//    ft_applying_precision(pointer, params.presicion);
    write(1, pointer, ft_strlen(pointer));
    char_count = ft_strlen(pointer);
    if (*pointer)
        free(pointer);
    return (char_count);
}

static int ft_isvalid(printparameters *parameters, char *pointer, va_list args)
{
    ft_structstart(parameters);
    if (*pointer && ft_occurrence(*pointer, "0-"))
        parameters->flags = *pointer++;
    if (*pointer && ft_occurrence(*pointer, "0123456789*"))
    {
        parameters->width = ft_set_number(args, pointer++);
        while (ft_occurrence(*pointer, "0123456789*"))
            pointer++;
    }
    if (*pointer && *pointer == '.')
    {
        parameters->presicion = ft_set_number(args, ++pointer);
        while (ft_occurrence(*pointer, "0123456789*"))
            pointer++;
    }
    if (*pointer && ft_occurrence(*pointer, "cspdiuxX%"))
        parameters->specifier = *pointer;
    else
        return (0);
    return (1);
}

int ft_print_out(char *buffer, va_list args, int char_count)
{
    int             i;
    printparameters parameters;

    i = -1;
    while (buffer[++i])
    {
        if (buffer[i] == '%' && ft_isvalid(&parameters, &buffer[i + 1], args))
        {
            char_count += ft_convert(&parameters, args, char_count);
            i += ft_move_forward(&buffer[i]);
        }
        else
        {
            write(1, &buffer[i], 1);
            char_count++;
        }
    }
    return (char_count);
}
int ft_printf(char *s, ...)
{
    va_list args;
    char    *buffer;
    int i;

    buffer = ft_strdup(s);
    i = 0;
    va_start(args, s);
    i = ft_print_out(buffer, args, i);
    va_end(args);
    free(buffer);
    return (i);
}