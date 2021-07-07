#include "../ft_printf_lib.h"

static size_t hex_cases(size_t n)
{
    size_t i;

    i = 1;
    if (n <= 16)
        return (i);
    while (((double)n / 16) > 1)
    {
        i++;
        n = n / 16;
    }
    return (i);
}

static char    dectohex(size_t nb)
{
    char    *hex_base;
    char    result;

    hex_base = ft_strdup("0123456789abcdef");
    result = hex_base[nb];
    free(hex_base);
    return (result);
}
static void hex(char *pointer, size_t cases, size_t nb)
{
    size_t  remnant;

    while (nb >= 1)
    {
        remnant = nb % 16;
        nb /= 16;
        pointer[cases] = dectohex(remnant);
        cases--;
    }
}

char    *ft_hextoa(size_t nb)
{
    char    *pointer;
    size_t  cases;

    //0x5627fee9e04c
    cases = hex_cases(nb);
    pointer = (char *)malloc(sizeof(char) * (cases + 1));
    pointer[cases] = 0;
    hex(pointer, --cases, nb);
    return (pointer);
}

//int main(void)
//{
//   char *pointer;
//
//    size_t n = 300;
//    printf("%li\n", hex_cases(n));
//    pointer = ft_hextoa(n);
//    printf("%s", pointer);
//}


