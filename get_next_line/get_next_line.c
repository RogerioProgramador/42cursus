/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rogeriorslf <rogeriorslf@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/31 14:01:05 by rogeriorslf       #+#    #+#             */
/*   Updated: 2021/05/31 17:27:02 by rogeriorslf      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

//int get_next_line(int fd, char **line)c *

void	ft_nstrcpy(char *dst, char *src, char c)
{
	while (*src != c && *src)
		*dst++ = *src++;
}

void remove_quebra (char *b)
{
	int i;

	i = 0;
	while (b[i])
	{
		if (b[i] == '\n')
			b[i] = 0;
		i++;
	}
}


int main(void)
{
	int i;
	char *a ="teste";
	char *b;
	i = 0;
	char buffer[BUFFER_SIZE];
	ft_bzero(buffer, BUFFER_SIZE);
	while (i < 3)
	{
		read(0, &buffer, BUFFER_SIZE);
		b = calloc(ft_strlen(buffer), sizeof(char));
		ft_nstrcpy(b, buffer, 0);
		remove_quebra(b);
		a = ft_strjoin(a, b);
		i++;
	}
	printf("|%s|\n", a);
}
