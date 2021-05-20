/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_strtrim.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsiqueir <rsiqueir@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/20 18:58:31 by rsiqueir          #+#    #+#             */
/*   Updated: 2021/05/20 19:35:35 by rsiqueir         ###   ########.fr       */
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
	printf("%s\n", pointer);
}


int	main(void)
{
	strtrim_tester("zXzXzXXXXbbbbbbbbtestezXbzbXzXbz", "zXb");
	strtrim_tester("AtesteA", "A");
	strtrim_tester("AteAsteA", "A");
	strtrim_tester("AtesteA", " ");
	strtrim_tester("AtesteA", "");
}
