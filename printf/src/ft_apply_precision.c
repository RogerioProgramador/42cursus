#include "../include/ft_printf.h"

static char    *precision_for_strings(char *pointer, int precision)
{
    char    *result;
    int     i;
    if (precision >= (int)ft_strlen(pointer) || precision < 0)
        return (pointer);
    result = (char *)malloc((precision + 1) * sizeof(char));
    result[precision] = 0;
    i = -1;
    while (++i < precision)
        result[i] = pointer[i];
    free(pointer);
    return (result);
}

static char    *precision_for_numbers(char *pointer, int precision)
{
    char    *result;
    int     len;
    int     i;

    len = ft_strlen(pointer);
    if (precision <= len)
        return (pointer);
    result = (char *)malloc((precision + 1) * sizeof(char));
    result[precision] = 0;
    len = precision - len;
    i = -1;
    while (++i < len)
        result[i] = '0';
    len = 0;
    while (pointer[len])
        result[i++] = pointer[len++];
    free(pointer);
    return (result);
}

char    *ft_apply_precision(char *pointer, printparameters *parameters)
{
    int     precision;
    char    specifier;

    specifier = parameters->specifier;
    precision  = parameters->precision;
    if ((specifier == 'c') || (specifier == 's'))
        pointer = precision_for_strings(pointer, precision);
    else
        pointer = precision_for_numbers(pointer, precision);
    return (pointer);
}
