#include "../ft_printf_lib.h"

char    *ft_ptr_prefix(char *pointer)
{
    char    *result;
    size_t  count;
    size_t  i;

    i = 0;
    count = ft_strlen(pointer);
    result = (char *)malloc(sizeof(char) * count + 3);
    result[0] = '0';
    result[1] = 'x';
    while (pointer[i])
    {
        result[i + 2] = pointer[i];
        i++;
    }
    return (result);
}