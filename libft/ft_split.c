/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rogeriorslf <rogeriorslf@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/26 15:12:15 by rogeriorslf       #+#    #+#             */
/*   Updated: 2021/05/26 15:12:17 by rogeriorslf      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	**alloc(char *pointer, char delimiter)
{
	char	**array;
	int		count;

	count = 0;
	while (*pointer)
	{
		if (*pointer != delimiter)
		{
			while (*pointer != delimiter && *pointer)
				pointer++;
			count++;
		}
		pointer++;
	}
	array = (char **)malloc((count + 1) * sizeof(char));
	if (!array)
		return (NULL);
	array[count] = 0;
	return (array);
}

static char	*ft_nstrcpy(char *dest, char *src, char c)
{
	char	*dest2;

	dest2 = dest;
	while (*src && *src != c)
		*dest++ = *src++;
	dest = dest2;
	return (dest);
}

char	**fill_array(char **splitted, char *pointer, char c)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (*pointer)
	{
		if (*pointer != c)
		{
			while (*pointer != c && *pointer)
			{
				pointer++;
				i++;
			}
			splitted[j] = ft_calloc(i + 1, sizeof(char));
			ft_nstrcpy(splitted[j], (pointer - i), c);
			i = 0;
			j++;
		}
		if (*pointer)
			pointer++;
	}
	return (splitted);
}

char	**ft_split(char const *s, char c)
{
	char	*pointer;
	char	**splitted;

	pointer = (char *)s;
	splitted = alloc(pointer, c);
	if (splitted == NULL)
		return (NULL);
	splitted = fill_array(splitted, pointer, c);
	return (splitted);
}
