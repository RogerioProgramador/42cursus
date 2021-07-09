#include "../ft_printf_lib.h"

int ft_convert(printparameters *params, va_list args)
{
    int     char_count;
    char    *pointer;

    pointer = ft_apply_specifiers(params->specifier, args);
    pointer = ft_apply_flag(pointer, params);
//    ft_applying_precision(pointer, params.presicion);
    char_count = write_and_count(pointer, ft_strlen(pointer));
    free(pointer);
    return (char_count);
}