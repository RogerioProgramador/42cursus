/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsiqueir <rsiqueir@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/15 04:05:39 by rsiqueir          #+#    #+#             */
/*   Updated: 2021/04/16 00:25:37 by rsiqueir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_ultimate_range(int **range, int min, int max)
{
	int a;
	int *ptr;

	a = 0;
	if (min >= max)
	{
		range = 0;
		return (0);
	}
	if (!(ptr = malloc((max - min) * 4)))
		return (-1);
	*range = ptr;
	while (min < max)
	{
		ptr[a] = min;
		min++;
		a++;
	}
	return (a);
}
