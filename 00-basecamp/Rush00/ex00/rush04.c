/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsiqueir <rsiqueir@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/04 23:02:21 by rsiqueir          #+#    #+#             */
/*   Updated: 2021/04/05 01:13:21 by rsiqueir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_a(int x)
{
	ft_putchar('A');
	while (x >= 2)
	{
		if (x == 2)
		{
			ft_putchar('C');
			x--;
		}
		else
		{
			ft_putchar('B');
			x--;
		}
	}
	ft_putchar('\n');
}

void	ft_print_b(int x)
{
	if (x == 1)
	{
		ft_putchar('B');
	}
	else
	{
		ft_putchar('B');
		while (x > 2)
		{
			ft_putchar(32);
			x--;
		}
		ft_putchar('B');
	}
	ft_putchar('\n');
}

void	ft_print_c(int x)
{
	ft_putchar('C');
	while (x >= 2)
	{
		if (x == 2)
		{
			ft_putchar('A');
			x--;
		}
		else
		{
			ft_putchar('B');
			x--;
		}
	}
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	if (x <= 0 || y <= 0)
	{
		return ;
	}
	else
	{
		if (y == 1)
		{
			ft_print_a(x);
		}
		else
		{
			ft_print_a(x);
			while (y > 2)
			{
				ft_print_b(x);
				y--;
			}
			ft_print_c(x);
		}
	}
}
