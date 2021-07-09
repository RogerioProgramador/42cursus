#include "../ft_printf_lib.h"

static char    *ft_noflag(char *pointer, printparameters *parameters, char a)
{
    char    *result;
    int     i;
    int     width;
    int     start;

    i = -1;
    width = parameters->width;
    if (width <= ft_strlen(pointer))
    {
        pointer = ft_strdup(pointer);
        return (pointer);
    }
    start = width - ft_strlen(pointer);
    result = (char *)malloc(sizeof(char) * width + 1);
    result[width] = 0;
    while (++i < start)
        result[i] = a;
    i = 0;
    while (pointer[i])
        result[start++] = pointer[i++];
    return (result);
}

static char    *ft_flagzero(char *pointer, printparameters *parameters)
{
    char    specifier;

    specifier = parameters->specifier;
    if (specifier == 'c' || specifier == 's')
        return (ft_noflag(pointer, parameters, ' '));
    else
        return (ft_noflag(pointer, parameters, '0'));
}

static char    *ft_flagminus(char *pointer, printparameters *parameters)
{
    char    *result;
    int     i;
    int     width;

    i = -1;
    width = parameters->width;
    if (width <= ft_strlen(pointer))
        return (pointer);
    result = (char *)malloc(sizeof(char) * width + 1);
    result[width] = 0;
    while (pointer[++i])
        result[i] = pointer[i];
    while (i < width)
    {
        result[i] = ' ';
        i++;
    }
    return (result);
}

char   *ft_apply_flag(char *pointer, printparameters *parameters)
{
    char    *result;
    if (parameters->flags == '0')
        result = ft_flagzero(pointer, parameters);
    else if (parameters->flags == '-')
        result = ft_flagminus(pointer, parameters);
    else
        result = ft_noflag(pointer, parameters, ' ');
    free(pointer);
    return (result);
}
