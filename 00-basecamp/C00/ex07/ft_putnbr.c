/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsiqueir <rsiqueir@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/03 21:50:10 by rsiqueir          #+#    #+#             */
/*   Updated: 2021/04/12 17:02:20 by rsiqueir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		pow10(int i)
{
	int value;

	value = 10;
	while (i > 2)
	{
		value = 10 * value;
		i--;
	}
	if (i == 1)
	{
		value = 1;
	}
	return (value);
}

void	putbigger10(int nb)
{
	int		i;
	int		divisor;
	char	z;

	divisor = nb;
	i = 1;
	while ((divisor / 10) >= 1)
	{
		divisor = divisor / 10;
		i++;
	}
	while (i > 0)
	{
		z = (nb / pow10(i)) % 10 + '0';
		write(1, &z, 1);
		i--;
	}
}

void	putpositive(int nb)
{
	char a;

	if (nb <= 10)
	{
		if (nb == 10)
		{
			write(1, "10", 2);
		}
		else
		{
			a = nb + '0';
			write(1, &a, 1);
		}
	}
	else
	{
		putbigger10(nb);
	}
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		write(1, "-2", 2);
		nb = 147483648;
	}
	if (nb < 0)
	{
		write(1, "-", 1);
		nb = (nb * (-1));
	}
	if (nb >= 0)
	{
		putpositive(nb);
	}
}

