/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsiqueir <rsiqueir@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/15 19:32:02 by rsiqueir          #+#    #+#             */
/*   Updated: 2021/04/16 23:55:35 by rsiqueir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

char	*ft_strcat(char *dest, char *src)
{
	int a;
	int j;

	a = 0;
	j = 0;
	while (dest[a])
		a++;
	while (src[j])
	{
		dest[a] = src[j];
		a++;
		j++;
	}
	dest[a] = '\0';
	return (dest);
}

int		ft_strlen(char *str)
{
	int size;

	size = 0;
	while (*str)
	{
		size++;
		str++;
	}
	return (size);
}

int		ft_ptrlength(int a, int b, int size, char **strs)
{
	int x;

	x = size;
	a = 0;
	while (a < size)
	{
		x = x + ft_strlen(strs[a]);
		a++;
	}
	x = x + (size - 1) * b; 
	a = 0;
	return (x);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*tab;
	int		a;
	int		b;

	a = 0;
	b = ft_strlen(sep);
	if (size == 0)
		return (0);
	if (!(tab = malloc(ft_ptrlength(a, b, size, strs))))
		return (0);
	while (size > 0)
	{
		ft_strcat(tab, strs[a]);
		if (size != 1)
			ft_strcat(tab, sep);
		a++;
		size--;
	}
	return (tab);
}
