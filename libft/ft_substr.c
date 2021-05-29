/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rogeriorslf <rogeriorslf@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/20 13:12:56 by rsiqueir          #+#    #+#             */
/*   Updated: 2021/05/28 12:16:16 by rogeriorslf      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int	count;
	char			*pointer;

	count = 0;
	if (s == NULL)
		return (NULL);
	if (start > ft_strlen(s))
	{
		pointer = ft_calloc(sizeof(char), 1);
		if (!pointer)
			return (NULL);
		return (pointer);
	}
	pointer = malloc(len + 1);
	if (!pointer)
		return (NULL);
	while (count < len)
	{
		pointer[count] = s[count + start];
		count++;
	}
	pointer[len] = '\0';
	return (pointer);
}
