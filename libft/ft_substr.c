/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsiqueir <rsiqueir@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/20 13:12:56 by rsiqueir          #+#    #+#             */
/*   Updated: 2021/05/20 15:19:16 by rsiqueir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int	count;
	char			*pointer;

	count = 0;
	pointer = malloc(len + 1);
	if (pointer == NULL)
		return (NULL);
	while (count < len)
	{
		pointer[count] = s[count + start];
		count++;
	}
	pointer[len] = '\0';
	return (pointer);
}
