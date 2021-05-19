#include "../libft/libft.h"

int main(void)
{
	char a[6] = "teste";
	char b[0];
	a[5] = '\0';

	int z = ft_strlen(a);
	printf("word = teste, size = %i\n", z);
	z = ft_strlen(b);
	printf("word = , size = %i\n", z);
	return (0);
}