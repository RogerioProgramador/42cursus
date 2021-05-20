/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_isascii.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsiqueir <rsiqueir@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/20 10:22:36 by rsiqueir          #+#    #+#             */
/*   Updated: 2021/05/20 10:28:06 by rsiqueir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/libft.h"
#include <ctype.h>

void isascii_tester(int a)
{
	int b;
	int c;

	b = isascii(a);
	c = ft_isascii(a);
	printf("-------------------------------------\ntesting \"%i\"\n", a);
	printf("isascii: %i | ", b);
	printf("ft_isascii: %i", c);
	if (b > 0 && c >0)
		printf("        OK\n");
	else if (b == 0 && c == 0)
		printf("        OK\n");
	else
		printf("        KO\n");
}


int main (void)
{
	isascii_tester(-1);
	isascii_tester(0);
	isascii_tester(1);
	isascii_tester(10);
	isascii_tester(' ');
	isascii_tester(128);
}