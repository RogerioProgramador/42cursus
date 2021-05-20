/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_strjoin.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsiqueir <rsiqueir@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/20 20:35:32 by rsiqueir          #+#    #+#             */
/*   Updated: 2021/05/20 20:44:09 by rsiqueir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/libft.h"

void	strjoin_tester(char const *s1, char const *s2)
{
	char *pointer;

	pointer = ft_strjoin(s1, s2);
	printf("-------------------------------------------------------\n");
	printf("first word: %s\n", s1);
	printf("second word: %s\n", s2);
	printf("result: %s\n", pointer);
}

int	main(void)
{
	strjoin_tester("42","sp");
	strjoin_tester("teste","");
	strjoin_tester("a","b");
}