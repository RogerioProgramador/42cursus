#include "../libft/libft.h"
/*
int main(void)
{
	int a;
	int b;

	a = atoi("    ---++++10");
	b = ft_atoi("    ---++++10");
	printf("original atoi: %i\n", a);
	printf("new atoi: %i\n", b);

	a = atoi("-10");
	b = ft_atoi("-10");
	printf("original atoi: %i\n", a);
	printf("new atoi: %i\n", b);

	a = atoi("20");
	b = ft_atoi("20");
	printf("original atoi: %i\n", a);
	printf("new atoi: %i\n", b);

	a = atoi("        10");
	b = ft_atoi("        10");
	printf("original atoi: %i\n", a);
	printf("new atoi: %i\n", b);

	a = atoi("0");
	b = ft_atoi("0");
	printf("original atoi: %i\n", a);
	printf("new atoi: %i\n", b);
}
*/
/*int		ft_atoi(const char *str)
{
	int	res;
	int	sign;
	int	i;

	res = 0;
	sign = 1;
	i = 0;
	while ((*str == '\t') || (*str == '\v') || (*str == '\f') || (*str == '\r')
		|| (*str == ' ') || (*str == '\n'))
		str++;
	if (*str == '-')
	{
		sign *= -1;
		str++;
	}
	while (*str && str[i] >= '0' && *str <= '9')
	{
		res = (res * 10) + (*str - '0');
		str++;
	}
	return (res * sign);
}*/

int main(void)
{
    int a;
    int b;

    a = atoi("20");
    b = ft_atoi("20");
    printf("original atoi: %i\n", a);
    printf("new atoi: %i\n", b);
}
