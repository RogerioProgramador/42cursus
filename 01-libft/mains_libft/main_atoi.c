/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_atoi.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rogeriorslf <rogeriorslf@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/19 02:50:37 by rsiqueir          #+#    #+#             */
/*   Updated: 2021/05/26 21:09:14 by rogeriorslf      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/libft.h"

void	atoi_tester(char *s)
{
	int	a;
	int	b;

	a = atoi(s);
	b = ft_atoi(s);
	printf("-------------------------------------\ntesting \"%s\"\n", s);
	printf("atoi: %i | ", a);
	printf("ft_atoi: %i", b);
	if (a == b)
		printf("          OK\n");
	else
		printf("          KO\n");
}

int		main(void)
{
	atoi_tester("0");
	atoi_tester("1");
	atoi_tester("10");
	atoi_tester("11");
	atoi_tester("-10");
	atoi_tester("+548");
	atoi_tester("---------+10");
	atoi_tester("       --1");
	atoi_tester("       +-1");
	atoi_tester("        1");
	atoi_tester("");
}
