/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_bzero.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsiqueir <rsiqueir@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/19 02:50:45 by rsiqueir          #+#    #+#             */
/*   Updated: 2021/05/19 03:11:40 by rsiqueir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/libft.h"

void bzero_tester(unsigned char *s, size_t n)
{
	char *a;
	void *b;
	int c;
	int d;

	c = ft_strlen(s);
	d = 0;
	ft_bzero(s, n);
	printf("-------------------------------------\ntesting \"%s\",%li\n", s, n);
	while (d < c)
	{
		printf("bzero: %c | ", s[d]);
		d++;
	}
	while (d < c)
	{
		printf("bzero: %c | ", s[d]);
		d++;
	}
	if (a == b)
		printf("          OK\n");
	else
		printf("          KO\n");
}

int main(void)
{
	ft_bzero("teste", 4);


}
