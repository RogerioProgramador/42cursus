/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsiqueir <rsiqueir@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/04 23:02:07 by rsiqueir          #+#    #+#             */
/*   Updated: 2021/04/05 01:09:11 by rsiqueir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_a(int x)
{
	ft_putchar('o');
	while (x >= 2)
	{
		if (x == 2)
		{
			ft_putchar('o');
			x--;
		}
		else
		{
			ft_putchar('-');
			x--;
		}
	}
	ft_putchar('\n');
}

void	ft_print_b(int x)
{
	if (x == 1)
	{
		ft_putchar('|');
	}
	else
	{
		ft_putchar('|');
		while (x > 2)
		{
			ft_putchar(32);
			x--;
		}
		ft_putchar('|');
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
			ft_print_a(x);
		}
	}
}
