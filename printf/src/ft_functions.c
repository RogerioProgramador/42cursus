#include "../ft_printf_lib.h"

int ft_occurrence(char c, char *s)
{
    while (s)
    {
        if (c == *s)
            return (1);
        s++;
    }
    return (0);
}

int ft_set_number(va_list args, char *s)
{
    int count;

    if (*s == '*')
        count = va_arg(args, int);
    else
    count = ft_atoi(s);
    return (count);
}

char *ft_strndup(char *s, int c)
{
    int i;
    char *pointer;

    i = 0;
    while (s[i] != c)
        i++;
    pointer = (char *)malloc(sizeof(char) * (i + 1));
    pointer[i] = 0;
    i = 0;
    while (s[i] != c)
    {
        pointer[i] = s[i];
        i++;
    }
    return (pointer);
}
