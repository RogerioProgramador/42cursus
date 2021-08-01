/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   allmains.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rogeriorslf <rogeriorslf@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/19 02:50:41 by rsiqueir          #+#    #+#             */
/*   Updated: 2021/06/09 03:10:16 by rogeriorslf      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/libft.h"
#include <ctype.h>
#include <stdio.h>
#include <string.h>

void	atoi_tester(char *s)
{
	int		a;
	int		b;

	a = atoi(s);
	b = ft_atoi(s);
	printf("-------------------------------------------------------\ntesting \"%s\"\n", s);
	printf("atoi: %i | ", a);
	printf("ft_atoi: %i", b);
	if (a == b)
		printf("          OK!\n");
	else
		printf("          KO\n");
}

void	strlen_tester(char *s)
{
	int		a;
	int		b;

	a = strlen(s);
	b = ft_strlen(s);
	printf("-------------------------------------------------------\ntesting \"%s\"\n", s);
	printf("strlen: %i | ", a);
	printf("ft_strlen: %i", b);
	if (a == b)
		printf("          OK!\n");
	else
		printf("          KO\n");
}

void	bzero_tester(char *s, size_t n)
{
	int		a;
	int		b;
	int		c;
	char	*t;
	char	*u;

	a = 0;
	b = 0;
	c = ft_strlen(s);
	t = ft_strdup(s);
	u = ft_strdup(s);
	bzero(u, n);
	ft_bzero(t, n);
	printf("-------------------------------------------------------\n");
	printf("testing with %li bytes\n", n);
	printf("bzero:");
	while (a < c)
	{
		if (*u == '\0')
			printf("[0]");
		else
			printf("%c", *u);
		a++;
		u++;
	}
	printf(" | ");
	printf("ft_bzero:");
	u = u - a;
	a = 0;
	while (a < c)
	{
		if (*u != *t)
			b++;
		if (*t == '\0')
			printf("[0]");
		else
			printf("%c", *t);
		a++;
		t++;
		u++;
	}
	if (b == 0)
		printf("         OK!");
	else
		printf("         KO");
	printf("\n");
}

void calloc_tester(size_t count, size_t size)
{
	size_t i;
	size_t j;
	char *a;
	char *b;

	i = 0;
	j = 0;
	if(!(a = calloc(count, size)))
		j++;
	if(!(b = ft_calloc(count, size)))
		j++;
	printf("-------------------------------------------------------\n");
	printf("testing with count = %li and size = %li\n", count, size);
	printf("calloc:");
	while (i < size * count)
	{
		if (*a == '\0')
			printf("[0]");
		else
		{
			printf("%c", *a);
			j++;
		}
		i++;
		a++;
	}
	printf(" | ft_calloc:");
	a = a - i;
	i = 0;
	while (i < size * count)
	{
		if (*a != *b)
			j++;
		if (*b == '\0')
			printf("[0]");
		else
		{
			printf("%c", *b);
			j++;
		}
		i++;
		b++;
	}
	if (j == 0)
		printf ("         OK!\n");
	else
		printf("          KO\n");
}

void isalnum_tester(int a)
{
	int b;
	int c;

	b = isalnum(a);
	c = ft_isalnum(a);
	printf("-------------------------------------------------------\ntesting \"%i\"\n", a);
	printf("isalnum: %i | ", b);
	printf("ft_isalnum: %i", c);
	if (b > 0 && c >0)
		printf("        OK!\n");
	else if (b == 0 && c == 0)
		printf("        OK!\n");
	else
		printf("        KO\n");
}

void isalpha_tester(int a)
{
	int b;
	int c;

	b = isalpha(a);
	c = ft_isalpha(a);
	printf("-------------------------------------------------------\ntesting \"%i\"\n", a);
	printf("isalpha: %i | ", b);
	printf("ft_isalpha: %i", c);
	if (b > 0 && c >0)
		printf("        OK!\n");
	else if (b == 0 && c == 0)
		printf("        OK!\n");
	else
		printf("        KO\n");
}

void isascii_tester(int a)
{
	int b;
	int c;

	b = isascii(a);
	c = ft_isascii(a);
	printf("-------------------------------------------------------\ntesting \"%i\"\n", a);
	printf("isascii: %i | ", b);
	printf("ft_isascii: %i", c);
	if (b > 0 && c >0)
		printf("        OK!\n");
	else if (b == 0 && c == 0)
		printf("        OK!\n");
	else
		printf("        KO\n");
}

void isdigit_tester(int a)
{
	int b;
	int c;

	b = isdigit(a);
	c = ft_isdigit(a);
	printf("-------------------------------------------------------\ntesting \"%i\"\n", a);
	printf("isdigit: %i | ", b);
	printf("ft_isdigit: %i", c);
	if (b > 0 && c >0)
		printf("        OK!\n");
	else if (b == 0 && c == 0)
		printf("        OK!\n");
	else
		printf("        KO\n");
}
void	substr_tester(char const *s, unsigned int start, size_t len)
{
	char *s1;

	s1 = ft_substr(s, start, len);

	unsigned int count;
	char *pointer;

	count = 0;
	pointer = malloc(len + 1);
	while (count < len)
	{
		pointer[count] = s[count + start];
		count++;
	}
	pointer[len] = '\0';

	int a = ft_strncmp(pointer, s1, len);

	printf("-------------------------------------------------------\ntesting with start = \"%i\" and len = \"%li\"\n", start, len);
	printf("string: |%s|\n", s);
	printf("substring: |%s|\n", pointer);
	printf("ft_substr: |%s|", s1);
	if ( a == 0)
		printf("          OK\n");
	else
		printf("          KO\n");
}

void	isprint_tester(int a)
{
	int b;
	int c;

	b = isprint(a);
	c = ft_isprint(a);
	printf("-------------------------------------\ntesting \"%i\"\n", a);
	printf("isprint: %i | ", b);
	printf("ft_isprint: %i", c);
	if (b > 0 && c >0)
		printf("        OK!\n");
	else if (b == 0 && c == 0)
		printf("        OK!\n");
	else
		printf("        KO\n");
}

void	itoa_tester(int n)
{
	char	*b;

	b = ft_itoa(n);
	printf("-------------------------------------------\n");
	printf("Original: %i\n", n);
	printf("ft_itoa:  %s", b);
	if (atoi((const char *)b) == n)
		printf("            OK\n");
	else
		printf("            KO\n");
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

void memchr_tester(char *a, int c, int len)
{
	char	*pointer1;
	char	*pointer2;

	pointer1 = ft_memchr(a, c, len);
	pointer2 = memchr(a, c, len);
	printf("-----------------------------------------------------------\n");
	printf("string: %s | char: %c | len: %i\n", a, c, len);
	if (pointer1 != NULL && pointer2 != NULL)
	{
		printf("ft_memchr: %s\n", pointer1);
		printf("memchr: %s           ", pointer2);
	}
	else if (pointer1 == NULL && pointer2 == NULL)
	{
		printf("ft_memchr: (null)\n");
		printf("memchr: (null)                   OK!\n");
		return ;
	}
	else
		printf("Cenário string = %s\n       KO", a);
	if (ft_strncmp(pointer1, pointer2, ft_strlen(pointer2)) == 0)
		printf("OK!\n");
	else
		printf("KO!\n");
}

void	strjoin_tester(char const *s1, char const *s2)
{
	char *pointer;

	pointer = ft_strjoin(s1, s2);
	printf("-------------------------------------------------------\n");
	printf("first word: %s\n", s1);
	printf("second word: %s\n", s2);
	printf("result: %s\n", pointer);
}

void	strtrim_tester(char *a, char *b)
{
	char	*pointer;

	pointer = ft_strtrim(a, b);
	printf("-------------------------------------------------------\n");
	printf("string: %s\n", a);
	printf("set: %s\n", b);
	printf("%s\n", pointer);
}

void split_tester(char *b, char c)
{
	int i;
	char **teste;
	i = 0;
	teste = ft_split(b, c);
	printf("-----------------\n");
	printf("Frase teste: %s\n", b);
	while (teste[i])
	{
		printf("palavra %i: %s\n",i + 1, teste[i]);
		i++;
	}
	free(teste);
}


int	main(void)
{
	char t1[100];
	char t2[] = "testea";
	char t3[3];
	char t4[] = "carro";
	char t5[100];
	char t6[] = "teaste";
	printf("----------------------------------------------------------\n");
	printf("|              Part 1 - Libc Functions                   |\n");
	printf("----------------------------------------------------------\n");
	printf("\n////////////////////// ATOI ////////////////////\n");
	atoi_tester("0");
	atoi_tester("1");
	atoi_tester("10");
	atoi_tester("11");
	atoi_tester("-10");
	atoi_tester("+-10");
	atoi_tester("---------+10");
	atoi_tester("       --1");
	atoi_tester("       +-1");
	atoi_tester("        1");
	atoi_tester("");

	printf("\n////////////////////// BZERO ///////////////////\n");
	bzero_tester("", 6);
	bzero_tester("teste", 0);
	bzero_tester("teste", 1);
	bzero_tester("teste", 2);
	bzero_tester("teste", 3);
	bzero_tester("teste", 4);

	printf("\n////////////////////// STRLEN ///////////////////\n");
	strlen_tester("a");
	strlen_tester("1");
	strlen_tester("teste");
	strlen_tester("");
	strlen_tester("teste com espaços");

	printf("\n////////////////////// MEMCCPY ///////////////////\n");
	memccpy_tester(t1, t2, 'a', 3);
	memccpy_tester(t3, t4, 'a', 5);
	memccpy_tester(t5, t6, 't', 7);

	printf("\n////////////////////// MEMCHR ///////////////////\n");
	memchr_tester("fazendo testes variados", 'v', 20);
	memchr_tester("a", 'a', 1);
	memchr_tester("teste", 'v', 20);
	memchr_tester("fazendo testes variados", 'v', 20);
	memchr_tester("teste", 'v', 7);

	printf("\n////////////////////// ISALNUM ///////////////////\n");
	isalnum_tester(-1);
	isalnum_tester(0);
	isalnum_tester(' ');
	isalnum_tester('~');

	printf("\n////////////////////// ISALPHA ///////////////////\n");
	isalpha_tester(-1);
	isalpha_tester(0);
	isalpha_tester('a');
	isalpha_tester(10);
	isalpha_tester(' ');
	isalpha_tester('~');

	printf("\n////////////////////// ISASCII ///////////////////\n");
	isascii_tester(-1);
	isascii_tester(0);
	isascii_tester(1);
	isascii_tester(10);
	isascii_tester(' ');
	isascii_tester(128);

	printf("\n////////////////////// ISDIGIT ///////////////////\n");
	isdigit_tester(-1);
	isdigit_tester(0);
	isdigit_tester('a');
	isdigit_tester('9');
	isdigit_tester(' ');
	isdigit_tester('~');

	printf("\n////////////////////// ISPRINT ///////////////////\n");
	isprint_tester(1);
	isprint_tester(10);
	isprint_tester(32);
	isprint_tester(65);
	isprint_tester(127);

	printf("\n////////////////////// ITOA ///////////////////\n");
	itoa_tester(0);
	itoa_tester(1);
	itoa_tester(9);
	itoa_tester(10);
	itoa_tester(2147483647);
	itoa_tester(-1);
	itoa_tester(-9);
	itoa_tester(-42567);
	itoa_tester(-2147483648);

	printf("\n////////////////////// CALLOC ///////////////////\n");
	calloc_tester(1, sizeof(char));
	calloc_tester(2, sizeof(char));
	calloc_tester(1, sizeof(int));

	printf ("\n\n\n");
	printf("----------------------------------------------------------\n");
	printf("|              Part 2 - Additional Functions             |\n");
	printf("----------------------------------------------------------\n");

	printf("\n////////////////////// SUBSTR ///////////////////\n");
	substr_tester("teste de substr", 9, 6);
	substr_tester("teste de substr", 0, 12);
	substr_tester("teste de substr", 4, 3);
	substr_tester("teste de substr", 10, 3);

	printf("\n////////////////////// STRJOIN ///////////////////\n");
	strjoin_tester("42","sp");
	strjoin_tester("teste","");
	strjoin_tester("a","b");

	printf("\n////////////////////// STRTRIM ///////////////////\n");
	strtrim_tester("zXzXzXXXXbbbbbbbbtestezXbzbXzXbz", "zXb");
	strtrim_tester("AtesteA", "A");
	strtrim_tester("AteAsteA", "A");
	strtrim_tester("AtesteA", " ");
	strtrim_tester("AtesteA", "");

	printf("\n////////////////////// SPLIT ///////////////////\n");
	split_tester("lorem ipsum dolor sit amet, consectetur adipiscing elit. Sed non risus. Suspendisse", ' ');
	split_tester("   lorem   ipsum dolor     sit amet, consectetur   adipiscing elit. Sed non risus. Suspendisse   ", ' ');
	split_tester("      split       this for   me  !       ", ' ');
}
