/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsiqueir <rsiqueir@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/08 11:39:54 by rsiqueir          #+#    #+#             */
/*   Updated: 2021/04/10 15:15:38 by rsiqueir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	char *str2;

	str2 = str;
	while (*str)
	{
		if (*str >= 65 && *str <= 90)
		{
			*str += 32;
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
	ft_strlowcase(str1);
	ft_strlowcase(str2);
	ft_strlowcase(str3);
	printf("str1_low: %s\n", str1);
	printf("str2_low: %s\n", str2);
	printf("str3_low: %s\n", str3);
	return (0);
}