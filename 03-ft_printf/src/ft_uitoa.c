/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_uitoa.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rogerio <rogerio@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/05 11:43:53 by rogerio           #+#    #+#             */
/*   Updated: 2021/08/05 11:44:25 by rogerio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

static unsigned int	hex_cases(unsigned int n)
{
	unsigned int	cases;

	cases = 0;
	while (n != 0)
	{
		n /= 16;
		cases++;
	}
	return (cases);
}

static char	dec_to_hex(unsigned int nb)
{
	char	*hex_base;

	hex_base = "0123456789abcdef";
	return (hex_base[nb]);
}

static void	hex(char *pointer, unsigned int cases, unsigned int nb)
{
	while (nb >= 1)
	{
		pointer[cases] = dec_to_hex(nb % 16);
		nb /= 16;
		cases--;
	}
}

char	*ft_uitoa(unsigned int nb)
{
	char			*pointer;
	unsigned int	cases;

	cases = hex_cases(nb);
	if (cases == 0)
		return (ft_strdup("0"));
	pointer = (char *)malloc((cases + 1) * sizeof(char));
	if (!pointer)
		return (NULL);
	pointer[cases] = 0;
	hex(pointer, --cases, nb);
	return (pointer);
}
