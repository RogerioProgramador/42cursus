/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_memchr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rogeriorslf <rogeriorslf@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/09 02:37:36 by rogeriorslf       #+#    #+#             */
/*   Updated: 2021/06/09 03:04:08 by rogeriorslf      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/libft.h"
#include <string.h>
#include <stdio.h>

void memchr_tester(char *a, int c, int len)
{
	char	*pointer1;
	char	*pointer2;

	pointer1 = ft_memchr(a, c, len);
	pointer2 = memchr(a, c, len);
	printf("-----------------------------------------------------------\n");
	printf("string: %s | char: %c | len: %i\n", a, c, len);
	if (pointer1 != NULL && pointer2 != NULL)
	{
		printf("ft_memchr: %s\n", pointer1);
		printf("memchr: %s           ", pointer2);
	}
	else if (pointer1 == NULL && pointer2 == NULL)
	{
		printf("ft_memchr: (null)\n");
		printf("memchr: (null)                   OK!\n");
		return ;
	}
	else
		printf("Cenário string = %s\n       KO", a);
	if (ft_strncmp(pointer1, pointer2, ft_strlen(pointer2)) == 0)
		printf("OK!\n");
	else
		printf("KO!\n");
}


int	main(void)
{
	memchr_tester("fazendo testes variados", 'v', 20);
	memchr_tester("a", 'a', 1);
	memchr_tester("teste", 'v', 20);
	memchr_tester("fazendo testes variados", 'v', 20);
	memchr_tester("teste", 'v', 7);
}

