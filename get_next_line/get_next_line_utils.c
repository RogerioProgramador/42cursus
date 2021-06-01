/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rogeriorslf <rogeriorslf@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/31 14:18:54 by rogeriorslf       #+#    #+#             */
/*   Updated: 2021/05/31 17:10:10 by rogeriorslf      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"


static char	*ft_strcpy(char *dest, char *src)
{
	char	*dest2;

	dest2 = dest;
	while (*src)
	{
		*dest++ = *src++;
	}
	*dest = '\0';
	dest = dest2;
	return (dest);
}

char	*ft_strdup(char *s1)
{
	char	*dest;

	dest = malloc(ft_strlen(s1) + 1);
	if (!(dest))
		return (NULL);
	if (dest == 0)
		return (0);
	ft_strcpy(dest, s1);
	return (dest);
}

void	ft_bzero(void *s, size_t n)
{
	size_t	a;

	a = 0;
	while (a < n)
	{
		((unsigned char *)s)[a] = '\0';
		a++;
	}
}

size_t	ft_strlen(const char *s)
{
	size_t	size;

	size = 0;
	while (s[size])
		size++;
	return (size);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		a;
	int		b;
	char	*pointer;

	a = 0;
	b = 0;
	if (s1 == NULL || s2 == NULL)
		return (NULL);
	pointer = malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (!(pointer))
		return (NULL);
	while (s1[a])
	{
		pointer[a] = s1[a];
		a++;
	}
	while (s2[b])
	{
		pointer[a] = s2[b];
		b++;
		a++;
	}
	pointer[a] = '\0';
	return (pointer);
}

