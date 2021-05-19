/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsiqueir <rsiqueir@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/18 13:13:45 by rsiqueir          #+#    #+#             */
/*   Updated: 2021/05/18 13:18:09 by rsiqueir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	a;

	a = 0;
	while (((unsigned char *)s1)[a] == ((unsigned char *)s2)[a] && n > 0)
	{
		a++;
		n--;
	}
	return (((unsigned char *)s1)[a] - ((unsigned char *)s2)[a]);
}
