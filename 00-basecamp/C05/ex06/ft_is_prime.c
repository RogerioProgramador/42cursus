/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsiqueir <rsiqueir@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/13 20:56:17 by rsiqueir          #+#    #+#             */
/*   Updated: 2021/04/15 03:13:24 by rsiqueir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_prime(int nb)
{
	unsigned int a;

	if (nb == 2 || nb == 3)
		return (1);
	if (nb == 1 || nb <= 0 || nb % 2 == 0 || nb % 3 == 0)
		return (0);
	a = 5;
	while (a * a <= (unsigned int)nb)
	{
		if ((unsigned int)nb % a == 0)
			return (0);
		a+= 6;
	}
	return (1);
}

#include <stdio.h>
int main(void)
{
	printf("%i", ft_is_prime(4));
}