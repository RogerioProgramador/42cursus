/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsiqueir <rsiqueir@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/20 15:19:54 by rsiqueir          #+#    #+#             */
/*   Updated: 2021/05/20 21:00:14 by rsiqueir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	countfirstpattern(char *s1, char *set)
{
	int	a;
	int	b;
	int	count;

	a = 0;
	count = 0;
	while (s1[a])
	{
		b = 0;
		while (set[b])
		{
			if (s1[a] != set[b])
				b++;
			else if (s1[a] == set[b])
			{
				count++;
				break ;
			}
			if (set[b] == '\0')
				return (count);
		}
		a++;
	}
	return (count);
}

static int	countlastpattern(char *s1, char *set)
{
	int	a;
	int	b;
	int	count;

	a = ft_strlen(s1) - 1;
	count = 0;
	while (a > 0)
	{
		b = 0;
		while (set[b])
		{
			if (s1[a] != set[b])
				b++;
			else if (s1[a] == set[b])
			{
				count++;
				break ;
			}
			if (set[b] == '\0')
				return (count);
		}
		a--;
	}
	return (count);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		a;
	int		b;
	int		c;
	char	*pointer;

	a = countfirstpattern((char *)s1, (char *)set);
	b = countlastpattern((char *)s1, (char *)set);
	pointer = malloc(ft_strlen(s1) + 1 - a - b);
	if (!(pointer))
		return (NULL);
	c = 0;
	b = ft_strlen(s1) + 1 - a - b;
	while (b > 1)
	{
		pointer[c] = s1[a + c];
		c++;
		b--;
	}
	pointer[c] = '\0';
	return (pointer);
}
