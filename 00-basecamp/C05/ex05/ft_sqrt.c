/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsiqueir <rsiqueir@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/13 21:56:18 by rsiqueir          #+#    #+#             */
/*   Updated: 2021/04/15 03:11:04 by rsiqueir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_sqrt(int nb)
{
	int a;

	a = 1;
	if (nb <= 0)
		return (0);
	while (a * a != nb)
	{
		a++;
		if (a > (nb / a))
			return (0);
	}
	return (a);
}

#include <stdio.h>
int main(void)
{
	printf("%i", ft_sqrt(400));
}