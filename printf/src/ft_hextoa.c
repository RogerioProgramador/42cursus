#include "../ft_printf_lib.h"

static size_t   hex_cases(size_t n)
{
    size_t  cases;

    cases = 0;
    while (n != 0)
    {
        n /= 16;
        cases++;
    }
    return (cases);
}

static char dec_to_hex(size_t nb)
{
    char    *hex_base;

    hex_base = "0123456789abcdef";
    return (hex_base[nb]);
}

static void hex(char *pointer, size_t cases, size_t nb)
{
    while (nb >= 1)
    {
        pointer[cases] = dec_to_hex(nb % 16);
        nb /= 16;
        cases--;
    }
}

char    *ft_hextoa(size_t nb)
{
    char    *pointer;
    size_t  cases;

    cases = hex_cases(nb);
    if (cases == 0)
        return (ft_strdup("0"));
    pointer = (char *)ft_calloc((cases + 1), sizeof(char));
    hex(pointer, --cases, nb);
    return (pointer);
}
