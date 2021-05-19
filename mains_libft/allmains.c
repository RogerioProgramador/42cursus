/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   allmains.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsiqueir <rsiqueir@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/19 02:50:41 by rsiqueir          #+#    #+#             */
/*   Updated: 2021/05/19 02:50:42 by rsiqueir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/libft.h"

void atoi_tester(char *s)
{
	int a;
	int b;

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

void strlen_tester(char *s)
{
	int a;
	int b;

	a = strlen(s);
	b = ft_strlen(s);
	printf("-------------------------------------\ntesting \"%s\"\n", s);
	printf("strlen: %i | ", a);
	printf("ft_strlen: %i", b);
	if (a == b)
		printf("          OK\n");
	else
		printf("          KO\n");

}


int main(void)
{
    printf("\n///////////////// ATOI ////////////////\n");
	atoi_tester("0");
	atoi_tester("1");
	atoi_tester("10");
	atoi_tester("11");
	atoi_tester("-10");
	atoi_tester("+-10");
	atoi_tester("---------+10");
	atoi_tester("       --1");
	atoi_tester("       +-1");
	atoi_tester("        1");
	atoi_tester("");

    printf("\n///////////////// STRLEN ///////////////\n");
    strlen_tester("a");
	strlen_tester("1");
	strlen_tester("teste");
	strlen_tester("");
	strlen_tester("teste com espaços");
}