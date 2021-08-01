/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_bzero.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsiqueir <rsiqueir@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/19 02:50:45 by rsiqueir          #+#    #+#             */
/*   Updated: 2021/05/19 18:26:22 by rsiqueir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/libft.h"

void bzero_tester(char *s, size_t n)
{
	int a;
	int b;
	int c;
	char *t;
	char *u;

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
		printf("          OK");
	else
		printf("          KO");
	printf("\n");
}

int main(void)
{
	bzero_tester("", 6);
	bzero_tester("teste", 0);
	bzero_tester("teste", 1);
	bzero_tester("teste", 2);
	bzero_tester("teste", 3);
	bzero_tester("teste", 4);
}
