#include "../include/ft_printf.h"

int ft_move_forward(char *s)
{
    int i;

    i = 1;
    while (ft_strchr("cspdiuxX%", s[i]) == 0)
        i++;
    return (i);
}

int    ft_write_and_count(char *s, int count, int czero)
{
    int     i;
    char    zero;

    i = -1;
    zero = 0;
    if (czero == 0)
        write(1, s, count);
    else
    {
        while (++i < count)
        {
            if (s[i] == '0')
                write(1, &zero, 1);
            else
                write(1, &s[i], 1);
        }
    }
    return (count);
}

void ft_czero(char *pointer, char *czero)
{
    if (pointer[0] == 0)
    {
        pointer[0] = '0';
        *czero = 1;
    }
}

char    *ft_negfirst(char *s,printparameters *params)
{
    char    *pointer;
    int     i;
    int     j;

    i = ft_strlen(s);
    if ((!params->precision_bool) || ((params->precision) < i))
        return (s);
    pointer = ft_strchr(s, '-');
    *pointer = '0';
    if (*s == ' ')
    {
        pointer = ft_strchr(s, '0');
        *(pointer - 1) = '-';
        return (s);
    }
    else
    {
        i = 0;
        j = 0;
        pointer = (char *)ft_calloc(ft_strlen(s) + 2, sizeof(char));
        pointer[i] = '-';
        while (s[j])
            pointer[++i] = s[j++];
        free(s);
        return (pointer);
    }
}


void ft_struct_start(printparameters *x)
{
    x->flags = 'x';
    x->width = 0;
    x->precision = 0;
    x->precision_bool = 0;
}
