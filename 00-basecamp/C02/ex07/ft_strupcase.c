/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsiqueir <rsiqueir@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/08 11:38:20 by rsiqueir          #+#    #+#             */
/*   Updated: 2021/04/10 15:14:00 by rsiqueir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	char*str2;

	str2 = str;
	while (*str)
	{
		if (*str >= 97 && *str <= 122)
		{
			*str -= 32;
			str++;
		}
		else
		{
			str++;
		}
	}
	str = str2;
	return (str);
}

#include <stdio.h>
#include <stdlib.h>

int	main(void)
{
	char str1[] = "abcdefghi";
	char str2[] = "AbcDefGhI";
	char str3[] = "ABCDEFGHI";

	printf("str1: %s\n", str1);
	printf("str2: %s\n", str2);
	printf("str3: %s\n", str3);
	ft_strupcase(str1);
	ft_strupcase(str2);
	ft_strupcase(str3);
	printf("str1: %s\n", str1);
	printf("str2: %s\n", str2);
	printf("str3: %s\n", str3);
	return (0);
}