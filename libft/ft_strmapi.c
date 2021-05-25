/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsiqueir <rsiqueir@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/25 10:59:12 by rsiqueir          #+#    #+#             */
/*   Updated: 2021/05/25 11:18:42 by rsiqueir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*pointer;
	int		i;

	if (s == NULL || f == NULL)
		return (NULL);
	pointer = malloc(ft_strlen(s) + 1);
	pointer[strlen(s)] = 0;
	i = 0;
	while (s[i])
	{
		pointer[i] = f(i, s[i]);
		i++;
	}
	return (pointer);
}
