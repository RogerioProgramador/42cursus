/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsiqueir <rsiqueir@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/06 16:15:41 by rsiqueir          #+#    #+#             */
/*   Updated: 2021/04/10 03:00:25 by rsiqueir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strcpy(char *dest, char *src)
{
	char *dest2;

	dest2 = dest;
	while (*src)
	{
		*dest++ = *src++;
	}
	*dest = '\0';
	dest = dest2;
	return (dest);
}
