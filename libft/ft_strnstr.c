/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsiqueir <rsiqueir@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/18 13:14:30 by rsiqueir          #+#    #+#             */
/*   Updated: 2021/05/18 13:14:31 by rsiqueir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	a;
	size_t	b;

	a = 0;
	b = 0;
	if (ft_strlen(needle) == 0)
		return ((char *)haystack);
	while (a < len && haystack[a])
	{
		if (haystack[a] == needle[b])
		{
			while (haystack[a] == needle[b])
			{
				a++;
				b++;
				if (needle[b] == '\0')
					return (&((char *)haystack)[a - b]);
			}
			b = 0;
		}
		a++;
	}
	return (0);
}
