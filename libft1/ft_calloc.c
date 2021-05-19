/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsiqueir <rsiqueir@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/18 13:13:11 by rsiqueir          #+#    #+#             */
/*   Updated: 2021/05/18 13:13:12 by rsiqueir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char	*calloc1;
	size_t	a;

	calloc1 = malloc(count * size);
	while (calloc1[a])
	{
		calloc1[a] = 0;
		a++;
	}
	return (calloc1);
}
