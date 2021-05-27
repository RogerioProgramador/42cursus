#include "libft.h"

char	**alloc(char *s, char c)
{
	char **words;
	int nb;

	nb = 0;
	while (*s)
	{
		if (*s != c)
		{
			while (*s != c && *s)
				s++;
			nb++;
		}
		s++;
	}
	words = (char **)ft_calloc(nb + 1, sizeof(char *));
	if (!words)
		return (NULL);
	return (words);
}

void	ft_nstrcpy(char *dst, char *src, char c)
{
	while (*src != c && *src)
		*dst++ = *src++;
}

void	free_all(char **s)
{
	int i;

	i = 0;
	while (s[i])
	{
		free(s[i]);
		i++;
	}
	free(s);
}

void	fill_array(char **splitted,char *s,char c)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (*s)
	{
		if (*s != c)
		{
			while (*s != c && *s)
			{
				i++;
				s++;
			}
			splitted[j] = ft_calloc((i + 1), sizeof(char));
			if (!splitted[j])
			{
				free_all(splitted);
				splitted = NULL;
				return ;
			}
			ft_nstrcpy(splitted[j++], (s - i), c);
			i = 0;
		}
		if (*s)
			s++;
	}
}

char	**ft_split(const char *s, char c)
{
	char **splitted;
	char *pointer;

	pointer = (char *)s;
	splitted = alloc(pointer, c);
	fill_array(splitted, pointer, c);
	return (splitted);
}

