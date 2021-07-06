#include "../ft_printf_lib.h"

int ft_occurrence(char c, char *s)
{
    if (s)
    {
        while (*s)
        {
            if (*s == (char) c)
                return (1);
            s++;
        }
    }
    return (0);
}
