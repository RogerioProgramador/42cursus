#include "../include/ft_printf.h"

char	*ft_case_x(va_list args, int precision)
{
	size_t	nb;

	nb = va_arg(args, unsigned int);
	if (nb == 0 && precision)
		return (ft_strdup(""));
	return (ft_uitoa(nb));
}
