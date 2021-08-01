/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsiqueir <rsiqueir@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/04 03:50:23 by rsiqueir          #+#    #+#             */
/*   Updated: 2021/04/05 05:40:49 by rsiqueir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	putchar(char c);
void print(int y);
void ft_printcombn(int r);

int		main(void)
{
	int r;

	r = 9;
	ft_printcombn(r);
}

void	ft_printcombn(int r)
{
	int		max[9] = {1, 2, 3, 4, 5, 6, 7, 8, 9};

	print(max[r - 1]);
}

void	print(int y)
{
	int a[9] = {0, 1, 2, 3, 4, 5, 6, 7, 8};
	int i;
	int z;
	int x;

	i = 0;
	z = y;
	x = 0;
	while (x < 10)
	{
		while (i < y)
		{
			putchar('0' + a[i]);
			i++;
		}
		a[z - 1]++;
		if (a[z - 1] == z)
		{
			z--;
		}
		x++;
		i = 0;
		write(1, " ", 1);
	}
}

void	putchar(char c)
{
	write(1, &c, 1);
}
