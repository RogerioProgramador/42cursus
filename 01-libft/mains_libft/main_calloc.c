/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_calloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsiqueir <rsiqueir@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/19 18:31:41 by rsiqueir          #+#    #+#             */
/*   Updated: 2021/05/22 21:30:46 by rsiqueir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/libft.h"

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
		printf ("         OK\n");
	else
		printf("          KO\n");
}

int main(void)
{
	calloc_tester(9, sizeof(char));
	calloc_tester(2, sizeof(char));
	calloc_tester(1, sizeof(int));
}