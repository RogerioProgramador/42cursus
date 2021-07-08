/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rogeriorslf <rogeriorslf@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/25 09:08:21 by rsiqueir          #+#    #+#             */
/*   Updated: 2021/06/08 21:48:25 by rogeriorslf      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf_lib.h"

static unsigned int	usize_length(unsigned int nb)
{
	if (nb < 0)
		nb = nb * -1;
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
	char	            *stringnb;

	cases = usize_length(n);
	stringnb = ft_calloc(cases + 1, sizeof(char));
	if (!stringnb)
	    return (NULL);
	stringnb = nbr_to_string(stringnb, n, cases);
	return (stringnb);
}
