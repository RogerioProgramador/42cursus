/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsiqueir <rsiqueir@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/10 02:45:48 by rsiqueir          #+#    #+#             */
/*   Updated: 2021/04/10 15:16:25 by rsiqueir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int				ft_strlen(char *str)
{
	int size;

	size = 0;
	while (*str != '\0')
	{
		size++;
		str++;
	}
	return (size);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	char*src2;

	src2 = src;
	while (size > 0)
	{
		*dest++ = *src++;
		size--;
		if (size == 1)
		{
			*dest = '\0';
			size--;
		}
	}
	src = src2;
	return (ft_strlen(src));
}

#include <stdio.h>
#include <stdlib.h>

int				main(void)
{
	int 	src_size;
	char 	*src;
	char 	*dest;

	src = calloc(11, sizeof(char));
	dest = calloc(8, sizeof(char));
	src = "alo galera";
	src_size = ft_strlcpy(dest, src, 8);
	printf("src: %s\n", src);
	printf("dest: %s\n", dest);
	printf("src_size: %d\n", src_size);
	return(0);
}