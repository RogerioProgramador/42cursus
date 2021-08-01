/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsiqueir <rsiqueir@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/14 16:19:51 by rsiqueir          #+#    #+#             */
/*   Updated: 2021/04/15 19:32:29 by rsiqueir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int	*tab;
	int	a;

	if (min >= max)
		return (NULL);
	if (!(tab = malloc((max - min) * 4)))
		return (NULL);
	a = 0;
	while (min < max)
	{
		tab[a] = min;
		min++;
		a++;
	}
	return (tab);
}
