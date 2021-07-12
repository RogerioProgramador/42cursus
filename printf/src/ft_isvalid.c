#include "../include/ft_printf.h"
#include <stdio.h>
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

int ft_set_width(va_list args, char *s, printparameters *parameters)
{
    int number;

    printf ("|%c|\n", *s);
    if (*s == '*')
    {
        number = va_arg(args, int);
        if (number < 0)
        {
            parameters->flags = '-';
            return (number * -1);
        }
        return (number);
    }
    else
        return (ft_atoi(s));
}

static int  ft_set_precision(va_list args, char *s)
{
    if (*s == '*')
        return(va_arg(args, int));
    else
        return(ft_atoi(s));
}

int ft_isvalid(printparameters *parameters, char *pointer, va_list args)
{
    ft_struct_start(parameters);
    if (*pointer && ft_strchr("0-", *pointer))
        pointer += ft_set_flag(&(*pointer), parameters);//função nova para verificar caractere + 1
    if (*pointer && ft_strchr("0123456789*", *pointer))
    {
        parameters->width = ft_set_width(args, pointer++, parameters);//cenario do * -;
        while (ft_strchr("0123456789*", *pointer))
            pointer++;
    }
    if (*pointer && *pointer == '.')
    {
        parameters->precision_bool = 1;
        parameters->precision = ft_set_precision(args, ++pointer);//começar o precision pra saber como é.
        while (ft_strchr("0123456789*", *pointer))
            pointer++;
    }
    if (*pointer && ft_strchr("cspdiuxX%", *pointer))
        parameters->specifier = *pointer;
    else
        return (0);
    return (1);
}
