/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsiqueir <rsiqueir@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/18 13:13:11 by rsiqueir          #+#    #+#             */
/*   Updated: 2021/05/19 19:36:19 by rsiqueir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char	*calloc1;
	
	if (!(calloc1 = malloc(count * size)))
		return(NULL);
	ft_bzero(calloc1, count);
	return (calloc1);
}
