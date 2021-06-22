#include "ft_printf_lib.h"

static char    *ft_convert(printparameters params, char *buffer, va_list args, char *s)
{
    char *pointer;
    char *reference;

    reference = ft_strndup(s, params.specifier);
    pointer = ft_applying_specifiers(params.specifier, args);
    ft_applying_flag(pointer, params);
    ft_applying_precision(pointer, params.presicion);
    buffer = ft_putting_in_place(pointer, buffer, ft_strnstr(reference, buffer));
    free(pointer);
    free(reference);
    return (buffer);
}

static int ft_isvalid(printparameters *parameters, char *buffer, va_list args)
{
    char *pointer;

    pointer = ft_strchr((const char *)buffer, '%') + 1;//
    if (ft_occurrence(*pointer, "0-"))
        *parameters.flags = *pointer++;
    if (ft_occurrence(*pointer, "0123456789*")))
    {
        *parameters.width = ft_set_number(args, pointer++);
        while (ft_occurrence(*pointer, "0123456789*"))
            pointer++;
    }
    if (*pointer == '.')
    {
        *parameters.presicion = ft_set_number(args, ++pointer);
        while (ft_occurrence(*pointer, "0123456789*"))
            pointer++;
    }
    if (ft_occurrence(*pointer, "cspdiuxX"))
        *parameters.specifier = *pointer;
    else
        return (0);
    return (1);
}

static void    ft_print_out(char *s, char *buffer, va_list args)
{
    int i;
    printparameters *p_pointer;
    printparameters parameters;

    p_pointer = &parameters;
    parameters.flags = 'x';
    i = -1;
    while (s[++i])
        if (s[i] == '%' && ft_isvalid(p_pointer, buffer, args))
                buffer = ft_convert(parameters, buffer, args, s + i);
    write(1, buffer, ft_strlen(buffer));
}

int ft_printf(char *s, ...)
{
    va_list args;
    char    *buffer;
    int     char_count;

    buffer = ft_strdup(s);
    va_start(args, s);
    ft_print_out(s, buffer, args);
    va_end(args);
    char_count = ft_strlen(buffer);
    free(buffer);
    return (char_count);
}