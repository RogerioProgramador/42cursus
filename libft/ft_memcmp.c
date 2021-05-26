/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rogeriorslf <rogeriorslf@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/18 13:13:45 by rsiqueir          #+#    #+#             */
/*   Updated: 2021/05/26 14:36:06 by rogeriorslf      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	a;

	a = 0;
	if (n == 0)
		return (0);
	while (((unsigned char *)s1)[a] == ((unsigned char *)s2)[a] && a < n)
		a++;
	if (a == n)
		a--;
	return (((unsigned char *)s1)[a] - ((unsigned char *)s2)[a]);
}
