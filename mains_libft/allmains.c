/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   allmains.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsiqueir <rsiqueir@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/19 02:50:41 by rsiqueir          #+#    #+#             */
/*   Updated: 2021/05/20 21:22:34 by rsiqueir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/libft.h"
#include <ctype.h>

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

void strtrim_tester(char *a, char *b)
{
	char	*pointer;

	pointer = ft_strtrim(a, b);
	printf("-------------------------------------------------------\n");
	printf("string: %s\n", a);
	printf("set: %s\n", b);
	printf("%s\n", pointer);
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

int	main(void)
{
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

	printf("\n////////////////////// CALLOC ///////////////////\n");
	calloc_tester(1, sizeof(char));
	calloc_tester(2, sizeof(char));
	calloc_tester(1, sizeof(int));

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
}