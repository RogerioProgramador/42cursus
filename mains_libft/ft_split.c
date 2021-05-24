/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsiqueir <rsiqueir@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/23 16:00:54 by rsiqueir          #+#    #+#             */
/*   Updated: 2021/05/24 12:49:02 by rsiqueir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	words(const char *s, char c)
{
	int	a;
	int b;

	a = 0;
	b = 0;
	while (s[a])
	{
		if (s[a] == c && s[a + 1] != c)
			b++;
		a++;
	}
	b++;
	return (b);
}

static int	*letters_per_word(char *ptr, char a, int b)
{
	int	*counter;
	int	x;
	int z;

	z = 0;
	x = 0;
	counter = ft_calloc(b, sizeof(int));
	while (ptr[z])
	{
		counter[x]++;
		z++;
		if (ptr[z] == a)
		{
			while (ptr[z] == a)
				z++;
			x++;
		}
	}
	return (counter);
}

char	*ft_nstrcpy(char *dest, char *src, char c)
{
	char *dest2;

	dest2 = dest;
	while (*src && *src != c)
	{
		*dest++ = *src++;
	}
	*dest = '\0';
	dest = dest2;
	return (dest);
}

char *pointfoward(char *s, char c)
{
	while (*s)
	{
		if (*s == c && *(s + 1) != c)
			return(s + 1);
		s++;
	}
	return (s);
}

char	**ft_split(char const *s, char c)
{
	char	**result;
	char	*pointer;
	int		count[5];
	int		*lperword;

	pointer = ft_strtrim(s, &c);
	count[0] = words(pointer, c);
	count[1] = -1;
	if(!(pointer))
		return (NULL);
	lperword = letters_per_word(pointer, c, count[0]);
	result = (char**)malloc((count[0] + 1) *sizeof(char *));
	if (!result)
		return (NULL);
	result[count[0]] = NULL;
	while (++count[1] < (count[0]))
		result[count[1]] = ft_calloc((lperword[count[1]] + 1), sizeof(char));
	count[1] = -1;
	while (++count[1] < (count[0]))
	{
		if (count[1] > 0)
			pointer = pointfoward(pointer, c);
		result[count[1]] = ft_nstrcpy(result[count[1]], pointer, c);
	}
	return (result);
}

int main(void)
{
	int i;
	const char b[] ="teste,,,,caracteres";
	char **teste = ft_split(b, ',');
	i = 0;
	if (teste == NULL)
		printf("(null)\n");
	else
	{
		while (teste[i])
		{
			printf("%s\n", teste[i]);
			i++;
		}
	}
}

//tentar tirar ncalloc do jogo, usar calloc e, usar uma função que ignora zeros.
//resolver a ft_split até as 08:00.
//refatorar o código.
//nfunções acho que passei do limtie? conferir amanha.
