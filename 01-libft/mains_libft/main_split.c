/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_split.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rogeriorslf <rogeriorslf@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/24 18:12:22 by rsiqueir          #+#    #+#             */
/*   Updated: 2021/06/09 03:09:43 by rogeriorslf      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/libft.h"
#include <stdio.h>

void split_tester(char *b, char c)
{
	int i;
	char **teste;
	i = 0;
	teste = ft_split(b, c);
	printf("-----------------\n");
	printf("Frase teste: %s\n", b);
	while (teste[i])
	{
		printf("palavra %i: %s\n",i + 1, teste[i]);
		i++;
	}
	free(teste);
}

int		main(void)
{
	split_tester("lorem ipsum dolor sit amet, consectetur adipiscing elit. Sed non risus. Suspendisse", ' ');
	split_tester("   lorem   ipsum dolor     sit amet, consectetur   adipiscing elit. Sed non risus. Suspendisse   ", ' ');
	split_tester("      split       this for   me  !       ", ' ');
}

