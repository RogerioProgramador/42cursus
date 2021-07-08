#include "../ft_printf_lib.h"

static char    *ft_ptr_prefix(char *pointer)
{
    char    *result;
    size_t  i;

    i = -1;
    result = (char *)ft_calloc(sizeof(char), ft_strlen(pointer) + 3);
    result[0] = '0';
    result[1] = 'x';
    while (pointer[++i])
        result[i + 2] = pointer[i];
    free(pointer);
    return (result);
}

char    *ft_case_p(va_list args)
{
    char    *pointer;
    size_t  n;

    n = va_arg(args, size_t);
    pointer = ft_ptr_prefix(ft_hextoa(n));
    return (pointer);
}