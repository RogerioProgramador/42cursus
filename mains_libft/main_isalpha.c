/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_isalpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsiqueir <rsiqueir@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/20 10:22:42 by rsiqueir          #+#    #+#             */
/*   Updated: 2021/05/20 11:04:34 by rsiqueir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/libft.h"
#include <ctype.h>

void isalpha_tester(int a)
{
	int b;
	int c;

	b = isalpha(a);
	c = ft_isalpha(a);
	printf("-------------------------------------\ntesting \"%i\"\n", a);
	printf("isalpha: %i | ", b);
	printf("ft_isalpha: %i", c);
	if (b > 0 && c >0)
		printf("        OK\n");
	else if (b == 0 && c == 0)
		printf("        OK\n");
	else
		printf("        KO\n");
}

int main (void)
{
	isalpha_tester(-1);
	isalpha_tester(0);
	isalpha_tester('a');
	isalpha_tester(10);
	isalpha_tester(' ');
	isalpha_tester('~');
}