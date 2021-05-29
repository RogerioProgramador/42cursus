/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_split.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rogeriorslf <rogeriorslf@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/24 18:12:22 by rsiqueir          #+#    #+#             */
/*   Updated: 2021/05/27 16:25:15 by rogeriorslf      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/libft.h"

void split_tester(char *b, char c)
{
	/*
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
	*/
	int i;
	char **teste;
	i = 0;
	teste = ft_split(b, c);
	printf("-----------------\n");
	while (teste[i])
	{
		printf("%s\n", teste[i]);
		i++;
	}
	free(teste);
}


int		main(void)
{

	split_tester("          ", ' ');
	split_tester("lorem ipsum dolor sit amet, consectetur adipiscing elit. Sed non risus. Suspendisse", ' ');
	split_tester("   lorem   ipsum dolor     sit amet, consectetur   adipiscing elit. Sed non risus. Suspendisse   ", ' ');
	split_tester("lorem ipsum dolor sit amet, consectetur adipiscing elit. Sed non risus. Suspendisse lectus tortor, dignissim sit amet, adipiscing nec, ultricies sed, dolor. Cras elementum ultricies diam. Maecenas ligula massa, varius a, semper congue, euismod non, mi.", 'i');
	split_tester("lorem ipsum dolor sit amet, consectetur adipiscing elit. Sed non risus. Suspendisse lectus tortor, dignissim sit amet, adipiscing nec, ultricies sed, dolor. Cras elementum ultricies diam. Maecenas ligula massa, varius a, semper congue, euismod non, mi.", 'z');
	split_tester("      split       this for   me  !       ", ' ');
}

