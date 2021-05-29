/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_substr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rogeriorslf <rogeriorslf@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/20 14:16:09 by rsiqueir          #+#    #+#             */
/*   Updated: 2021/05/28 11:13:38 by rogeriorslf      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/libft.h"

void	substr_tester(char const *s, unsigned int start, size_t len)
{
	char *s1;

	s1 = ft_substr(s, start, len);

	unsigned int count;
	char *pointer;

	count = 0;
	pointer = malloc(len + 1);
	while (count < len)
	{
		pointer[count] = s[count + start];
		count++;
	}
	pointer[len] = '\0';

	int a = ft_strncmp(pointer, s1, len);

	printf("-------------------------------------------------------\ntesting with start = \"%i\" and len = \"%li\"\n", start, len);
	printf("string: |%s|\n", s);
	printf("substring: |%s|\n", pointer);
	printf("ft_substr: |%s|", s1);
	if ( a == 0)
		printf("          OK\n");
	else
		printf("          KO\n");
}


int main(void)
{
	substr_tester("teste de substr", 9, 6);
	substr_tester("teste de substr", 0, 12);
	substr_tester("teste de substr", 4, 3);	
	char *teste = ft_substr("tripouille", 1, 1);
	printf("________________OLHA AQUI____________________\n");
	printf("|%s|\n", teste);
	printf("%i\n", ft_strncmp(teste, "r", ft_strlen(teste)));
	printf("____________________________________________\n");
}
