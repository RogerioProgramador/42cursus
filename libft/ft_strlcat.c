/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rogeriorslf <rogeriorslf@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/26 16:33:02 by rogeriorslf       #+#    #+#             */
/*   Updated: 2021/05/28 14:45:11 by rogeriorslf      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	k;
	size_t	l;

	i = ft_strlen(dst);
	j = ft_strlen(src);
	k = 0;
	l = i > dstsize;
	if (dstsize == 0)
		return (ft_strlen(src));
	if (dstsize < i)
		j += dstsize;
	else
		j += i;
	while (src[k] && i < (dstsize - 1))
	{
		dst[i] = src[k];
		i++;
		k++;
	}
	if (l == 0)
		dst[i] = '\0';
	return (j);
}
