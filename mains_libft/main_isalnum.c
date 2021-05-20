/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_isalnum.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsiqueir <rsiqueir@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/20 02:27:02 by rsiqueir          #+#    #+#             */
/*   Updated: 2021/05/20 02:58:42 by rsiqueir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/libft.h"
#include <ctype.h>

void isalnum_tester(int a)
{
	int b;
	int c;

	b = isalnum(a);
	c = ft_isalnum(a);
	printf("-------------------------------------\ntesting \"%i\"\n", a);
	printf("isalnum: %i | ", b);
	printf("ft_isalnum: %i", c);
	if (b > 0 && c >0)
		printf("        OK\n");
	else if (b == 0 && c == 0)
		printf("        OK\n");
	else
		printf("        KO\n");
}


int main (void)
{
	isalnum_tester(-1);
	isalnum_tester(0);
	isalnum_tester(1);
	isalnum_tester(10);
	isalnum_tester(' ');
	isalnum_tester('~');
}