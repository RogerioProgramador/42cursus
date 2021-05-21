size_t	ft_strlen(const char *s)
{
	size_t	size;

	size = 0;
	while (s[size])
		size++;
	return (size);
}

static char	*ft_strcpy(char *dest, char *src)
{
	char	*dest2;

	dest2 = dest;
	while (*src)
	{
		*dest++ = *src++;
	}
	*dest = '\0';
	dest = dest2;
	return (dest);
}

char	*ft_strdup(char *s1)
{
	char	*dest;

	dest = malloc(ft_strlen(s1) + 1);
	if (!(dest))
		return (NULL);
	if (dest == 0)
		return (0);
	ft_strcpy(dest, s1);
	return (dest);
}

void	memccpy_tester(char *dst, char *src, int c, size_t n)
{
	char *dup1;
	char *dup2;
	int a;

	dup1 = ft_strdup(dst);
	dup2 = ft_strdup(src);

	memccpy(dup1, dup2, 'z', n);
	printf("%s\n", dup1);
	ft_memccpy(dst, src, 'z', n);
	printf("%s", dst);

	a = ft_strncmp(dup1, dst, n);
	if (a != 0)
		printf("        KO\n");
	else
		printf("        OK\n");
}

int	main(void)
{
	char t1[100];
	char t2[] = "testea";
	memccpy_tester(t1, t2, 'a', 3);
	char t3[3];
	char t4[] = "carro";
	memccpy_tester(t3, t4, 'a', 5);
	char t5[100];
	char t6[] = "teaste";
}
