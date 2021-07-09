#include "../ft_printf_lib.h"

static char    *ft_ptr_prefix(char *pointer)
{
    char    *result;
    size_t  i;
    size_t  len;

    i = -1;
    len = ft_strlen(pointer);
    result = (char *)malloc(sizeof(char) * len + 3);
    result[0] = '0';
    result[1] = 'x';
    result[len] = 0;
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