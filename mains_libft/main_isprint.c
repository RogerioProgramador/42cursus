/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_isprint.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsiqueir <rsiqueir@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/21 12:40:55 by rsiqueir          #+#    #+#             */
/*   Updated: 2021/05/21 12:46:17 by rsiqueir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/libft.h"
#include <ctype.h>

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

int	main(void)
{
	isprint_tester(1);
	isprint_tester(10);
	isprint_tester(32);
	isprint_tester(65);
	isprint_tester(127);
}