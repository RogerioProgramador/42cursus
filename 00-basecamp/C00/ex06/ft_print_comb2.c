/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsiqueir <rsiqueir@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/03 18:41:28 by rsiqueir          #+#    #+#             */
/*   Updated: 2021/04/06 19:46:22 by rsiqueir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	int x;
	int y;

	x = 0;
	while (x <= 98)
	{
		y = x + 1;
		while (y <= 99)
		{
			ft_putchar('0' + (x / 10));
			ft_putchar('0' + (x % 10));
			ft_putchar(32);
			ft_putchar('0' + (y / 10));
			ft_putchar('0' + (y % 10));
			if (x != 98 || y != 99)
			{
				write(1, ", ", 2);
			}
			y++;
		}
		x++;
	}

int main(void)
{
	ft_print_comb2();
}

