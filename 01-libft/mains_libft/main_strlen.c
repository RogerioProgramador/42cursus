/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_strlen.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsiqueir <rsiqueir@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/19 02:50:53 by rsiqueir          #+#    #+#             */
/*   Updated: 2021/05/19 02:50:54 by rsiqueir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/libft.h"

void strlen_tester(char *s)
{
	int a;
	int b;

	a = strlen(s);
	b = ft_strlen(s);
	printf("------------------------\ntesting \"%s\"\n", s);
	printf("strlen: %i | ", a);
	printf("ft_strlen: %i", b);
	if (a == b)
		printf("          OK\n");
	else
		printf("          KO\n");

}


int main(void)
{
	strlen_tester("a");
	strlen_tester("1");
	strlen_tester("teste");
	strlen_tester("");
	strlen_tester("teste com espaços");
}