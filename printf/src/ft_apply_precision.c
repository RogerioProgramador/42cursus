#include "../ft_printf_lib.h"

char    *ft_apply_precision(char *pointer, int precision)
{
    char *ptr;

    ptr = ft_strdup(pointer);
    free(pointer);
    return (ptr);
}
