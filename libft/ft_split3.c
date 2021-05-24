/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split3.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsiqueir <rsiqueir@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/24 10:17:33 by rsiqueir          #+#    #+#             */
/*   Updated: 2021/05/24 14:51:43 by rsiqueir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//Set the pointer to the next word
char	*pointfoward(char *s, char c, int i)
{
	if (i == 0)
		return (s);
	while (*s)
	{
		if (*s == c && *(s + 1) != c)
			return (s + 1);
		s++;
	}
	return (0);
}

//copy bytes from source to dest until the functions find c or source ends
char	*ft_nstrcpy(char *dest, char *src, char c)
{
	char	*dest2;

	dest2 = dest;
	while (*src && *src != c)
	{
		*dest++ = *src++;
	}
	*dest = '\0';
	dest = dest2;
	return (dest);
}

//return a 2d array with the substrings
char	**alloc(char *pointer, char c)
{
	char	**result;
	int		*counter;

	counter = ft_calloc(4, sizeof(int));
	while (pointer[counter[0]])
	{
		if (pointer[counter[0]] == c && pointer[counter[0] + 1] != c)
			counter[1]++;
		counter[0]++;
	}
	/*
	if (counter[0] == 0)
		return NULL;
	*/
	counter[1]++;
	result = (char **)malloc(counter[1] * sizeof(char *));
	if (!result)
	{
		int x;

		x = -1;
		while (++x < counter[1])
			free(result[x]);
		return (NULL);
	}
	free(counter);
	return (result);
}

char	**ft_split1(char const *s, char c)
{
	char	**dest;
	char	*source;
	int		*counter;

	counter = ft_calloc(4, sizeof(int));
	source = ft_strtrim((char *)s, &c);
	if (!source)
		return NULL;
	dest = alloc(source, c);
	if (!dest)
		return NULL;
	while (pointfoward(source, c, counter[2]) != 0)
	{
		source = pointfoward(source, c, counter[2]);
		counter[3] = 0;
		while (source[counter[3]] && source[counter[3]] != c)
			counter[3]++;
		dest[counter[2]] = ft_calloc(counter[3], sizeof(char));
		ft_nstrcpy(dest[counter[2]++], source, c);
	}
	free(counter);
	return (dest);
}


int main(void)
{
	int i;
	const char b[] =",";
	char **teste = ft_split1(b, ',');
	i = 0;
	if (teste == NULL)
		printf("teste\n");
	else
	{
		while (teste[i])
		{
			printf("%s\n", teste[i]);
			i++;
		}
	}
}
