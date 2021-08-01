/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsiqueir <rsiqueir@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 15:07:51 by rsiqueir          #+#    #+#             */
/*   Updated: 2021/04/15 13:36:42 by rsiqueir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	char	*pointer_find;
	char	*pointer_str;
	int		loop;

	if (*to_find == '\0')
		return (str);
	pointer_find = to_find;
	pointer_str = str;
	loop = 1;
	while (loop)
	{
		if (*pointer_find == '\0')
			return ((char *)(pointer_str - (pointer_find - to_find)));
		if (*pointer_str == *pointer_find)
			pointer_find++;
		else
			pointer_find = to_find;
		if (*pointer_str == '\0')
			break ;
		pointer_str++;
	}
	return (0);
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int	main(void)
{
	char *str;
	char *to_find;
	char *buff;
	char *ft_buff;

	str = strcpy(calloc(11, sizeof(char)), "alo galera");
	to_find = strcpy(calloc(7, sizeof(char)), "galera");
	buff = strstr(str, to_find);
	ft_buff = ft_strstr(str, to_find);
	if (buff != ft_buff)
		printf("[1] KO, substrings don't match(expected:%s, got:%s)\n", buff, ft_buff);
	else
		printf("[1] OK. expected: %s result: %s\n", buff, ft_buff);
	str = strcpy(calloc(11, sizeof(char)), "alo galera");
	to_find = strcpy(calloc(7, sizeof(char)), "galerA");
	buff = strstr(str, to_find);
	ft_buff = ft_strstr(str, to_find);
	if (buff != ft_buff)
		printf("[2] KO, substrings don't match(expected:%s, got:%s)\n", buff, ft_buff);
	else
		printf("[2] OK. expected: %s result: %s\n", buff, ft_buff);
	str = strcpy(calloc(11, sizeof(char)), "alo galera");

	to_find = strcpy(calloc(1, sizeof(char)), "");
	buff = strstr(str, to_find);
	ft_buff = ft_strstr(str, to_find);
	if (buff != ft_buff)
		printf("[2] KO, substrings don't match(expected:%s, got:%s)\n", buff, ft_buff);
	else
		printf("[2] OK. expected: %s result: %s\n", buff, ft_buff);
	return (0);
}
