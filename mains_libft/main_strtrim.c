/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_strtrim.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rogeriorslf <rogeriorslf@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/20 18:58:31 by rsiqueir          #+#    #+#             */
/*   Updated: 2021/05/26 21:30:38 by rogeriorslf      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/libft.h"

void strtrim_tester(char *a, char *b)
{
	char	*pointer;

	pointer = ft_strtrim(a, b);
	printf("-------------------------------------------------------\n");
	printf("string: %s\n", a);
	printf("set: %s\n", b);
	printf("final: \n");
	printf("%s\n", pointer);
}


int	main(void)
{
	strtrim_tester("zXzXzXXXXbbbbbbbbtestezXbzbXzXbz", "zXb");
	strtrim_tester("lorem \n ipsum \t dolor \n sit \t amet", " ");
	strtrim_tester("AteAsteA", "A");
	strtrim_tester("AteAsteA", "A");
	strtrim_tester("AtesteA", "");
	strtrim_tester("      ", " ");
}
