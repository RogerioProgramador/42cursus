/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_isdigit.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsiqueir <rsiqueir@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/20 10:28:41 by rsiqueir          #+#    #+#             */
/*   Updated: 2021/05/20 10:29:43 by rsiqueir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/libft.h"
#include <ctype.h>

void isdigit_tester(int a)
{
	int b;
	int c;

	b = isdigit(a);
	c = ft_isdigit(a);
	printf("-------------------------------------\ntesting \"%i\"\n", a);
	printf("isdigit: %i | ", b);
	printf("ft_isdigit: %i", c);
	if (b > 0 && c >0)
		printf("        OK\n");
	else if (b == 0 && c == 0)
		printf("        OK\n");
	else
		printf("        KO\n");
}


int main (void)
{
	isdigit_tester(-1);
	isdigit_tester(0);
	isdigit_tester('a');
	isdigit_tester('9');
	isdigit_tester(' ');
	isdigit_tester('~');
}