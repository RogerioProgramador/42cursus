/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_split.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsiqueir <rsiqueir@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/24 18:12:22 by rsiqueir          #+#    #+#             */
/*   Updated: 2021/05/25 19:13:35 by rsiqueir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/libft.h"

void split_tester(char *b, char c)
{
	int i;
	char **teste;

	i = 0;
	teste = ft_split(b, c);
	printf("------------------------------------------------------\n");
	printf("Original string: %s\nDelimiter: '%c'\n", b, c);
	printf("Result: ");
	if (teste == NULL)
		printf("Nulo\n");
	else
	{
		printf("|");
		while (teste[i])
		{
			printf("%s|", teste[i]);
			i++;
		}
		printf("\n");
	}
	free(teste);
}

int		main(void)
{
	split_tester(",,,teste,,,testando,,,", ',');
	split_tester("  ", ' ');//entregar nulo
	split_tester(",,,teste,,,testando,,,", ' ');//ok
	split_tester("   Testandozfunção split   ", 'z');
	split_tester("   Testando função split   ", ' ');
	split_tester("   Testando função split   ", ' ');
}

