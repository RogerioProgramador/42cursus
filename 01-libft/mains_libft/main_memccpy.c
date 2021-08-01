/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_memccpy.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsiqueir <rsiqueir@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/21 12:48:17 by rsiqueir          #+#    #+#             */
/*   Updated: 2021/05/21 17:34:49 by rsiqueir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/libft.h"
#include <string.h>

void	memccpy_tester(char *dst, char *src, int c, size_t n)
{
	char *dup1;
	char *dup2;
	int a;

	dup1 = ft_strdup(dst);
	dup2 = ft_strdup(src);

	memccpy(dup1, dup2, 'z', n);
	printf("%s\n", dup1);
	ft_memccpy(dst, src, 'z', n);
	printf("%s", dst);

	a = ft_strncmp(dup1, dst, n);
	if (a != 0)
		printf("        KO\n");
	else
		printf("        OK\n");
}

int	main(void)
{
	char t1[100];
	char t2[] = "testea";
	memccpy_tester(t1, t2, 'a', 3);
	char t3[3];
	char t4[] = "carro";
	memccpy_tester(t3, t4, 'a', 5);
	char t5[100];
	char t6[] = "teaste";
	//memccpy_tester(t5, t6, 'a', 6);
}
