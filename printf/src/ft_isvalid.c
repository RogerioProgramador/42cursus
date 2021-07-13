#include "../include/ft_printf.h"

int ft_set_flag(char *s, printparameters *parameters)
{
    int i;

    i = 0;
    if (*s == '0' && *(s + 1) == '-')
        parameters->flags = '-';
    else
        parameters->flags = *s;
    while (ft_strchr("0-", s[i]))
        i++;
    return (i);
}

int ft_set_width(char *s)
{
    return (ft_atoi(s));
}

static int  ft_set_precision(char *s)
{
    return(ft_atoi(s));
}

int ft_isvalid(printparameters *parameters, char *pointer)
{
    ft_struct_start(parameters);
    if (*pointer && ft_strchr("0-", *pointer))
        pointer += ft_set_flag(&(*pointer), parameters);//função nova para verificar caractere + 1
    if (*pointer && ft_strchr("0123456789", *pointer))
    {
        parameters->width = ft_set_width(pointer++);//cenario do * -;
        while (ft_strchr("0123456789", *pointer))
            pointer++;
    }
    if (*pointer && *pointer == '.')
    {
        parameters->precision_bool = 1;
        parameters->precision = ft_set_precision(++pointer);//começar o precision pra saber como é.
        while (ft_strchr("0123456789*", *pointer))
            pointer++;
    }
    if (*pointer && ft_strchr("cspdiuxX%", *pointer))
        parameters->specifier = *pointer;
    else
        return (0);
    return (1);
}
