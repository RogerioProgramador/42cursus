/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rogeriorslf <rogeriorslf@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/18 13:14:12 by rsiqueir          #+#    #+#             */
/*   Updated: 2021/05/26 14:43:43 by rogeriorslf      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t i;

	i = 0;
	while (dst[i])
		i++;
	while (src[i] && i < (dstsize - 1))
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (i);
}

int	main(void)
{
	char dst[11] = {'t','e','s','t','e','\0','\0','\0','\0','\0','\0'};
	char src[6] = {'c','a','r','r','o','\0'};
	int i = ft_strlcat(dst,src, 11);
	printf("%i %s\n", i, dst);
}
/*
Quando eu não concateno, o dst[i] ='\0'; não ocorre.
Concatena o que dá e coloca 0.
*/