#include "../include/ft_printf.h"

char	*ft_case_upperx(va_list args, int precision)
{
	int		i;
	size_t	nb;
	char	*pointer;

	i = -1;
	nb = va_arg(args, size_t);
	if (nb == 0 && precision)
		return (ft_strdup(""));
	pointer = ft_uitoa(nb);
	while (pointer[++i])
		pointer[i] = ft_toupper(pointer[i]);
	return (pointer);
}
