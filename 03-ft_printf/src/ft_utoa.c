/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rogerio <rogerio@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/25 09:08:21 by rsiqueir          #+#    #+#             */
/*   Updated: 2021/08/05 11:44:01 by rogerio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

static unsigned int	usize_length(unsigned int nb)
{
	if (nb <= 9)
		return (1);
	else
		return (usize_length(nb / 10) + 1);
}

static char	*nbr_to_string(char *stringnb, unsigned int n, unsigned int cases)
{
	while (cases > 0)
	{
		stringnb[cases - 1] = (n % 10) + '0';
		n = n / 10;
		cases--;
	}
	return (stringnb);
}

char	*ft_utoa(unsigned int n)
{
	unsigned int		cases;
	char				*stringnb;

	cases = usize_length(n);
	stringnb = (char *)malloc(cases + 1 * sizeof(char));
	if (!stringnb)
		return (NULL);
	stringnb[cases] = 0;
	stringnb = nbr_to_string(stringnb, n, cases);
	return (stringnb);
}
