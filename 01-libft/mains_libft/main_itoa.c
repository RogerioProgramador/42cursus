/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_itoa.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsiqueir <rsiqueir@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/25 10:11:28 by rsiqueir          #+#    #+#             */
/*   Updated: 2021/05/25 12:41:50 by rsiqueir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/libft.h"

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

int	main(void)
{
	itoa_tester(0);
	itoa_tester(1);
	itoa_tester(9);
	itoa_tester(10);
	itoa_tester(2147483647);
	itoa_tester(-1);
	itoa_tester(-9);
	itoa_tester(-42567);
	itoa_tester(-2147483648);
}
