#include "../include/ft_printf.h"

char	*ft_case_u(va_list args, int precision)
{
	unsigned int	n;

	n = va_arg(args, int);
	if (n == 0 && precision)
		return (ft_strdup(""));
	return (ft_utoa(n));
}
